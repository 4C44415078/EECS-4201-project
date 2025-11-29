// Stall Logic Module
module stall_flush_logic (
   input logic hazard_i,
   input logic brtaken_i,
   output logic pc_en_o,
   output logic stall_o,
   output logic flush_o
);

  always_comb begin
    pc_en_o = 1'b1;
    stall_o = 1'b0;
    flush_o = 1'b0;
    if (hazard_i) begin
      pc_en_o = 1'b0;
      stall_o = 1'b1;
      flush_o = 1'b0;
    end
    else if (brtaken_i) begin
      pc_en_o = 1'b1;
      stall_o = 1'b0;
      flush_o = 1'b1;
    end
  end

endmodule: stall_flush_logic