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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top_tb__DOT__insn),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top_tb__DOT__hut__DOT__f_insn),32);
        bufp->chgCData(oldp+2,((0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)),7);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                         >> 7U))),5);
        bufp->chgCData(oldp+4,((0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+5,((vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                >> 0x19U)),7);
        bufp->chgCData(oldp+6,((7U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                      >> 0xcU))),3);
        bufp->chgBit(oldp+7,(((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                     >> 6U)) && ((1U 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 5U)) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                          >> 4U))) 
                                                     && ((8U 
                                                          & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                              >> 2U)) 
                                                          && ((1U 
                                                               & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                  >> 1U)) 
                                                              && (1U 
                                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                                          : 
                                                         ((4U 
                                                           & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                                           : 
                                                          ((1U 
                                                            & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))));
        bufp->chgBit(oldp+8,(((0x40U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                               ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                         >> 5U)) && 
                                  ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                             >> 4U))) 
                                   && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 2U))) 
                                           && ((1U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                               && (1U 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))))
                               : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                         >> 5U)) && 
                                  ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                          >> 4U)) && 
                                   ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 3U))) 
                                    && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                  >> 2U))) 
                                        && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))));
        bufp->chgBit(oldp+9,(((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                        >> 6U))) && 
                              ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                         >> 5U))) && 
                               ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                          >> 4U))) 
                                && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 3U))) 
                                    && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                  >> 2U))) 
                                        && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))));
        bufp->chgBit(oldp+10,(((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                         >> 6U))) && 
                               ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+11,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                                [(0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[1]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[2]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[3]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[4]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[5]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[6]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[7]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[8]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[9]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[10]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[11]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[12]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[13]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[14]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[15]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[16]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[17]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[18]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[19]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[20]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[21]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[22]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[23]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[24]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[25]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[26]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[27]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[28]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[29]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[30]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[31]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgCData(oldp+44,(vlSelfRef.top_tb__DOT__hut__DOT__d_rs1),5);
        bufp->chgCData(oldp+45,((0x1fU & vlSelfRef.top_tb__DOT__hut__DOT__d_imm)),5);
        bufp->chgIData(oldp+46,(vlSelfRef.top_tb__DOT__hut__DOT__d_imm),32);
        bufp->chgBit(oldp+47,(vlSelfRef.top_tb__DOT__hut__DOT__c_immsel));
        bufp->chgBit(oldp+48,(vlSelfRef.top_tb__DOT__hut__DOT__c_regwren));
        bufp->chgBit(oldp+49,(vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel));
        bufp->chgCData(oldp+50,(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel),2);
        bufp->chgCData(oldp+51,(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel),4);
        bufp->chgIData(oldp+52,(vlSelfRef.top_tb__DOT__hut__DOT__e_rs1),32);
        bufp->chgIData(oldp+53,(vlSelfRef.top_tb__DOT__hut__DOT__e_rs2),32);
        bufp->chgIData(oldp+54,(vlSelfRef.top_tb__DOT__hut__DOT__e_res),32);
        bufp->chgBit(oldp+55,(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq));
        bufp->chgBit(oldp+56,(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt));
    }
    bufp->chgBit(oldp+57,(vlSelfRef.top_tb__DOT__clk));
    bufp->chgIData(oldp+58,(vlSelfRef.top_tb__DOT__hut__DOT__f_pc),32);
    bufp->chgIData(oldp+59,(vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc),32);
    bufp->chgIData(oldp+60,(vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                            [vlSelfRef.top_tb__DOT__hut__DOT__d_rs1]),32);
    bufp->chgBit(oldp+61,(((0x63U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
                           & ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                               ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                   ? (~ ((IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq) 
                                         & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt)))
                                   : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                               : ((~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                      >> 0xdU)) & (
                                                   (0x1000U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                    ? 
                                                   (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))
                                                    : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq)))))));
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
