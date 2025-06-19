
`timescale 1ns/1ns

// This simulates the execution of a block of warps which contains multiple threads

`include "common.svh"

module compute_core#(
    parameter int THREADS_PER_WARP = 16          // Number of threads per warp (max 32)
    )(
    input   wire                            clk,
    input   wire                            reset,

    input   logic                           start,
    output  logic                           done,

    input   data_t                          block_id,
    input   kernel_config_t                 kernel_config,

    // Instruction Memory
    input   logic       instruction_mem_read_ready,
    input   instruction_t                   instruction_mem_read_data       ,
    output  logic       instruction_mem_read_valid,
    output  instruction_memory_address_t    instruction_mem_read_address    ,

    // Data Memory
    output  logic   [NUM_LSUS-1:0]          data_mem_read_valid,
    output  data_memory_address_t           data_mem_read_address           [NUM_LSUS],
    input   logic   [NUM_LSUS-1:0]          data_mem_read_ready,
    input   data_t                          data_mem_read_data              [NUM_LSUS],
    output  logic   [NUM_LSUS-1:0]          data_mem_write_valid,
    output  data_memory_address_t           data_mem_write_address          [NUM_LSUS],
    output  data_t                          data_mem_write_data             [NUM_LSUS],
    input   logic   [NUM_LSUS-1:0]          data_mem_write_ready
);

typedef logic [THREADS_PER_WARP-1:0] warp_mask_t;
localparam int NUM_LSUS = THREADS_PER_WARP + 1;
localparam int WARP_INDEX_WIDTH = (1 > 1) ? $clog2(1) : 1;

// Warp State and Control
logic  current_warp;
warp_state_t warp_state ;
fetcher_state_t fetcher_state ;
warp_state_t current_warp_state;
assign current_warp_state = warp_state;
instruction_t fetched_instruction ;
logic alu_enable;
assign alu_enable = 1'b1;
logic alu_valid;

instruction_memory_address_t pc ;
instruction_memory_address_t next_pc ;

logic start_execution; // EDA: Unimportant hack used because of EDA tooling

data_t num_warps;
assign num_warps = kernel_config.num_warps_per_block;

// Decoded instruction fields per warp
logic decoded_reg_write_enable [WARPS_PER_CORE];
reg_input_mux_t decoded_reg_input_mux [WARPS_PER_CORE];
data_t decoded_immediate [WARPS_PER_CORE];
logic decoded_branch [WARPS_PER_CORE];
logic decoded_scalar_instruction [WARPS_PER_CORE];
logic [4:0] decoded_rd_address [WARPS_PER_CORE];
logic [4:0] decoded_rs1_address [WARPS_PER_CORE];
logic [4:0] decoded_rs2_address [WARPS_PER_CORE];
logic [4:0] decoded_alu_instruction [WARPS_PER_CORE];
logic decoded_halt [WARPS_PER_CORE];
logic [1:0] floatingRead_flag [WARPS_PER_CORE];
logic floatingWrite_flag [WARPS_PER_CORE];

// ==============================================
// ID-EX Pipeline Registers (Stage 2 of the pipeline)
logic             decoded_reg_write_enable_s2 [WARPS_PER_CORE];
reg_input_mux_t   decoded_reg_input_mux_s2 [WARPS_PER_CORE];
data_t            decoded_immediate_s2 [WARPS_PER_CORE];
logic             decoded_branch_s2 [WARPS_PER_CORE];
logic             decoded_scalar_instruction_s2 [WARPS_PER_CORE];
logic [4:0]       decoded_rd_address_s2 [WARPS_PER_CORE];
logic [4:0]       decoded_rs1_address_s2 [WARPS_PER_CORE];
logic [4:0]       decoded_rs2_address_s2 [WARPS_PER_CORE];
alu_instruction_t decoded_alu_instruction_s2 [WARPS_PER_CORE]; // alu_instruction_t is 5 bits
logic             decoded_halt_s2 [WARPS_PER_CORE];
logic [1:0]       floatingRead_flag_s2 [WARPS_PER_CORE];
logic             floatingWrite_flag_s2 [WARPS_PER_CORE];
logic             decoded_mem_read_enable_per_warp_s2 [WARPS_PER_CORE];
logic             decoded_mem_write_enable_per_warp_s2 [WARPS_PER_CORE];

// Also add a pipeline register for the Program Counter for use in the Execute stage
instruction_memory_address_t pc_s2 [WARPS_PER_CORE];


// ===============================================


// Signals are per-warp control not pre-thread
logic decoded_mem_read_enable_per_warp ;
logic decoded_mem_write_enable_per_warp ;
// logic decoded_mem_read_enable [THREADS_PER_WARP];
// logic decoded_mem_write_enable [THREADS_PER_WARP];

// Register File Outputs (per warp)
data_t scalar_int_rs1 ;
data_t scalar_int_rs2 ;
data_t scalar_float_rs1 ;
data_t scalar_float_rs2 ;

data_t vector_int_rs1 [THREADS_PER_WARP];
data_t vector_int_rs2 [THREADS_PER_WARP];
data_t vector_float_rs1 [THREADS_PER_WARP];
data_t vector_float_rs2 [THREADS_PER_WARP];

