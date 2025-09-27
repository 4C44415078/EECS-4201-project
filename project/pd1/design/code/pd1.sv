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

    // Probes for fetch.
    logic [AWIDTH - 1:0] fetch_pc_o;
    logic [DWIDTH - 1:0] fetch_insn_o;

    // Instantiate fetch module 
    fetch #(
        .AWIDTH(AWIDTH),
        .DWIDTH(DWIDTH),
        .BASEADDR(32'h01000000)
    ) pd1_fetch (
        .clk(clk),
        .rst(reset),
        .pc_o(fetch_pc_o),
        .insn_o(fetch_insn_o)
    );

    // Probes for memory.
    logic [AWIDTH - 1:0] memory_addr_i;
    logic [DWIDTH - 1:0] memory_data_i;
    logic memory_read_en_i;
    logic memory_write_en_i;
    logic [DWIDTH - 1:0] memory_data_o;
    logic memory_valid_o;
    
    // Instantiate memory module
    memory #(
        .AWIDTH(AWIDTH),
        .DWIDTH(DWIDTH),
        .BASE_ADDR(32'h01000000)
    ) pd1_memory (
        .clk(clk),
        .rst(reset),
        .addr_i(memory_addr_i),
        .data_i(memory_data_i),
        .read_en_i(memory_read_en_i),
        .write_en_i(memory_write_en_i),
        .data_o(memory_data_o),
        .valid_o(memory_valid_o)
    );

endmodule : pd1