
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
logic decoded_reg_write_enable ;
reg_input_mux_t decoded_reg_input_mux ;
data_t decoded_immediate ;
logic decoded_branch ;
logic decoded_scalar_instruction ;
logic [4:0] decoded_rd_address ;
logic [4:0] decoded_rs1_address ;
logic [4:0] decoded_rs2_address ;
logic [4:0] decoded_alu_instruction ;
logic decoded_halt ;
logic [1:0] floatingRead_flag ;
logic floatingWrite_flag ;

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

// ALU/LSU Operands and Results
data_t final_op1 [THREADS_PER_WARP];
data_t final_op2 [THREADS_PER_WARP];
data_t alu_out [THREADS_PER_WARP];
data_t scalar_alu_out;
data_t lsu_out [THREADS_PER_WARP];
lsu_state_t lsu_state [THREADS_PER_WARP];
data_t scalar_lsu_out;
lsu_state_t scalar_lsu_state;
data_t vector_to_scalar_data ;

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
    // $display("Scalar_int1 ", scalar_int_rs1);
    // $display("Scalar_float2 ", scalar_float_rs2);
    case(floatingRead_flag)
        2'b00: {scalar_op1, scalar_op2} = {scalar_int_rs1, scalar_int_rs2};
        2'b01: {scalar_op1, scalar_op2} = {scalar_float_rs1, scalar_int_rs2};
        2'b10: {scalar_op1, scalar_op2} = {scalar_int_rs1, scalar_float_rs2};
        2'b11: {scalar_op1, scalar_op2} = {scalar_float_rs1, scalar_float_rs2};
        default: {scalar_op1, scalar_op2} = {scalar_int_rs1, scalar_int_rs2};
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
        case(floatingRead_flag)
            2'b00: {vector_op1, vector_op2} = {vector_int_rs1[i],   vector_int_rs2[i]};
            2'b01: {vector_op1, vector_op2} = {vector_float_rs1[i], vector_int_rs2[i]};
            2'b10: {vector_op1, vector_op2} = {vector_int_rs1[i],   vector_float_rs2[i]};
            2'b11: {vector_op1, vector_op2} = {vector_float_rs1[i], vector_float_rs2[i]};
            default: {vector_op1, vector_op2} = {vector_int_rs1[i], vector_int_rs2[i]};
        endcase
        // $display("Scalar flag: ", decoded_scalar_instruction);
        // $display("Vector int rs1: ", vector_int_rs1[i]);
        // $display("Vector op2: ", vector_op2);
    end

    // This part was correct. It selects between scalar and vector operands.
    assign final_op1[i] = decoded_scalar_instruction ? scalar_op1 : vector_op1;
    assign final_op2[i] = decoded_scalar_instruction ? scalar_op2 : vector_op2;
