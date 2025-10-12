// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vigen_tb.h for the primary calling header

#include "Vigen_tb__pch.h"
#include "Vigen_tb___024root.h"

VL_ATTR_COLD void Vigen_tb___024root___eval_initial__TOP(Vigen_tb___024root* vlSelf);
VlCoroutine Vigen_tb___024root___eval_initial__TOP__Vtiming__0(Vigen_tb___024root* vlSelf);
VlCoroutine Vigen_tb___024root___eval_initial__TOP__Vtiming__1(Vigen_tb___024root* vlSelf);

void Vigen_tb___024root___eval_initial(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_initial\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vigen_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vigen_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vigen_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vigen_tb___024root___act_sequent__TOP__0(Vigen_tb___024root* vlSelf);

void Vigen_tb___024root___eval_act(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_act\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vigen_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vigen_tb___024root___act_sequent__TOP__0(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___act_sequent__TOP__0\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_8;
    __VdfgRegularize_h0dff6736_0_8 = 0;
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_9;
    __VdfgRegularize_h0dff6736_0_9 = 0;
    // Body
    vlSelfRef.igen_tb__DOT__dut__DOT__btype_imm = (
                                                   ((0x1000U 
                                                     & (vlSelfRef.igen_tb__DOT__insn 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSelfRef.igen_tb__DOT__insn 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSelfRef.igen_tb__DOT__insn 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelfRef.igen_tb__DOT__insn 
                                                            >> 7U))));
    if ((2U & (IData)(vlSelfRef.igen_tb__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.igen_tb__DOT__opcode))) {
            __VdfgRegularize_h0dff6736_0_8 = (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.igen_tb__DOT__insn 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.igen_tb__DOT__insn 
                                                      >> 0xcU))))
                                               ? VL_SHIFTR_III(32,32,32, vlSelfRef.igen_tb__DOT__insn, 0x14U)
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.igen_tb__DOT__insn 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.igen_tb__DOT__insn 
                                                     >> 0x14U)));
            __VdfgRegularize_h0dff6736_0_9 = (0xfffff000U 
                                              & vlSelfRef.igen_tb__DOT__insn);
        } else {
            __VdfgRegularize_h0dff6736_0_8 = 0U;
            __VdfgRegularize_h0dff6736_0_9 = 0U;
        }
    } else {
        __VdfgRegularize_h0dff6736_0_8 = 0U;
        __VdfgRegularize_h0dff6736_0_9 = 0U;
    }
    vlSelfRef.igen_tb__DOT__imm = ((0x40U & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                    ? ((0x20U & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                        ? ((0x10U & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                            ? 0U : 
                                           ((8U & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                   ? 
                                                  ((((- (IData)(
                                                                (vlSelfRef.igen_tb__DOT__insn 
                                                                 >> 0x1fU))) 
                                                     << 0x15U) 
                                                    | (0x100000U 
                                                       & (vlSelfRef.igen_tb__DOT__insn 
                                                          >> 0xbU))) 
                                                   | (((0xff000U 
                                                        & vlSelfRef.igen_tb__DOT__insn) 
                                                       | (0x800U 
                                                          & (vlSelfRef.igen_tb__DOT__insn 
                                                             >> 9U))) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.igen_tb__DOT__insn 
                                                            >> 0x14U))))
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : ((4U 
                                                 & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                 ? __VdfgRegularize_h0dff6736_0_8
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                   ? 
                                                  (((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.igen_tb__DOT__insn 
                                                         >> 0xcU))) 
                                                    | (7U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.igen_tb__DOT__insn 
                                                           >> 0xcU))))
                                                    ? (IData)(vlSelfRef.igen_tb__DOT__dut__DOT__btype_imm)
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelfRef.igen_tb__DOT__insn 
                                                                 >> 0x1fU))) 
                                                     << 0xdU) 
                                                    | (IData)(vlSelfRef.igen_tb__DOT__dut__DOT__btype_imm)))
                                                   : 0U)
                                                  : 0U))))
                                        : 0U) : ((0x20U 
                                                  & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                  ? 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                     ? __VdfgRegularize_h0dff6736_0_9
                                                     : 0U))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelfRef.igen_tb__DOT__insn 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0xfe0U 
                                                           & (vlSelfRef.igen_tb__DOT__insn 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelfRef.igen_tb__DOT__insn 
                                                                >> 7U))))
                                                       : 0U)
                                                      : 0U))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                     ? __VdfgRegularize_h0dff6736_0_9
                                                     : __VdfgRegularize_h0dff6736_0_8))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.igen_tb__DOT__opcode))
                                                     ? 0U
                                                     : __VdfgRegularize_h0dff6736_0_8)))));
}

void Vigen_tb___024root___eval_nba(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_nba\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vigen_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vigen_tb___024root___timing_commit(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___timing_commit\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h4c9e1ea5__0.commit(
                                                   "@(posedge igen_tb.clk)");
    }
}

void Vigen_tb___024root___timing_resume(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___timing_resume\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h4c9e1ea5__0.resume(
                                                   "@(posedge igen_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vigen_tb___024root___eval_triggers__act(Vigen_tb___024root* vlSelf);

bool Vigen_tb___024root___eval_phase__act(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_phase__act\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vigen_tb___024root___eval_triggers__act(vlSelf);
    Vigen_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vigen_tb___024root___timing_resume(vlSelf);
        Vigen_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vigen_tb___024root___eval_phase__nba(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_phase__nba\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vigen_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vigen_tb___024root___dump_triggers__nba(Vigen_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vigen_tb___024root___dump_triggers__act(Vigen_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vigen_tb___024root___eval(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vigen_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("igen_tb.sv", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vigen_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("igen_tb.sv", 11, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vigen_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vigen_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vigen_tb___024root___eval_debug_assertions(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_debug_assertions\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