warp_mask_t warp_execution_mask ;

logic all_warps_done = 1'b1;
logic any_lsu_waiting;
logic found_ready_warp;

// ALU/LSU Operands and Results
data_t final_op1 [THREADS_PER_WARP];
data_t final_op2 [THREADS_PER_WARP];
data_t alu_out [THREADS_PER_WARP];
data_t scalar_alu_out;
data_t lsu_out [THREADS_PER_WARP];
lsu_state_t lsu_state [THREADS_PER_WARP];
data_t scalar_lsu_out;
lsu_state_t scalar_lsu_state;
data_t vector_to_scalar_data [WARPS_PER_CORE];

logic fpu_result_is_valid;

// ===============================================
// --- EX/WB Pipeline Registers (Stage 3 of the core pipeline) ---
// These registers capture the results from the ALU/LSU and hold control
// signals for the final write-back to the register file. This breaks the
// long FPU->RegFile timing path.
// ===============================================
data_t            alu_out_s3 [THREADS_PER_WARP];
data_t            lsu_out_s3 [THREADS_PER_WARP];
data_t            scalar_alu_out_s3;
data_t            scalar_lsu_out_s3;
data_t            vector_to_scalar_data_s3 [WARPS_PER_CORE];

// We also need to pass the write-back control signals through this stage
logic             decoded_reg_write_enable_s3 [WARPS_PER_CORE];
reg_input_mux_t   decoded_reg_input_mux_s3 [WARPS_PER_CORE];
logic [4:0]       decoded_rd_address_s3 [WARPS_PER_CORE];
logic             floatingWrite_flag_s3 [WARPS_PER_CORE];
logic             decoded_scalar_instruction_s3 [WARPS_PER_CORE];
instruction_memory_address_t pc_s3 [WARPS_PER_CORE];
logic             decoded_halt_s3 [WARPS_PER_CORE];
alu_instruction_t decoded_alu_instruction_s3 [WARPS_PER_CORE];

// Operand Muxing Logic
warp_mask_t current_warp_execution_mask;
assign current_warp_execution_mask = warp_execution_mask;
data_t scalar_op1;
data_t scalar_op2;

// Combinational Mux for Scalar Operands
always_comb begin
    // $display("FloatingRead ", floatingRead_flag);
    // $display("Scalar_op1 ", scalar_op1);
    // $display("Scalar_op2 ", scalar_op2);
    // $display("Scalar_int1 ", scalar_int_rs1[current_warp]);
    // $display("Scalar_float2 ", scalar_float_rs2[current_warp]);
    case(floatingRead_flag_s2[current_warp])
        2'b00: {scalar_op1, scalar_op2} = {scalar_int_rs1[current_warp], scalar_int_rs2[current_warp]};
        2'b01: {scalar_op1, scalar_op2} = {scalar_float_rs1[current_warp], scalar_int_rs2[current_warp]};
        2'b10: {scalar_op1, scalar_op2} = {scalar_int_rs1[current_warp], scalar_float_rs2[current_warp]};
        2'b11: {scalar_op1, scalar_op2} = {scalar_float_rs1[current_warp], scalar_float_rs2[current_warp]};
        default: {scalar_op1, scalar_op2} = {scalar_int_rs1[current_warp], scalar_int_rs2[current_warp]};
    endcase
    //$display("data_mem_read_valid: ", data_mem_read_valid);
end

//Generate Muxing logic for each of the Vector SIMT lanes
generate
for (genvar i = 0; i < THREADS_PER_WARP; i++) begin: g_operand_mux
    logic [31:0] vector_op1;
    logic [31:0] vector_op2;

    // Combinational Mux for Vector Operand for thread 'i'
    // This block now correctly selects from the 2D register file output arrays.
    always_comb begin
        case(floatingRead_flag_s2[current_warp])
            2'b00: {vector_op1, vector_op2} = {vector_int_rs1[current_warp][i],   vector_int_rs2[current_warp][i]};
            2'b01: {vector_op1, vector_op2} = {vector_float_rs1[current_warp][i], vector_int_rs2[current_warp][i]};
            2'b10: {vector_op1, vector_op2} = {vector_int_rs1[current_warp][i],   vector_float_rs2[current_warp][i]};
            2'b11: {vector_op1, vector_op2} = {vector_float_rs1[current_warp][i], vector_float_rs2[current_warp][i]};
            default: {vector_op1, vector_op2} = {vector_int_rs1[current_warp][i], vector_int_rs2[current_warp][i]};
        endcase
        // $display("Scalar flag: ", decoded_scalar_instruction);
        // $display("Vector int rs1: ", vector_int_rs1[i]);
        // $display("Vector op2: ", vector_op2);
    end

    // This part was correct. It selects between scalar and vector operands.
    assign final_op1[i] = decoded_scalar_instruction_s2[current_warp] ? scalar_op1 : vector_op1;
    assign final_op2[i] = decoded_scalar_instruction_s2[current_warp] ? scalar_op2 : vector_op2;
end
endgenerate

// In compute_core.sv

logic hazard_stall;
logic [4:0] decode_rs1_addr;
logic [4:0] decode_rs2_addr;

