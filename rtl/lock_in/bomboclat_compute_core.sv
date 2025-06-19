`timescale 1ns/1ns

// Pipelined compute core with 5-stage pipeline:
// 1. FETCH - Instruction fetch
// 2. DECODE - Instruction decode and register read
// 3. EXECUTE - ALU/LSU operation
// 4. MEMORY - Memory access completion
// 5. WRITEBACK - Register writeback

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
typedef logic warp_id_t;
//[$clog2(MAX_WARPS)-1:0]
localparam int NUM_LSUS = THREADS_PER_WARP + 1;

// Pipeline stage valid signals
logic fetch_valid, decode_valid, execute_valid, memory_valid, writeback_valid;
logic fetch_ready, decode_ready, execute_ready, memory_ready, writeback_ready;
logic fetch_stall, decode_stall, execute_stall, memory_stall;

// ========== WARP SCHEDULER STATE ==========
instruction_memory_address_t warp_pc [MAX_WARPS];
instruction_memory_address_t warp_next_pc [MAX_WARPS];
warp_state_t warp_states [MAX_WARPS];
logic warp_active [MAX_WARPS];
warp_mask_t warp_execution_masks [MAX_WARPS];
warp_id_t current_warp;
warp_id_t next_warp;
logic warp_switch_request;
logic found_ready_warp;

// ========== FETCH STAGE ==========
typedef struct packed {
    instruction_memory_address_t pc;
    logic warp_id;
    warp_mask_t execution_mask;
    logic valid;
} fetch_stage_t;

fetch_stage_t fetch_stage_reg, fetch_stage_next;
instruction_t fetched_instruction;
fetcher_state_t fetcher_state;

// ========== DECODE STAGE ==========
typedef struct packed {
    instruction_t instruction;
    instruction_memory_address_t pc;
    logic warp_id;
    warp_mask_t execution_mask;
    logic valid;
} decode_stage_t;

decode_stage_t decode_stage_reg, decode_stage_next;

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

// Register file outputs
data_t scalar_int_rs1, scalar_int_rs2;
data_t scalar_float_rs1, scalar_float_rs2;
data_t vector_int_rs1 [THREADS_PER_WARP];
data_t vector_int_rs2 [THREADS_PER_WARP];
data_t vector_float_rs1 [THREADS_PER_WARP];
data_t vector_float_rs2 [THREADS_PER_WARP];

// ========== EXECUTE STAGE ==========

data_t execute_op1_reg [THREADS_PER_WARP], execute_op1_next [THREADS_PER_WARP];
data_t execute_op2_reg [THREADS_PER_WARP], execute_op2_next [THREADS_PER_WARP];

typedef struct packed {
    instruction_t instruction;
    instruction_memory_address_t pc;
    logic warp_id;
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

    data_t scalar_op1;
    data_t scalar_op2;

    logic valid;
} execute_stage_t;

execute_stage_t execute_stage_reg, execute_stage_next;

// Execute stage operands and results
data_t final_op1 [THREADS_PER_WARP];
data_t final_op2 [THREADS_PER_WARP];
data_t scalar_op1, scalar_op2;
data_t alu_out [THREADS_PER_WARP];
data_t scalar_alu_out;

// ========== MEMORY STAGE ==========
typedef struct packed {
    instruction_t instruction;
    instruction_memory_address_t pc;
    logic warp_id;
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

memory_stage_t memory_stage_reg, memory_stage_next;
data_t alu_results_reg [THREADS_PER_WARP], alu_results_next [THREADS_PER_WARP];

data_t lsu_out [THREADS_PER_WARP];
lsu_state_t lsu_state [THREADS_PER_WARP];
data_t scalar_lsu_out;
lsu_state_t scalar_lsu_state;
logic any_lsu_waiting;

// ========== WRITEBACK STAGE ==========
typedef struct packed {
    instruction_t instruction;
    instruction_memory_address_t pc;
    logic warp_id;
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

data_t final_results_reg [THREADS_PER_WARP];
data_t final_results_next [THREADS_PER_WARP];

writeback_stage_t writeback_stage_reg, writeback_stage_next;

// Pipeline control and hazard detection
logic branch_taken;
instruction_memory_address_t branch_target;
data_t vector_to_scalar_data;

// Warp scheduling and control
warp_state_t warp_state;
data_t num_warps;
logic start_execution;
logic all_warps_done;
instruction_memory_address_t pc, next_pc;

assign num_warps = kernel_config.num_warps_per_block;

// ========== WARP SCHEDULER LOGIC ==========

// Determine if a warp is ready to be scheduled
function logic warp_is_ready(warp_id_t warp_id);
    //$display("warp_id: ", warp_id);
    //$display("warp_active[warp_id]: ", warp_active[warp_id]);
    return warp_active[warp_id] && 
           (warp_states[warp_id] == WARP_DECODE || 
            warp_states[warp_id] == WARP_EXECUTE || 
            warp_states[warp_id] == WARP_REQUEST ||
            (warp_states[warp_id] == WARP_FETCH && fetcher_state == FETCHER_DONE));
endfunction

// Round-robin warp scheduler
always_comb begin
    found_ready_warp = 1'b0;
    next_warp = current_warp;
    //$display("Current warp: ", current_warp);
    
    // Look for next ready warp starting from current_warp + 1
    for (int i = 1; i <= MAX_WARPS; i++) begin
        warp_id_t candidate = (current_warp + i) % MAX_WARPS;
        // $display("candidate: ", candidate);
        // // $display("num_warps ", num_warps);
        // $display("warp_is_ready(candidate): ", warp_is_ready(candidate));
        // $display("!found_ready_warp: ", !found_ready_warp);
        // $display("next_warp: ", next_warp);
        if (warp_is_ready(candidate) && !found_ready_warp) begin
            next_warp = candidate;
            found_ready_warp = 1'b1;
            break; //Found a candidate, stop searching
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

// ========== OPERAND SELECTION LOGIC ==========
always_comb begin
    scalar_op1 = '0;
    scalar_op2 = '0;
end

// ========== EXECUTE STAGE LOGIC ==========
always_comb begin
    execute_stage_next = execute_stage_reg;
    execute_op1_next = execute_op1_reg;
    execute_op2_next = execute_op2_reg;
    
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

        if (floatingRead_flag[0]) execute_stage_next.scalar_op1 = scalar_float_rs1;
        else                      execute_stage_next.scalar_op1 = scalar_int_rs1;
        
        if (floatingRead_flag[1]) execute_stage_next.scalar_op2 = scalar_float_rs2;
        else                      execute_stage_next.scalar_op2 = scalar_int_rs2;


        // Select and latch vector operands
        for (int i = 0; i < THREADS_PER_WARP; i++) begin
            if (floatingRead_flag[0]) execute_op1_next[i] = vector_float_rs1[i];
            else                      execute_op1_next[i] = vector_int_rs1[i];

            if (floatingRead_flag[1]) execute_op2_next[i] = vector_float_rs2[i];
            else                      execute_op2_next[i] = vector_int_rs2[i];
        end
        execute_stage_next.valid = 1'b1;
    end else if (execute_ready) begin
        execute_stage_next.valid = 1'b0;
    end
end

// ========== MEMORY STAGE LOGIC ==========
always_comb begin
    memory_stage_next = memory_stage_reg;
    alu_results_next = alu_results_reg;
    
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
        alu_results_next = alu_out;
        memory_stage_next.scalar_alu_result = scalar_alu_out;
        memory_stage_next.valid = 1'b1;
    end else if (memory_ready) begin
        memory_stage_next.valid = 1'b0;
    end
end

// ========== WRITEBACK STAGE LOGIC ==========
always_comb begin
    writeback_stage_next = writeback_stage_reg;
    final_results_next = final_results_reg;
    
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

always_comb begin
    any_lsu_waiting = 1'b0;
    for (int i = 0; i < THREADS_PER_WARP; i++) begin
            final_results_next[i] = (memory_stage_reg.reg_input_mux == LSU_OUT) ? lsu_out[i] : alu_results_reg[i];
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
        for (int i = 0; i < THREADS_PER_WARP; i = i + 1) begin
            final_results_reg[i] <= '0;
        end
            
        
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
            fetch_valid <= (warp_state == WARP_FETCH);
        end
        
        if (decode_ready) begin
            decode_stage_reg <= decode_stage_next;
            decode_valid <= fetch_valid && (fetcher_state == FETCHER_DONE);
        end
        
        if (execute_ready) begin
            execute_stage_reg <= execute_stage_next;
            execute_valid <= decode_valid;
            execute_op1_reg   <= execute_op1_next;
            execute_op2_reg   <= execute_op2_next;
        end
        
        if (memory_ready) begin
            memory_stage_reg <= memory_stage_next;
            memory_valid <= execute_valid;
        end
        
        if (writeback_ready) begin
            writeback_stage_reg <= writeback_stage_next;
            final_results_reg <= final_results_next;
            writeback_valid <= memory_valid && !memory_stall;        
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
        end else if (start_execution) begin
            if (writeback_stage_reg.valid && warp_active[writeback_stage_reg.warp_id]) begin
                logic completed_warp_id = writeback_stage_reg.warp_id;

                if (writeback_stage_reg.halt) begin
                    $display("Block: %0d: Warp %0d: Finished executing. HALT.", block_id, completed_warp_id);
                    warp_states[completed_warp_id] <= WARP_DONE;
                    warp_active[completed_warp_id] <= 1'b0;
                end else begin
                    // Update PC for the next instruction
                    instruction_memory_address_t pc_val = writeback_stage_reg.pc;
                    instruction_memory_address_t imm_val = writeback_stage_reg.immediate;
                    
                    if (writeback_stage_reg.branch && writeback_stage_reg.scalar_final_result == 1) begin
                        warp_pc[completed_warp_id] <= pc_val + imm_val;
                    end else begin
                        warp_pc[completed_warp_id] <= pc_val + 1;
                    end
                    
                    // Transition back to FETCH state to get the next instruction
                    warp_states[completed_warp_id] <= WARP_FETCH;
                    $display("Block: %0d: Warp %0d: Completed instruction %h at PC %h. Next PC: %h", 
                                block_id, completed_warp_id, writeback_stage_reg.instruction, pc_val, warp_pc[completed_warp_id]);
                end
            end
            
            // Update warp state based on pipeline progression
            if(execute_stage_reg.valid && warp_states[execute_stage_reg.warp_id] == WARP_REQUEST) begin
                if (execute_stage_reg.mem_read_enable || execute_stage_reg.mem_write_enable) begin
                    warp_states[execute_stage_reg.warp_id] <= WARP_WAIT;
                end else begin
                    warp_states[execute_stage_reg.warp_id] <= WARP_EXECUTE;
                end
            end

            if (decode_stage_reg.valid && warp_states[decode_stage_reg.warp_id] == WARP_DECODE) begin
                 warp_states[decode_stage_reg.warp_id] <= WARP_REQUEST;
            end

            if (fetch_stage_reg.valid && fetcher_state == FETCHER_DONE && warp_states[fetch_stage_reg.warp_id] == WARP_FETCH) begin
                $display("Block: %0d: Warp %0d: Fetched instruction %h at address %h", 
                                        block_id, fetch_stage_reg.warp_id, fetched_instruction, fetch_stage_reg.pc);
                warp_states[fetch_stage_reg.warp_id] <= WARP_DECODE;
            end
            
            // Handle stalls for memory
            if (memory_stage_reg.valid && any_lsu_waiting && warp_states[memory_stage_reg.warp_id] == WARP_WAIT) begin
                // The warp is correctly waiting, do nothing.
            end else if (memory_stage_reg.valid && !any_lsu_waiting && warp_states[memory_stage_reg.warp_id] == WARP_WAIT) begin
                // Memory operation finished, move to execute
                warp_states[memory_stage_reg.warp_id] <= WARP_EXECUTE;
            end

            // =================================================================

            // Warp switching logic
            $display("warp_switch_request: ", warp_switch_request);
            if (warp_switch_request && found_ready_warp && current_warp != next_warp) begin
                current_warp <= next_warp;
                $display("Block: %0d: Switching from warp %0d to warp %0d", block_id, current_warp, next_warp);
            end
            
            // Check if all warps are done
            all_warps_done = 1'b1;
            for (int i = 0; i < num_warps; i++) begin
                if (warp_active[i]) begin
                    all_warps_done = 1'b0;
                    break;
                end
            end
            if(all_warps_done) begin
                done <= 1'b1;
                $display("Block %0d: All warps finished. Core is done.", block_id);
            end
        end
    end
end

// ========== FUNCTIONAL UNITS (same as original) ==========

// Scalar ALU
data_t scalar_int_alu_result, scalar_float_alu_result;
logic alu_enable, alu_valid;
assign alu_enable = execute_valid;
assign alu_valid = execute_valid;

alu scalar_alu_inst(
    .clk(clk),
    .rst(reset),
    .enable(alu_enable),
    .pc(execute_stage_reg.pc),
    .ALUop1(execute_stage_reg.scalar_op1),
    .ALUop2(execute_stage_reg.scalar_op2),
    .IMM(execute_stage_reg.immediate),
    .instruction(execute_stage_reg.alu_instruction),
    .Result(scalar_int_alu_result)
);

floating_alu scalar_fpu_inst(
    .clk(clk),
    .rst(reset),
    .enable(alu_enable),
    .valid(alu_valid),
    .op1(execute_stage_reg.scalar_op1),
    .op2(execute_stage_reg.scalar_op2),
    .instruction(execute_stage_reg.alu_instruction),
    .result(scalar_float_alu_result)
);

assign scalar_alu_out = (execute_stage_reg.alu_instruction >= FADD) ? 
                       scalar_float_alu_result : scalar_int_alu_result;

always_comb begin 
    // $display("reset: ", reset);
    $display("LSU enable: ", execute_stage_reg.scalar_instruction && execute_stage_reg.valid);
end
// Scalar LSU
lsu scalar_lsu_inst(
    .clk(clk),
    .reset(reset),
    .enable(execute_stage_reg.scalar_instruction && execute_stage_reg.valid ),
    //.warp_state(execute_stage_reg.valid ? WARP_WAIT : WARP_IDLE),
    .decoded_mem_read_enable(execute_stage_reg.mem_read_enable),
    .decoded_mem_write_enable(execute_stage_reg.mem_write_enable),
    .rs1(execute_stage_reg.scalar_op1),
    .rs2(execute_stage_reg.scalar_op2),
    .imm(execute_stage_reg.immediate),
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

// Vector functional units
generate
    for (genvar i = 0; i < THREADS_PER_WARP; i = i + 1) begin : g_vector_units
        wire t_enable = execute_stage_reg.execution_mask[i] && !execute_stage_reg.scalar_instruction && execute_valid;
       
        data_t vector_int_alu_result, vector_float_alu_result;

        alu vector_alu_inst(
            .clk(clk),
            .rst(reset),
            .enable(alu_enable),
            .pc(execute_stage_reg.pc),
            .ALUop1(execute_op1_reg[i]),
            .ALUop2(execute_op2_reg[i]),
            .IMM(execute_stage_reg.immediate),
            .instruction(execute_stage_reg.alu_instruction),
            .Result(vector_int_alu_result)
        );

        floating_alu vector_fpu_inst(
            .clk(clk),
            .rst(reset),
            .enable(alu_enable),
            .valid(alu_valid),
            .op1(execute_op1_reg[i]),
            .op2(execute_op2_reg[i]),
            .instruction(execute_stage_reg.alu_instruction),
            .result(vector_float_alu_result)
        );

        assign alu_out[i] = (execute_stage_reg.alu_instruction >= FADD) ? 
                           vector_float_alu_result : vector_int_alu_result;

        lsu lsu_inst(
            .clk(clk),
            .reset(reset),
            .enable(t_enable),
            //.warp_state(execute_stage_reg.valid ? WARP_WAIT : WARP_IDLE),
            .decoded_mem_read_enable(execute_stage_reg.mem_read_enable),
            .decoded_mem_write_enable(execute_stage_reg.mem_write_enable),
            .rs1(execute_op1_reg[i]),
            .rs2(execute_op2_reg[i]),
            .imm(execute_stage_reg.immediate),
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

// ========== REGISTER FILES (modified for pipeline) ==========

// Note: Register files need to use writeback stage signals for writes
// but decode stage signals for reads to avoid read-after-write hazards

// Scalar float register file
floating_scalar_reg_file #(
    .DATA_WIDTH(32)
) floating_scalar_reg_file_inst (
    .clk(clk),
    .reset(reset),
    .enable(1'b1), // Always enabled for pipeline
    .warp_state(writeback_valid ? WARP_UPDATE : WARP_IDLE),
    .decoded_reg_write_enable(writeback_valid && writeback_stage_reg.reg_write_enable && 
                             writeback_stage_reg.scalar_instruction && writeback_stage_reg.floatingWrite_flag),
    .decoded_reg_input_mux(writeback_stage_reg.reg_input_mux),
    .decoded_immediate(writeback_stage_reg.immediate), 
    .decoded_rd_address(writeback_stage_reg.rd_address),
    .decoded_rs1_address(decoded_rs1_address), // Use decode stage for reads
    .decoded_rs2_address(decoded_rs2_address), // Use decode stage for reads
    .alu_out(writeback_stage_reg.scalar_final_result),
    .lsu_out(writeback_stage_reg.scalar_final_result),
    .pc(writeback_stage_reg.pc),
    .vector_to_scalar_data(vector_to_scalar_data),
    .rs1(scalar_float_rs1),
    .rs2(scalar_float_rs2)
);

// Scalar integer register file
scalar_reg_file #(
    .DATA_WIDTH(32)
) scalar_reg_file_inst (
    .clk(clk),
    .reset(reset),
    .enable(1'b1), // Always enabled for pipeline
    .warp_state(writeback_valid ? WARP_UPDATE : WARP_IDLE),
    .decoded_reg_write_enable(writeback_valid && writeback_stage_reg.reg_write_enable && 
                             writeback_stage_reg.scalar_instruction && !writeback_stage_reg.floatingWrite_flag),
    .decoded_reg_input_mux(writeback_stage_reg.reg_input_mux),
    .decoded_immediate(writeback_stage_reg.immediate), // Not used in writeback
    .decoded_rd_address(writeback_stage_reg.rd_address),
    .decoded_rs1_address(decoded_rs1_address), // Use decode stage for reads
    .decoded_rs2_address(decoded_rs2_address), // Use decode stage for reads
    .alu_out(writeback_stage_reg.scalar_final_result),
    .lsu_out(writeback_stage_reg.scalar_final_result),
    .pc(writeback_stage_reg.pc),
    .vector_to_scalar_data(vector_to_scalar_data),
    .warp_execution_mask(),
    .rs1(scalar_int_rs1),
    .rs2(scalar_int_rs2)
);

// Vector integer register files
generate
    for (genvar i = 0; i < THREADS_PER_WARP; i = i + 1) begin : g_vector_int_regfiles
        reg_file #(
            .DATA_WIDTH(32)
        ) vector_reg_file_inst (
            .clk(clk),
            .reset(reset),
            .enable(1'b1), // Always enabled for pipeline
            .thread_enable(writeback_stage_reg.execution_mask[i]),
            .warp_state(writeback_valid ? WARP_UPDATE : WARP_IDLE),
            .decoded_reg_write_enable(writeback_valid && writeback_stage_reg.reg_write_enable && 
                                     !writeback_stage_reg.scalar_instruction && !writeback_stage_reg.floatingWrite_flag &&
                                     writeback_stage_reg.execution_mask[i]),
            .decoded_reg_input_mux(writeback_stage_reg.reg_input_mux),
            .decoded_immediate(32'h0), // Not used in writeback
            .decoded_rd_address(writeback_stage_reg.rd_address),
            .decoded_rs1_address(decoded_rs1_address), // Use decode stage for reads
            .decoded_rs2_address(decoded_rs2_address), // Use decode stage for reads
            .alu_out(final_results_reg),
            .lsu_out(final_results_reg),
            .warp_id(0),
            // .pc(writeback_stage_reg.pc),
            // .thread_id(i[4:0]),
            .block_id(block_id),
            .rs1(vector_int_rs1),
            .rs2(vector_int_rs2)
        );
    end
endgenerate

// Vector floating-point register files
generate
    for (genvar i = 0; i < THREADS_PER_WARP; i = i + 1) begin : g_vector_float_regfiles
        reg_file #(
            .DATA_WIDTH(32)
        ) floating_vector_reg_file_inst (
            .clk(clk),
            .reset(reset),
            .enable(1'b1), // Always enabled for pipeline
            .thread_enable(writeback_stage_reg.execution_mask[i]),
            .warp_state(writeback_valid ? WARP_UPDATE : WARP_IDLE),
            .decoded_reg_write_enable(writeback_valid && writeback_stage_reg.reg_write_enable && 
                                     !writeback_stage_reg.scalar_instruction && writeback_stage_reg.floatingWrite_flag &&
                                     writeback_stage_reg.execution_mask[i]),
            .decoded_reg_input_mux(writeback_stage_reg.reg_input_mux),
            .decoded_immediate(32'h0), // Not used in writeback
            .decoded_rd_address(writeback_stage_reg.rd_address),
            .decoded_rs1_address(decoded_rs1_address), // Use decode stage for reads
            .decoded_rs2_address(decoded_rs2_address), // Use decode stage for reads
            .alu_out(final_results_reg),
            .lsu_out(final_results_reg),
            // .pc(writeback_stage_reg.pc),
            // .thread_id(i[4:0]),
            .warp_id(0),
            .block_id(block_id),
            .rs1(vector_float_rs1),
            .rs2(vector_float_rs2)
        );
    end
endgenerate

// ========== HAZARD DETECTION AND FORWARDING ==========

// Data hazard detection logic
logic [2:0] hazard_rs1, hazard_rs2;
logic stall_for_hazard;

always_comb begin
    hazard_rs1 = 3'b000;
    hazard_rs2 = 3'b000;
    stall_for_hazard = 1'b0;
    
    // Check for RAW hazards between decode and later stages
    if (decode_valid) begin
        // Check against execute stage
        if (execute_valid && execute_stage_reg.reg_write_enable && 
            execute_stage_reg.rd_address != 0) begin
            if (decoded_rs1_address == execute_stage_reg.rd_address) begin
                hazard_rs1[0] = 1'b1;
            end
            if (decoded_rs2_address == execute_stage_reg.rd_address) begin
                hazard_rs2[0] = 1'b1;
            end
        end
        
        // Check against memory stage
        if (memory_valid && memory_stage_reg.reg_write_enable && 
            memory_stage_reg.rd_address != 0) begin
            if (decoded_rs1_address == memory_stage_reg.rd_address) begin
                hazard_rs1[1] = 1'b1;
            end
            if (decoded_rs2_address == memory_stage_reg.rd_address) begin
                hazard_rs2[1] = 1'b1;
            end
        end
        
        // Check against writeback stage
        if (writeback_valid && writeback_stage_reg.reg_write_enable && 
            writeback_stage_reg.rd_address != 0) begin
            if (decoded_rs1_address == writeback_stage_reg.rd_address) begin
                hazard_rs1[2] = 1'b1;
            end
            if (decoded_rs2_address == writeback_stage_reg.rd_address) begin
                hazard_rs2[2] = 1'b1;
            end
        end
        
        // For simplicity, stall on any load-use hazard
        // In a more sophisticated design, we could implement forwarding
        if ((hazard_rs1 != 3'b000) || (hazard_rs2 != 3'b000)) begin
            // Check if it's a load instruction that causes the hazard
            if ((execute_valid && execute_stage_reg.reg_input_mux == LSU_OUT) ||
                (memory_valid && memory_stage_reg.reg_input_mux == LSU_OUT && memory_stall)) begin
                stall_for_hazard = 1'b1;
            end
        end
    end
end

// ========== BRANCH PREDICTION AND CONTROL ==========

// Simple branch prediction (always not taken)
logic branch_prediction;
logic branch_mispredicted;
instruction_memory_address_t predicted_pc, actual_pc;

always_comb begin
    // Simple prediction: always not taken
    branch_prediction = 1'b0;
    predicted_pc = pc + 1;
    
    // Check for misprediction in writeback stage
    if (writeback_valid && writeback_stage_reg.branch) begin
        if (writeback_stage_reg.scalar_final_result == 1) begin
            actual_pc = writeback_stage_reg.pc + writeback_stage_reg.immediate;
        end else begin
            actual_pc = writeback_stage_reg.pc + 1;
        end
        
        branch_mispredicted = (actual_pc != (writeback_stage_reg.pc + 1));
    end else begin
        branch_mispredicted = 1'b0;
        actual_pc = predicted_pc;
    end
end

// Pipeline flush logic for branch misprediction
logic flush_pipeline;
assign flush_pipeline = branch_mispredicted;

// ========== ENHANCED PIPELINE CONTROL ==========

// Update stall conditions to include hazard detection
always_comb begin
    // Memory stage stalls if LSUs are still processing
    memory_stall = 1'b0;
    for (int i = 0; i < THREADS_PER_WARP; i++) begin
        if (lsu_state[i] == LSU_REQUESTING || lsu_state[i] == LSU_WAITING) begin
            memory_stall = 1'b1;
            break;
        end
    end
    if (scalar_lsu_state == LSU_REQUESTING || scalar_lsu_state == LSU_WAITING) begin
        memory_stall = 1'b1;
    end
    
    // Execute stage stalls if memory stage is stalled or hazard detected
    execute_stall = (memory_stall && memory_valid) || stall_for_hazard;
    
    // Decode stage stalls if execute stage is stalled
    decode_stall = execute_stall && execute_valid;
    
    // Fetch stage stalls if decode stage is stalled or instruction fetch not ready
    fetch_stall = (decode_stall && decode_valid) || 
                  (warp_state == WARP_FETCH && fetcher_state != FETCHER_DONE);
end

// ========== PERFORMANCE COUNTERS ==========

// Optional performance monitoring counters
logic [31:0] cycle_count;
logic [31:0] instruction_count;
logic [31:0] stall_count;
logic [31:0] branch_count;
logic [31:0] branch_mispredict_count;

always_ff @(posedge clk) begin
    if (reset) begin
        cycle_count <= 32'h0;
        instruction_count <= 32'h0;
        stall_count <= 32'h0;
        branch_count <= 32'h0;
        branch_mispredict_count <= 32'h0;
    end else if (start_execution && !done) begin
        cycle_count <= cycle_count + 1;
        
        if (writeback_valid) begin
            instruction_count <= instruction_count + 1;
        end
        
        if (fetch_stall || decode_stall || execute_stall || memory_stall) begin
            stall_count <= stall_count + 1;
        end
        
        if (writeback_valid && writeback_stage_reg.branch) begin
            branch_count <= branch_count + 1;
            if (branch_mispredicted) begin
                branch_mispredict_count <= branch_mispredict_count + 1;
            end
        end
    end
end

endmodule
