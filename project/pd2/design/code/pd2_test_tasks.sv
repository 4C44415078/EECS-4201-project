// Checks immediate value against expected immediate value
task check_imm_value(input logic [31:0] expected_value, input logic [31:0] actual_imm);
   if (actual_imm == expected_value) begin
      $display("Passed Immediate Value Test.");
   end
   else begin
      $error("Failed.\n Expected: 0x%h, Got: 0x%h", expected_value, actual_imm);
   end
endtask

// Signal name strings for debugging.
string signal_name [6:0]= {"pcsel", "immsel", "regwren", "rs1sel", "rs2sel", "memren", "memwren"};
// Checks control signals against expected control signals.
task check_control_signal(
   input logic [6:0] expected_signal,
   input logic [6:0] actual_signal,
   input logic [1:0] expected_wbsel,
   input logic [1:0] wbsel,
   input logic [3:0] expected_alusel,
   input logic [3:0] alusel
);
   begin
      int control_fail = 0;
      for (int i = 0; i < 7; i++) begin
         if (actual_signal[i] !== expected_signal[i]) begin
            $error("Control Signal %s mismatch: Expected: 0x%h Got: 0x%h", signal_name[i], expected_signal[i], actual_signal[i]);
            control_fail++;
         end
      end
      if (wbsel !== expected_wbsel) begin
         $error("Control Signal wbsel mismatch: Expected: 0x%h Got 0x%h", expected_wbsel, wbsel);
         control_fail++;
      end
      if (alusel !== expected_alusel) begin
         $error("Control Signal alusel mismatch: Expected: 0x%h Got 0x%h", expected_alusel, alusel);
         control_fail++;
      end
      if (control_fail == 0) begin
         $display("Passed Control Signal Test.");
      end
   end
endtask