always_comb begin
    hazard_stall = 1'b0;

    decode_rs1_addr = decoded_rs1_address[current_warp];
    decode_rs2_addr = decoded_rs2_address[current_warp];

    if (decoded_reg_write_enable_s2[current_warp]) begin
        // ...and that register is needed by the instruction in DECODE...
        $display("s2_rd_reg: ", decoded_rd_address_s2[current_warp]);
        $display("decode_rs1_addr: ", decode_rs1_addr);
        $display("decode_rs2_addr: ", decode_rs2_addr);
        if ( (decode_rs1_addr != 0 && decode_rs1_addr == decoded_rd_address_s2[current_warp]) ||
             (decode_rs2_addr != 0 && decode_rs2_addr == decoded_rd_address_s2[current_warp]) ) begin
            $display("Inside set stall");
            hazard_stall = 1'b1;
        end
    end

    // --- Check for hazard with instruction in WRITEBACK stage (_s3) ---
    // If the instruction in WRITEBACK will write to a register...
    if (decoded_reg_write_enable_s3[current_warp]) begin
        // ...and that register is needed by the instruction in DECODE...
        if ( (decode_rs1_addr != 0 && decode_rs1_addr == decoded_rd_address_s3[current_warp]) ||
             (decode_rs2_addr != 0 && decode_rs2_addr == decoded_rd_address_s3[current_warp]) ) begin
            hazard_stall = 1'b1; // ...then we must stall.
        end
    end

end

// =========================================================================
// --- PIPELINE CONTROL SIGNALS ---
// =========================================================================
logic pipeline_stall;

assign pipeline_stall = hazard_stall || (current_warp_state == WARP_WAIT && any_lsu_waiting);
logic alu_enable;
logic id_ex_latch_enable;

// The ALU/FPU units should only be active during the EXECUTE state.
assign alu_enable = (current_warp_state == WARP_EXECUTE);

// The ID/EX pipeline register should latch a new instruction when the DECODE
// stage is finished. This happens when the FSM is in WARP_DECODE.
// We also use the alu_enable as a back-pressure signal to stall this
// stage if the execute stage is not ready (though your FSM handles this).
assign id_ex_latch_enable = (current_warp_state == WARP_DECODE) && !pipeline_stall;


// =========================================================================
// --- Latching logic for the ID/EX Pipeline Register ---
// This is the physical implementation of the pipeline register.
// =========================================================================
always_ff @(posedge clk) begin
    if (reset) begin
        // ---- Reset ID/EX registers (_s2) ------
        decoded_reg_write_enable_s2[0]      <= 1'b0;
        decoded_reg_input_mux_s2[0]         <= ALU_OUT;
        decoded_immediate_s2[0]             <= '0;
        decoded_branch_s2[0]                <= 1'b0;
        decoded_scalar_instruction_s2[0]    <= 1'b0;
        decoded_rd_address_s2[0]            <= '0;
        decoded_rs1_address_s2[0]           <= '0;
        decoded_rs2_address_s2[0]           <= '0;
        decoded_alu_instruction_s2[0]       <= NOP;
        decoded_halt_s2[0]                  <= 1'b0;
        floatingRead_flag_s2[0]             <= 2'b00;
        floatingWrite_flag_s2[0]            <= 1'b0;
        decoded_mem_read_enable_per_warp_s2[0]  <= 1'b0;
        decoded_mem_write_enable_per_warp_s2[0] <= 1'b0;
        pc_s2[0]                            <= '0;
        // ---- Reset EX/WB registers (_s3) ------
        for (int i=0; i<THREADS_PER_WARP; i++) begin
            alu_out_s3[i] <= '0;
            lsu_out_s3[i] <= '0;
        end
        scalar_alu_out_s3 <= '0;
        scalar_lsu_out_s3 <= '0;
        vector_to_scalar_data_s3[0] <= '0;
        decoded_reg_write_enable_s3[0] <= 1'b0;
        decoded_reg_input_mux_s3[0] <= ALU_OUT;
        decoded_rd_address_s3[0] <= 5'b0;
        floatingWrite_flag_s3[0] <= 1'b0;
        decoded_scalar_instruction_s3[0] <= 1'b0;
        pc_s3[0] <= '0;
        decoded_halt_s3[0] <= 1'b0;
    end else begin 
        if (hazard_stall) begin
            // ** BUBBLE INSERTION on STALL **
            // Inject a NOP into the EX stage (_s2). This allows later stages to drain.
            decoded_reg_write_enable_s2[0]      <= 1'b0; // A bubble does not write
            decoded_branch_s2[0]                <= 1'b0; // Not a branch
            decoded_rd_address_s2[0]            <= '0;   // No destination
            decoded_alu_instruction_s2[0]       <= NOP;  // It's a NOP
            // Clear other control flags to ensure the bubble is harmless
            floatingWrite_flag_s2[0]            <= 1'b0;
            decoded_mem_read_enable_per_warp_s2[0]  <= 1'b0;
            decoded_mem_write_enable_per_warp_s2[0] <= 1'b0;
            decoded_halt_s2[0]                  <= 1'b0;
        end
        // --- Latch ID/EX registers (_s2) ---
        else if (id_ex_latch_enable) begin
            decoded_reg_write_enable_s2[0]      <= decoded_reg_write_enable[0];
            decoded_reg_input_mux_s2[0]         <= decoded_reg_input_mux[0];
            decoded_immediate_s2[0]             <= decoded_immediate[0];
            decoded_branch_s2[0]                <= decoded_branch[0];
            decoded_scalar_instruction_s2[0]    <= decoded_scalar_instruction[0];
            decoded_rd_address_s2[0]            <= decoded_rd_address[0];
            decoded_rs1_address_s2[0]           <= decoded_rs1_address[0];
            decoded_rs2_address_s2[0]           <= decoded_rs2_address[0];
            decoded_alu_instruction_s2[0]       <= alu_instruction_t'(decoded_alu_instruction[0]);
            decoded_halt_s2[0]                  <= decoded_halt[0];
            floatingRead_flag_s2[0]             <= floatingRead_flag[0];
            floatingWrite_flag_s2[0]            <= floatingWrite_flag[0];
            decoded_mem_read_enable_per_warp_s2[0]  <= decoded_mem_read_enable_per_warp[0];
            decoded_mem_write_enable_per_warp_s2[0] <= decoded_mem_write_enable_per_warp[0];
            pc_s2[0]                            <= pc[0]; // Latch the PC for the current instruction
        end
        // --- Latch EX/WB registers (_s3) ---
        // This happens when the execute stage completes
        for (int i=0; i<THREADS_PER_WARP; i++) begin
            alu_out_s3[i] <= alu_out[i];
            lsu_out_s3[i] <= lsu_out[i];
        end
        scalar_alu_out_s3 <= scalar_alu_out;
        scalar_lsu_out_s3 <= scalar_lsu_out;
        vector_to_scalar_data_s3[0] <= vector_to_scalar_data[0];

        // Pass control signals from S2 to S3
        decoded_reg_write_enable_s3[0] <= decoded_reg_write_enable_s2[0];
        decoded_reg_input_mux_s3[0] <= decoded_reg_input_mux_s2[0];
        decoded_rd_address_s3[0] <= decoded_rd_address_s2[0];
        floatingWrite_flag_s3[0] <= floatingWrite_flag_s2[0];
        decoded_scalar_instruction_s3[0] <= decoded_scalar_instruction_s2[0];
        pc_s3[0] <= pc_s2[0];
        decoded_halt_s3[0] <= decoded_halt_s2[0];
        decoded_alu_instruction_s3[0] <= decoded_alu_instruction_s2[0];
    end
