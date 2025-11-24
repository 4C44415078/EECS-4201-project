`include "constants.svh"

`ifndef TIMEOUT
  `define TIMEOUT 32'd20
`endif

`ifndef RESET_CYCLES
  `define RESET_CYCLES 5
`endif

/*
 *make -f tb_main.make top_tb
 *make -f tb_main.make run-top_tb
*/

`define MEM_DEPTH 1048576
`define MEM_PATH "tb_stall.x"
`define LINE_COUNT 9

module top_tb;

   logic clk, rst;
   always #0.5 clk = ~clk;

   localparam int DWIDTH = 32;
   localparam int AWIDTH = 32;

   pd5 #(
      .AWIDTH(AWIDTH),
      .DWIDTH(DWIDTH)
   ) hut (
      .clk(clk),
      .reset(rst)
   );

   // Borrowed from clockgen.sv
   integer counter = 0;
   always_ff @(posedge clk) begin
      counter <= counter + 1;
      if (counter < `RESET_CYCLES) begin
         rst <= 1;
      end else begin
         rst <= 0;
      end
      if (counter == `TIMEOUT) begin
         $finish;
      end
   end

   initial begin
      $dumpfile("top_tb.vcd");
      $dumpvars(0, top_tb);
      clk = 1;
      $system("date");
   end
endmodule: top_tb

