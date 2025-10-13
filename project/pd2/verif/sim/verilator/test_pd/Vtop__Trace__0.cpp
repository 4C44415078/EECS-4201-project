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
        bufp->chgIData(oldp+3,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc),32);
        bufp->chgIData(oldp+4,(vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn),32);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc),32);
        bufp->chgCData(oldp+6,((0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)),7);
        bufp->chgCData(oldp+7,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd),5);
        bufp->chgCData(oldp+8,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1),5);
        bufp->chgCData(oldp+9,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2),5);
        bufp->chgCData(oldp+10,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7),7);
        bufp->chgCData(oldp+11,((7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+12,((0x1fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm)),5);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm),32);
        bufp->chgBit(oldp+14,(((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                      >> 6U)) && ((1U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                      >> 5U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                           >> 4U))) 
                                                      && ((8U 
                                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                           ? 
                                                          ((1U 
                                                            & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                               >> 2U)) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))
                                                           : 
                                                          ((4U 
                                                            & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                            ? 
                                                           ((1U 
                                                             & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                                            : 
                                                           ((1U 
                                                             & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))))))));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel));
        bufp->chgBit(oldp+18,(((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                          >> 5U)) && 
                                   ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))))
                                : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                          >> 5U)) && 
                                   ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                     ? ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))
                                     : ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))))))));
        bufp->chgBit(oldp+19,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                         >> 6U))) && 
                               ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                          >> 5U))) 
                                && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                              >> 4U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 3U))) 
                                        && ((1U & (~ 
                                                   (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                    >> 1U)) 
                                                && (1U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))))))));
        bufp->chgBit(oldp+20,(((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                         >> 6U))) && 
                               ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                        >> 4U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                            >> 3U))) 
                                                       && ((1U 
                                                            & (~ 
                                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                >> 2U))) 
                                                           && ((1U 
                                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                                   >> 1U)) 
                                                               && (1U 
                                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))))))));
        bufp->chgCData(oldp+21,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel),2);
        bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel),4);
        bufp->chgIData(oldp+23,((vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
                                 - (IData)(0x1000000U))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__genblk3__DOT__tick),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc),32);
        bufp->chgCData(oldp+26,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode),7);
        bufp->chgCData(oldp+27,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd),5);
        bufp->chgCData(oldp+28,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1),5);
        bufp->chgCData(oldp+29,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2),5);
        bufp->chgCData(oldp+30,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3),3);
        bufp->chgCData(oldp+31,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7),7);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm),32);
        bufp->chgWData(oldp+33,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p),128);
        bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc),32);
        bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn),32);
        bufp->chgWData(oldp+39,(vlSelfRef.top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p),128);
        bufp->chgBit(oldp+43,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__res));
        bufp->chgBit(oldp+44,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__correct));
        bufp->chgWData(oldp+45,(vlSelfRef.top__DOT__genblk3__DOT__tick_check__DOT__msg),4096);
    }
    bufp->chgBit(oldp+173,(vlSelfRef.top__DOT__clock));
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