end

always_comb begin
    all_warps_done = 1'b1;
    if (0 < num_warps) begin
        if (warp_state != WARP_DONE) begin
            all_warps_done = 1'b0;
        end
    end
end

//State machine and Scheduler Logic
always @(posedge clk) begin
    // $display("Start execution: ", start_execution);
    // $display("Reset: ", reset);
    if (reset) begin
        //$display("Resetting core %0d", block_id);
        start_execution <= 0;
        done <= 0;
        warp_state <= WARP_IDLE;
        pc <= 0;
        next_pc <= 0;
        current_warp <= 0;

    end else if (!start_execution) begin
        if (start) begin
            $display("Starting execution of block %d", block_id);
            $display("GPU: Kernel configuration (latched):");
            $display("     - Base instruction address: %h", kernel_config.base_instructions_address);
            $display("     - Base data address: %h", kernel_config.base_data_address);
            $display("     - Num %d blocks", kernel_config.num_blocks);
            $display("     - Number of warps per block: %d", kernel_config.num_warps_per_block);
            // Set all warps to fetch state on start
            start_execution <= 1;
            current_warp <= 0;
            if (0<num_warps) begin
                warp_state <= WARP_FETCH;
                pc <= kernel_config.base_instructions_address;
                next_pc <= kernel_config.base_instructions_address;
            end else begin
                warp_state <= WARP_IDLE;
                pc <= 0;
                next_pc <= 0;
            end
        end
    end else begin
        // In parallel, check if fetchers are done, and if so, move to decode
        if (0 < num_warps) begin
            if (warp_state == WARP_FETCH && fetcher_state == FETCHER_DONE) begin
                $display("Block: %0d: Warp %0d: Fetched instruction %h at address %h", block_id, 0, fetched_instruction, pc);
                warp_state <= WARP_DECODE;
            end
        end
        all_warps_done = 1'b1;
        // If all warps are done, we are done
        if (0<num_warps) begin
            if (warp_state != WARP_DONE) begin
                all_warps_done = 1'b0;
            end
        end
        done <= all_warps_done;

        // Choose a warp to execute
        // We don't choose warps that are in one of the following states:
        // - WARP_IDLE - that means that the warp is not active
        // - WARP_DONE - that means that the warp has finished execution
        // - WARP_FETCH - that means that the warp is fetching instructions
        // For now we do not change state unless we are in WARP_UPDATE
        found_ready_warp = 1'b0;
        for (int i = 1; i <= WARPS_PER_CORE; i = i + 1) begin
            logic [WARP_INDEX_WIDTH-1:0] candidate_warp_idx;
            // Correctly wrap around the number of warps in the core
            candidate_warp_idx = (current_warp + i) % WARPS_PER_CORE;

            // Check if this candidate warp is both active and ready to be scheduled.
            if (candidate_warp_idx < num_warps) begin
                // A "schedulable" warp is one that is NOT waiting for something else.
                if ( (warp_state[candidate_warp_idx] != WARP_IDLE) &&
                    (warp_state[candidate_warp_idx] != WARP_DONE) &&
                    (warp_state[candidate_warp_idx] != WARP_WAIT)) begin

                    // We found a ready warp! Schedule it and stop searching.
                    if (!found_ready_warp) begin
                        current_warp <= candidate_warp_idx;
                        found_ready_warp = 1'b1;
                    end
                end
            end
        end

        case (current_warp_state)
            WARP_IDLE: begin
                $display("Block: %0d: Warp %0d: Idle", block_id, current_warp);
            end
            WARP_FETCH: begin
                // not possible to choose a warp that is fetching cause
                // fetching is done in parallel
            end
            WARP_DECODE: begin
                // decoding takes one cycle
                if (!pipeline_stall) begin
                    // $display("Check Warp Req: ", warp_state[current_warp]);
                    if (decoded_mem_read_enable_per_warp[current_warp] || decoded_mem_write_enable_per_warp[current_warp]) begin
                        // If it's a memory op, go to the memory state.
                        warp_state[current_warp] <= WARP_WAIT;
                    end else begin
                        // If not a memory op, go directly to execute.
                        warp_state[current_warp] <= WARP_EXECUTE;
                    end
                end
            end
            // WARP_REQUEST: begin
            //     // In this state, we check if a memory operation is needed.
            //     // The control signals are from the DECODE stage (the raw decoder outputs).
            //     $display("decoded_mem_write_enable_per_warp[current_warp]: ", decoded_mem_write_enable_per_warp[current_warp]);
            //     if (decoded_mem_read_enable_per_warp[current_warp] || decoded_mem_write_enable_per_warp[current_warp]) begin
            //         // If it's a memory op, go to the memory state.
            //         warp_state[current_warp] <= WARP_WAIT;
            //     end else begin
            //         // If not a memory op, go directly to execute.
            //         warp_state[current_warp] <= WARP_EXECUTE;
            //     end
            // end
            WARP_WAIT: begin
                // This is the single state for waiting on memory.
                // The check for any_lsu_waiting handles the stall duration.
                // We only wait for LOADS to complete. Stores can proceed.
                any_lsu_waiting = 1'b0;
                if (decoded_mem_read_enable_per_warp_s2[current_warp]) begin // Check the instruction IN the pipeline
                    // Check scalar and vector LSUs...
                    if (scalar_lsu_state != LSU_DONE) begin 
                        any_lsu_waiting = 1'b1; 
                    end
                    for (int i=0; i<THREADS_PER_WARP; i++) begin
                        if (lsu_state[i] != LSU_IDLE && lsu_state[i] != LSU_DONE) begin 
                            any_lsu_waiting = 1'b1; 
                            end
                    end
                end
                
                // If we are done waiting (or it was a store), proceed to Execute.
                if (!any_lsu_waiting) begin
                    warp_state <= WARP_EXECUTE;
                end
            end
            WARP_EXECUTE: begin
                $display("===================================");
                $display("Mask: %32b", warp_execution_mask);
                $display("Block: %0d: Warp %0d: Executing instruction %h at address %h", block_id, current_warp, fetched_instruction, pc);
                // $display("Instruction opcode: %b", fetched_instruction[31:29]);
                $display("Block: %0d: Warp %0d: Executing instruction %h", block_id, current_warp, fetched_instruction);
            
                if (decoded_scalar_instruction_s2[current_warp]) begin
                    if (decoded_branch_s2[current_warp]) begin
                        // Branch instruction
                        if (scalar_alu_out == 1) begin
                            // Branch taken
                            next_pc[current_warp] <= pc_s2[current_warp] + decoded_immediate_s2[current_warp];
                        end else begin
                            // Branch not taken
                            next_pc[current_warp] <= pc_s2[current_warp] + 1;
                        end
                    end else if (decoded_alu_instruction_s2[current_warp] == JAL) begin
                        next_pc[current_warp] <= scalar_alu_out;
                    end else begin
                        // Other scalar instruction
                        next_pc[current_warp] <= pc_s2[current_warp] + 1;
                    end
                end else begin
                    // Vector instruction
                    next_pc[current_warp] <= pc_s2[current_warp] + 1;
                end
                
                $display("===================================");
                // The transition to UPDATE now only happens for non-sync instructions
                warp_state[current_warp] <= WARP_UPDATE;

                //$display("Checking reg input mux for VECTOR_TO_SCALAR: ", decoded_reg_input_mux[current_warp] == VECTOR_TO_SCALAR);

                if (decoded_reg_input_mux_s2[current_warp] == VECTOR_TO_SCALAR) begin
                    data_t scalar_write_value;
                    scalar_write_value <= {`DATA_WIDTH{1'b0}};
                    for (int i = 0; i < THREADS_PER_WARP; i++) begin
                        scalar_write_value[i] <= alu_out[i];
                        $display("scalar write value: ", scalar_write_value[i]);
                    end
                    vector_to_scalar_data <= scalar_write_value;
                end else begin
                    vector_to_scalar_data <= {`DATA_WIDTH{1'b0}};
                end
            end
            
            WARP_UPDATE: begin
                $display("Inside WARP_UPDATE");
                // This is now just a pipeline delay stage. It unconditionally moves to WB.
                warp_state[current_warp] <= WARP_WRITEBACK;
            end

            WARP_WRITEBACK: begin
                if (decoded_halt_s3[current_warp]) begin
                    $display("Block: %0d: Warp %0d: Finished executing instruction %h", block_id, current_warp, fetched_instruction[current_warp]);
                    warp_state[current_warp] <= WARP_DONE;
                end else begin
                    pc <= next_pc;
                    warp_state <= WARP_FETCH;
                end
            end

            WARP_DONE: begin
                // we chillin
            end
        endcase
    end
end

// This block generates warp control circuitry
fetcher fetcher_inst(
    .clk(clk),
    .reset(reset),

    .warp_state(warp_state),
    .pc(pc),

    // Instruction Memory
    .instruction_mem_read_ready(instruction_mem_read_ready),
    .instruction_mem_read_data(instruction_mem_read_data),
    .instruction_mem_read_valid(instruction_mem_read_valid),
    .instruction_mem_read_address(instruction_mem_read_address),

    // Fetcher output
    .fetcher_state(fetcher_state),
    .instruction(fetched_instruction)
);

decoder decoder_inst(
    .clk(clk),
    .reset(reset),
    .warp_state(warp_state),

    .instruction(fetched_instruction),

    .decoded_reg_write_enable(decoded_reg_write_enable),
    .decoded_mem_write_enable(decoded_mem_write_enable_per_warp),
    .decoded_mem_read_enable(decoded_mem_read_enable_per_warp),
    .decoded_branch(decoded_branch),
    .decoded_scalar_instruction(decoded_scalar_instruction),
    .decoded_reg_input_mux(decoded_reg_input_mux),
    .decoded_immediate(decoded_immediate),
    .decoded_rd_address(decoded_rd_address),
    .decoded_rs1_address(decoded_rs1_address),
    .decoded_rs2_address(decoded_rs2_address),
    .decoded_alu_instruction(decoded_alu_instruction),

    .decoded_halt(decoded_halt),
    .floatingRead(floatingRead_flag),
    .floatingWrite(floatingWrite_flag)
);
// Scalar float register file
floating_scalar_reg_file #(
    .DATA_WIDTH(32)
) floating_scalar_reg_file_inst (
    .clk(clk),
    .reset(reset),
    .enable((current_warp == 0) && floatingWrite_flag_s2[0]), // Enable when current_warp matches and warp is active

    //.warp_execution_mask(warp_execution_mask),

    .warp_state(warp_state),

    .decoded_reg_write_enable(decoded_reg_write_enable_s3[0] && decoded_scalar_instruction_s3[0] && floatingWrite_flag_s3[0]),
    .decoded_reg_input_mux(decoded_reg_input_mux_s3[0]),
    .decoded_immediate(decoded_immediate_s2[0]),
    .decoded_rd_address(decoded_rd_address_s3[0]),
    .decoded_rs1_address(decoded_rs1_address_s2[0]),
    .decoded_rs2_address(decoded_rs2_address_s2[0]),

    .alu_out(scalar_alu_out_s3),
    .lsu_out(scalar_lsu_out_s3),
    .pc(pc_s2[0]),
    .vector_to_scalar_data(vector_to_scalar_data_s3[0]),

    .rs1(scalar_float_rs1),
    .rs2(scalar_float_rs2)
);

always_comb begin
    if (current_warp == 0) begin
        //$display("Enable: ", current_warp == 0);
        //$display("Warp State: ", warp_state);
        //$display("Decoded_rs1: ", decoded_rs1_address);
        //$display("Decoded_rs2: ", decoded_rs2_address);
        //$display("ALU out", scalar_alu_out);
        //$display("ALU out", scalar_alu_out);
        //$display("Scalar_lsu: ", scalar_lsu_out);
        //$display("Scalar_float_rs1: ", scalar_float_rs1);
        //$display("Scalar_float_rs2: ", scalar_float_rs2);
        //$display("Floating Write Flag", floatingWrite_flag);
    end
end

//Scalar integer register file
scalar_reg_file #(
    .DATA_WIDTH(32)
) scalar_reg_file_inst (
    .clk(clk),
    .reset(reset),
    .enable((current_warp == 0) && (!floatingWrite_flag_s2[0] || (decoded_reg_input_mux_s2[0] == VECTOR_TO_SCALAR))), // Enable when current_warp matches and warp is active

    .warp_execution_mask(warp_execution_mask),

    .warp_state(warp_state),

    .decoded_reg_write_enable(decoded_reg_write_enable_s3[0] && ((decoded_scalar_instruction_s3[0] && !floatingWrite_flag_s3[0]) ||(decoded_reg_input_mux_s3[0] == VECTOR_TO_SCALAR))),
    .decoded_reg_input_mux(decoded_reg_input_mux_s3[0]),
    .decoded_immediate(decoded_immediate_s2[0]),
    .decoded_rd_address(decoded_rd_address_s3[0]),
    .decoded_rs1_address(decoded_rs1_address_s2[0]),
    .decoded_rs2_address(decoded_rs2_address_s2[0]),

    .alu_out(scalar_alu_out_s3),
    .lsu_out(scalar_lsu_out_s3),
    .pc(pc_s2[0]),
    .vector_to_scalar_data(vector_to_scalar_data_s3[0]),

    .rs1(scalar_int_rs1),
    .rs2(scalar_int_rs2)
);
// Vector float register file
reg_file #(
        .THREADS_PER_WARP(THREADS_PER_WARP)
    ) floating_reg_file_inst (
        .clk(clk),
        .reset(reset),
        .enable((current_warp == 0) && floatingWrite_flag_s2[0]), // Enable when current_warp matches and warp is active

        // Thread enable signals (execution mask)
        .thread_enable(warp_execution_mask),

        // Warp and block identifiers
        .warp_id(0),
        .block_id(block_id),
        .block_size(kernel_config.num_warps_per_block * THREADS_PER_WARP),
        .warp_state(warp_state),

        // Decoded instruction fields for this warp
        .decoded_reg_write_enable(decoded_reg_write_enable_s3[0] && !decoded_scalar_instruction_s3[0] && floatingWrite_flag_s3[0]),
        .decoded_reg_input_mux(decoded_reg_input_mux_s3[0]),
        .decoded_immediate(decoded_immediate_s2[0]),
        .decoded_rd_address(decoded_rd_address_s3[0]),
        .decoded_rs1_address(decoded_rs1_address_s2[0]),
        .decoded_rs2_address(decoded_rs2_address_s2[0]),

        // Inputs from ALU and LSU per thread
        .alu_out(alu_out_s3), // Will be fixed in EX/WB step
        .lsu_out(lsu_out_s3),

        // Outputs per thread
        .rs1(vector_float_rs1),
        .rs2(vector_float_rs2)
    );


