/*
 * Module: igen
 *
 * Description: Immediate value generator
 * -------- REPLACE THIS FILE WITH THE IGEN MODULE DEVELOPED IN PD2 -----------
 */
/*
 * Module: igen
 *
 * Description: Immediate value generator
 *
 * Inputs:
 * 1) opcode opcode_i
 * 2) input instruction insn_i
 * Outputs:
 * 2) 32-bit immediate value imm_o
 */
`include "constants.svh"


module igen #(
    parameter int DWIDTH=32
    )(
    input logic [6:0] opcode_i,
    input logic [DWIDTH-1:0] insn_i,
    output logic [DWIDTH-1:0] imm_o
);
    /*
     * Process definitions to be filled by
     * student below...
     */
     

     always_comb begin
         case (opcode_i)
            /* 
             * I-type instructions including jalr.
             * Check FUNCT3 for slli, srli, srai, sign extend imm_o, use shamt for shifts.
             * All other I-type non load instructions are sign extended.
             */
            `I_TYPE, `I_TYPE_JALR, `I_TYPE_L: begin
                case (`FUNCT3)
                    `F3_SLEFT, `F3_SRIGHT: begin
                        imm_o = {{27{1'b0}}, `SHAMT_IMM};
                    end
                    default: begin
                        imm_o = {{20{insn_i[31]}}, `ITYPE_IMM};
                    end
                endcase
            end

            // S-type instructions, sign extend imm_o
            `S_TYPE: begin
                imm_o = {{20{insn_i[31]}}, `STYPE_IMM};
            end

            /* 
             * B-type instructions
             * Sign extend immediate value.
             */
            `B_TYPE: begin
                imm_o = {{19{`BTYPE_IMM[11]}}, `BTYPE_IMM, 1'b0};
            end

            /* 
             * U-type instructions
             * Upper 20 bits are insn[31:12], lower 12 bits are zero
            */
            `U_TYPE_LUI, `U_TYPE_AUIPC: begin
                imm_o = {`UTYPE_IMM, 12'b0};
            end

            // J-type instruction, sign extend imm_o
            `J_TYPE: begin
                imm_o = {{11{insn_i[31]}}, `JTYPE_IMM, 1'b0};
            end

            default: begin
                // Default case. Set imm_o to zero
                imm_o = 32'b0;
            end
         endcase
      end

endmodule : igen
