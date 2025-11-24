// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+10,(vlSelfRef.top_tb__DOT__rst));
        bufp->chgIData(oldp+11,(vlSelfRef.top_tb__DOT__counter),32);
        bufp->chgIData(oldp+12,(((IData)(vlSelfRef.top_tb__DOT__rst)
                                  ? 0U : vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)),32);
        bufp->chgBit(oldp+13,((1U & (~ (IData)(vlSelfRef.top_tb__DOT__rst)))));
        bufp->chgIData(oldp+14,(vlSelfRef.top_tb__DOT__hut__DOT__m_reg_pc),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top_tb__DOT__hut__DOT__m_reg_res),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top_tb__DOT__hut__DOT__m_reg_data),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top_tb__DOT__hut__DOT__m_reg_imm),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[1]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[2]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[3]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[4]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[5]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[6]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[7]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[8]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[9]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[10]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[11]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[12]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[13]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[14]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[15]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[16]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[17]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[18]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[19]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[20]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[21]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[22]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[23]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[24]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[25]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[26]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[27]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[28]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[29]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[30]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[31]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+52,(((1U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                      >> 6U)) && ((1U 
                                                   & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                           >> 4U))) 
                                                      && ((8U 
                                                           & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))))))));
        bufp->chgBit(oldp+53,(vlSelfRef.top_tb__DOT__hut__DOT__c_immsel));
        bufp->chgBit(oldp+54,(vlSelfRef.top_tb__DOT__hut__DOT__c_regwren));
        bufp->chgBit(oldp+55,(vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel));
        bufp->chgBit(oldp+56,(((0x40U & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)
                                ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                          >> 5U)) && 
                                   ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn))))))
                                : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                          >> 5U)) && 
                                   ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                           >> 4U)) 
                                    && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))))))));
        bufp->chgBit(oldp+57,(((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                         >> 6U))) && 
                               ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                          >> 5U))) 
                                && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))))))));
        bufp->chgBit(oldp+58,(((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                         >> 6U))) && 
                               ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))))))));
        bufp->chgCData(oldp+59,(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel),2);
        bufp->chgCData(oldp+60,(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel),4);
        bufp->chgSData(oldp+61,(vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg[0]),13);
        bufp->chgSData(oldp+62,(vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg[1]),13);
        bufp->chgSData(oldp+63,(vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg[2]),13);
        bufp->chgIData(oldp+64,(vlSelfRef.top_tb__DOT__hut__DOT__f_reg_pc),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn),32);
        bufp->chgCData(oldp+66,((0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)),7);
        bufp->chgCData(oldp+67,((((0x23U != (0x7fU 
                                             & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)) 
                                  & (0x63U != (0x7fU 
                                               & vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn)))
                                  ? (0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgCData(oldp+68,(vlSelfRef.top_tb__DOT__hut__DOT__d_rs1),5);
        bufp->chgCData(oldp+69,(vlSelfRef.top_tb__DOT__hut__DOT__d_rs2),5);
        bufp->chgCData(oldp+70,((vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+71,((7U & (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+72,((0x1fU & vlSelfRef.top_tb__DOT__hut__DOT__d_imm)),5);
        bufp->chgIData(oldp+73,(vlSelfRef.top_tb__DOT__hut__DOT__d_imm),32);
        bufp->chgIData(oldp+74,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_insn),32);
        bufp->chgCData(oldp+75,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_opcode),7);
        bufp->chgCData(oldp+76,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rd),5);
        bufp->chgCData(oldp+77,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs1),5);
        bufp->chgCData(oldp+78,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs2),5);
        bufp->chgCData(oldp+79,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct7),7);
        bufp->chgCData(oldp+80,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct3),3);
        bufp->chgIData(oldp+81,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_imm),32);
        bufp->chgIData(oldp+82,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_pc),32);
        bufp->chgIData(oldp+83,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs1data),32);
        bufp->chgIData(oldp+84,(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs2data),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top_tb__DOT__hut__DOT__e_rs1),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top_tb__DOT__hut__DOT__e_rs2),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top_tb__DOT__hut__DOT__e_res),32);
        bufp->chgBit(oldp+88,(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken));
        bufp->chgIData(oldp+89,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_pc),32);
        bufp->chgCData(oldp+90,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_opcode),7);
        bufp->chgCData(oldp+91,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_funct3),3);
        bufp->chgIData(oldp+92,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_imm),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_rs2data),32);
        bufp->chgCData(oldp+95,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_rd),5);
        bufp->chgBit(oldp+96,(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_brtaken));
        bufp->chgCData(oldp+97,((3U & (((0x23U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_opcode)) 
                                        | (3U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_opcode)))
                                        ? (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3)
                                        : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_reg_funct3)))),2);
        bufp->chgCData(oldp+98,(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3),3);
        bufp->chgIData(oldp+99,(vlSelfRef.top_tb__DOT__hut__DOT__wb_reg_data),32);
        bufp->chgCData(oldp+100,(vlSelfRef.top_tb__DOT__hut__DOT__wb_reg_rd),5);
        bufp->chgBit(oldp+101,(vlSelfRef.top_tb__DOT__hut__DOT__is_program));
        bufp->chgCData(oldp+102,((0xfU & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                          [0U] >> 9U))),4);
        bufp->chgBit(oldp+103,(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq));
        bufp->chgBit(oldp+104,(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt));
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                      [1U] >> 5U))));
        bufp->chgBit(oldp+106,((1U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                      [1U] >> 6U))));
        bufp->chgIData(oldp+107,((vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res 
                                  - (IData)(0x1000000U))),32);
        bufp->chgBit(oldp+108,((1U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                      [2U] >> 2U))));
        bufp->chgCData(oldp+109,((3U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                        [2U] >> 7U))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+110,(vlSelfRef.top_tb__DOT__hut__DOT__f_pc),32);
        bufp->chgIData(oldp+111,(vlSelfRef.top_tb__DOT__hut__DOT__f_insn),32);
        bufp->chgIData(oldp+112,(vlSelfRef.top_tb__DOT__hut__DOT__m_data_o),32);
        bufp->chgIData(oldp+113,((vlSelfRef.top_tb__DOT__hut__DOT__f_pc 
                                  - (IData)(0x1000000U))),32);
    }
    bufp->chgBit(oldp+114,(vlSelfRef.top_tb__DOT__clk));
    bufp->chgIData(oldp+115,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                             [vlSelfRef.top_tb__DOT__hut__DOT__d_rs1]),32);
    bufp->chgIData(oldp+116,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                             [vlSelfRef.top_tb__DOT__hut__DOT__d_rs2]),32);
    bufp->chgIData(oldp+117,(((0U == (3U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                            [2U] >> 7U)))
                               ? vlSelfRef.top_tb__DOT__hut__DOT__m_reg_res
                               : ((1U == (3U & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                [2U] 
                                                >> 7U)))
                                   ? vlSelfRef.top_tb__DOT__hut__DOT__m_reg_data
                                   : ((2U == (3U & 
                                              (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                               [2U] 
                                               >> 7U)))
                                       ? ((IData)(4U) 
                                          + vlSelfRef.top_tb__DOT__hut__DOT__m_reg_pc)
                                       : ((3U == (3U 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                     [2U] 
                                                     >> 7U)))
                                           ? vlSelfRef.top_tb__DOT__hut__DOT__m_reg_imm
                                           : 0U))))),32);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
