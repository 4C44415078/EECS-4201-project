// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_static__TOP(vlSelf);
    Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelfRef.top_tb__DOT__clk;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_static__TOP(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_static__TOP\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_tb__DOT__counter = 0U;
    vlSelfRef.top_tb__DOT__hut__DOT__is_program = 0U;
    vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc = 0U;
    vlSelfRef.top_tb__DOT__hut__DOT__f_pc = 0x1000000U;
    vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res = 0x1000000U;
}

VL_ATTR_COLD void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_final\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_settle\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top_tb.sv", 33, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdfgRegularize_h9a3b41c9_0_4;
    __VdfgRegularize_h9a3b41c9_0_4 = 0;
    IData/*31:0*/ __VdfgRegularize_h9a3b41c9_0_5;
    __VdfgRegularize_h9a3b41c9_0_5 = 0;
    // Body
    vlSelfRef.top_tb__DOT__hut__DOT__d_rs1 = (((0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) 
                                               & (0x37U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                     >> 0xfU))
                                               : 0U);
    vlSelfRef.top_tb__DOT__hut__DOT__d_rs2 = (((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) 
                                               | ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) 
                                                  | (0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                     >> 0x14U))
                                               : 0U);
    if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
        if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
            __VdfgRegularize_h9a3b41c9_0_4 = (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                      >> 0xcU))))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                     >> 0x14U)));
            __VdfgRegularize_h9a3b41c9_0_5 = (0xfffff000U 
                                              & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn);
        } else {
            __VdfgRegularize_h9a3b41c9_0_4 = 0U;
            __VdfgRegularize_h9a3b41c9_0_5 = 0U;
        }
    } else {
        __VdfgRegularize_h9a3b41c9_0_4 = 0U;
        __VdfgRegularize_h9a3b41c9_0_5 = 0U;
    }
    if ((0x40U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                    >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                     ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)))
                                     : ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                         ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))
                                         : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                    >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                          >> 4U))) 
                                && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                              >> 3U))) 
                                    && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                         ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))
                                         : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))))));
        if ((0x20U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
            if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                    if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                        if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 2U;
                            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                                = ((((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn) 
                                       | (0x800U & 
                                          (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   >> 0x14U))));
                        } else {
                            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
                        }
                    } else {
                        vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                        vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                        vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                    vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
                }
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                    if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                        vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 2U;
                        vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                    } else {
                        vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                        vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                }
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                    = __VdfgRegularize_h9a3b41c9_0_4;
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                    if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                        vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                        vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                            = (((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                     >> 7U)))));
                    } else {
                        vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                        vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                    vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
                }
            }
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        }
    } else if ((0x20U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
        if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                             >> 3U))) && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
            vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
            if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel 
                    = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                        ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                            ? 3U : 0U) : 0U);
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                    = __VdfgRegularize_h9a3b41c9_0_5;
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                    = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                        ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                            ? ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                ? ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                    ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                     ? ((0U == (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                >> 0x19U))
                                         ? 6U : 7U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                      >> 0x19U))
                                                     ? 0U
                                                     : 1U))))
                            : 0xfU) : 0xfU);
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            }
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
            vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
            if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                    vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                        = (((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                            >> 7U))));
                } else {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                    vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            }
        }
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                      >> 4U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                            >> 3U))) 
                                  && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)))));
    } else if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                       >> 3U))) && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                     ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))
                                     : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                         >> 3U))) && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
        if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                    ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                        ? 0U : 0xfU) : 0xfU);
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                = __VdfgRegularize_h9a3b41c9_0_5;
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                    ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                        ? ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                            ? ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                     >> 0x19U))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)
                                                   ? 5U
                                                   : 0U)))
                        : 0xfU) : 0xfU);
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                = __VdfgRegularize_h9a3b41c9_0_4;
        }
    } else {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn))));
        if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else {
            if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_reg_insn)) {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 1U;
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                }
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            }
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                = __VdfgRegularize_h9a3b41c9_0_4;
        }
    }
    vlSelfRef.top_tb__DOT__hut__DOT__m_funct3 = 2U;
    vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 = ((8U & 
                                               vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                               [0U])
                                               ? vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs1data
                                               : vlSelfRef.top_tb__DOT__hut__DOT__d_reg_pc);
    vlSelfRef.top_tb__DOT__hut__DOT__e_rs2 = ((0x10U 
                                               & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                               [0U])
                                               ? vlSelfRef.top_tb__DOT__hut__DOT__d_reg_rs2data
                                               : vlSelfRef.top_tb__DOT__hut__DOT__d_reg_imm);
    vlSelfRef.top_tb__DOT__hut__DOT__m_data_o = 0U;
    if ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
         [0U])) {
        if ((0x800U & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
             [0U])) {
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = ((0x37U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_opcode))
                    ? vlSelfRef.top_tb__DOT__hut__DOT__e_rs2
                    : 0U);
        } else if ((0x400U & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                    [0U])) {
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = ((0x37U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_opcode))
                    ? vlSelfRef.top_tb__DOT__hut__DOT__e_rs2
                    : 0U);
        } else if ((0x200U & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                    [0U])) {
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                   < vlSelfRef.top_tb__DOT__hut__DOT__e_rs2);
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = ((0xfffffffeU & vlSelfRef.top_tb__DOT__hut__DOT__e_res) 
                   | (((vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                        >> 0x1fU) > (vlSelfRef.top_tb__DOT__hut__DOT__e_rs2 
                                     >> 0x1fU)) | (
                                                   ((vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     >> 0x1fU) 
                                                    >= 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs2 
                                                     >> 0x1fU)) 
                                                   & ((1U 
                                                       & (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                          >> 0x1eU)) 
                                                      < 
                                                      (1U 
                                                       & (vlSelfRef.top_tb__DOT__hut__DOT__e_rs2 
                                                          >> 0x1eU))))));
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = (1U & vlSelfRef.top_tb__DOT__hut__DOT__e_res);
        }
    } else {
        vlSelfRef.top_tb__DOT__hut__DOT__e_res = ((0x800U 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                   [0U])
                                                   ? 
                                                  ((0x400U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                    [0U])
                                                    ? 
                                                   ((0x200U 
                                                     & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                     [0U])
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2))
                                                    : 
                                                   ((0x200U 
                                                     & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                     [0U])
                                                     ? 
                                                    VL_SHIFTL_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     ^ vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)))
                                                   : 
                                                  ((0x400U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                    [0U])
                                                    ? 
                                                   ((0x200U 
                                                     & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                     [0U])
                                                     ? 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     | vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     & vlSelfRef.top_tb__DOT__hut__DOT__e_rs2))
                                                    : 
                                                   ((0x200U 
                                                     & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                                     [0U])
                                                     ? 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     - vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    ((0x63U 
                                                      == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_opcode))
                                                      ? 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__d_reg_pc 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__d_reg_imm)
                                                      : 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)))));
    }
    vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq 
        = ((0x63U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_opcode)) 
           & (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
              == vlSelfRef.top_tb__DOT__hut__DOT__e_rs2));
    vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt 
        = ((0x63U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_opcode)) 
           & (((6U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct3)) 
               | (7U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct3)))
               ? (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                  < vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
               : (((vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                    >> 0x1fU) > (vlSelfRef.top_tb__DOT__hut__DOT__e_rs2 
                                 >> 0x1fU)) | (((vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                 >> 0x1fU) 
                                                >= 
                                                (vlSelfRef.top_tb__DOT__hut__DOT__e_rs2 
                                                 >> 0x1fU)) 
                                               & ((0x7fffffffU 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__e_rs1) 
                                                  < 
                                                  (0x7fffffffU 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__e_rs2))))));
    vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken = ((0x63U 
                                                   == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_opcode)) 
                                                  & ((4U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct3))
                                                       ? 
                                                      (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                                       : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                                      : 
                                                     ((~ 
                                                       ((IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct3) 
                                                        >> 1U)) 
                                                      & ((1U 
                                                          & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__d_reg_funct3))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))
                                                          : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq)))));
    vlSelfRef.top_tb__DOT__hut__DOT__f_pc = ((1U & 
                                              (vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
                                               [1U] 
                                               | (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken)))
                                              ? vlSelfRef.top_tb__DOT__hut__DOT__e_res
                                              : vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc);
    if (vlSelfRef.top_tb__DOT__rst) {
        vlSelfRef.top_tb__DOT__hut__DOT__m_data_o = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__f_insn = 0U;
    } else {
        if ((0x20U & vlSelfRef.top_tb__DOT__hut__DOT__ctrl_reg
             [1U])) {
            if ((4U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
                if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3) 
                              >> 1U)))) {
                    vlSelfRef.top_tb__DOT__hut__DOT__m_data_o 
                        = ((1U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                            ? ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                   [
                                                   (0xfffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                                                   >> 7U)))) 
                                    << 0x10U) | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                  [
                                                  (0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                                                  << 8U) 
                                                 | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                 [(0xfffffU 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)]))
                                : ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                    [(0xfffffU & ((IData)(1U) 
                                                  + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                                    << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                   [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)]))
                            : ((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                   [
                                                   (0xfffffU 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)] 
                                                   >> 7U)))) 
                                    << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                   [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)])
                                : vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                               [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)]));
                }
            } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
                if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3)))) {
                    vlSelfRef.top_tb__DOT__hut__DOT__m_data_o 
                        = (((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                             [(0xfffffU & ((IData)(3U) 
                                           + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                             << 0x18U) | (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                          [(0xfffffU 
                                            & ((IData)(2U) 
                                               + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                                          << 0x10U)) 
                           | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                               [(0xfffffU & ((IData)(1U) 
                                             + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                               << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                              [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)]));
                }
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__m_data_o 
                    = ((1U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                        ? ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                            ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                  [
                                                  (0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                                                  >> 7U)))) 
                                << 0x10U) | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                                              << 8U) 
                                             | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                             [(0xfffffU 
                                               & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)]))
                            : ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                [(0xfffffU & ((IData)(1U) 
                                              + vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res))] 
                                << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                               [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)]))
                        : ((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                            ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                  [
                                                  (0xfffffU 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)] 
                                                  >> 7U)))) 
                                << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                               [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)])
                            : vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_reg_res)]));
            }
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__m_data_o = 0U;
        }
        vlSelfRef.top_tb__DOT__hut__DOT__f_insn = (
                                                   ((0x1000000U 
                                                     <= vlSelfRef.top_tb__DOT__hut__DOT__f_pc) 
                                                    & (0x1100000U 
                                                       > 
                                                       ((IData)(3U) 
                                                        + vlSelfRef.top_tb__DOT__hut__DOT__f_pc)))
                                                    ? 
                                                   (((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelfRef.top_tb__DOT__hut__DOT__f_pc))] 
                                                      << 0x18U) 
                                                     | (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                        [
                                                        (0xfffffU 
                                                         & ((IData)(2U) 
                                                            + vlSelfRef.top_tb__DOT__hut__DOT__f_pc))] 
                                                        << 0x10U)) 
                                                    | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                        [
                                                        (0xfffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelfRef.top_tb__DOT__hut__DOT__f_pc))] 
                                                        << 8U) 
                                                       | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                       [
                                                       (0xfffffU 
                                                        & vlSelfRef.top_tb__DOT__hut__DOT__f_pc)]))
                                                    : 0xdeadbeefU);
    }
}

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge top_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge top_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root____Vm_traceActivitySetAll(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root____Vm_traceActivitySetAll\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->top_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17209044258522412720ull);
    vlSelf->top_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5860139420296861047ull);
    vlSelf->top_tb__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2870060919314596339ull);
    vlSelf->top_tb__DOT__hut__DOT__c_immsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6815750484713225773ull);
    vlSelf->top_tb__DOT__hut__DOT__c_regwren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17382896687590774024ull);
    vlSelf->top_tb__DOT__hut__DOT__c_rs1sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6202507333458098472ull);
    vlSelf->top_tb__DOT__hut__DOT__c_wbsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6941531996163639675ull);
    vlSelf->top_tb__DOT__hut__DOT__c_alusel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7767416381935046510ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top_tb__DOT__hut__DOT__ctrl_reg[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1553970697427550900ull);
    }
    vlSelf->top_tb__DOT__hut__DOT__f_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16235071734355607670ull);
    vlSelf->top_tb__DOT__hut__DOT__f_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13542611203290200054ull);
    vlSelf->top_tb__DOT__hut__DOT__f_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2564104481943434499ull);
    vlSelf->top_tb__DOT__hut__DOT__f_reg_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9675839445538108529ull);
    vlSelf->top_tb__DOT__hut__DOT__d_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5597029949729119150ull);
    vlSelf->top_tb__DOT__hut__DOT__d_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 732479512884936854ull);
    vlSelf->top_tb__DOT__hut__DOT__d_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8276926861450755162ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18358287145047750744ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6794032171034497052ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18019719855043200023ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14633813121799663408ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15636624284387910740ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12465369998693705011ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14710331625483514891ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5809059267748512229ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17693279623579654980ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_rs1data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5082315901851021558ull);
    vlSelf->top_tb__DOT__hut__DOT__d_reg_rs2data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3067150782802159042ull);
    vlSelf->top_tb__DOT__hut__DOT__e_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8573353513338688554ull);
    vlSelf->top_tb__DOT__hut__DOT__e_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17211770049822254400ull);
    vlSelf->top_tb__DOT__hut__DOT__e_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14354706067317667977ull);
    vlSelf->top_tb__DOT__hut__DOT__e_brtaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3274842741331011854ull);
    vlSelf->top_tb__DOT__hut__DOT__e_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2178103046159907957ull);
    vlSelf->top_tb__DOT__hut__DOT__e_reg_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10014258371324617218ull);
    vlSelf->top_tb__DOT__hut__DOT__e_reg_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18001296521397934534ull);
    vlSelf->top_tb__DOT__hut__DOT__e_reg_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1823870833822375252ull);
    vlSelf->top_tb__DOT__hut__DOT__e_reg_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17282830206780966158ull);
    vlSelf->top_tb__DOT__hut__DOT__e_reg_rs2data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2602244546133037884ull);
    vlSelf->top_tb__DOT__hut__DOT__e_reg_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14531288931920377859ull);
    vlSelf->top_tb__DOT__hut__DOT__e_reg_brtaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5315953184806093754ull);
    vlSelf->top_tb__DOT__hut__DOT__m_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16783930623799575444ull);
    vlSelf->top_tb__DOT__hut__DOT__m_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12824965786910571050ull);
    vlSelf->top_tb__DOT__hut__DOT__m_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7385389101614386198ull);
    vlSelf->top_tb__DOT__hut__DOT__m_reg_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9983239857430364572ull);
    vlSelf->top_tb__DOT__hut__DOT__m_reg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15806277168380353076ull);
    vlSelf->top_tb__DOT__hut__DOT__m_reg_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2128768644655486895ull);
    vlSelf->top_tb__DOT__hut__DOT__m_reg_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7954121816669427613ull);
    vlSelf->top_tb__DOT__hut__DOT__wb_reg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4487123788927933896ull);
    vlSelf->top_tb__DOT__hut__DOT__wb_reg_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3697287850567118530ull);
    vlSelf->top_tb__DOT__hut__DOT__is_program = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8182691459679932382ull);
    vlSelf->top_tb__DOT__hut__DOT__fetch1__DOT__insn_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6073196445269703262ull);
    vlSelf->top_tb__DOT__hut__DOT__fetch1__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12475707033463231250ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_tb__DOT__hut__DOT__register_file1__DOT__x[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14110349021503105127ull);
    }
    vlSelf->top_tb__DOT__hut__DOT__register_file1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top_tb__DOT__hut__DOT__e_alu1__DOT__breq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6853582009523526265ull);
    vlSelf->top_tb__DOT__hut__DOT__e_alu1__DOT__brlt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8495782803894538271ull);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2048529035999868246ull);
    }
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->top_tb__DOT__hut__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17649144892811003829ull);
    }
    vlSelf->top_tb__DOT__hut__DOT__memory1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9020806643304274627ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
