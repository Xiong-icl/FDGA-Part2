#include "base_testbench.h"
#include <verilated_cov.h>
#include <gtest/gtest.h>
#include <cstdint>
#include <map>
#include <functional>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

#define NAME "bomboclat_compute_core"

// NOTE: These parameters MUST match what you compile Verilog with.
#define WARPS_PER_CORE 1
#define THREADS_PER_WARP 16
#define NUM_LSUS (THREADS_PER_WARP + 1)

// Opcode definitions
#define OPCODE_R    0b000
#define OPCODE_I    0b001
#define OPCODE_F    0b010
#define OPCODE_UP   0b011
#define OPCODE_M    0b100
#define OPCODE_C    0b111

class BomboclatComputeCoreTestbench : public BaseTestbench {
protected:
    std::map<uint32_t, uint32_t> instr_mem;
    std::map<uint32_t, uint32_t> data_mem;

    void loadProgramFromHex(const std::string& hex_filepath) {
        instr_mem.clear(); // Clear any previous program
        std::ifstream hex_file(hex_filepath);
        ASSERT_TRUE(hex_file.is_open()) << "Could not open hex file: " << hex_filepath;

        std::string line;
        uint32_t current_address = 0;
        while (std::getline(hex_file, line)) {
            // Skip empty lines or comments
            if (line.empty() || line[0] == '/' || line[0] == '#') {
                continue;
            }
            
            // Convert hex string to uint32_t
            uint32_t instruction;
            std::stringstream ss;
            ss << std::hex << line;
            ss >> instruction;

            std::cout << "  PC[" << current_address << "]: 0x" << std::hex << instruction << std::dec << std::endl;

            // Store in our simulated instruction memory
            instr_mem[current_address] = instruction;

            // Increment address for the next instruction (assuming word-addressable)
            current_address++; 
        }
        
        std::cout << "Loaded " << instr_mem.size() << " instructions from " << hex_filepath << std::endl;
    }

    void loadDataFromHex(const std::string& hex_filepath, uint32_t base_address = 0) {
        // We do NOT clear data_mem here, to allow multiple loads if needed.
        std::ifstream hex_file(hex_filepath);
        ASSERT_TRUE(hex_file.is_open()) << "Could not open data hex file: " << hex_filepath;

        std::string line;
        uint32_t current_offset = 0;
        while (std::getline(hex_file, line)) {
            if (line.empty() || line[0] == '/' || line[0] == '#') continue;

            uint32_t data_word;
            std::stringstream ss;
            ss << std::hex << line;
            ss >> data_word;

            uint32_t address = base_address + current_offset;
            data_mem[address] = data_word;
            std::cout << "  DATA[0x" << std::hex << address << "]: 0x" << data_word << std::dec << std::endl;
            
            // Increment address by 4 for the next word (byte-addressable memory)
            current_offset += 4;
        }
        std::cout << "Loaded " << data_mem.size() << " data words from " << hex_filepath << std::endl;
    }

    // Single clock tick without memory interaction
    void tick() {
        top->clk = 0;
        top->eval();
        top->clk = 1;
        top->eval();
    }

    // Simulates a specified number of cycles, handling memory interactions.
    void runSimulation(int cycles) {
        for (int i = 0; i < cycles; ++i) {
            // --- Combinational Read Logic (Before the clock edge) ---
            // The DUT requests data, and the testbench provides it combinatorially.
            
            // Handle instruction memory reads (single warp case)
            if (top->instruction_mem_read_valid & 1) {  // Check bit 0 for warp 0
                uint32_t addr = top->instruction_mem_read_address;  // No array indexing
                top->instruction_mem_read_data = instr_mem.count(addr) ? instr_mem[addr] : 0;
            }
            
            // Handle data memory reads
            for (int t = 0; t < NUM_LSUS; ++t) {
                if (top->data_mem_read_valid & (1ULL << t)) {
                    uint32_t addr = top->data_mem_read_address[t];
                    top->data_mem_read_data[t] = data_mem.count(addr) ? data_mem[addr] : 0xDEADBEEF;
                }
            }

            // --- Clock Tick ---
            tick();

            // --- Sequential Write Logic (After the clock edge) ---
            // The DUT provides data to be written to memory.
            for (int t = 0; t < NUM_LSUS; ++t) {
                if (top->data_mem_write_valid & (1ULL << t)) {
                    data_mem[top->data_mem_write_address[t]] = top->data_mem_write_data[t];
                }
            }
        }
    }

    void initializeInputs() override {
        top->clk = 1; top->reset = 1; top->start = 0; top->block_id = 0;
        
        // FIX: The DUT hardware is only implemented for a single warp.
        // Setting num_warps_per_block > 1 will cause the simulation to time out
        // because the hardware cannot schedule and complete additional warps.
        top->kernel_config[0] = 1;  // num_warps_per_block
        top->kernel_config[1] = 1;  // num_blocks
        top->kernel_config[2] = 0;  // base data memory address
        top->kernel_config[3] = 0;  // base instruction address

        top->instruction_mem_read_ready = -1; // All ready
        top->data_mem_read_ready = -1;
        top->data_mem_write_ready = -1;
        
        runSimulation(2); // Tick for a couple of cycles to propagate reset
        top->reset = 0;
    }

