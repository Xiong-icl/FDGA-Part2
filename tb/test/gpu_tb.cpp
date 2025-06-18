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

#define NAME "gpu"
// NOTE: These parameters MUST match what you compile Verilog with.
#define NUM_CORES 1
#define WARPS_PER_CORE 1 // For most tests, we will test a single-warp scenario
#define THREADS_PER_WARP 16
#define DATA_MEM_NUM_CHANNELS 8
#define INSTRUCTION_MEM_NUM_CHANNELS 8

class GpuTestbench : public BaseTestbench {
protected:
    std::map<uint32_t, uint32_t> instr_mem;
    std::map<uint32_t, uint32_t> data_mem;

    // This helper is identical to the one in compute_core_tb.cpp
    void loadProgramFromHex(const std::string& hex_filepath) {
        instr_mem.clear(); // Clear any previous program
        std::ifstream hex_file(hex_filepath);
        ASSERT_TRUE(hex_file.is_open()) << "Could not open hex file: " << hex_filepath;

        std::string line;
        uint32_t current_address = 0;
        while (std::getline(hex_file, line)) {
            if (line.empty() || line[0] == '/' || line[0] == '#') continue;
            
            uint32_t instruction;
            std::stringstream ss;
            ss << std::hex << line;
            ss >> instruction;

            instr_mem[current_address] = instruction;
            current_address++;
        }
        std::cout << "Loaded " << instr_mem.size() << " instructions from " << hex_filepath << std::endl;
    }

    // This helper is also identical
    void loadDataFromHex(const std::string& hex_filepath, uint32_t base_address = 0) {
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
            
            current_offset += 4;
        }
        std::cout << "Loaded " << data_mem.size() << " data words from " << hex_filepath << std::endl;
    }

    void tick() {
        top->clk = 0;
        top->eval();
        top->clk = 1;
        top->eval();
    }

    // UPDATED runSimulation to handle memory controller channels
    void runSimulation(int cycles) {
        for (int i = 0; i < cycles; ++i) {
            // --- Combinational Memory Read Logic (Before clock edge) ---
            
            // Instruction Memory (uses INSTRUCTION_MEM_NUM_CHANNELS)
            for (int c = 0; c < INSTRUCTION_MEM_NUM_CHANNELS; ++c) {
                if (top->instruction_mem_read_valid & (1ULL << c)) {
                    uint32_t addr = top->instruction_mem_read_address[c];
                    // Provide data from our simulated instruction memory map
                    top->instruction_mem_read_data[c] = instr_mem.count(addr) ? instr_mem[addr] : 0;
                }
            }

            // Data Memory (uses DATA_MEM_NUM_CHANNELS)
            for (int c = 0; c < DATA_MEM_NUM_CHANNELS; ++c) {
                if (top->data_mem_read_valid & (1ULL << c)) {
                    uint32_t addr = top->data_mem_read_address[c];
                    // Provide data from our simulated data memory map
                    top->data_mem_read_data[c] = data_mem.count(addr) ? data_mem[addr] : 0xDEADBEEF;
                }
            }

            // --- Clock Tick ---
            tick();

            // --- Sequential Memory Write Logic (After clock edge) ---
            for (int c = 0; c < DATA_MEM_NUM_CHANNELS; ++c) {
                if (top->data_mem_write_valid & (1ULL << c)) {
                    // Write to our simulated data memory map
                    data_mem[top->data_mem_write_address[c]] = top->data_mem_write_data[c];
                }
            }
        }
    }

    // UPDATED initializeInputs for the GPU module
    void initializeInputs() override {
        top->clk = 1; top->reset = 1; top->execution_start = 0;
        
        // Default kernel config
        top->base_instr = 0;
        top->base_data = 0;
        top->num_blocks = 1;
        top->warps_per_block = 1;

        // Simulate that memory is always ready
        // top->instruction_mem_read_ready = -1; // All 1s
        // top->data_mem_read_ready = -1;
        // top->data_mem_write_ready = -1;
        
        runSimulation(2); // Tick reset for a couple cycles
        top->reset = 0;
    }

    // NEW high-level runner for launching a kernel and waiting for completion
    void launchKernelAndWait(
        const std::string& program_hex_path,
        uint32_t num_blks,
        uint32_t warps_per_blk,
        const std::string& data_hex_path = "",
        uint32_t base_instr_addr = 0,
        uint32_t base_data_addr = 0x1000
    ) {
        // Clear memories for a clean run
        instr_mem.clear();
        data_mem.clear();
        
        // Load program and data
        loadProgramFromHex(program_hex_path);
        if (!data_hex_path.empty()) {
            loadDataFromHex(data_hex_path, base_data_addr);
        }

        // Set kernel configuration on DUT inputs
        top->base_instr = base_instr_addr;
        top->base_data = base_data_addr;
        top->num_blocks = num_blks;
        top->warps_per_block = warps_per_blk;

        // Start execution
        top->execution_start = 1;
        tick(); // The DUT latches the config on this rising edge
        top->execution_start = 0;
        
        // Wait for completion
        int max_cycles = 2000;
        for (int i = 0; i < max_cycles; ++i) {
            if (top->execution_done) {
                std::cout << "GPU finished in " << i << " cycles." << std::endl;
                runSimulation(5); // Run a few more cycles to let signals settle
                return;
            }
            runSimulation(1);
        }
        FAIL() << "GPU did not finish within the " << max_cycles << " cycle timeout.";
    }

    void printMemoryRange(uint32_t start_addr = 40, uint32_t end_addr = 50) {
        std::cout << "Memory contents from address " << start_addr << " to " << end_addr << ":\n";
        std::cout << "Address\t\tValue\n";
        std::cout << "-------\t\t-----\n";
        
        for (uint32_t addr = start_addr; addr <= end_addr; addr++) {
            // Check if address exists in memory map
            auto it = data_mem.find(addr);
            uint32_t value = (it != data_mem.end()) ? it->second : 0xDEADBEEF;
            
            std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << addr 
                    << "\t0x" << std::hex << std::setw(8) << std::setfill('0') << value << std::endl;
        }
    }
    
    // Helper for float/int conversion
    static uint32_t float_to_bits(float f) { return *reinterpret_cast<uint32_t*>(&f); }
    static float bits_to_float(uint32_t bits) { return *reinterpret_cast<float*>(&bits); }
};

