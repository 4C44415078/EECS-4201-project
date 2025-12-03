/*
 * Module: fetch
 *
 * Description: Fetch stage
 *
 * -------- REPLACE THIS FILE WITH THE MEMORY MODULE DEVELOPED IN PD1 -----------
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 *
 * Outputs:
 * 1) AWIDTH wide program counter pc_o
 * 2) DWIDTH wide instruction output insn_o
 */
`include "constants.svh"

module fetch #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32,
    parameter int BASEADDR=32'h01000000
    )(
	// inputs
	input logic clk,
	input logic rst,
    input logic [AWIDTH - 1:0] next_pc_i,
    input logic pc_en_i,
	// outputs	
	output logic [AWIDTH - 1:0] pc_o,
    output logic [DWIDTH - 1:0] insn_o
);
    
    logic [AWIDTH - 1:0] pc = BASEADDR;
    assign pc_o = pc;
      
    always_ff @(posedge clk) begin 
        if (rst) begin
            pc <= BASEADDR;
        end 
        else if (pc_en_i) begin 
            pc <= next_pc_i + 32'd4;
        end
    end

endmodule : fetch
				

