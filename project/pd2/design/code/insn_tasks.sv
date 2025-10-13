// Tasks file for producing instructions.

// Produces r-type instructions
task rtype_insn (
  input logic [6:0] opcode,
  input logic [4:0] rd,
  input logic [2:0] funct3,
  input [4:0] rs1,
  input [4:0] rs2,
  input [6:0] funct7,
  output [31:0] insn
);
  begin
    insn = {funct7, rs2, rs1, funct3, rd, opcode};
  end
endtask

// Produces i-type instructions
task itype_insn (
  input [6:0] opcode,
  input [4:0] rd,
  input [2:0] funct3,
  input [4:0] rs1,
  input [11:0] imm,
  output [31:0] insn
);
  begin
    insn = {imm, rs1, funct3, rd, opcode};
  end
endtask

// Produces s-type instructions
task stype_insn (
  input [6:0] opcode,
  input [2:0] funct3,
  input [4:0] rs1,
  input [4:0] rs2,
  input [11:0] imm,
  output [31:0] insn
);
  begin
    insn = {imm[11:5], rs2[4:0], rs1[4:0], funct3[2:0], imm[4:0], opcode[6:0]};
  end
endtask

// Produces b-type instructions
task btype_insn (
  input [6:0] opcode,
  input [2:0] funct3,
  input [4:0] rs1,
  input [4:0] rs2,
  input [11:0] imm,
  output [31:0] insn
);
  logic [12:0] imm_btype;
  begin
    imm_btype = {imm, 1'b0};
    insn = {imm_btype[12], imm_btype[10:5], rs2[4:0], rs1[4:0], funct3[2:0], imm_btype[4:1], imm_btype[11], opcode[6:0]};
  end
endtask

// Produces u-type instructions
task utype_insn (
  input [6:0] opcode,
  input [4:0] rd,
  input [19:0] imm,
  output [31:0] insn
);
  begin
    insn = {imm, rd, opcode};
  end
endtask


// Produces j-type instructions
task jtype_insn (
  input [6:0] opcode,
  input [4:0] rd,
  input [19:0] imm,
  output [31:0] insn
);
  // This is needed for bit shifting the immediate value for memory alignment
  logic [20:0] imm_jtype;
  begin
    imm_jtype = {imm, 1'b0};
    insn = {imm_jtype[20], imm_jtype[10:1], imm_jtype[11], imm_jtype[19:12], rd[4:0], opcode[6:0]};
  end
endtask
