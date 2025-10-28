/*
 * Module: control
 *
 * Description: This module sets the control bits (control path) based on the decoded
 * instruction. Note that this is part of the decode stage but housed in a separate
 * module for better readability, debug and design purposes.
 *
 * -------- REPLACE THIS FILE WITH THE CONTROL MODULE DEVELOPED IN PD2 -----------
 */
/*
 * Module: control
 *
 * Description: This module sets the control bits (control path) based on the decoded
 * instruction. Note that this is part of the decode stage but housed in a separate
 * module for better readability, debug and design purposes.
 *
 * Inputs:
 * 1) DWIDTH instruction ins_i
 * 2) 7-bit opcode opcode_i
 * 3) 7-bit funct7 funct7_i
 * 4) 3-bit funct3 funct3_i
 *
 * Outputs:
 * 1) 1-bit PC select pcsel_o
 * 2) 1-bit Immediate select immsel_o
 * 3) 1-bit register write en regwren_o
 * 4) 1-bit rs1 select rs1sel_o
 * 5) 1-bit rs2 select rs2sel_o
 * 6) k-bit ALU select alusel_o
 * 7) 1-bit memory read en memren_o
 * 8) 1-bit memory write en memwren_o
 * 9) 2-bit writeback sel wbsel_o
 */

