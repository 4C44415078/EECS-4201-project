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
    output logic [31:0] imm_o
);
    /*
     * Process definitions to be filled by
     * student below...
     */

     logic [2:0] funct3;
     assign funct3 = insn_i[14:12];
     
    // Bit extraction for immediate value formats //
    // I-type
     logic [11:0] itype_imm;
     assign itype_imm = insn_i[31:20];

    // S-type. Value is non-contiguous.
     logic [11:0] stype_imm;
     assign stype_imm = {insn_i[31:25], insn_i[11:7]};

    // B-type. Value is non-contiguous, last bit is always 0 (preserve memory alignment)
     logic [12:0] btype_imm;
     assign btype_imm = {insn_i[31], insn_i[7], insn_i[30:25], insn_i[11:8], 1'b0};

     // U-type
     logic [19:0] utype_imm;
     assign utype_imm = {insn_i[31:12]};

     // J-type. Value is non-contiguous
     logic [19:0] jtype_imm;
     assign jtype_imm = {insn_i[31], insn_i[19:12], insn_i[20], insn_i[30:21]};

     always_comb begin
        case (opcode_i)
            /* 
             * I-type instructions including jalr.
             * Check funct3 for slli, srli, srai, sign extend imm_o, use shamt for shifts.
             * All other I-type non load instructions are sign extended.
             */
            `I_TYPE, `I_TYPE_JALR, `I_TYPE_L: begin
                case (funct3)
                    `F3_SLEFT, `F3_SRIGHT: begin
                        imm_o = {{27{1'b0}}, itype_imm[4:0]};
                    end
                    default: begin
                        imm_o = {{20{insn_i[31]}}, itype_imm};
                    end
                endcase
            end

            // S-type instructions, sign extend imm_o
            `S_TYPE: begin
                imm_o = {{20{insn_i[31]}}, stype_imm};
            end

            /* 
             * B-type instructions
             * Check funct3 for bltu, bgeu, zero extend imm_o.
             * All other branch instructions are sign extended.
             */
            `B_TYPE: begin
                case (funct3)
                    3'h6, 3'h7: begin
                        imm_o = {{19{1'b0}}, btype_imm};
                    end
                    default: begin
                        imm_o = {{19{insn_i[31]}}, btype_imm};
                    end
                endcase
            end

            /* 
             * U-type instructions
             * Upper 20 bits are insn[31:12], lower 12 bits are zero
            */
            `U_TYPE_LUI, `U_TYPE_AUIPC: begin
                imm_o = {utype_imm, 12'b0};
            end

            // J-type instruction, sign extend imm_o
            `J_TYPE: begin
                imm_o = {{11{insn_i[31]}}, jtype_imm, 1'b0};
            end

            default: begin
                // Default case. Set imm_o to zero
                imm_o = 32'b0;
            end
        endcase
     end

endmodule : igen
