`timescale 1ns/1ns
`include "common.svh"

module lsu (
    input wire clk,
    input wire reset,
    input wire enable, // Main enable for this LSU instance

    // These control signals now come from the execute stage pipeline register
    input wire decoded_mem_read_enable,
    input wire decoded_mem_write_enable,

    // Operands
    input data_t rs1, // Base address
    input data_t rs2, // Data for store
    input data_t imm,

    // Data Memory Interface
    output logic mem_read_valid,
    output data_memory_address_t mem_read_address,
    input logic mem_read_ready,
    input data_t mem_read_data,
    output logic mem_write_valid,
    output data_memory_address_t mem_write_address,
    output data_t mem_write_data,
    input logic mem_write_ready,

    // LSU Outputs
    output lsu_state_t lsu_state,
    output data_t lsu_out
);

    data_t offset_address;
    assign offset_address = rs1 + imm;

    // The internal FSM should be driven by the enable signals, not an external warp_state
    always_ff @(posedge clk) begin
        if (reset) begin
            lsu_state <= LSU_IDLE;
            lsu_out <= '0;
            mem_read_valid <= 1'b0;
            mem_write_valid <= 1'b0;
            mem_read_address <= '0;
            mem_write_address <= '0;
            mem_write_data <= '0;
        end else begin
            case (lsu_state)
                LSU_IDLE: begin
                    // If enabled and a memory op is decoded, start the request
                    if (enable && (decoded_mem_read_enable || decoded_mem_write_enable)) begin
                        lsu_state <= LSU_REQUESTING;
                    end
                end

                LSU_REQUESTING: begin
                    if (decoded_mem_read_enable) begin
                        $display("LSU: Requesting READ from address %h", offset_address);
                        mem_read_valid <= 1'b1;
                        mem_read_address <= offset_address;
                        lsu_state <= LSU_WAITING;
                    end else if (decoded_mem_write_enable) begin
                        $display("LSU: Requesting WRITE of data %h to address %h", rs2, offset_address);
                        mem_write_valid <= 1'b1;
                        mem_write_address <= offset_address;
                        mem_write_data <= rs2;
                        lsu_state <= LSU_WAITING;
                    end else begin
                        // This case shouldn't happen if we entered REQUESTING, but it's safe to handle.
                        lsu_state <= LSU_IDLE;
                    end
                end

                LSU_WAITING: begin
                    mem_read_valid <= 1'b0;  // De-assert valid after one cycle
                    mem_write_valid <= 1'b0; // De-assert valid after one cycle

                    if (decoded_mem_read_enable && mem_read_ready) begin
                        $display("LSU: Read complete. Data: %h", mem_read_data);
                        lsu_out <= mem_read_data;
                        lsu_state <= LSU_DONE;
                    end else if (decoded_mem_write_enable && mem_write_ready) begin
                        $display("LSU: Write complete.");
                        lsu_state <= LSU_DONE;
                    end
                end

                LSU_DONE: begin
                    // Automatically go back to IDLE. The pipeline will move on.
                    lsu_state <= LSU_IDLE;
                    lsu_out <= '0; // Clear output after it's been used
                end

                default: begin
                    lsu_state <= LSU_IDLE;
                end
            endcase
        end
    end
endmodule