// Vector integer register file
reg_file #(
        .THREADS_PER_WARP(THREADS_PER_WARP)
    ) reg_file_inst (
        .clk(clk),
        .reset(reset),
        .enable((current_warp == 0) && !floatingWrite_flag_s2[0]), // Enable when current_warp matches and warp is active

        // Thread enable signals (execution mask)
        .thread_enable(warp_execution_mask),

        // Warp and block identifiers
        .warp_id(0),
        .block_id(block_id),
        .block_size(kernel_config.num_warps_per_block * THREADS_PER_WARP),
        .warp_state(warp_state),

        // Decoded instruction fields for this warp
        .decoded_reg_write_enable(decoded_reg_write_enable_s3[0] && !decoded_scalar_instruction_s3[0] && !floatingWrite_flag_s3[0]),
        .decoded_reg_input_mux(decoded_reg_input_mux_s3[0]),
        .decoded_immediate(decoded_immediate_s2[0]),
        .decoded_rd_address(decoded_rd_address_s3[0]),
        .decoded_rs1_address(decoded_rs1_address_s2[0]),
        .decoded_rs2_address(decoded_rs2_address_s2[0]),

        // Inputs from ALU and LSU per thread
        .alu_out(alu_out_s3), 
        .lsu_out(lsu_out_s3),

        // Outputs per thread
        .rs1(vector_int_rs1),
        .rs2(vector_int_rs2)
    );

