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
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_3;
    __VdfgRegularize_h0dff6736_0_3 = 0;
    SData/*12:0*/ __VdfgRegularize_h0dff6736_0_4;
    __VdfgRegularize_h0dff6736_0_4 = 0;
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_5;
    __VdfgRegularize_h0dff6736_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h0dff6736_0_9;
    __VdfgRegularize_h0dff6736_0_9 = 0;
    // Body
    __VdfgRegularize_h0dff6736_0_4 = (((0x1000U & (vlSelfRef.top_tb__DOT__insn 
                                                   >> 0x13U)) 
                                       | (0x800U & 
                                          (vlSelfRef.top_tb__DOT__insn 
                                           << 4U))) 
                                      | ((0x7e0U & 
                                          (vlSelfRef.top_tb__DOT__insn 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSelfRef.top_tb__DOT__insn 
                                             >> 7U))));
    __VdfgRegularize_h0dff6736_0_9 = ((1U == (7U & 
                                              (vlSelfRef.top_tb__DOT__insn 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSelfRef.top_tb__DOT__insn 
                                                   >> 0xcU))));
    if ((2U & vlSelfRef.top_tb__DOT__insn)) {
        if ((1U & vlSelfRef.top_tb__DOT__insn)) {
            __VdfgRegularize_h0dff6736_0_5 = (0xfffff000U 
                                              & vlSelfRef.top_tb__DOT__insn);
            __VdfgRegularize_h0dff6736_0_3 = ((IData)(__VdfgRegularize_h0dff6736_0_9)
                                               ? (0x1fU 
                                                  & (vlSelfRef.top_tb__DOT__insn 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.top_tb__DOT__insn 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top_tb__DOT__insn 
                                                     >> 0x14U)));
        } else {
            __VdfgRegularize_h0dff6736_0_5 = 0U;
            __VdfgRegularize_h0dff6736_0_3 = 0U;
        }
    } else {
        __VdfgRegularize_h0dff6736_0_5 = 0U;
        __VdfgRegularize_h0dff6736_0_3 = 0U;
    }
    vlSelfRef.top_tb__DOT__opcode = (0x7fU & vlSelfRef.top_tb__DOT__insn);
    vlSelfRef.top_tb__DOT__memren = ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                               >> 6U))) 
                                     && ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                   >> 5U))) 
                                         && ((1U & 
                                              (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                  >> 4U))) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__opcode))))))));
    vlSelfRef.top_tb__DOT__pcsel = ((1U & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                           >> 6U)) 
                                    && ((1U & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                               >> 5U)) 
                                        && ((1U & (~ 
                                                   ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                    >> 4U))) 
                                            && ((8U 
                                                 & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                 ? 
                                                ((1U 
                                                  & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                     >> 2U)) 
                                                 && ((1U 
                                                      & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & (IData)(vlSelfRef.top_tb__DOT__opcode))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__opcode)))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__opcode))))))));
    vlSelfRef.top_tb__DOT__memwren = ((1U & (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                >> 6U))) 
                                      && ((1U & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                 >> 5U)) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                   >> 4U))) 
                                              && ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 3U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                           >> 2U))) 
                                                      && ((1U 
                                                           & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & (IData)(vlSelfRef.top_tb__DOT__opcode))))))));
    vlSelfRef.top_tb__DOT__funct7 = (0x7fU & ((0x33U 
                                               == (IData)(vlSelfRef.top_tb__DOT__opcode))
                                               ? (vlSelfRef.top_tb__DOT__insn 
                                                  >> 0x19U)
                                               : ((
                                                   (0x13U 
                                                    == (IData)(vlSelfRef.top_tb__DOT__opcode)) 
                                                   & (IData)(__VdfgRegularize_h0dff6736_0_9))
                                                   ? 
                                                  (vlSelfRef.top_tb__DOT__insn 
                                                   >> 0x19U)
                                                   : 0U)));
    if ((0x40U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
        vlSelfRef.top_tb__DOT__immsel = ((1U & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                >> 5U)) 
                                         && ((1U & 
                                              (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                  >> 4U))) 
                                             && ((8U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 2U)) 
                                                  && ((1U 
                                                       & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & (IData)(vlSelfRef.top_tb__DOT__opcode))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__opcode)))
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__opcode)))))));
        vlSelfRef.top_tb__DOT__regwren = ((1U & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                 >> 5U)) 
                                          && ((1U & 
                                               (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                   >> 4U))) 
                                              && ((8U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 2U)) 
                                                   && ((1U 
                                                        & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & (IData)(vlSelfRef.top_tb__DOT__opcode))))
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 2U)) 
                                                   && ((1U 
                                                        & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & (IData)(vlSelfRef.top_tb__DOT__opcode)))))));
        vlSelfRef.top_tb__DOT__rs1sel = ((1U & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                >> 5U)) 
                                         && ((1U & 
                                              (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                  >> 4U))) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((4U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & (IData)(vlSelfRef.top_tb__DOT__opcode)))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & (IData)(vlSelfRef.top_tb__DOT__opcode)))))));
        vlSelfRef.top_tb__DOT__rs2sel = ((1U & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                >> 5U)) 
                                         && ((1U & 
                                              (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                  >> 4U))) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__opcode)))))));
        if ((0x20U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__wbsel = 0U;
                vlSelfRef.top_tb__DOT__alusel = 0xfU;
            } else if ((8U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                            vlSelfRef.top_tb__DOT__wbsel = 2U;
                            vlSelfRef.top_tb__DOT__alusel = 0U;
                        } else {
                            vlSelfRef.top_tb__DOT__wbsel = 0U;
                            vlSelfRef.top_tb__DOT__alusel = 0xfU;
                        }
                    } else {
                        vlSelfRef.top_tb__DOT__wbsel = 0U;
                        vlSelfRef.top_tb__DOT__alusel = 0xfU;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__wbsel = 0U;
                    vlSelfRef.top_tb__DOT__alusel = 0xfU;
                }
            } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                        vlSelfRef.top_tb__DOT__wbsel = 2U;
                        vlSelfRef.top_tb__DOT__alusel = 0U;
                    } else {
                        vlSelfRef.top_tb__DOT__wbsel = 0U;
                        vlSelfRef.top_tb__DOT__alusel = 0xfU;
                    }
                } else {
                    vlSelfRef.top_tb__DOT__wbsel = 0U;
                    vlSelfRef.top_tb__DOT__alusel = 0xfU;
                }
            } else {
                vlSelfRef.top_tb__DOT__wbsel = 0U;
                vlSelfRef.top_tb__DOT__alusel = ((2U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                   ? 0U
                                                   : 0xfU)
                                                  : 0xfU);
            }
        } else {
            vlSelfRef.top_tb__DOT__wbsel = 0U;
            vlSelfRef.top_tb__DOT__alusel = 0xfU;
        }
    } else {
        if ((0x20U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__immsel = ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                         >> 2U)) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
                vlSelfRef.top_tb__DOT__rs1sel = ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
                if ((8U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__wbsel = 0U;
                    vlSelfRef.top_tb__DOT__alusel = 0xfU;
                } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__wbsel = 
                        ((2U & (IData)(vlSelfRef.top_tb__DOT__opcode))
                          ? ((1U & (IData)(vlSelfRef.top_tb__DOT__opcode))
                              ? 3U : 0U) : 0U);
                    vlSelfRef.top_tb__DOT__alusel = 0xfU;
                } else {
                    vlSelfRef.top_tb__DOT__wbsel = 0U;
                    vlSelfRef.top_tb__DOT__alusel = 
                        ((2U & (IData)(vlSelfRef.top_tb__DOT__opcode))
                          ? ((1U & (IData)(vlSelfRef.top_tb__DOT__opcode))
                              ? ((0x4000U & vlSelfRef.top_tb__DOT__insn)
                                  ? ((0x2000U & vlSelfRef.top_tb__DOT__insn)
                                      ? ((0x1000U & vlSelfRef.top_tb__DOT__insn)
                                          ? 2U : 3U)
                                      : ((0x1000U & vlSelfRef.top_tb__DOT__insn)
                                          ? ((0U == (IData)(vlSelfRef.top_tb__DOT__funct7))
                                              ? 6U : 7U)
                                          : 4U)) : 
                                 ((0x2000U & vlSelfRef.top_tb__DOT__insn)
                                   ? ((0x1000U & vlSelfRef.top_tb__DOT__insn)
                                       ? 9U : 8U) : 
                                  ((0x1000U & vlSelfRef.top_tb__DOT__insn)
                                    ? 5U : ((0U == (IData)(vlSelfRef.top_tb__DOT__funct7))
                                             ? 0U : 1U))))
                              : 0xfU) : 0xfU);
                }
            } else {
                vlSelfRef.top_tb__DOT__immsel = ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
                vlSelfRef.top_tb__DOT__rs1sel = ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
                vlSelfRef.top_tb__DOT__wbsel = 0U;
                vlSelfRef.top_tb__DOT__alusel = ((8U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                  ? 0xfU
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                   ? 0xfU
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                     ? 0U
                                                     : 0xfU)
                                                    : 0xfU)));
            }
            vlSelfRef.top_tb__DOT__regwren = ((1U & 
                                               ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                >> 4U)) 
                                              && ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 3U))) 
                                                  && ((4U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & (IData)(vlSelfRef.top_tb__DOT__opcode)))
                                                       : 
                                                      ((1U 
                                                        & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                           >> 1U)) 
                                                       && (1U 
                                                           & (IData)(vlSelfRef.top_tb__DOT__opcode))))));
        } else if ((0x10U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
            vlSelfRef.top_tb__DOT__immsel = ((1U & 
                                              (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                  >> 3U))) 
                                             && ((4U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__opcode)))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
            vlSelfRef.top_tb__DOT__regwren = ((1U & 
                                               (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                   >> 3U))) 
                                              && ((4U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__opcode)))
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 1U)) 
                                                   && (1U 
                                                       & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
            vlSelfRef.top_tb__DOT__rs1sel = ((1U & 
                                              (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                  >> 3U))) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
            vlSelfRef.top_tb__DOT__wbsel = 0U;
            vlSelfRef.top_tb__DOT__alusel = ((8U & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                              ? 0xfU
                                              : ((4U 
                                                  & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                    ? 0U
                                                    : 0xfU)
                                                   : 0xfU)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelfRef.top_tb__DOT__insn)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelfRef.top_tb__DOT__insn)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelfRef.top_tb__DOT__insn)
                                                       ? 2U
                                                       : 3U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.top_tb__DOT__insn)
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.top_tb__DOT__funct7))
                                                        ? 6U
                                                        : 7U)
                                                       : 4U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelfRef.top_tb__DOT__insn)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelfRef.top_tb__DOT__insn)
                                                       ? 9U
                                                       : 8U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelfRef.top_tb__DOT__insn)
                                                       ? 5U
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelfRef.top_tb__DOT__funct7))
                                                        ? 0U
                                                        : 1U))))
                                                    : 0xfU)
                                                   : 0xfU)));
        } else {
            vlSelfRef.top_tb__DOT__immsel = ((1U & 
                                              (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                  >> 3U))) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
            vlSelfRef.top_tb__DOT__regwren = ((1U & 
                                               (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                   >> 3U))) 
                                              && ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 1U)) 
                                                      && (1U 
                                                          & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
            vlSelfRef.top_tb__DOT__rs1sel = ((1U & 
                                              (~ ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                  >> 3U))) 
                                             && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 2U))) 
                                                 && ((1U 
                                                      & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                         >> 1U)) 
                                                     && (1U 
                                                         & (IData)(vlSelfRef.top_tb__DOT__opcode)))));
            if ((8U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__wbsel = 0U;
                vlSelfRef.top_tb__DOT__alusel = 0xfU;
            } else if ((4U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                vlSelfRef.top_tb__DOT__wbsel = 0U;
                vlSelfRef.top_tb__DOT__alusel = 0xfU;
            } else if ((2U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.top_tb__DOT__opcode))) {
                    vlSelfRef.top_tb__DOT__wbsel = 1U;
                    vlSelfRef.top_tb__DOT__alusel = 0U;
                } else {
                    vlSelfRef.top_tb__DOT__wbsel = 0U;
                    vlSelfRef.top_tb__DOT__alusel = 0xfU;
                }
            } else {
                vlSelfRef.top_tb__DOT__wbsel = 0U;
                vlSelfRef.top_tb__DOT__alusel = 0xfU;
            }
        }
        vlSelfRef.top_tb__DOT__rs2sel = ((1U & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                >> 5U)) 
                                         && ((0x10U 
                                              & (IData)(vlSelfRef.top_tb__DOT__opcode))
                                              ? ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__opcode)))))
                                              : ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & ((IData)(vlSelfRef.top_tb__DOT__opcode) 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & (IData)(vlSelfRef.top_tb__DOT__opcode)))))));
    }
    vlSelfRef.top_tb__DOT__imm = ((0x40U & vlSelfRef.top_tb__DOT__insn)
                                   ? ((0x20U & vlSelfRef.top_tb__DOT__insn)
                                       ? ((0x10U & vlSelfRef.top_tb__DOT__insn)
                                           ? 0U : (
                                                   (8U 
                                                    & vlSelfRef.top_tb__DOT__insn)
                                                    ? 
                                                   ((4U 
                                                     & vlSelfRef.top_tb__DOT__insn)
                                                     ? 
                                                    ((2U 
                                                      & vlSelfRef.top_tb__DOT__insn)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.top_tb__DOT__insn)
                                                       ? 
                                                      ((((- (IData)(
                                                                    (vlSelfRef.top_tb__DOT__insn 
                                                                     >> 0x1fU))) 
                                                         << 0x15U) 
                                                        | (0x100000U 
                                                           & (vlSelfRef.top_tb__DOT__insn 
                                                              >> 0xbU))) 
                                                       | (((0xff000U 
                                                            & vlSelfRef.top_tb__DOT__insn) 
                                                           | (0x800U 
                                                              & (vlSelfRef.top_tb__DOT__insn 
                                                                 >> 9U))) 
                                                          | (0x7feU 
                                                             & (vlSelfRef.top_tb__DOT__insn 
                                                                >> 0x14U))))
                                                       : 0U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((4U 
                                                     & vlSelfRef.top_tb__DOT__insn)
                                                     ? __VdfgRegularize_h0dff6736_0_3
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.top_tb__DOT__insn)
                                                      ? 
                                                     ((1U 
                                                       & vlSelfRef.top_tb__DOT__insn)
                                                       ? 
                                                      (((6U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.top_tb__DOT__insn 
                                                             >> 0xcU))) 
                                                        | (7U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.top_tb__DOT__insn 
                                                               >> 0xcU))))
                                                        ? (IData)(__VdfgRegularize_h0dff6736_0_4)
                                                        : 
                                                       (((- (IData)(
                                                                    (vlSelfRef.top_tb__DOT__insn 
                                                                     >> 0x1fU))) 
                                                         << 0xdU) 
                                                        | (IData)(__VdfgRegularize_h0dff6736_0_4)))
                                                       : 0U)
                                                      : 0U))))
                                       : 0U) : ((0x20U 
                                                 & vlSelfRef.top_tb__DOT__insn)
                                                 ? 
                                                ((0x10U 
                                                  & vlSelfRef.top_tb__DOT__insn)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.top_tb__DOT__insn)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.top_tb__DOT__insn)
                                                    ? __VdfgRegularize_h0dff6736_0_5
                                                    : 0U))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.top_tb__DOT__insn)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.top_tb__DOT__insn)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.top_tb__DOT__insn)
                                                     ? 
                                                    ((1U 
                                                      & vlSelfRef.top_tb__DOT__insn)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelfRef.top_tb__DOT__insn 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelfRef.top_tb__DOT__insn 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelfRef.top_tb__DOT__insn 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelfRef.top_tb__DOT__insn)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.top_tb__DOT__insn)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.top_tb__DOT__insn)
                                                    ? __VdfgRegularize_h0dff6736_0_5
                                                    : __VdfgRegularize_h0dff6736_0_3))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.top_tb__DOT__insn)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.top_tb__DOT__insn)
                                                    ? 0U
                                                    : __VdfgRegularize_h0dff6736_0_3)))));
}

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_nba\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
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
            VL_FATAL_MT("top_tb.sv", 12, "", "NBA region did not converge.");
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
                VL_FATAL_MT("top_tb.sv", 12, "", "Active region did not converge.");
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
