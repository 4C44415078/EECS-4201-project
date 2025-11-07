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
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn),32);
        bufp->chgCData(oldp+4,((0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)),7);
        bufp->chgCData(oldp+5,((vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                >> 0x19U)),7);
        bufp->chgCData(oldp+6,((7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                      >> 0xcU))),3);
        bufp->chgBit(oldp+7,(((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                     >> 6U)) && ((1U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                     >> 5U)) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                          >> 4U))) 
                                                     && ((8U 
                                                          & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                              >> 2U)) 
                                                          && ((1U 
                                                               & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                                  >> 1U)) 
                                                              && (1U 
                                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)))
                                                          : 
                                                         ((4U 
                                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)))))))));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel));
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren));
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel));
        bufp->chgBit(oldp+11,(((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)
                                ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                          >> 5U)) && 
                                   ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn))))))
                                : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                          >> 5U)) && 
                                   ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                           >> 4U)) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)))))))));
        bufp->chgBit(oldp+12,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                         >> 6U))) && 
                               ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                          >> 5U))) 
                                && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)))))))));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_memwren));
        bufp->chgCData(oldp+14,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel),2);
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel),4);
        bufp->chgIData(oldp+16,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc),32);
        bufp->chgCData(oldp+17,((0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                          >> 7U))),5);
        bufp->chgCData(oldp+18,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1),5);
        bufp->chgCData(oldp+19,((0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+20,((0x1fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm)),5);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
                                [vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
                                [(0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rddata),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res),32);
        bufp->chgBit(oldp+28,(((0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)) 
                               & ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)
                                   ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)
                                       ? (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq) 
                                             & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt)))
                                       : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt))
                                   : ((~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn 
                                          >> 0xdU)) 
                                      & ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__c_insn)
                                          ? (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq))
                                          : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq)))))));
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_pc),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_addr),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_i),32);
        bufp->chgBit(oldp+33,(vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program));
        bufp->chgBit(oldp+34,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq));
        bufp->chgBit(oldp+35,(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt));
        bufp->chgIData(oldp+36,((vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
                                 - (IData)(0x1000000U))),32);
        bufp->chgIData(oldp+37,((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                                 - (IData)(0x1000000U))),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[1]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[2]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[3]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[4]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[5]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[6]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[7]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[8]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[9]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[10]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[11]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[12]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[13]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[14]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[15]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[16]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[17]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[18]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[19]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[20]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[21]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[22]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[23]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[24]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[25]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[26]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[27]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[28]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[29]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[30]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[31]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+71,(vlSelfRef.top__DOT__genblk2__DOT__pattern_dump),768);
        bufp->chgWData(oldp+95,(vlSelfRef.top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage),128);
    }
    bufp->chgBit(oldp+99,(vlSelfRef.top__DOT__clock));
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
