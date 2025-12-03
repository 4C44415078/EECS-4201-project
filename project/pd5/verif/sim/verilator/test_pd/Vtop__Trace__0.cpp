// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__reset));
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__clkg__DOT__counter),32);
        bufp->chgBit(oldp+3,(((vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                               [0U] >> 5U) & ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rd)) 
                                              & ((((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1) 
                                                   == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rd)) 
                                                  | ((0x1fU 
                                                      & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rd))) 
                                                 & (0x23U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)))))));
        bufp->chgBit(oldp+4,(((vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                               [2U] >> 2U) & ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd)) 
                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1) 
                                                  == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd)) 
                                                 | ((0x1fU 
                                                     & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd)))))));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__dut__DOT__core__DOT__hazard));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__dut__DOT__core__DOT__stall));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__dut__DOT__core__DOT__flush));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__dut__DOT__core__DOT__jump_branch));
        bufp->chgBit(oldp+9,(((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_rd)) 
                              & ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rs1) 
                                 == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_rd)))));
        bufp->chgBit(oldp+10,(((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_rd)) 
                               & ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rs2) 
                                  == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_rd)))));
        bufp->chgBit(oldp+11,(((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd)) 
                               & ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rs1) 
                                  == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd)))));
        bufp->chgBit(oldp+12,(((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd)) 
                               & ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rs2) 
                                  == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd)))));
        bufp->chgBit(oldp+13,(((vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                [2U] >> 2U) & ((vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                                [1U] 
                                                >> 6U) 
                                               & ((0U 
                                                   != (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd)) 
                                                  & ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd) 
                                                     == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_rs2)))))));
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_pc),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_pc),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_insn),32);
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_opcode),7);
        bufp->chgCData(oldp+19,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rd),5);
        bufp->chgCData(oldp+20,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rs1),5);
        bufp->chgCData(oldp+21,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rs2),5);
        bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_funct7),7);
        bufp->chgCData(oldp+23,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_funct3),3);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_imm),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rs1data),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_x_rs2data),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_pc),32);
        bufp->chgCData(oldp+28,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_opcode),7);
        bufp->chgCData(oldp+29,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_funct3),3);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_imm),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_res),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_rs2data),32);
        bufp->chgCData(oldp+33,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_rd),5);
        bufp->chgBit(oldp+34,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_brtaken));
        bufp->chgCData(oldp+35,(vlSelfRef.top__DOT__dut__DOT__core__DOT__x_m_rs2),5);
        bufp->chgIData(oldp+36,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_pc),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_res),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_data),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_imm),32);
        bufp->chgCData(oldp+40,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_w_rd),5);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn),32);
        bufp->chgBit(oldp+44,(vlSelfRef.top__DOT__dut__DOT__core__DOT__pc_en));
        bufp->chgCData(oldp+45,((0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)),7);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                          >> 7U))),5);
        bufp->chgCData(oldp+47,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1),5);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+49,((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+50,((7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+51,((0x1fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm)),5);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data),32);
        bufp->chgBit(oldp+55,(((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                      >> 6U)) && ((1U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                           >> 4U))) 
                                                      && ((8U 
                                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)))))))));
        bufp->chgBit(oldp+56,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel));
        bufp->chgBit(oldp+57,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren));
        bufp->chgBit(oldp+58,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel));
        bufp->chgBit(oldp+59,(((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)
                                ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                          >> 5U)) && 
                                   ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn))))))
                                : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                          >> 5U)) && 
                                   ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                           >> 4U)) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)))))))));
        bufp->chgBit(oldp+60,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                         >> 6U))) && 
                               ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                          >> 5U))) 
                                && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)))))))));
        bufp->chgBit(oldp+61,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                         >> 6U))) && 
                               ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_d_insn)))))))));
        bufp->chgCData(oldp+62,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel),2);
        bufp->chgCData(oldp+63,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel),4);
        bufp->chgSData(oldp+64,(vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[0]),13);
        bufp->chgSData(oldp+65,(vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[1]),13);
        bufp->chgSData(oldp+66,(vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg[2]),13);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res),32);
        bufp->chgBit(oldp+70,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken));
        bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o),32);
        bufp->chgCData(oldp+72,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_size_encoded),2);
        bufp->chgCData(oldp+73,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3),3);
        bufp->chgIData(oldp+74,(vlSelfRef.top__DOT__dut__DOT__core__DOT__addr_data),32);
        bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data),32);
        bufp->chgCData(oldp+76,((0xfU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                         [0U] >> 9U))),4);
        bufp->chgBit(oldp+77,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq));
        bufp->chgBit(oldp+78,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt));
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                     [1U] >> 5U))));
        bufp->chgBit(oldp+80,((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                     [1U] >> 6U))));
        bufp->chgIData(oldp+81,((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc 
                                 - (IData)(0x1000000U))),32);
        bufp->chgIData(oldp+82,((vlSelfRef.top__DOT__dut__DOT__core__DOT__addr_data 
                                 - (IData)(0x1000000U))),32);
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                     [2U] >> 2U))));
        bufp->chgIData(oldp+84,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[1]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[2]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[3]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[4]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[5]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[6]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[7]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[8]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[9]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[10]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[11]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[12]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[13]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[14]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[15]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[16]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[17]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[18]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[19]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[20]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[21]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[22]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[23]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[24]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[25]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[26]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[27]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[28]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[29]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[30]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[31]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+117,((3U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__ctrl_reg
                                        [2U] >> 7U))),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+118,(vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program));
        bufp->chgIData(oldp+119,(vlSelfRef.top__DOT__genblk3__DOT__tick),32);
        bufp->chgIData(oldp+120,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc),32);
        bufp->chgCData(oldp+121,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode),7);
        bufp->chgCData(oldp+122,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd),5);
        bufp->chgCData(oldp+123,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1),5);
        bufp->chgCData(oldp+124,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2),5);
        bufp->chgCData(oldp+125,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3),3);
        bufp->chgCData(oldp+126,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7),7);
        bufp->chgIData(oldp+127,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm),32);
        bufp->chgWData(oldp+128,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p),128);
        bufp->chgIData(oldp+132,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__pc),32);
        bufp->chgIData(oldp+133,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res),32);
        bufp->chgBit(oldp+134,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken));
        bufp->chgWData(oldp+135,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p),128);
        bufp->chgIData(oldp+139,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc),32);
        bufp->chgIData(oldp+140,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn),32);
        bufp->chgWData(oldp+141,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p),128);
        bufp->chgIData(oldp+145,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__pc),32);
        bufp->chgIData(oldp+146,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address),32);
        bufp->chgCData(oldp+147,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded),2);
        bufp->chgIData(oldp+148,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data),32);
        bufp->chgWData(oldp+149,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p),128);
        bufp->chgCData(oldp+153,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1),5);
        bufp->chgCData(oldp+154,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2),5);
        bufp->chgIData(oldp+155,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1_data),32);
        bufp->chgIData(oldp+156,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2_data),32);
        bufp->chgWData(oldp+157,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p),128);
        bufp->chgIData(oldp+161,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__pc),32);
        bufp->chgBit(oldp+162,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable));
        bufp->chgCData(oldp+163,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination),5);
        bufp->chgIData(oldp+164,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data),32);
        bufp->chgWData(oldp+165,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p),128);
        bufp->chgBit(oldp+169,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        bufp->chgBit(oldp+170,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct));
        bufp->chgWData(oldp+171,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg),4096);
    }
    bufp->chgBit(oldp+299,(vlSelfRef.top__DOT__clock));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