// --- TEST CASES ---

TEST_F(GpuTestbench, ResetBehavior) {
    runSimulation(1);
    EXPECT_EQ(top->execution_done, 0);
    EXPECT_EQ(top->instruction_mem_read_valid, 0);
    EXPECT_EQ(top->data_mem_read_valid, 0);
    EXPECT_EQ(top->data_mem_write_valid, 0);
}

TEST_F(GpuTestbench, SimplestExit) {
    // This test verifies the entire pipeline from dispatcher to core execution for one instruction.
    launchKernelAndWait("test/tmp_test/exit.hex", 1, 1);
    SUCCEED() << "GPU successfully executed a kernel with a single EXIT instruction.";
}

// *** Reuse all the tests from compute_core, but run them through the GPU ***
// This validates the integration of the core, memory controllers, and dispatcher for a single block.

TEST_F(GpuTestbench, RScalarTest) {
    launchKernelAndWait("test/tmp_test/rscalar.hex", 1, 1, "", 0, 0);
    printMemoryRange(40, 50);
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

TEST_F(GpuTestbench, IScalarTest) {
    launchKernelAndWait("test/tmp_test/iscalar.hex", 1, 1, "", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_EQ(data_mem[44], 20);
    EXPECT_EQ(data_mem[45], 100);
    EXPECT_EQ(data_mem[46], 1);
    EXPECT_EQ(data_mem[47], 40);
}

TEST_F(GpuTestbench, JumpTest) {
    launchKernelAndWait("test/tmp_test/jump.hex", 1, 1, "", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_EQ(data_mem[46], 0);
    EXPECT_EQ(data_mem[42], 5);
}

TEST_F(GpuTestbench, CScalarTest) {
    launchKernelAndWait("test/tmp_test/cscalar.hex", 1, 1, "", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_EQ(data_mem[43], 0);
    EXPECT_EQ(data_mem[44], 5);
}

TEST_F(GpuTestbench, MScalarTest) {
    launchKernelAndWait("test/tmp_test/mscalar.hex", 1, 1, "test/tmp_test/data_mscalar.hex", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_EQ(bits_to_float(data_mem[42]), 1.0f);
    EXPECT_EQ(data_mem[43], 32);
    EXPECT_EQ(data_mem[44], 32);
}


TEST_F(GpuTestbench, FScalarTest) {
    launchKernelAndWait("test/tmp_test/fscalar.hex", 1, 1, "test/tmp_test/data_fscalar.hex", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[45]), 3.0f) << "Scalar FADD failed";
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[46]), 1.0f) << "Scalar FSUB failed";
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[47]), 2.0f) << "Scalar FMUL failed";
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[48]), 2.0f) << "Scalar FDIV failed";
    EXPECT_EQ(data_mem[49], 0) << "Scalar FLT failed";
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[50]), -1.0f) << "Scalar FNEG failed";
}

