
task check_imm_value(input logic [31:0] expected_value);
   assert(imm == expected_value) begin
      $display("Passed Immediate Value Test.\n");
   end
   else begin
      $error("Failed.\n Expected: 0x%h, Got: 0x%h\n",expected_value, imm);
   end
endtask


String [6:0] signal_names= {"pcsel", "immsel", "regwren", "rs1sel", "rs2sel", "memren", "memwren"};
task check_control_signal(
   input logic [7:0] expected_signal,
   input logic [7:0] actual_signal,
   input logic [1:0] expected_wbsel,
   input logic [3:0] expected_alusel,
);
   begin
      int test_fail = 0;
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

task check_decode (
   input logic [6:0] expected_opcode,
   input logic [4:0] expected_rd,
   input logic [4:0] expected_rs1,
   input logic [4:0] expected_rs2,
   input logic [4:0] expected_funct7,
   input logic [4:0] expected_funct3,
);
   int test_fail = 0;
   begin
      if (opcode !== expected_opcode) begin
         $error("\nOpcode mismatch: Expected: 0x%h Got 0x%h\n", expected_opcode, opcode);
         test_fail++;
      end
      if (rd !== expected_rd) begin
         $error("\nDestination Register (RD) mismatch: Expected: 0x%h Got 0x%h\n", expected_rd, rd);
         test_fail++;
      end
      if (rs1 !== expected_rs1) begin
         $error("\nSource Register 1 (RS1) mismatch: Expected: 0x%h Got 0x%h\n", expected_rs1, rs1);
         test_fail++;
      end
      if (rs2 !== expected_rs2) begin
         $error("\nSource Register 2 (RS2) mismatch: Expected: 0x%h Got 0x%h\n", expected_rs2, rs2);
         test_fail++;
      end
      if (funct7 !== expected_funct7) begin
         $error("\nFunct7 mismatch: Expected: 0x%h Got 0x%h\n", expected_funct7, funct7);
         test_fail++;
      end
      if (funct3 !== expected_funct3) begin
         $error("\nFunct3 mismatch: Expected: 0x%h Got 0x%h\n", expected_funct3, funct3);
         test_fail++;
      end
      if (test_fail == 0) begin
         $display("\nPassed Decode Test.\n");
      end
   end
endtask