// always_comb begin
//     if (current_warp == 0) begin
//         $display("Enable: ", current_warp == 0);
//         $display("Warp State: ", warp_state);
//         $display("Decoded_rs1: ", decoded_rs1_address);
//         $display("Decoded_rs2: ", decoded_rs2_address);
//         $display("Vector_lsu: ", lsu_out);
//         $display("Vector_int_rs1: ", vector_int_rs1);
//         $display("Vector_int_rs2: ", vector_int_rs2);
//     end
// end





// This block generates shared core resources (ALUs, LSUs)

//Scalar functional units
data_t scalar_int_alu_result, scalar_float_alu_result;
wire is_scalar_float_op = decoded_scalar_instruction_s2[current_warp] && (decoded_alu_instruction_s2[current_warp] >= FADD);
wire is_scalar_int_op  = decoded_scalar_instruction_s2[current_warp] && (decoded_alu_instruction_s2[current_warp] < FADD);

// Scalar ALU
alu scalar_alu_inst(
    .clk(clk),
    .rst(reset),
    .enable(alu_enable),
    .pc(pc_s2[current_warp]),
    .ALUop1(scalar_op1),
    .ALUop2(scalar_op2),
    .IMM(decoded_immediate_s2[current_warp]),
    .instruction(decoded_alu_instruction_s2[current_warp]),

    .Result(scalar_int_alu_result)
    // .EQ() // unused
);

