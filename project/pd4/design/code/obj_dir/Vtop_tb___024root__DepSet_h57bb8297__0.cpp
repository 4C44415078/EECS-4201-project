// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_initial__TOP(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf);
VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtop_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtop_tb___024root___act_sequent__TOP__0(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtop_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___act_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___act_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_2;
    __VdfgRegularize_h0dff6736_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_3;
    __VdfgRegularize_h0dff6736_0_3 = 0;
    // Body
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = (((0x1000000U 
                                                 <= vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc) 
                                                & (0x1100000U 
                                                   > 
                                                   ((IData)(3U) 
                                                    + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)))
                                                ? (
                                                   ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                     [
                                                     (0xfffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc))] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc))] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc))] 
                                                       << 8U) 
                                                      | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                      [
                                                      (0xfffffU 
                                                       & vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)]))
                                                : 0xdeadbeefU);
    vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data = vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
        [(0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                   >> 0x14U))];
    vlSelfRef.top_tb__DOT__hut__DOT__m_funct3 = 2U;
    vlSelfRef.top_tb__DOT__hut__DOT__d_rs1 = (((0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
                                               & (0x37U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0xfU))
                                               : 0U);
    if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
        if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            __VdfgRegularize_h0dff6736_0_2 = (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                      >> 0xcU))))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0x14U)));
            __VdfgRegularize_h0dff6736_0_3 = (0xfffff000U 
                                              & vlSelfRef.top_tb__DOT__hut__DOT__f_insn);
        } else {
            __VdfgRegularize_h0dff6736_0_2 = 0U;
            __VdfgRegularize_h0dff6736_0_3 = 0U;
        }
    } else {
        __VdfgRegularize_h0dff6736_0_2 = 0U;
        __VdfgRegularize_h0dff6736_0_3 = 0U;
    }
    if ((0x40U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                    >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                     ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                     : ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                         ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                         : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))));
        if ((0x20U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                    if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                        if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 2U;
                            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                                = ((((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn) 
                                       | (0x800U & 
                                          (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
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
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                    if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
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
                    = __VdfgRegularize_h0dff6736_0_2;
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                    if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                        vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                        vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                            = (((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
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
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                    >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                          >> 4U))) 
                                && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 3U))) 
                                    && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                         ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                         : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))));
    } else if ((0x20U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
        if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 3U))) && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
            if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                    = __VdfgRegularize_h0dff6736_0_3;
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                    = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                        ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                            ? ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                ? ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                    ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                     ? ((0U == (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 0x19U))
                                         ? 6U : 7U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                      >> 0x19U))
                                                     ? 0U
                                                     : 1U))))
                            : 0xfU) : 0xfU);
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            }
            vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
            if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                    vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                        = (((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                            >> 7U))));
                } else {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                    vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            }
            vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        }
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                      >> 4U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                            >> 3U))) 
                                  && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
    } else if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                       >> 3U))) && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                     ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                     : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                         >> 3U))) && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
        if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                    ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                        ? 0U : 0xfU) : 0xfU);
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                = __VdfgRegularize_h0dff6736_0_3;
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                    ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                        ? ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                            ? ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0x19U))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                   ? 5U
                                                   : 0U)))
                        : 0xfU) : 0xfU);
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                = __VdfgRegularize_h0dff6736_0_2;
        }
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
    } else {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else {
            if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
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
                = __VdfgRegularize_h0dff6736_0_2;
        }
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
    }
    vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 = ((IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel)
                                               ? vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                                              [vlSelfRef.top_tb__DOT__hut__DOT__d_rs1]
                                               : vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc);
    vlSelfRef.top_tb__DOT__hut__DOT__e_rs2 = (((0x40U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                ? (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                       >> 5U)) 
                                                   && ((1U 
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
                                                                       & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))))
                                                : (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                           >> 4U)) 
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
                                                                       & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))
                                               ? vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                                              [(0x1fU 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 0x14U))]
                                               : vlSelfRef.top_tb__DOT__hut__DOT__d_imm);
    vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt 
        = ((0x63U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
           & (((6U == (7U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 0xcU))) | (7U == (7U 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0xcU))))
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
    vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq 
        = ((0x63U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
           & (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
              == vlSelfRef.top_tb__DOT__hut__DOT__e_rs2));
    if ((8U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))) {
        if ((4U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))) {
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = ((0x37U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                    ? vlSelfRef.top_tb__DOT__hut__DOT__e_rs2
                    : 0U);
        } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))) {
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = ((0x37U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                    ? vlSelfRef.top_tb__DOT__hut__DOT__e_rs2
                    : 0U);
        } else if ((1U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))) {
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
        vlSelfRef.top_tb__DOT__hut__DOT__e_res = ((4U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                     ? 
                                                    VL_SHIFTL_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     ^ vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                     ? 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     | vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     & vlSelfRef.top_tb__DOT__hut__DOT__e_rs2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                     ? 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     - vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                                      ? 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__f_pc 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__d_imm)
                                                      : 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)))));
    }
    vlSelfRef.top_tb__DOT__hut__DOT__m_data_o = 0U;
    if ((4U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3) 
                      >> 1U)))) {
            vlSelfRef.top_tb__DOT__hut__DOT__m_data_o 
                = ((1U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                    ? ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                              >> 7U)))) 
                            << 0x10U) | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                          [(0xfffffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                          << 8U) | 
                                         vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                         [(0xfffffU 
                                           & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]))
                        : ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                            [(0xfffffU & ((IData)(1U) 
                                          + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                            << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]))
                    : ((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__e_res)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)])
                        : vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                       [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]));
        }
    } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
        if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3)))) {
            vlSelfRef.top_tb__DOT__hut__DOT__m_data_o 
                = (((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                     [(0xfffffU & ((IData)(3U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                     << 0x18U) | (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                  [(0xfffffU & ((IData)(2U) 
                                                + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                  << 0x10U)) | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                 [(0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                                 << 8U) 
                                                | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                [(0xfffffU 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]));
        }
    } else {
        vlSelfRef.top_tb__DOT__hut__DOT__m_data_o = 
            ((1U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
              ? ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                  ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                        [(0xfffffU 
                                          & ((IData)(1U) 
                                             + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                        >> 7U)))) << 0x10U) 
                     | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                         [(0xfffffU & ((IData)(1U) 
                                       + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                         << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                        [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]))
                  : ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                      [(0xfffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                      << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                     [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]))
              : ((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                  ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                        [(0xfffffU 
                                          & vlSelfRef.top_tb__DOT__hut__DOT__e_res)] 
                                        >> 7U)))) << 8U) 
                     | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                     [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)])
                  : vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                 [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]));
    }
    vlSelfRef.top_tb__DOT__hut__DOT__wb_nextPC = ((
                                                   ((1U 
                                                     & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                        >> 6U)) 
                                                    && ((1U 
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
                                                                ((1U 
                                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                     >> 2U)) 
                                                                 && ((1U 
                                                                      & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                         >> 1U)) 
                                                                     && (1U 
                                                                         & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))))) 
                                                   | ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
                                                      & ((0x4000U 
                                                          & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                           ? 
                                                          (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                                           : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                                          : 
                                                         ((~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 0xdU)) 
                                                          & ((0x1000U 
                                                              & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                              ? 
                                                             (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))
                                                              : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))))))
                                                   ? vlSelfRef.top_tb__DOT__hut__DOT__e_res
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc));
}

