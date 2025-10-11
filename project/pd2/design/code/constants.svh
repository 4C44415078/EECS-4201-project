/*
 * Good practice to define constants and refer to them in the
 * design files. An example of some constants are provided to you
 * as a starting point
 *
 */
`ifndef CONSTANTS_SVH_
`define CONSTANTS_SVH_

parameter logic [31:0] ZERO = 32'd0;

/*
 * Define constants as required...
 */

// Opcode constants
 `define R_TYPE       7'b0110011
 `define I_TYPE       7'b0010011
 `define I_TYPE_L     7'b0000011
 `define I_TYPE_JALR  7'b1100111
 `define S_TYPE       7'b0100011
 `define B_TYPE       7'b1100011
 `define J_TYPE       7'b1101111
 `define U_TYPE_LUI   7'b0110111
 `define U_TYPE_AUIPC 7'b0010111

// Reuseable signal constants
`define OPCODE insn_i[6:0]
`define FUNCT7 insn_i[31:25]
`define FUNCT3 insn_i[14:12]

// funct3 constants for R-type and I-type instructions
 `define F3_ADD 3'h0
 `define F3_XOR 3'h4
 `define F3_OR  3'h6
 `define F3_AND 3'h7
 `define F3_SLEFT 3'h1
 `define F3_SRIGHT 3'h5
 `define F3_SLT 3'h2
 `define F3_SLTU 3'h3

// ALU ops constants
 `define ALU_ADD 4'b0000
 `define ALU_SUB 4'b0001
 `define ALU_AND 4'b0010
 `define ALU_OR  4'b0011
 `define ALU_XOR 4'b0100
 `define ALU_SLL 4'b0101
 `define ALU_SRL 4'b0110
 `define ALU_SRA 4'b0111
 `define ALU_SLT 4'b1000
 `define ALU_SLTU 4'b1001
 `define ALU_NOP 4'b1111

// Write Back Constants
 `define WB_ALU 2'b00
 `define WB_MEM 2'b01
 `define WB_PC4 2'b10
 `define WB_IMM 2'b11

`endif