// Scalar Floating ALU
floating_alu scalar_fpu_inst(
    .clk(clk), 
    .rst(reset),
    .enable(alu_enable),
    .op1(scalar_op1),
    .op2(scalar_op2),
    .instruction(decoded_alu_instruction_s2[current_warp]),

    .result(scalar_float_alu_result),
    .valid(fpu_result_is_valid)
    // .EQ() // unused
);

logic more_fadd;
assign more_fadd = (decoded_alu_instruction_s2[current_warp] >= FADD);
logic less_beqz;
assign less_beqz = (decoded_alu_instruction_s2[current_warp] < BEQZ);

assign scalar_alu_out = (more_fadd & less_beqz) ? scalar_float_alu_result : scalar_int_alu_result;
// assign scalar_alu_out = is_scalar_float_op ? scalar_float_alu_result : scalar_int_alu_result;

always_comb begin
    // $display("Scalar_op1: ", scalar_op1);
    // $display("Scalar_op2: ", scalar_op2);
    // for (int 0 =0; 0<THREADS_PER_WARP; 0++) begin 
    //     $display("Decoded Scalar Flag: ", decoded_scalar_instruction);
    // end
    // $display("Decoded Rs1 Address[2]: ", decoded_rs1_address[2]);
    // $display("Decoded Rs1 Address[6]: ", decoded_rs1_address[6]);
    // $display("Scalar LSU Out: ", scalar_lsu_out);
    //$display("scalar alu out: ", scalar_alu_out);
    //$display("decoded alu instr: ", decoded_alu_instruction);

    // $display("data_mem_write_valid: ", data_mem_write_valid[THREADS_PER_WARP]);

