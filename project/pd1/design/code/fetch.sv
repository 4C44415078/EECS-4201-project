/*
 * Module: fetch
 *
 * Description: Fetch stage
 *
 * Inputs:
 * 1) clk
 * 2) rst signal
 *
 * Outputs:
 * 1) AWIDTH wide program counter pc_o
 * 2) DWIDTH wide instruction output insn_o
 */

module fetch #(
    parameter int DWIDTH=32,
    parameter int AWIDTH=32,
    parameter int BASEADDR=32'h01000000
    )(
	// inputs
	input logic clk,
	input logic rst,
	// outputs	
	output logic [AWIDTH - 1:0] pc_o,
    output logic [DWIDTH - 1:0] insn_o
);
    /*
     * Process definitions to be filled by
     * student below...
     */

    memory #(
        .AWIDTH(AWIDTH),
        .DWIDTH(DWIDTH),
        .BASE_ADDR(BASEADDR)
    ) insn_mem (
        .clk(clk),
        .rst(rst),
        .addr_i(pc_o),
        .data_i(DWIDTH'd0),
        .read_en_i(1'b1),
        .write_en_i(1'b0),
        .data_o(insn_o)
    )

    always_ff @(posedge_clk) begin
        if (rst) begin
            pc_o <= AWIDTH'd0;
        end
        else begin
            pc_o <= pc + 4;
        end
    end

endmodule : fetch
				