end
endgenerate

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
        if (current_warp_state == WARP_UPDATE || current_warp_state == WARP_DONE 
        || current_warp_state == WARP_WAIT) begin

            logic  next_warp_candidate;
            logic found_valid_warp;
            logic  warp_index;

            next_warp_candidate = (current_warp + 1) ;
            found_valid_warp = 1'b0;

            $display("Block: %0d: Choosing next warp", block_id);
            
            warp_index = (next_warp_candidate + 0);
            
            // Only consider warps that are within the active range
            if (warp_index < num_warps) begin
                if ((warp_state[warp_index] != WARP_IDLE) && 
                    (warp_state[warp_index] != WARP_FETCH) && 
                    (warp_state[warp_index] != WARP_DONE)) begin
                    if (!found_valid_warp) begin
                        current_warp <= warp_index;
                        found_valid_warp = 1'b1;
                    end
                end
            end
            
            // If no valid warp found, stay with current warp
            if (!found_valid_warp) begin
                current_warp <= current_warp;
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
                warp_state <= WARP_REQUEST;
                // $display("Check Warp Req: ", warp_state);
            end
            WARP_REQUEST: begin
                // if (decoded_mem_read_enable_per_warp || decoded_mem_write_enable_per_warp) begin
                //         warp_state <= WARP_WAIT;
                //     end else begin
                //         // Not a memory op, so no need to wait for the MCU.
                //         warp_state <= WARP_EXECUTE;
                //     end
                // end
                // takes one cycle cause we are just changing the LSU state
                // if (decoded_mem_read_enable_per_warp || decoded_mem_write_enable_per_warp) begin
                //     // We have a memory op! Pulse the start signal for the MCU for one cycle.
                //     start_mcu_transaction <= 1'b1;
                // end
                // Always transition to WAIT after this stage.
                $display("In warp request");
                warp_state <= WARP_WAIT;
            end
            WARP_WAIT: begin
                //$display("WARP_WAIT");
                any_lsu_waiting = 1'b0;
                for (int i = 0; i < THREADS_PER_WARP; i++) begin
                    // Make sure no lsu_state = REQUESTING or WAITING
                    if (lsu_state[i] == LSU_REQUESTING || lsu_state[i] == LSU_WAITING) begin
                        // $display("Stuck in vector");
                        any_lsu_waiting = 1'b1;
                        break;
                    end
                end
                //$display("LSU_REQUESTING: ", scalar_lsu_state == LSU_REQUESTING);
                // $display("LSU_WAIT: ", scalar_lsu_state == LSU_WAITING);
                if (scalar_lsu_state == LSU_REQUESTING || scalar_lsu_state == LSU_WAITING) begin
                    // $display("Stuck in scalar");
                    any_lsu_waiting = 1'b1;
                end

                // If no LSU is waiting for a response, move onto the next stage
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
            
                if (decoded_scalar_instruction) begin
                    if (decoded_branch) begin
                        // Branch instruction
                        if (scalar_alu_out == 1) begin
                            // Branch taken
                            next_pc <= pc + decoded_immediate;
                        end else begin
                            // Branch not taken
                            next_pc <= pc + 1;
                        end
                    end else if (decoded_alu_instruction == JAL) begin
                        next_pc <= scalar_alu_out;
                    end else begin
                        // Other scalar instruction
                        next_pc <= pc + 1;
                    end
                end else begin
                    // Vector instruction
                    next_pc <= pc + 1;
                end
                
                $display("===================================");
                // The transition to UPDATE now only happens for non-sync instructions
                warp_state <= WARP_UPDATE;

                $display("Checking reg input mux for VECTOR_TO_SCALAR: ", decoded_reg_input_mux == VECTOR_TO_SCALAR);

                if (decoded_reg_input_mux == VECTOR_TO_SCALAR) begin
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
                if (decoded_halt) begin
                    $display("Block: %0d: Warp %0d: Finished executing instruction %h", block_id, current_warp, fetched_instruction);
                    warp_state <= WARP_DONE;
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
    .enable((current_warp == 0)), // Enable when current_warp matches and warp is active

    //.warp_execution_mask(warp_execution_mask),

    .warp_state(warp_state),

    .decoded_reg_write_enable(decoded_reg_write_enable && decoded_scalar_instruction && floatingWrite_flag),
    .decoded_reg_input_mux(decoded_reg_input_mux),
    .decoded_immediate(decoded_immediate),
    .decoded_rd_address(decoded_rd_address),
    .decoded_rs1_address(decoded_rs1_address),
    .decoded_rs2_address(decoded_rs2_address),

    .alu_out(scalar_alu_out),
    .lsu_out(scalar_lsu_out),
    .pc(pc),
    .vector_to_scalar_data(vector_to_scalar_data),

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
    .enable((current_warp == 0)), // Enable when current_warp matches and warp is active

    .warp_execution_mask(warp_execution_mask),

    .warp_state(warp_state),

    .decoded_reg_write_enable(decoded_reg_write_enable && ((decoded_scalar_instruction && !floatingWrite_flag) ||(decoded_reg_input_mux == VECTOR_TO_SCALAR))),
    .decoded_reg_input_mux(decoded_reg_input_mux),
    .decoded_immediate(decoded_immediate),
    .decoded_rd_address(decoded_rd_address),
    .decoded_rs1_address(decoded_rs1_address),
    .decoded_rs2_address(decoded_rs2_address),

    .alu_out(scalar_alu_out),
    .lsu_out(scalar_lsu_out),
    .pc(pc),
    .vector_to_scalar_data(vector_to_scalar_data),

    .rs1(scalar_int_rs1),
    .rs2(scalar_int_rs2)
);
// Vector float register file
reg_file #(
        .THREADS_PER_WARP(THREADS_PER_WARP)
    ) floating_reg_file_inst (
        .clk(clk),
        .reset(reset),
        .enable((current_warp == 0)), // Enable when current_warp matches and warp is active

        // Thread enable signals (execution mask)
        .thread_enable(warp_execution_mask),

        // Warp and block identifiers
        .warp_id(0),
        .block_id(block_id),
        .block_size(kernel_config.num_warps_per_block * THREADS_PER_WARP),
        .warp_state(warp_state),

        // Decoded instruction fields for this warp
        .decoded_reg_write_enable(decoded_reg_write_enable && !decoded_scalar_instruction && floatingWrite_flag),
        .decoded_reg_input_mux(decoded_reg_input_mux),
        .decoded_immediate(decoded_immediate),
        .decoded_rd_address(decoded_rd_address),
        .decoded_rs1_address(decoded_rs1_address),
        .decoded_rs2_address(decoded_rs2_address),

        // Inputs from ALU and LSU per thread
        .alu_out(alu_out), // ALU outputs for all threads
        .lsu_out(lsu_out),

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
        .enable((current_warp == 0)), // Enable when current_warp matches and warp is active

        // Thread enable signals (execution mask)
        .thread_enable(warp_execution_mask),

        // Warp and block identifiers
        .warp_id(0),
        .block_id(block_id),
        .block_size(kernel_config.num_warps_per_block * THREADS_PER_WARP),
        .warp_state(warp_state),

        // Decoded instruction fields for this warp
        .decoded_reg_write_enable(decoded_reg_write_enable && !decoded_scalar_instruction && !floatingWrite_flag),
        .decoded_reg_input_mux(decoded_reg_input_mux),
        .decoded_immediate(decoded_immediate),
        .decoded_rd_address(decoded_rd_address),
        .decoded_rs1_address(decoded_rs1_address),
        .decoded_rs2_address(decoded_rs2_address),

        // Inputs from ALU and LSU per thread
        .alu_out(alu_out), // ALU outputs for all threads
        .lsu_out(lsu_out),

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
wire is_scalar_float_op = decoded_scalar_instruction && (decoded_alu_instruction >= FADD);
wire is_scalar_int_op  = decoded_scalar_instruction && (decoded_alu_instruction < FADD);

// Scalar ALU
alu scalar_alu_inst(
    .clk(clk),
    .rst(reset),
    .enable(alu_enable),
    .pc(pc),
    .ALUop1(scalar_op1),
    .ALUop2(scalar_op2),
    .IMM(decoded_immediate),
    .instruction(decoded_alu_instruction),

    .Result(scalar_int_alu_result)
    // .EQ() // unused
);

// Scalar Floating ALU
floating_alu scalar_fpu_inst(
    .clk(clk),
    .rst(reset),
    .enable(alu_enable),
    .valid(alu_valid),
    .op1(scalar_op1),
    .op2(scalar_op2),
    .instruction(decoded_alu_instruction),

    .result(scalar_float_alu_result)
    // .EQ() // unused
);

logic more_fadd;
assign more_fadd = (decoded_alu_instruction >= FADD);
logic less_beqz;
assign less_beqz = (decoded_alu_instruction < BEQZ);

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
    .enable(decoded_scalar_instruction),

    .warp_state(warp_state),

    .decoded_mem_read_enable(decoded_mem_read_enable_per_warp),
    .decoded_mem_write_enable(decoded_mem_write_enable_per_warp),

    .rs1(scalar_op1),
    .rs2(scalar_op2),
    .imm(decoded_immediate),

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
        wire t_enable = current_warp_execution_mask[i] && !decoded_scalar_instruction;
       
        data_t vector_int_alu_result, vector_float_alu_result;
        logic is_float_op;

        // Vector ALU
        alu vector_alu_inst(
            .clk(clk),
            .rst(reset),
            .enable(alu_enable),
            .pc(pc),
            .ALUop1(final_op1[i]),
            .ALUop2(final_op2[i]),
            .IMM(decoded_immediate),
            .instruction(decoded_alu_instruction),

            .Result(vector_int_alu_result)
            // .EQ() // unused
        );
        // Vector Floating ALU
        floating_alu vector_fpu_inst(
            .clk(clk),
            .rst(reset),
            .enable(alu_enable),
            .valid(alu_valid),
            .op1(final_op1[i]),
            .op2(final_op2[i]),
            .instruction(decoded_alu_instruction),

            .result(vector_float_alu_result)
            // .EQ() // unused
        );

        assign alu_out[i] = (decoded_alu_instruction >= FADD) ? vector_float_alu_result : vector_int_alu_result;
        

        always_comb begin
            is_float_op = (decoded_alu_instruction >= FADD);
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

            .decoded_mem_read_enable(decoded_mem_read_enable_per_warp),
            .decoded_mem_write_enable(decoded_mem_write_enable_per_warp),

            .rs1(final_op1[i]),
            .rs2(final_op2[i]),
            .imm(decoded_immediate),

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
