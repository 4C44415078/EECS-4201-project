// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h038a369a_0_4;
    __VdfgRegularize_h038a369a_0_4 = 0;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_7;
    __VdfgRegularize_h038a369a_0_7 = 0;
    SData/*12:0*/ __VdfgRegularize_h038a369a_0_8;
    __VdfgRegularize_h038a369a_0_8 = 0;
    IData/*31:0*/ __VdfgRegularize_h038a369a_0_9;
    __VdfgRegularize_h038a369a_0_9 = 0;
    IData/*31:0*/ __Vdly__top__DOT__clkg__DOT__counter;
    __Vdly__top__DOT__clkg__DOT__counter = 0;
    // Body
    __Vdly__top__DOT__clkg__DOT__counter = vlSelfRef.top__DOT__clkg__DOT__counter;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
        = ((IData)(vlSelfRef.top__DOT__reset) ? 0x1000000U
            : ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc));
    __Vdly__top__DOT__clkg__DOT__counter = ((IData)(1U) 
                                            + vlSelfRef.top__DOT__clkg__DOT__counter);
    vlSelfRef.top__DOT__reset = VL_GTS_III(32, 5U, vlSelfRef.top__DOT__clkg__DOT__counter);
    if (VL_UNLIKELY(((0xc350U == vlSelfRef.top__DOT__clkg__DOT__counter)))) {
        VL_FINISH_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd2/verif/tests/clockgen.sv", 26, "");
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc = vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    vlSelfRef.top__DOT__clkg__DOT__counter = __Vdly__top__DOT__clkg__DOT__counter;
    if (VL_LIKELY((((0x1000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc) 
                    & (0x10000ccU > ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc)))))) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
            = (((((0xcbU >= (0xffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)))
                   ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                  [(0xffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))]
                   : 0U) << 0x18U) | (((0xcbU >= (0xffU 
                                                  & ((IData)(2U) 
                                                     + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)))
                                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                       [(0xffU & ((IData)(2U) 
                                                  + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))]
                                        : 0U) << 0x10U)) 
               | ((((0xcbU >= (0xffU & ((IData)(1U) 
                                        + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)))
                     ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                    [(0xffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))]
                     : 0U) << 8U) | ((0xcbU >= (0xffU 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))
                                      ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                     [(0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)]
                                      : 0U)));
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn = 0xdeadbeefU;
        VL_WRITEF_NX("IMEMORY: OOB read @0x%08x (mapped 0x%08x)\n",0,
                     32,vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc,
                     32,(vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc 
                         - (IData)(0x1000000U)));
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rd = 
        (((0x23U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
          & (0x63U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))
          ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 7U)) : 0U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1 
        = (((0x17U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
            & ((0x37U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
               & (0x6fU != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))
            ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                        >> 0xfU)) : 0U);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs2 
        = (((0x33U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
            | ((0x23U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
               | (0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))
            ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                        >> 0x14U)) : 0U);
    __VdfgRegularize_h038a369a_0_8 = (((0x1000U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                   >> 0x13U)) 
                                       | (0x800U & 
                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                           << 4U))) 
                                      | ((0x7e0U & 
                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                             >> 7U))));
    __VdfgRegularize_h038a369a_0_4 = ((1U == (7U & 
                                              (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                   >> 0xcU))));
    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            __VdfgRegularize_h038a369a_0_9 = (0xfffff000U 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn);
            __VdfgRegularize_h038a369a_0_7 = ((IData)(__VdfgRegularize_h038a369a_0_4)
                                               ? (0x1fU 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                     >> 0x14U)));
        } else {
            __VdfgRegularize_h038a369a_0_9 = 0U;
            __VdfgRegularize_h038a369a_0_7 = 0U;
        }
    } else {
        __VdfgRegularize_h038a369a_0_9 = 0U;
        __VdfgRegularize_h038a369a_0_7 = 0U;
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7 
        = (0x7fU & ((0x33U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                     ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                        >> 0x19U) : (((0x13U == (0x7fU 
                                                 & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) 
                                      & (IData)(__VdfgRegularize_h038a369a_0_4))
                                      ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                         >> 0x19U) : 0U)));
    if ((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))
                                       : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                           ? ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                           : ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 4U))) 
                                  && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                           ? ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                           : ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))))));
        if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 2U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                                = ((((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn) 
                                       | (0x800U & 
                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                   >> 0x14U))));
                        } else {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                        }
                    } else {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                    }
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                }
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 2U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                    } else {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    }
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                }
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                    = __VdfgRegularize_h038a369a_0_7;
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                            = (((6U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                              >> 0xcU))) 
                                | (7U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 0xcU))))
                                ? (IData)(__VdfgRegularize_h038a369a_0_8)
                                : (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 0x1fU))) 
                                    << 0xdU) | (IData)(__VdfgRegularize_h038a369a_0_8)));
                    } else {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                    }
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                }
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        }
    } else if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                             >> 3U))) && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                            ? 3U : 0U) : 0U);
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                    = __VdfgRegularize_h038a369a_0_9;
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                            ? ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                ? ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                    ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                     ? ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))
                                         ? 6U : 7U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))
                                                     ? 0U
                                                     : 1U))))
                            : 0xfU) : 0xfU);
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            }
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                        = (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 7U))));
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                }
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            }
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                      >> 4U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                            >> 3U))) 
                                  && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)))));
    } else if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                        ? 0U : 0xfU) : 0xfU);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h038a369a_0_9;
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                        ? ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                            ? ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)
                                                   ? 5U
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__d_funct7))
                                                    ? 0U
                                                    : 1U))))
                        : 0xfU) : 0xfU);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h038a369a_0_7;
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn))));
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else {
            if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__f_insn)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 1U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                }
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            }
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h038a369a_0_7;
        }
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd2/verif/tests/test_pd.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd2/verif/tests/test_pd.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