    void loadAndRun(const std::map<uint32_t, uint32_t>& program) {
        instr_mem = program;
        top->start = 1;
        tick(); // Pulse start for one cycle
        top->start = 0;
        
        int max_cycles = 500;
        for (int i = 0; i < max_cycles; ++i) {
            if (top->done) {
                std::cout << "Core finished in " << i << " cycles." << std::endl;
                return;
            }
            runSimulation(10);
        }
        FAIL() << "Core did not finish within the " << max_cycles << " cycle timeout.";
    }

    bool waitForCondition(std::function<bool()> condition, int maxCycles = 100) {
        for (int i = 0; i < maxCycles; ++i) {
            if (condition()) return true;
            runSimulation(1);
        }
        return false;
    }
    
    static uint32_t float_to_bits(float f) { return *reinterpret_cast<uint32_t*>(&f); }
    static float bits_to_float(uint32_t bits) { return *reinterpret_cast<float*>(&bits); }
};

// TEST_F(BomboclatComputeCoreTestbench, ResetBehavior) {
//     runSimulation(1);
//     EXPECT_EQ(top->done, 0);
//     EXPECT_EQ(top->instruction_mem_read_valid, 0);
//     EXPECT_EQ(top->data_mem_read_valid, 0);
//     EXPECT_EQ(top->data_mem_write_valid, 0);
// }

// TEST_F(BomboclatComputeCoreTestbench, SimplestExit) {
//     std::map<uint32_t, uint32_t> program;

//     // Construct the 'exit' instruction manually.
//     // Opcode=111, funct3=111
//     uint32_t exit_instr = (OPCODE_C << 29) | (0b111 << 10);
//     program[0] = exit_instr;
        
//     loadAndRun(program);

//     // If loadAndRun completes without a timeout, it means top->done was asserted.
//     SUCCEED() << "Core successfully executed an EXIT instruction.";
// }

TEST_F(BomboclatComputeCoreTestbench, RScalarTest) {
    loadProgramFromHex("test/tmp_test/rscalar.hex");
    loadAndRun(instr_mem);

    EXPECT_EQ(data_mem[42], 10);
    EXPECT_EQ(data_mem[43], 20);
    EXPECT_EQ(data_mem[44], 0);
    EXPECT_EQ(data_mem[45], 100);
    EXPECT_EQ(data_mem[46], 1);
    EXPECT_EQ(data_mem[47], 0);
    EXPECT_EQ(data_mem[48], 1);
    EXPECT_EQ(data_mem[49], 1);
    EXPECT_EQ(data_mem[50], 5);
}

// TEST_F(BomboclatComputeCoreTestbench, IScalarTest) {
//     // This test verifies immediate-type instructions.
//     // If it fails, the issue is likely within the DUT's ALU or immediate path.
//     loadProgramFromHex("test/tmp_test/iscalar.hex");
//     loadAndRun(instr_mem);

//     EXPECT_EQ(data_mem[44], 20) << "Scalar ADDI failed";
//     EXPECT_EQ(data_mem[45], 100) << "Scalar MULI failed";
//     EXPECT_EQ(data_mem[46], 1) << "Scalar DIVI failed";
//     EXPECT_EQ(data_mem[47], 40) << "Scalar SLLI failed";
// }

// TEST_F(BomboclatComputeCoreTestbench, JumpTest) {
//     loadProgramFromHex("test/tmp_test/jump.hex");
//     loadAndRun(instr_mem);

//     EXPECT_EQ(data_mem[46], 0) << "Jump test failed.";
//     EXPECT_EQ(data_mem[42], 5) << "Jump test failed.";
// }

// TEST_F(BomboclatComputeCoreTestbench, CScalarTest) {
//     loadProgramFromHex("test/tmp_test/cscalar.hex");
//     loadAndRun(instr_mem);

//     EXPECT_EQ(data_mem[43], 0) << "CScalar conditional branch test failed.";
//     EXPECT_EQ(data_mem[44], 5) << "CScalar conditional branch test failed.";
// }

// TEST_F(BomboclatComputeCoreTestbench, FScalarTest) {
//     data_mem.clear();
//     loadProgramFromHex("test/tmp_test/fscalar.hex");
//     loadDataFromHex("test/tmp_test/data_fscalar.hex");

//     loadAndRun(instr_mem);

