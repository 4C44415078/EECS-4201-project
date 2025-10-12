
task check_imm_value(input logic [31:0] expected_value, input logic [31:0] actual_imm);
   assert(actual_imm == expected_value) begin
      $display("Passed Immediate Value Test.\n");
   end
   else begin
      $error("Failed.\n Expected: 0x%h, Got: 0x%h\n", expected_value, actual_imm);
   end
endtask


string signal_name [6:0]= {"pcsel", "immsel", "regwren", "rs1sel", "rs2sel", "memren", "memwren"};
task check_control_signal(
   input logic [6:0] expected_signal,
   input logic [6:0] actual_signal,
   input logic [1:0] expected_wbsel,
   input logic [1:0] wbsel,
   input logic [3:0] expected_alusel,
   input logic [3:0] alusel
);
   begin
      static int test_fail = 0;
      for (int i = 0; i < 7; i++) begin
         if (actual_signal[i] !== expected_signal[i]) begin
            $error("\nControl Signal %s mismatch: Expected: 0x%h Got: 0x%h\n", signal_name[i], expected_signal[i], actual_signal[i]);
            test_fail++;
         end
      end
      if (wbsel !== expected_wbsel) begin
         $error("\nControl Signal wbsel mismatch: Expected: 0x%h Got 0x%h\n", expected_wbsel, wbsel);
         test_fail++;
      end
      if (alusel !== expected_alusel) begin
         $error("\nControl Signal alusel mismatch: Expected: 0x%h Got 0x%h\n", expected_alusel, alusel);
         test_fail++;
      end
      if (test_fail == 0) begin
         $display("\nPassed Control Signal Test.\n");
      end
   end
endtask