`include "constants.svh"

module control #(
	parameter int DWIDTH=32
)(
	// inputs
    input logic [DWIDTH-1:0] insn_i,
    input logic [6:0] opcode_i,
    input logic [6:0] funct7_i,
    input logic [2:0] funct3_i,

    // outputs
    output logic pcsel_o,
    output logic immsel_o,
    output logic regwren_o,
    output logic rs1sel_o,
    output logic rs2sel_o,
    output logic memren_o,
    output logic memwren_o,
    output logic [1:0] wbsel_o,
    output logic [3:0] alusel_o
);

    /*
     * Process definitions to be filled by
     * student below...
     */

    always_comb begin
        case (opcode_i)
            /* 
             * R-type instruction controls.
             * Check funct7 and funct3 to determine ALU op.
             * Write back is from ALU.
             */
            `R_TYPE: begin
                pcsel_o = 1'b0;
                immsel_o = 1'b0;
                regwren_o = 1'b1;
                rs1sel_o = 1'b1;
                rs2sel_o = 1'b1;
                memren_o = 1'b0;
                memwren_o = 1'b0;
                wbsel_o = `WB_ALU;
                case (funct3_i)
                    `F3_ADD: begin
                        alusel_o = (funct7_i == 7'h00) ? `ALU_ADD : `ALU_SUB;
                    end
                    `F3_XOR: begin
                        alusel_o = `ALU_XOR;
                    end
                    `F3_OR: begin
                        alusel_o = `ALU_OR;
                    end
                    `F3_AND: begin
                        alusel_o = `ALU_AND;
                    end
                    `F3_SLEFT: begin
                        alusel_o = `ALU_SLL;
                    end
                    `F3_SRIGHT: begin
                        alusel_o = (funct7_i == 7'h00) ? `ALU_SRL : `ALU_SRA;
                    end
                    `F3_SLT: begin
                        alusel_o = `ALU_SLT;
                    end
                    `F3_SLTU: begin
                        alusel_o = `ALU_SLTU;
                    end
                    default: begin
                        alusel_o = `ALU_NOP; 
                    end
                endcase
            end

            /* 
             * I-type instruction controls including immediate arithmetic and jalr
             * Check funct3 for slli, srli, srai.
             * Write back is from ALU.
             */
            `I_TYPE: begin
                pcsel_o = 1'b0;
                immsel_o = 1'b1;
                regwren_o = 1'b1;
                rs1sel_o = 1'b1;
                rs2sel_o = 1'b0;
                memren_o = 1'b0;
                memwren_o = 1'b0;
                wbsel_o = `WB_ALU;
                case (funct3_i)
                    `F3_ADD: begin
                        alusel_o = `ALU_ADD;
                    end
                    `F3_XOR: begin
                        alusel_o = `ALU_XOR;
                    end
                    `F3_OR: begin
                        alusel_o = `ALU_OR;
                    end
                    `F3_AND: begin
                        alusel_o = `ALU_AND;
                    end
                    `F3_SLEFT: begin
                        alusel_o = `ALU_SLL;
                    end
                    `F3_SRIGHT: begin
                        alusel_o = (funct7_i == 7'h00) ? `ALU_SRL : `ALU_SRA;
                    end
                    `F3_SLT: begin
                        alusel_o = `ALU_SLT;
                    end
                    `F3_SLTU: begin
                        alusel_o = `ALU_SLTU;
                    end
                    default: begin
                        alusel_o = `ALU_NOP;
                    end
                endcase
            end

            /* 
             * I-type load instruction controls.
             * ALU used to compute address.
             * Write back is from memory.
             */
            `I_TYPE_L: begin
                pcsel_o = 1'b0;
                immsel_o = 1'b1;
                regwren_o = 1'b1;
                rs1sel_o = 1'b1;
                rs2sel_o = 1'b0;
                memren_o = 1'b1;
                memwren_o = 1'b0;
                wbsel_o = `WB_MEM;
                alusel_o = `ALU_ADD;
            end

            /* 
             * I-type jalr instruction controls.
             * ALU used to compute new PC.
             * Write back is PC + 4.
             */ 
            `I_TYPE_JALR: begin
                pcsel_o = 1'b1;
                immsel_o = 1'b1;
                regwren_o = 1'b1;
                rs1sel_o = 1'b1;
                rs2sel_o = 1'b0;
                memren_o = 1'b0;
                memwren_o = 1'b0;
                wbsel_o = `WB_PC4;
                alusel_o = `ALU_ADD;
            end

            /* 
             * S-type instruction controls.
             * ALU used to compute offset.
             * wbsel_o doesn't matter since regwren_o = 0
             */
            `S_TYPE: begin
                pcsel_o = 1'b0;
                immsel_o = 1'b1;
                regwren_o = 1'b0;
                rs1sel_o = 1'b1;
                rs2sel_o = 1'b0;
                memren_o = 1'b0;
                memwren_o = 1'b1;
                wbsel_o = `WB_ALU;
                alusel_o = `ALU_ADD;
            end

            /* 
             * B-type instruction controls.
             * ALU used to compute new PC.
             * wbsel_o doesn't matter since regwren_o = 0
             */
            `B_TYPE: begin
                pcsel_o = 1'b1;
                immsel_o = 1'b1;
                regwren_o = 1'b0;
                rs1sel_o = 1'b1;
                rs2sel_o = 1'b1;
                memren_o = 1'b0;
                memwren_o = 1'b0;
                wbsel_o = `WB_ALU;
                alusel_o = `ALU_ADD;
            end

            /* 
             * U-type AUIPC instruction controls.
             * ALU used to compute PC + immediate. rd = PC + (imm << 12)
             * Write Back is from ALU.
             */
            `U_TYPE_AUIPC: begin
                pcsel_o = 1'b0;
                immsel_o = 1'b1;
                regwren_o = 1'b1;
                rs1sel_o = 1'b0;
                rs2sel_o = 1'b0;
                memren_o = 1'b0;
                memwren_o = 1'b0;
                wbsel_o = `WB_ALU;
                alusel_o = `ALU_ADD;
            end

            /* 
             * U-type LUI instruction controls.
             * Using an ALU_NOP for now this might need to change. rd = imm << 12
             * Write Back is from igen.
             */
            `U_TYPE_LUI: begin
                pcsel_o = 1'b0;
                immsel_o = 1'b1;
                regwren_o = 1'b1;
                rs1sel_o = 1'b0;
                rs2sel_o = 1'b0;
                memren_o = 1'b0;
                memwren_o = 1'b0;
                wbsel_o = `WB_IMM;
                alusel_o = `ALU_NOP; 
            end

            /* 
             * J-type instruction controls.
             * ALU used to compute new PC.
             * Write back is PC + 4.
             */
            `J_TYPE: begin
                pcsel_o = 1'b1;
                immsel_o = 1'b1;
                regwren_o = 1'b1;
                rs1sel_o = 1'b0;
                rs2sel_o = 1'b0;
                memren_o = 1'b0;
                memwren_o = 1'b0;
                wbsel_o = `WB_PC4;
                alusel_o = `ALU_ADD;
            end

            /*
             * Default case. Set all control signals to zero.
             */
            default: begin
                pcsel_o = 1'b0;
                immsel_o = 1'b0;
                regwren_o = 1'b0;
                rs1sel_o = 1'b0;
                rs2sel_o = 1'b0;
                memren_o = 1'b0;
                memwren_o = 1'b0;
                wbsel_o = `WB_ALU;
                alusel_o = `ALU_NOP;
            end
        endcase
    end

endmodule : control