void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf);

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_2;
    __VdfgRegularize_h0dff6736_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_3;
    __VdfgRegularize_h0dff6736_0_3 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v0;
    __VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v0 = 0;
    IData/*31:0*/ __VdlyVal__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33;
    __VdlyVal__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33 = 0;
    CData/*4:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33;
    __VdlyDim0__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33;
    __VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0;
    __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1;
    __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v2;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v2 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v2;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3;
    __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v4;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v4 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v4;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v5;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v5 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v5;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v6;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v6 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v6;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v6 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7 = 0;
    CData/*0:0*/ __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7;
    __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v8;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v8 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v8;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v8 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v9;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v9 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v9;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v9 = 0;
    CData/*7:0*/ __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v10;
    __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v10 = 0;
    IData/*19:0*/ __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v10;
    __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v10 = 0;
    // Body
    __VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v0 = 0U;
    __VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33 = 0U;
    __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0 = 0U;
    __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1 = 0U;
    __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3 = 0U;
    __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7 = 0U;
    if (vlSelfRef.top_tb__DOT__rst) {
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__unnamedblk1__DOT__i = 0x20U;
        __VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v0 = 1U;
        vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc = 0x1000000U;
    } else {
        if (((IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_regwren) 
             & (0U != (0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                >> 7U))))) {
            __VdlyVal__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33 
                = ((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel))
                    ? vlSelfRef.top_tb__DOT__hut__DOT__e_res
                    : ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel))
                        ? vlSelfRef.top_tb__DOT__hut__DOT__m_data_o
                        : ((2U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel))
                            ? ((IData)(4U) + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)
                            : ((3U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel))
                                ? vlSelfRef.top_tb__DOT__hut__DOT__d_imm
                                : 0U))));
            __VdlyDim0__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33 
                = (0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                            >> 7U));
            __VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33 = 1U;
        }
        vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc 
            = vlSelfRef.top_tb__DOT__hut__DOT__wb_nextPC;
    }
    if (((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                   >> 6U))) && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
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
                                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))) {
        if (((0x1000000U <= vlSelfRef.top_tb__DOT__hut__DOT__e_res) 
             & (0x1100000U > ((IData)(3U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res)))) {
            if ((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0 
                    = (0xffU & vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data);
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0 
                    = (0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res);
                __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0 = 1U;
            } else if ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1 
                    = (0xffU & vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data);
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1 
                    = (0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res);
                __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1 = 1U;
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v2 
                    = (0xffU & (vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data 
                                >> 8U));
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v2 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res));
            } else if ((2U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3 
                    = (0xffU & vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data);
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3 
                    = (0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res);
                __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3 = 1U;
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v4 
                    = (0xffU & (vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data 
                                >> 8U));
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v4 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res));
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v5 
                    = (0xffU & (vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data 
                                >> 0x10U));
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v5 
                    = (0xfffffU & ((IData)(2U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res));
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v6 
                    = (vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data 
                       >> 0x18U);
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v6 
                    = (0xfffffU & ((IData)(3U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res));
            } else {
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7 
                    = (0xffU & vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data);
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7 
                    = (0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res);
                __VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7 = 1U;
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v8 
                    = (0xffU & (vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data 
                                >> 8U));
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v8 
                    = (0xfffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res));
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v9 
                    = (0xffU & (vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data 
                                >> 0x10U));
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v9 
                    = (0xfffffU & ((IData)(2U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res));
                __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v10 
                    = (vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data 
                       >> 0x18U);
                __VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v10 
                    = (0xfffffU & ((IData)(3U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res));
            }
        }
    }
    if (__VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v0) {
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[1U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[2U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[3U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[4U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[5U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[6U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[7U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[8U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[9U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xaU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xbU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xcU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xdU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xeU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xfU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x10U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x11U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x12U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x13U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x14U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x15U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x16U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x17U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x18U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x19U] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x1aU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x1bU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x1cU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x1dU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x1eU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x1fU] = 0U;
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[2U] = 0x1100000U;
    }
    if (__VdlySet__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33) {
        vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[__VdlyDim0__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33] 
            = __VdlyVal__top_tb__DOT__hut__DOT__register_file1__DOT__x__v33;
    }
    if (__VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0) {
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v0;
    }
    if (__VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1) {
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v1;
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v2] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v2;
    }
    if (__VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3) {
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v3;
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v4] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v4;
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v5] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v5;
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v6] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v6;
    }
    if (__VdlySet__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7) {
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v7;
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v8] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v8;
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v9] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v9;
        vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[__VdlyDim0__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v10] 
            = __VdlyVal__top_tb__DOT__hut__DOT__memory1__DOT__main_memory__v10;
    }
    vlSelfRef.top_tb__DOT__hut__DOT__f_pc = vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = (((0x1000000U 
                                                 <= vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc) 
                                                & (0x1100000U 
                                                   > 
                                                   ((IData)(3U) 
                                                    + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)))
                                                ? (
                                                   ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                     [
                                                     (0xfffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc))] 
                                                     << 0x18U) 
                                                    | (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc))] 
                                                       << 0x10U)) 
                                                   | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc))] 
                                                       << 8U) 
                                                      | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                      [
                                                      (0xfffffU 
                                                       & vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)]))
                                                : 0xdeadbeefU);
    vlSelfRef.top_tb__DOT__hut__DOT__r_rs2data = vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
        [(0x1fU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                   >> 0x14U))];
    vlSelfRef.top_tb__DOT__hut__DOT__m_funct3 = 2U;
    vlSelfRef.top_tb__DOT__hut__DOT__d_rs1 = (((0x17U 
                                                != 
                                                (0x7fU 
                                                 & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
                                               & (0x37U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0xfU))
                                               : 0U);
    if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
        if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            __VdfgRegularize_h0dff6736_0_2 = (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                      >> 0xcU))))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0x14U)));
            __VdfgRegularize_h0dff6736_0_3 = (0xfffff000U 
                                              & vlSelfRef.top_tb__DOT__hut__DOT__f_insn);
        } else {
            __VdfgRegularize_h0dff6736_0_2 = 0U;
            __VdfgRegularize_h0dff6736_0_3 = 0U;
        }
    } else {
        __VdfgRegularize_h0dff6736_0_2 = 0U;
        __VdfgRegularize_h0dff6736_0_3 = 0U;
    }
    if ((0x40U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                    >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                          >> 4U))) 
                                && ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                     ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 2U)) 
                                        && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                     : ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                         ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                         : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))));
        if ((0x20U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                    if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                        if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 2U;
                            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                                = ((((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn) 
                                       | (0x800U & 
                                          (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
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
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                    if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
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
                    = __VdfgRegularize_h0dff6736_0_2;
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
                if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                    if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                        vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                        vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                            = (((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
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
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                    >> 5U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                          >> 4U))) 
                                && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 3U))) 
                                    && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                         ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                         : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))));
    } else if ((0x20U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
        if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 3U))) && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
            if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                    = __VdfgRegularize_h0dff6736_0_3;
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                    = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                        ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                            ? ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                ? ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                    ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                     ? ((0U == (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 0x19U))
                                         ? 6U : 7U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                      >> 0x19U))
                                                     ? 0U
                                                     : 1U))))
                            : 0xfU) : 0xfU);
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            }
            vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
            if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            } else if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0U;
                    vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                        = (((- (IData)((vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                            >> 7U))));
                } else {
                    vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                    vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
                }
            } else {
                vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
                vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
            }
            vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        }
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                      >> 4U)) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                            >> 3U))) 
                                  && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
    } else if ((0x10U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                       >> 3U))) && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                     ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                     : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                         >> 3U))) && ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                       ? ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                       : ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
        if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                    ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                        ? 0U : 0xfU) : 0xfU);
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                = __VdfgRegularize_h0dff6736_0_3;
        } else {
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel 
                = ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                    ? ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                        ? ((0x4000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                            ? ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0x19U))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                ? ((0x1000U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                   ? 5U
                                                   : 0U)))
                        : 0xfU) : 0xfU);
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm 
                = __VdfgRegularize_h0dff6736_0_2;
        }
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
    } else {
        vlSelfRef.top_tb__DOT__hut__DOT__c_immsel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        vlSelfRef.top_tb__DOT__hut__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
        if ((8U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
            vlSelfRef.top_tb__DOT__hut__DOT__c_wbsel = 0U;
            vlSelfRef.top_tb__DOT__hut__DOT__c_alusel = 0xfU;
            vlSelfRef.top_tb__DOT__hut__DOT__d_imm = 0U;
        } else {
            if ((2U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
                if ((1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) {
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
                = __VdfgRegularize_h0dff6736_0_2;
        }
        vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel = 
            ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                       >> 3U))) && ((1U & (~ (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                              >> 2U))) 
                                    && ((1U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                               >> 1U)) 
                                        && (1U & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))));
    }
    vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 = ((IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_rs1sel)
                                               ? vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                                              [vlSelfRef.top_tb__DOT__hut__DOT__d_rs1]
                                               : vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc);
    vlSelfRef.top_tb__DOT__hut__DOT__e_rs2 = (((0x40U 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                ? (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                       >> 5U)) 
                                                   && ((1U 
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
                                                                       & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))))
                                                : (
                                                   (1U 
                                                    & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                       >> 5U)) 
                                                   && ((1U 
                                                        & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                           >> 4U)) 
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
                                                                       & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)))))))
                                               ? vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                                              [(0x1fU 
                                                & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                   >> 0x14U))]
                                               : vlSelfRef.top_tb__DOT__hut__DOT__d_imm);
    vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt 
        = ((0x63U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
           & (((6U == (7U & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                             >> 0xcU))) | (7U == (7U 
                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                     >> 0xcU))))
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
    vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq 
        = ((0x63U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
           & (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
              == vlSelfRef.top_tb__DOT__hut__DOT__e_rs2));
    if ((8U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))) {
        if ((4U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))) {
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = ((0x37U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                    ? vlSelfRef.top_tb__DOT__hut__DOT__e_rs2
                    : 0U);
        } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))) {
            vlSelfRef.top_tb__DOT__hut__DOT__e_res 
                = ((0x37U == (0x7fU & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                    ? vlSelfRef.top_tb__DOT__hut__DOT__e_rs2
                    : 0U);
        } else if ((1U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))) {
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
        vlSelfRef.top_tb__DOT__hut__DOT__e_res = ((4U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                     ? 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                     ? 
                                                    VL_SHIFTL_III(32,32,32, vlSelfRef.top_tb__DOT__hut__DOT__e_rs1, vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     ^ vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                     ? 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     | vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     & vlSelfRef.top_tb__DOT__hut__DOT__e_rs2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__c_alusel))
                                                     ? 
                                                    (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                     - vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))
                                                      ? 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__f_pc 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__d_imm)
                                                      : 
                                                     (vlSelfRef.top_tb__DOT__hut__DOT__e_rs1 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__e_rs2)))));
    }
    vlSelfRef.top_tb__DOT__hut__DOT__m_data_o = 0U;
    if ((4U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
        if ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3) 
                      >> 1U)))) {
            vlSelfRef.top_tb__DOT__hut__DOT__m_data_o 
                = ((1U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                    ? ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                              >> 7U)))) 
                            << 0x10U) | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                          [(0xfffffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                          << 8U) | 
                                         vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                         [(0xfffffU 
                                           & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]))
                        : ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                            [(0xfffffU & ((IData)(1U) 
                                          + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                            << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]))
                    : ((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & vlSelfRef.top_tb__DOT__hut__DOT__e_res)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)])
                        : vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                       [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]));
        }
    } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))) {
        if ((1U & (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3)))) {
            vlSelfRef.top_tb__DOT__hut__DOT__m_data_o 
                = (((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                     [(0xfffffU & ((IData)(3U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                     << 0x18U) | (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                  [(0xfffffU & ((IData)(2U) 
                                                + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                  << 0x10U)) | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                 [(0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                                 << 8U) 
                                                | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                                [(0xfffffU 
                                                  & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]));
        }
    } else {
        vlSelfRef.top_tb__DOT__hut__DOT__m_data_o = 
            ((1U & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
              ? ((1U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                  ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                        [(0xfffffU 
                                          & ((IData)(1U) 
                                             + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                                        >> 7U)))) << 0x10U) 
                     | ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                         [(0xfffffU & ((IData)(1U) 
                                       + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                         << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                        [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]))
                  : ((vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                      [(0xfffffU & ((IData)(1U) + vlSelfRef.top_tb__DOT__hut__DOT__e_res))] 
                      << 8U) | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                     [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]))
              : ((0U == (IData)(vlSelfRef.top_tb__DOT__hut__DOT__m_funct3))
                  ? (((- (IData)((1U & (vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                                        [(0xfffffU 
                                          & vlSelfRef.top_tb__DOT__hut__DOT__e_res)] 
                                        >> 7U)))) << 8U) 
                     | vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                     [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)])
                  : vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory
                 [(0xfffffU & vlSelfRef.top_tb__DOT__hut__DOT__e_res)]));
    }
    vlSelfRef.top_tb__DOT__hut__DOT__wb_nextPC = ((
                                                   ((1U 
                                                     & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                        >> 6U)) 
                                                    && ((1U 
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
                                                                ((1U 
                                                                  & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                     >> 2U)) 
                                                                 && ((1U 
                                                                      & (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                                         >> 1U)) 
                                                                     && (1U 
                                                                         & vlSelfRef.top_tb__DOT__hut__DOT__f_insn))))))) 
                                                   | ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)) 
                                                      & ((0x4000U 
                                                          & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                           ? 
                                                          (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                                           : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__brlt))
                                                          : 
                                                         ((~ 
                                                           (vlSelfRef.top_tb__DOT__hut__DOT__f_insn 
                                                            >> 0xdU)) 
                                                          & ((0x1000U 
                                                              & vlSelfRef.top_tb__DOT__hut__DOT__f_insn)
                                                              ? 
                                                             (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))
                                                              : (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_alu1__DOT__breq))))))
                                                   ? vlSelfRef.top_tb__DOT__hut__DOT__e_res
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc));
}

void Vtop_tb___024root___timing_commit(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_commit\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha9f78880__0.commit(
                                                   "@(posedge top_tb.clk)");
    }
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha9f78880__0.resume(
                                                   "@(posedge top_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    Vtop_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop_tb___024root___timing_resume(vlSelf);
        Vtop_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top_tb.sv", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top_tb.sv", 11, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