//     // Using EXPECT_FLOAT_EQ for safer floating point comparison.
//     // Addresses (45, 46, etc.) depend on the s.fsw instructions in the assembly.
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[45]), 3.0f) << "Scalar FADD failed";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[46]), 1.0f) << "Scalar FSUB failed";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[47]), 2.0f) << "Scalar FMUL failed";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[48]), 2.0f) << "Scalar FDIV failed";
//     EXPECT_EQ(data_mem[49], 0) << "Scalar FLT failed (2.0 < 1.0 is false)";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[50]), -1.0f) << "Scalar FNEG failed";
//     EXPECT_EQ(data_mem[51], 0) << "Scalar FEQ failed (2.0 == 1.0 is false)";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[52]), 1.0f) << "Scalar FABS failed";
//     EXPECT_EQ(data_mem[53], 1) << "Scalar FCVT.W.S (float to int) failed";
// }

// TEST_F(BomboclatComputeCoreTestbench, MScalarTest) {
//     data_mem.clear();
//     loadProgramFromHex("test/tmp_test/mscalar.hex");
//     loadDataFromHex("test/tmp_test/data_mscalar.hex");

//     loadAndRun(instr_mem);

//     // Verify that the values were loaded and stored correctly.
//     EXPECT_EQ(bits_to_float(data_mem[42]), 1.0f) << "Scalar Store Failed";
//     EXPECT_EQ(data_mem[43], 32) << "Scalar Load Failed";
//     EXPECT_EQ(data_mem[44], 32) << "Scalar Load Failed";
// }

// TEST_F(BomboclatComputeCoreTestbench, RVectorTest) {
//     loadProgramFromHex("test/tmp_test/rvector.hex");
//     loadAndRun(instr_mem);

//     // Note: These checks assume vector operations produce scalar-like results
//     // that are then stored. The exact check depends heavily on the assembly code.
//     EXPECT_EQ(data_mem[42], 10);
//     EXPECT_EQ(data_mem[43], 20);
//     EXPECT_EQ(data_mem[44], 0);
//     EXPECT_EQ(data_mem[45], 100);
//     EXPECT_EQ(data_mem[46], 1);
//     EXPECT_EQ(data_mem[47], 0);
//     EXPECT_EQ(data_mem[48], 1);
//     EXPECT_EQ(data_mem[49], 1);
//     EXPECT_EQ(data_mem[50], 5);
// }

// TEST_F(BomboclatComputeCoreTestbench, IVectorTest) {
//     loadProgramFromHex("test/tmp_test/ivector.hex");
//     loadAndRun(instr_mem);

//     EXPECT_EQ(data_mem[44], 20) << "Vector ADDI failed";
//     EXPECT_EQ(data_mem[45], 100) << "Vector MULI failed";
//     EXPECT_EQ(data_mem[46], 1) << "Vector DIVI failed";
//     EXPECT_EQ(data_mem[47], 40) << "Vector SLLI failed";
// }

// TEST_F(BomboclatComputeCoreTestbench, MVectorTest) {
//     data_mem.clear();
//     loadProgramFromHex("test/tmp_test/mvector.hex");
//     loadDataFromHex("test/tmp_test/data_mvector.hex");

//     loadAndRun(instr_mem);

//     EXPECT_EQ(bits_to_float(data_mem[42]), 1.0f) << "Vector Store Failed";
//     EXPECT_EQ(data_mem[43], 32) << "Vector Load Failed";
//     EXPECT_EQ(data_mem[44], 32) << "Vector Load Failed";
// }

// TEST_F(BomboclatComputeCoreTestbench, FVectorTest) {
//     data_mem.clear();
//     loadProgramFromHex("test/tmp_test/fvector.hex");
//     loadDataFromHex("test/tmp_test/data_fvector.hex");

//     loadAndRun(instr_mem);

//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[45]), 3.0f) << "Vector FADD failed";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[46]), 1.0f) << "Vector FSUB failed";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[47]), 2.0f) << "Vector FMUL failed";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[48]), 2.0f) << "Vector FDIV failed";
//     EXPECT_EQ(data_mem[49], 0) << "Vector FLT failed";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[50]), -1.0f) << "Vector FNEG failed";
//     EXPECT_EQ(data_mem[51], 0) << "Vector FEQ failed";
//     EXPECT_FLOAT_EQ(bits_to_float(data_mem[52]), 1.0f) << "Vector FABS failed";
//     EXPECT_EQ(data_mem[53], 1) << "Vector FCVT.W.S (float to int) failed";
// }

// TEST_F(BomboclatComputeCoreTestbench, SXSLTTest_0) {
//     data_mem.clear();
//     loadProgramFromHex("test/tmp_test/sx_slt_0.hex");
//     loadDataFromHex("test/tmp_test/data_sx_slt_0.hex");

//     loadAndRun(instr_mem);

//     EXPECT_EQ(data_mem[42], 0) << "SX.SLT.0 failed";
// }

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    Verilated::mkdir("logs");
    auto result = RUN_ALL_TESTS();
    VerilatedCov::write(("logs/coverage_" + std::string(NAME) + ".dat").c_str());
    return result;
}