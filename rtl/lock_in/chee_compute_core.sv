`timescale 1ns/1ns

// Enhanced pipelined compute core with integrated multi-warp scheduler
// Features:
// - 5-stage pipeline with proper warp scheduling
// - Round-robin warp selection with ready checking
// - Per-warp state tracking and PC management
// - Hazard detection and pipeline stalls

`include "common.svh"

module bomboclat_compute_core#(
    parameter int THREADS_PER_WARP = 16,         // Number of threads per warp (max 32)
    parameter int MAX_WARPS = 4                  // Maximum number of warps supported
    )(
    input   wire                            clk,
    input   wire                            reset,

    input   logic                           start,
    output  logic                           done,

    input   data_t                          block_id,
    input   kernel_config_t                 kernel_config,

    // Instruction Memory
    input   logic       instruction_mem_read_ready,
    input   instruction_t                   instruction_mem_read_data,
    output  logic       instruction_mem_read_valid,
    output  instruction_memory_address_t    instruction_mem_read_address,

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
typedef logic [$clog2(MAX_WARPS)-1:0] warp_id_t;
localparam int NUM_LSUS = THREADS_PER_WARP + 1;

// ========== WARP SCHEDULER STATE ==========
logic start_execution;
logic all_warps_done;
data_t num_warps;
assign num_warps = kernel_config.num_warps_per_block;

// Per-warp state tracking
instruction_memory_address_t warp_pc [MAX_WARPS];
instruction_memory_address_t warp_next_pc [MAX_WARPS];
warp_state_t warp_states [MAX_WARPS];
logic warp_active [MAX_WARPS];
warp_mask_t warp_execution_masks [MAX_WARPS];

// Current active warp
warp_id_t current_warp;
warp_id_t next_warp;
logic warp_switch_request;
logic found_ready_warp;

// ========== PIPELINE STAGE DEFINITIONS ==========
typedef struct packed {
    instruction_memory_address_t pc;
    warp_id_t warp_id;
    warp_mask_t execution_mask;
    logic valid;
} fetch_stage_t;

typedef struct packed {
    instruction_t instruction;
    instruction_memory_address_t pc;
    warp_id_t warp_id;
    warp_mask_t execution_mask;
    logic valid;
} decode_stage_t;

typedef struct packed {
    instruction_t instruction;
    instruction_memory_address_t pc;
    warp_id_t warp_id;
    warp_mask_t execution_mask;
    logic reg_write_enable;
    reg_input_mux_t reg_input_mux;
    data_t immediate;
    logic branch;
    logic scalar_instruction;
    logic [4:0] rd_address;
    logic [4:0] rs1_address;
    logic [4:0] rs2_address;
    logic [4:0] alu_instruction;
    logic halt;
    logic [1:0] floatingRead_flag;
    logic floatingWrite_flag;
    logic mem_read_enable;
    logic mem_write_enable;
    logic valid;
} execute_stage_t;

typedef struct packed {
    instruction_t instruction;
    instruction_memory_address_t pc;
    warp_id_t warp_id;
    warp_mask_t execution_mask;
    logic reg_write_enable;
    reg_input_mux_t reg_input_mux;
    data_t immediate;
    logic branch;
    logic scalar_instruction;
    logic [4:0] rd_address;
    logic halt;
    logic floatingWrite_flag;
    data_t scalar_alu_result;
    logic valid;
} memory_stage_t;

typedef struct packed {
    instruction_t instruction;
    instruction_memory_address_t pc;
    warp_id_t warp_id;
    warp_mask_t execution_mask;
    logic reg_write_enable;
    reg_input_mux_t reg_input_mux;
    data_t immediate;
    logic branch;
    logic scalar_instruction;
    logic [4:0] rd_address;
    logic halt;
    logic floatingWrite_flag;
    data_t scalar_final_result;
    logic valid;
} writeback_stage_t;

// Pipeline stage registers
fetch_stage_t fetch_stage_reg, fetch_stage_next;
decode_stage_t decode_stage_reg, decode_stage_next;
execute_stage_t execute_stage_reg, execute_stage_next;
memory_stage_t memory_stage_reg, memory_stage_next;
writeback_stage_t writeback_stage_reg, writeback_stage_next;

// Pipeline control signals
logic fetch_stall, decode_stall, execute_stall, memory_stall;
logic fetch_ready, decode_ready, execute_ready, memory_ready, writeback_ready;

// Instruction fetcher
instruction_t fetched_instruction;
fetcher_state_t fetcher_state;

// ========== WARP SCHEDULER LOGIC ==========

// Determine if a warp is ready to be scheduled
function logic warp_is_ready(warp_id_t warp_id);
    return warp_active[warp_id] && 
           (warp_states[warp_id] == WARP_DECODE || 
            warp_states[warp_id] == WARP_EXECUTE || 
            warp_states[warp_id] == WARP_REQUEST ||
            (warp_states[warp_id] == WARP_FETCH && fetcher_state == FETCHER_DONE));
endfunction

// Round-robin warp scheduler
always_comb begin
    next_warp = current_warp;
    found_ready_warp = 1'b0;
    
    // Look for next ready warp starting from current_warp + 1
    for (int i = 1; i <= MAX_WARPS; i++) begin
        warp_id_t candidate = (current_warp + i) % MAX_WARPS;
        if (candidate < num_warps && warp_is_ready(candidate) && !found_ready_warp) begin
            next_warp = candidate;
            found_ready_warp = 1'b1;
        end
    end
    
    // If no other warp is ready, stay with current if it's ready
    if (!found_ready_warp && warp_is_ready(current_warp)) begin
        next_warp = current_warp;
        found_ready_warp = 1'b1;
    end
end

// Warp switching logic
always_comb begin
    warp_switch_request = 1'b0;
    
    // Switch warp when:
    // 1. Current warp is stalled (waiting for memory)
    // 2. Current warp finished an instruction (pipeline bubble)
    // 3. Current warp is done or idle
    if (warp_states[current_warp] == WARP_WAIT ||
        warp_states[current_warp] == WARP_DONE ||
        warp_states[current_warp] == WARP_IDLE ||
        (writeback_stage_reg.valid && writeback_stage_reg.warp_id == current_warp)) begin
        warp_switch_request = 1'b1;
    end
end

// ========== FETCH STAGE LOGIC ==========
always_comb begin
    fetch_stage_next = fetch_stage_reg;
    
    if (fetch_ready && start_execution) begin
        if (warp_states[current_warp] == WARP_FETCH) begin
            fetch_stage_next.pc = warp_pc[current_warp];
            fetch_stage_next.warp_id = current_warp;
            fetch_stage_next.execution_mask = warp_execution_masks[current_warp];
            fetch_stage_next.valid = 1'b1;
        end else begin
            fetch_stage_next.valid = 1'b0;
        end
    end
end

// Instruction fetcher
fetcher fetcher_inst(
    .clk(clk),
    .reset(reset),
    .warp_state(warp_states[current_warp]),
    .pc(fetch_stage_reg.pc),
    .instruction_mem_read_ready(instruction_mem_read_ready),
    .instruction_mem_read_data(instruction_mem_read_data),
    .instruction_mem_read_valid(instruction_mem_read_valid),
    .instruction_mem_read_address(instruction_mem_read_address),
    .fetcher_state(fetcher_state),
    .instruction(fetched_instruction)
);

// ========== DECODE STAGE LOGIC ==========
// Decoded instruction fields
logic decoded_reg_write_enable;
reg_input_mux_t decoded_reg_input_mux;
data_t decoded_immediate;
logic decoded_branch;
logic decoded_scalar_instruction;
logic [4:0] decoded_rd_address;
logic [4:0] decoded_rs1_address;
logic [4:0] decoded_rs2_address;
logic [4:0] decoded_alu_instruction;
logic decoded_halt;
logic [1:0] floatingRead_flag;
logic floatingWrite_flag;
logic decoded_mem_read_enable_per_warp;
logic decoded_mem_write_enable_per_warp;

always_comb begin
    decode_stage_next = decode_stage_reg;
    
    if (decode_ready && fetch_stage_reg.valid && fetcher_state == FETCHER_DONE) begin
        decode_stage_next.instruction = fetched_instruction;
        decode_stage_next.pc = fetch_stage_reg.pc;
        decode_stage_next.warp_id = fetch_stage_reg.warp_id;
        decode_stage_next.execution_mask = fetch_stage_reg.execution_mask;
        decode_stage_next.valid = 1'b1;
    end else if (decode_ready) begin
        decode_stage_next.valid = 1'b0;
    end
end

// Instruction decoder
decoder decoder_inst(
    .clk(clk),
    .reset(reset),
    .warp_state(decode_stage_reg.valid ? WARP_DECODE : WARP_IDLE),
    .instruction(decode_stage_reg.instruction),
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

// ========== EXECUTE STAGE LOGIC ==========
always_comb begin
    execute_stage_next = execute_stage_reg;
    
    if (execute_ready && decode_stage_reg.valid) begin
        execute_stage_next.instruction = decode_stage_reg.instruction;
        execute_stage_next.pc = decode_stage_reg.pc;
        execute_stage_next.warp_id = decode_stage_reg.warp_id;
        execute_stage_next.execution_mask = decode_stage_reg.execution_mask;
        execute_stage_next.reg_write_enable = decoded_reg_write_enable;
        execute_stage_next.reg_input_mux = decoded_reg_input_mux;
        execute_stage_next.immediate = decoded_immediate;
        execute_stage_next.branch = decoded_branch;
        execute_stage_next.scalar_instruction = decoded_scalar_instruction;
        execute_stage_next.rd_address = decoded_rd_address;
        execute_stage_next.rs1_address = decoded_rs1_address;
        execute_stage_next.rs2_address = decoded_rs2_address;
        execute_stage_next.alu_instruction = decoded_alu_instruction;
        execute_stage_next.halt = decoded_halt;
        execute_stage_next.floatingRead_flag = floatingRead_flag;
        execute_stage_next.floatingWrite_flag = floatingWrite_flag;
        execute_stage_next.mem_read_enable = decoded_mem_read_enable_per_warp;
        execute_stage_next.mem_write_enable = decoded_mem_write_enable_per_warp;
        execute_stage_next.valid = 1'b1;
    end else if (execute_ready) begin
        execute_stage_next.valid = 1'b0;
    end
end

// ========== MEMORY STAGE LOGIC ==========
always_comb begin
    memory_stage_next = memory_stage_reg;
    
    if (memory_ready && execute_stage_reg.valid) begin
        memory_stage_next.instruction = execute_stage_reg.instruction;
        memory_stage_next.pc = execute_stage_reg.pc;
        memory_stage_next.warp_id = execute_stage_reg.warp_id;
        memory_stage_next.execution_mask = execute_stage_reg.execution_mask;
        memory_stage_next.reg_write_enable = execute_stage_reg.reg_write_enable;
        memory_stage_next.reg_input_mux = execute_stage_reg.reg_input_mux;
        memory_stage_next.immediate = execute_stage_reg.immediate;
        memory_stage_next.branch = execute_stage_reg.branch;
        memory_stage_next.scalar_instruction = execute_stage_reg.scalar_instruction;
        memory_stage_next.rd_address = execute_stage_reg.rd_address;
        memory_stage_next.halt = execute_stage_reg.halt;
        memory_stage_next.floatingWrite_flag = execute_stage_reg.floatingWrite_flag;
        memory_stage_next.scalar_alu_result = scalar_alu_out;
        memory_stage_next.valid = 1'b1;
    end else if (memory_ready) begin
        memory_stage_next.valid = 1'b0;
    end
end

// ========== WRITEBACK STAGE LOGIC ==========
always_comb begin
    writeback_stage_next = writeback_stage_reg;
    
    if (writeback_ready && memory_stage_reg.valid && !memory_stall) begin
        writeback_stage_next.instruction = memory_stage_reg.instruction;
        writeback_stage_next.pc = memory_stage_reg.pc;
        writeback_stage_next.warp_id = memory_stage_reg.warp_id;
        writeback_stage_next.execution_mask = memory_stage_reg.execution_mask;
        writeback_stage_next.reg_write_enable = memory_stage_reg.reg_write_enable;
        writeback_stage_next.reg_input_mux = memory_stage_reg.reg_input_mux;
        writeback_stage_next.immediate = memory_stage_reg.immediate;
        writeback_stage_next.branch = memory_stage_reg.branch;
        writeback_stage_next.scalar_instruction = memory_stage_reg.scalar_instruction;
        writeback_stage_next.rd_address = memory_stage_reg.rd_address;
        writeback_stage_next.halt = memory_stage_reg.halt;
        writeback_stage_next.floatingWrite_flag = memory_stage_reg.floatingWrite_flag;
        writeback_stage_next.scalar_final_result = (memory_stage_reg.reg_input_mux == LSU_OUT) ? 
                                                  scalar_lsu_out : memory_stage_reg.scalar_alu_result;
        writeback_stage_next.valid = 1'b1;
    end else if (writeback_ready) begin
        writeback_stage_next.valid = 1'b0;
    end
end

// ========== PIPELINE CONTROL LOGIC ==========

// LSU status tracking
data_t lsu_out [THREADS_PER_WARP];
lsu_state_t lsu_state [THREADS_PER_WARP];
data_t scalar_lsu_out;
lsu_state_t scalar_lsu_state;
logic any_lsu_waiting;

always_comb begin
    any_lsu_waiting = 1'b0;
    for (int i = 0; i < THREADS_PER_WARP; i++) begin
        if (lsu_state[i] == LSU_REQUESTING || lsu_state[i] == LSU_WAITING) begin
            any_lsu_waiting = 1'b1;
            break;
        end
    end
    if (scalar_lsu_state == LSU_REQUESTING || scalar_lsu_state == LSU_WAITING) begin
        any_lsu_waiting = 1'b1;
    end
end

// Stall conditions
always_comb begin
    memory_stall = any_lsu_waiting;
    execute_stall = memory_stall && memory_stage_reg.valid;
    decode_stall = execute_stall && execute_stage_reg.valid;
    fetch_stall = decode_stall && decode_stage_reg.valid;
end

// Ready signals
assign fetch_ready = !fetch_stall;
assign decode_ready = !decode_stall;
assign execute_ready = !execute_stall;
assign memory_ready = !memory_stall;
assign writeback_ready = 1'b1;

// ========== MAIN PIPELINE AND WARP CONTROL ==========
always_ff @(posedge clk) begin
    if (reset) begin
        // Reset pipeline stages
        fetch_stage_reg <= '0;
        decode_stage_reg <= '0;
        execute_stage_reg <= '0;
        memory_stage_reg <= '0;
        writeback_stage_reg <= '0;
        
        // Reset warp scheduler
        start_execution <= 1'b0;
        done <= 1'b0;
        current_warp <= '0;
        
        // Reset per-warp state
        for (int i = 0; i < MAX_WARPS; i++) begin
            warp_pc[i] <= '0;
            warp_next_pc[i] <= '0;
            warp_states[i] <= WARP_IDLE;
            warp_active[i] <= 1'b0;
            warp_execution_masks[i] <= {THREADS_PER_WARP{1'b1}};
        end
        
    end else begin
        // Update pipeline stages
        if (fetch_ready) begin
            fetch_stage_reg <= fetch_stage_next;
        end
        
        if (decode_ready) begin
            decode_stage_reg <= decode_stage_next;
        end
        
        if (execute_ready) begin
            execute_stage_reg <= execute_stage_next;
        end
        
        if (memory_ready) begin
            memory_stage_reg <= memory_stage_next;
        end
        
        if (writeback_ready) begin
            writeback_stage_reg <= writeback_stage_next;
        end
        
        // Warp scheduler and control logic
        if (!start_execution) begin
            if (start) begin
                $display("Starting execution of block %d", block_id);
                $display("GPU: Kernel configuration (latched):");
                $display("     - Base instruction address: %h", kernel_config.base_instructions_address);
                $display("     - Base data address: %h", kernel_config.base_data_address);
                $display("     - Num %d blocks", kernel_config.num_blocks);
                $display("     - Number of warps per block: %d", kernel_config.num_warps_per_block);
                
                start_execution <= 1'b1;
                current_warp <= 0;
                
                // Initialize active warps
                for (int i = 0; i < MAX_WARPS; i++) begin
                    if (i < num_warps) begin
                        warp_pc[i] <= kernel_config.base_instructions_address;
                        warp_next_pc[i] <= kernel_config.base_instructions_address;
                        warp_states[i] <= WARP_FETCH;
                        warp_active[i] <= 1'b1;
                        warp_execution_masks[i] <= {THREADS_PER_WARP{1'b1}};
                    end else begin
                        warp_states[i] <= WARP_IDLE;
                        warp_active[i] <= 1'b0;
                    end
                end
            end
        end else begin
            // Warp state transitions
            for (int i = 0; i < MAX_WARPS; i++) begin
                if (warp_active[i]) begin
                    case (warp_states[i])
                        WARP_FETCH: begin
                            if (i == current_warp && fetcher_state == FETCHER_DONE) begin
                                $display("Block: %0d: Warp %0d: Fetched instruction %h at address %h", 
                                        block_id, i, fetched_instruction, warp_pc[i]);
                                warp_states[i] <= WARP_DECODE;
                            end
                        end
                        
                        WARP_DECODE: begin
                            if (decode_stage_reg.valid && decode_stage_reg.warp_id == i) begin
                                warp_states[i] <= WARP_REQUEST;
                            end
                        end
                        
                        WARP_REQUEST: begin
                            if (execute_stage_reg.valid && execute_stage_reg.warp_id == i) begin
                                if (execute_stage_reg.mem_read_enable || execute_stage_reg.mem_write_enable) begin
                                    warp_states[i] <= WARP_WAIT;
                                end else begin
                                    warp_states[i] <= WARP_EXECUTE;
                                end
                            end
                        end
                        
                        WARP_WAIT: begin
                            if (!any_lsu_waiting) begin
                                warp_states[i] <= WARP_EXECUTE;
                            end
                        end
                        
                        WARP_EXECUTE: begin
                            if (writeback_stage_reg.valid && writeback_stage_reg.warp_id == i) begin
                                if (writeback_stage_reg.halt) begin
                                    $display("Block: %0d: Warp %0d: Finished executing instruction %h", 
                                            block_id, i, writeback_stage_reg.instruction);
                                    warp_states[i] <= WARP_DONE;
                                    warp_active[i] <= 1'b0;
                                end else begin
                                    // Update PC
                                    if (writeback_stage_reg.branch) begin
                                        if (writeback_stage_reg.scalar_final_result == 1) begin
                                            warp_pc[i] <= writeback_stage_reg.pc + writeback_stage_reg.immediate;
                                        end else begin
                                            warp_pc[i] <= writeback_stage_reg.pc + 1;
                                        end
                                    end else begin
                                        warp_pc[i] <= writeback_stage_reg.pc + 1;
                                    end
                                    warp_states[i] <= WARP_FETCH;
                                end
                            end
                        end
                        
                        WARP_DONE: begin
                            // Warp is done, do nothing
                        end
                    endcase
                end
            end
            
            // Warp switching logic
            if (warp_switch_request && found_ready_warp) begin
                current_warp <= next_warp;
                $display("Block: %0d: Switching to warp %0d", block_id, next_warp);
            end
            
            // Check if all warps are done
            all_warps_done = 1'b1;
            for (int i = 0; i < MAX_WARPS; i++) begin
                if (warp_active[i]) begin
                    all_warps_done = 1'b0;
                    break;
                end
            end
            done <= all_warps_done;
        end
    end
end

// ========== FUNCTIONAL UNITS ==========
// (Include all your existing ALU, LSU, and register file instantiations here)
// These would be the same as in your original code, but now they work with
// the integrated warp scheduler

// Example ALU instantiation (you'll need to add the rest)
data_t alu_out [THREADS_PER_WARP];
data_t scalar_alu_out;

// Scalar ALU
data_t scalar_int_alu_result;
logic alu_enable;
assign alu_enable = execute_stage_reg.valid;

alu scalar_alu_inst(
    .clk(clk),
    .rst(reset),
    .enable(alu_enable),
    .pc(execute_stage_reg.pc),
    .ALUop1(scalar_op1),
    .ALUop2(scalar_op2),
    .IMM(execute_stage_reg.immediate),
    .instruction(execute_stage_reg.alu_instruction),
    .Result(scalar_int_alu_result)
);

assign scalar_alu_out = scalar_int_alu_result; // Simplified

// Add your register files, LSUs, and other functional units here...

endmodule