end
// always_comb begin
//     $display("data_mem_write_data[THREADS_PER_WARP]: ", data_mem_write_data[16]);
// end
lsu scalar_lsu_inst(
    .clk(clk),
    .reset(reset),
    .enable(decoded_scalar_instruction_s2[current_warp]),

    .warp_state(warp_state),

    .decoded_mem_read_enable(decoded_mem_read_enable_per_warp_s2[current_warp]),
    .decoded_mem_write_enable(decoded_mem_write_enable_per_warp_s2[current_warp]),

    .rs1(scalar_op1),
    .rs2(scalar_op2),
    .imm(decoded_immediate_s2[current_warp]),

    // Data Memory connections
    .mem_read_valid(data_mem_read_valid[THREADS_PER_WARP]),
    .mem_read_address(data_mem_read_address[THREADS_PER_WARP]),
    .mem_read_ready(data_mem_read_ready[THREADS_PER_WARP]),
    .mem_read_data(data_mem_read_data[THREADS_PER_WARP]),
    .mem_write_valid(data_mem_write_valid[THREADS_PER_WARP]),
    .mem_write_address(data_mem_write_address[THREADS_PER_WARP]),
    .mem_write_data(data_mem_write_data[THREADS_PER_WARP]),
    .mem_write_ready(data_mem_write_ready[THREADS_PER_WARP]),

    .lsu_state(scalar_lsu_state),
    .lsu_out(scalar_lsu_out)
);

//Vecotr functional units
generate
    for (genvar i = 0; i < THREADS_PER_WARP; i = i + 1) begin : g_vector_units
        wire t_enable = current_warp_execution_mask[i] && !decoded_scalar_instruction_s2[current_warp];
       
        data_t vector_int_alu_result, vector_float_alu_result;
        logic is_float_op;

        // Vector ALU
        alu vector_alu_inst(
            .clk(clk),
            .rst(reset),
            .enable(alu_enable),
            .pc(pc_s2[current_warp]),
            .ALUop1(final_op1[i]),
            .ALUop2(final_op2[i]),
            .IMM(decoded_immediate_s2[current_warp]),
            .instruction(decoded_alu_instruction_s2[current_warp]),

            .Result(vector_int_alu_result)
            // .EQ() // unused
        );
        // Vector Floating ALU
        floating_alu vector_fpu_inst(
            .clk(clk),
            .rst(reset),
            .enable(alu_enable),
            .op1(final_op1[i]),
            .op2(final_op2[i]),
            .instruction(decoded_alu_instruction_s2[current_warp]),

            .result(vector_float_alu_result),
            .valid(fpu_result_is_valid)
            // .EQ() // unused
        );

        // assign alu_out[i] = (decoded_alu_instruction[current_warp] >= FADD) ? vector_float_alu_result : vector_int_alu_result;

         always_comb begin
            is_float_op = (decoded_alu_instruction_s2[current_warp] >= FADD);
            if (is_float_op) begin
                alu_out[i] = vector_float_alu_result;
            end else begin
                alu_out[i] = vector_int_alu_result;
            end
         end

        lsu lsu_inst(
            .clk(clk),
            .reset(reset),
            .enable(t_enable),

            .warp_state(warp_state),

            .decoded_mem_read_enable(decoded_mem_read_enable_per_warp_s2[current_warp]),
            .decoded_mem_write_enable(decoded_mem_write_enable_per_warp_s2[current_warp]),

            .rs1(final_op1[i]),
            .rs2(final_op2[i]),
            .imm(decoded_immediate_s2[current_warp]),

            // Data Memory connections
            .mem_read_valid(data_mem_read_valid[i]),
            .mem_read_address(data_mem_read_address[i]),
            .mem_read_ready(data_mem_read_ready[i]),
            .mem_read_data(data_mem_read_data[i]),
            .mem_write_valid(data_mem_write_valid[i]),
            .mem_write_address(data_mem_write_address[i]),
            .mem_write_data(data_mem_write_data[i]),
            .mem_write_ready(data_mem_write_ready[i]),

            .lsu_state(lsu_state[i]),
            .lsu_out(lsu_out[i])
        );
    end
endgenerate
endmodule
