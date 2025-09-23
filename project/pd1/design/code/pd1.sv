/*
 * Module: pd1
 *
 * Description: Top level module that will contain sub-module instantiations.
 *
 * Inputs:
 * 1) clk
 * 2) reset signal
 */

module pd1 #(
    parameter int AWIDTH = 32,
    parameter int DWIDTH = 32)(
    input logic clk,
    input logic reset
);

 /*
  * Instantiate other submodules and
  * probes. To be filled by student...
  *
  */

    fetch #(
        .AWIDTH(AWIDTH),
        .DWIDTH(DWIDTH),
        .BASE_ADDR(32'h01000000)
    )(
        .clk(clk),
        .rst(rst),
        .pc_o(pc_o),
        .insn_o(insn_o)
    );

    memory #(
        .AWIDTH(AWIDTH),
        .DWIDTH(DWIDTH),
        .BASE_ADDR(32'h01000000)
    ) memory_pd1 (
        .clk(clk),
        .rst(rst),
        .addr_i(##SOMETHING),
        .data_i(DWIDTH'd0),
        .read_en_i(1'b1),
        .write_en_i(1'b0),
        .data_o(##SOMETHING)
    );

endmodule : pd1