TEST_F(GpuTestbench, RVectorTest) {
    launchKernelAndWait("test/tmp_test/rvector.hex", 1, 1, "", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_EQ(data_mem[42], 10);
    EXPECT_EQ(data_mem[43], 20);
    EXPECT_EQ(data_mem[44], 0);
    EXPECT_EQ(data_mem[45], 100);
    EXPECT_EQ(data_mem[46], 1);
}

TEST_F(GpuTestbench, IVectorTest) {
    launchKernelAndWait("test/tmp_test/ivector.hex", 1, 1, "", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_EQ(data_mem[44], 20);
    EXPECT_EQ(data_mem[45], 100);
    EXPECT_EQ(data_mem[46], 1);
    EXPECT_EQ(data_mem[47], 40);
}


TEST_F(GpuTestbench, MVectorTest) {
    launchKernelAndWait("test/tmp_test/mvector.hex", 1, 1, "test/tmp_test/data_mvector.hex", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_EQ(bits_to_float(data_mem[42]), 1.0f);
    EXPECT_EQ(data_mem[43], 32);
    EXPECT_EQ(data_mem[44], 32);
}

TEST_F(GpuTestbench, FVectorTest) {
    launchKernelAndWait("test/tmp_test/fvector.hex", 1, 1, "test/tmp_test/data_fvector.hex", 0, 0);
    printMemoryRange(40, 50);
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[45]), 3.0f) << "Vector FADD failed";
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[46]), 1.0f) << "Vector FSUB failed";
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[47]), 2.0f) << "Vector FMUL failed";
    EXPECT_FLOAT_EQ(bits_to_float(data_mem[48]), 2.0f) << "Vector FDIV failed";
}

// // *** NEW TEST for Multi-Block Dispatching ***
// // This test verifies that the dispatcher can schedule multiple independent blocks
// // and that each block receives the correct block_id.

// TEST_F(GpuTestbench, MultiBlockDispatch) {
//     // Launch a kernel with 4 blocks, 1 warp each.
//     // The base_data address is set to 0.
//     launchKernelAndWait("test/hex/multi_block.hex", 4, 1, "", 0, 0);

//     // The program `multi_block.s` has each block write the value 123
//     // to an address calculated as `block_id * 4`.
//     // We expect:
//     // - Block 0 writes 123 to address 0 (0*4)
//     // - Block 1 writes 123 to address 4 (1*4)
//     // - Block 2 writes 123 to address 8 (2*4)
//     // - Block 3 writes 123 to address 12 (3*4)
    
//     ASSERT_TRUE(data_mem.count(0)) << "Block 0 did not write to memory.";
//     EXPECT_EQ(data_mem[0], 123) << "Block 0 wrote incorrect data or to wrong address.";
    
//     ASSERT_TRUE(data_mem.count(4)) << "Block 1 did not write to memory.";
//     EXPECT_EQ(data_mem[4], 123) << "Block 1 wrote incorrect data or to wrong address.";

//     ASSERT_TRUE(data_mem.count(8)) << "Block 2 did not write to memory.";
//     EXPECT_EQ(data_mem[8], 123) << "Block 2 wrote incorrect data or to wrong address.";
    
//     ASSERT_TRUE(data_mem.count(12)) << "Block 3 did not write to memory.";
//     EXPECT_EQ(data_mem[12], 123) << "Block 3 wrote incorrect data or to wrong address.";
// }


int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    Verilated::mkdir("logs");
    auto result = RUN_ALL_TESTS();
    VerilatedCov::write(("logs/coverage_" + std::string(NAME) + ".dat").c_str());
    return result;
}