// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0 
        = vlSelfRef.top__DOT__clock;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clkg__DOT__counter = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__is_program = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc = 0x1000000U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc = 0x1000000U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res = 0x1000000U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
}

extern const VlWide<23>/*735:0*/ Vtop__ConstPool__CONST_h438f242a_0;
extern const VlWide<21>/*671:0*/ Vtop__ConstPool__CONST_h9ad40870_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 768, 1371, 0, VL_CVT_PACK_STR_NW(23, Vtop__ConstPool__CONST_h438f242a_0)
                 ,  &(vlSelfRef.top__DOT__genblk3__DOT__pattern)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__clock = 0U;
    vlSelfRef.top__DOT__reset = 1U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[1U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[2U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[3U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[4U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[5U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[6U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[7U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[8U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[9U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xaU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xbU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xcU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xdU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xeU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0xfU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x10U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x11U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x12U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x13U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x14U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x15U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x16U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x17U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x18U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x19U] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1aU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1bU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1cU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1dU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1eU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[0x1fU] = 0U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_READMEM_N(true, 32, 154, 0, VL_CVT_PACK_STR_NW(21, Vtop__ConstPool__CONST_h9ad40870_0)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x40000U, vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)) {
        if (VL_GTS_III(32, 0x9aU, vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                                & VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i))] 
                = ((0x99U >= (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i))
                    ? (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                       [(0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)])
                    : 0U);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)))] 
                = (0xffU & (((0x99U >= (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i))
                              ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                             [(0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)]
                              : 0U) >> 8U));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)))] 
                = (0xffU & (((0x99U >= (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i))
                              ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                             [(0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)]
                              : 0U) >> 0x10U));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)))] 
                = (((0x99U >= (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i))
                     ? vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory
                    [(0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)]
                     : 0U) >> 0x18U);
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                                & VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i))] = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)))] = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)))] = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i)))] = 0U;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i 
            = ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__i);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/padl/Documents/Code/EECS4201/EECS-4201-project/project/pd4/verif/tests/test_pd.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_2;
    __VdfgRegularize_h0dff6736_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_h0dff6736_0_3;
    __VdfgRegularize_h0dff6736_0_3 = 0;
    // Body
    vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc = vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
        = (((0x1000000U <= vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc) 
            & (0x1100000U > ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)))
            ? (((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                 [(0xfffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))] 
                 << 0x18U) | (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                              [(0xfffffU & ((IData)(2U) 
                                            + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))] 
                              << 0x10U)) | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                             [(0xfffffU 
                                               & ((IData)(1U) 
                                                  + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc))] 
                                             << 8U) 
                                            | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                            [(0xfffffU 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)]))
            : 0xdeadbeefU);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs2data 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
        [(0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                   >> 0x14U))];
    vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3 = 2U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1 
        = (((0x17U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) 
            & (0x37U != (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)))
            ? (0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                        >> 0xfU)) : 0U);
    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
            __VdfgRegularize_h0dff6736_0_2 = (((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                    >> 0xcU))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                      >> 0xcU))))
                                               ? (0x1fU 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                     >> 0x14U))
                                               : ((
                                                   (- (IData)(
                                                              (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                     >> 0x14U)));
            __VdfgRegularize_h0dff6736_0_3 = (0xfffff000U 
                                              & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o);
        } else {
            __VdfgRegularize_h0dff6736_0_2 = 0U;
            __VdfgRegularize_h0dff6736_0_3 = 0U;
        }
    } else {
        __VdfgRegularize_h0dff6736_0_2 = 0U;
        __VdfgRegularize_h0dff6736_0_3 = 0U;
    }
    if ((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)))
                                       : ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                           ? ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))
                                           : ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                            >> 4U))) 
                                  && ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))))));
        if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
            if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                    if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                        if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 2U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                                = ((((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                     >> 0xbU))) 
                                   | (((0xff000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o) 
                                       | (0x800U & 
                                          (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                           >> 9U))) 
                                      | (0x7feU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
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
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
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
                    = __VdfgRegularize_h0dff6736_0_2;
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
                if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                    if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                        vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                            = (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                            >> 0x1fU))) 
                                << 0xdU) | (((0x1000U 
                                              & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 0x13U)) 
                                             | (0x800U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                   << 4U))) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                     >> 7U)))));
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
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                      >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                            >> 4U))) 
                                  && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 3U))) 
                                      && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                           ? ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))
                                           : ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))))));
    } else if ((0x20U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
        if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                             >> 3U))) && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 2U)) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                    = __VdfgRegularize_h0dff6736_0_3;
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                    = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                        ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                            ? ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                ? ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                    ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                        ? 2U : 3U) : 
                                   ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                     ? ((0U == (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 0x19U))
                                         ? 6U : 7U)
                                     : 4U)) : ((0x2000U 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                                    ? 9U
                                                    : 8U)
                                                : (
                                                   (0x1000U 
                                                    & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                                    ? 5U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                      >> 0x19U))
                                                     ? 0U
                                                     : 1U))))
                            : 0xfU) : 0xfU);
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            }
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
            if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            } else if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0U;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                        = (((- (IData)((vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                            >> 7U))));
                } else {
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                    vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
                }
            } else {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
                vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
            }
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
                = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 1U)) 
                                              && (1U 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                      >> 4U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                            >> 3U))) 
                                  && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
    } else if ((0x10U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                         >> 3U))) && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                         >> 3U))) && ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                       ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))
                                       : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                        ? 0U : 0xfU) : 0xfU);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h0dff6736_0_3;
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel 
                = ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                    ? ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                        ? ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                            ? ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                     >> 0x19U))
                                                    ? 6U
                                                    : 7U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                                   ? 5U
                                                   : 0U)))
                        : 0xfU) : 0xfU);
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm 
                = __VdfgRegularize_h0dff6736_0_2;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_immsel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_regwren 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
        if ((8U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else if ((4U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel = 0U;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel = 0xfU;
            vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm = 0U;
        } else {
            if ((2U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
                if ((1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) {
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
                = __VdfgRegularize_h0dff6736_0_2;
        }
        vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel 
            = ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                         >> 3U))) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))));
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__m_size_encoded 
        = (3U & (((0x23U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) 
                  | (3U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)))
                  ? (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3)
                  : (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                     >> 0xcU)));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__r_rs1data 
        = vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
        [vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1];
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
        = ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_rs1sel)
            ? vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
           [vlSelfRef.top__DOT__dut__DOT__core__DOT__d_rs1]
            : vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
        = (((0x40U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
             ? ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                       >> 5U)) && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                             >> 4U))) 
                                   && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                   >> 2U))) 
                                           && ((1U 
                                                & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                   >> 1U)) 
                                               && (1U 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))))))
             : ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                       >> 5U)) && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                          >> 4U)) && 
                                   ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                              >> 3U))) 
                                    && ((1U & (~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                  >> 2U))) 
                                        && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)))))))
            ? vlSelfRef.top__DOT__dut__DOT__core__DOT__register_file1__DOT__x
           [(0x1fU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                      >> 0x14U))] : vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt 
        = ((0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) 
           & (((6U == (7U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                             >> 0xcU))) | (7U == (7U 
                                                  & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                     >> 0xcU))))
               ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                  < vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
               : (((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                    >> 0x1fU) > (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                 >> 0x1fU)) | (((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                                 >> 0x1fU) 
                                                >= 
                                                (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                                 >> 0x1fU)) 
                                               & ((0x7fffffffU 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1) 
                                                  < 
                                                  (0x7fffffffU 
                                                   & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2))))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq 
        = ((0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) 
           & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
              == vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2));
    if ((8U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))) {
        if ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = ((0x37U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))
                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2
                    : 0U);
        } else if ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = ((0x37U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))
                    ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2
                    : 0U);
        } else if ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                   < vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2);
        } else {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = ((0xfffffffeU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res) 
                   | (((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                        >> 0x1fU) > (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                     >> 0x1fU)) | (
                                                   ((vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                                     >> 0x1fU) 
                                                    >= 
                                                    (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                                     >> 0x1fU)) 
                                                   & ((1U 
                                                       & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                                                          >> 0x1eU)) 
                                                      < 
                                                      (1U 
                                                       & (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2 
                                                          >> 0x1eU))))));
            vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
                = (1U & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res);
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res 
            = ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                ? ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                        ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
                        : VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2))
                    : ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                        ? VL_SHIFTL_III(32,32,32, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1, vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
                        : (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                           ^ vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)))
                : ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                    ? ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                        ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                           | vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
                        : (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2))
                    : ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_alusel))
                        ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                           - vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)
                        : ((0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))
                            ? (vlSelfRef.top__DOT__dut__DOT__core__DOT__f_pc 
                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm)
                            : (vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs1 
                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_rs2)))));
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken 
        = ((0x63U == (0x7fU & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)) 
           & ((0x4000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
               ? ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                   ? (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt))
                   : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt))
               : ((~ (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                      >> 0xdU)) & ((0x1000U & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                    ? (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq))
                                    : (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq)))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o = 0U;
    if ((4U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
        if ((1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3) 
                      >> 1U)))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o 
                = ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                    ? ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                              >> 7U)))) 
                            << 0x10U) | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                          [(0xfffffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                          << 8U) | 
                                         vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                         [(0xfffffU 
                                           & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))
                        : ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                            [(0xfffffU & ((IData)(1U) 
                                          + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                            << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))
                    : ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                        ? (((- (IData)((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                              [(0xfffffU 
                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)] 
                                              >> 7U)))) 
                            << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                           [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)])
                        : vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                       [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]));
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3)))) {
            vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o 
                = (((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                     [(0xfffffU & ((IData)(3U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                     << 0x18U) | (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                  [(0xfffffU & ((IData)(2U) 
                                                + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                  << 0x10U)) | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                 [(0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                                 << 8U) 
                                                | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                                [(0xfffffU 
                                                  & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]));
        }
    } else {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o 
            = ((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                ? ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                    ? (((- (IData)((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                          [(0xfffffU 
                                            & ((IData)(1U) 
                                               + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                          >> 7U)))) 
                        << 0x10U) | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                      [(0xfffffU & 
                                        ((IData)(1U) 
                                         + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                                      << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                     [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))
                    : ((vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                        [(0xfffffU & ((IData)(1U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res))] 
                        << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                       [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]))
                : ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__m_funct3))
                    ? (((- (IData)((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                                          [(0xfffffU 
                                            & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)] 
                                          >> 7U)))) 
                        << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                       [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)])
                    : vlSelfRef.top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory
                   [(0xfffffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res)]));
    }
    vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_nextPC 
        = ((((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                    >> 6U)) && ((1U & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                       >> 5U)) && (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                        >> 4U))) 
                                                   && ((8U 
                                                        & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)
                                                        ? 
                                                       ((1U 
                                                         & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o)))
                                                        : 
                                                       ((1U 
                                                         & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                            >> 2U)) 
                                                        && ((1U 
                                                             & (vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o 
                                                                >> 1U)) 
                                                            && (1U 
                                                                & vlSelfRef.top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o))))))) 
            | (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__e_brtaken))
            ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res
            : ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__wb_data 
        = ((0U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel))
            ? vlSelfRef.top__DOT__dut__DOT__core__DOT__e_res
            : ((1U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel))
                ? vlSelfRef.top__DOT__dut__DOT__core__DOT__m_data_o
                : ((2U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel))
                    ? ((IData)(4U) + vlSelfRef.top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc)
                    : ((3U == (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__c_wbsel))
                        ? vlSelfRef.top__DOT__dut__DOT__core__DOT__d_imm
                        : 0U))));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge top.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge top.clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge top.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge top.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->top__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844775645289313205ull);
    vlSelf->top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4457194187413456923ull);
    for (int __Vi0 = 0; __Vi0 < 1371; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(768, vlSelf->top__DOT__genblk3__DOT__pattern[__Vi0], __VscopeHash, 3437997641832917168ull);
    }
    vlSelf->top__DOT__genblk3__DOT__pre_check__DOT__res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1735463621253742542ull);
    vlSelf->top__DOT__genblk3__DOT__tick = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5871079935339220110ull);
    vlSelf->top__DOT__genblk3__DOT__tick_check__DOT__res = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8827944293140434767ull);
    vlSelf->top__DOT__genblk3__DOT__tick_check__DOT__tick_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8733703144478527002ull);
    vlSelf->top__DOT__genblk3__DOT__tick_check__DOT__correct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16716393228917976635ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->top__DOT__genblk3__DOT__tick_check__DOT__msg, __VscopeHash, 10781803541736536694ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4618406083856990165ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17726925785358468471ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_F__Vstatic__check_F_func__DOT__p, __VscopeHash, 10859367052700800039ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16364527408957267321ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16893219986236333547ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 934801074271333149ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6379340201662160556ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2415813836848899253ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15058807011594405173ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10988990796387366310ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4821697813978879619ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__shamt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7680416473058256975ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__p, __VscopeHash, 14766141647906589766ull);
    VL_SCOPED_RAND_RESET_W(224, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_D__Vstatic__check_D_func__DOT__t, __VscopeHash, 12136630823209822727ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5261460611534829256ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17275973119695547122ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8524080105343519812ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__read_rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17863047581496297824ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_R__Vstatic__check_R_func__DOT__p, __VscopeHash, 16831479681983499805ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6806010273412640671ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16769621078578701321ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__br_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17599226814180649497ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_E__Vstatic__check_E_func__DOT__p, __VscopeHash, 15263807552235316380ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8965363486198936428ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12932111936439470930ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__rw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10542856365725136794ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__size_encoded = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10968683682698355044ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5295327733512611729ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_M__Vstatic__check_M_func__DOT__p, __VscopeHash, 8405338076040605967ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16238638706185625876ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9718496743396830144ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__destination = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10019350665349809466ull);
    vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17718422602131648306ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk3__DOT__genblk3__DOT__check_W__Vstatic__check_W_func__DOT__p, __VscopeHash, 8062268755847022033ull);
    vlSelf->top__DOT__clkg__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7673510899991897937ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_immsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11319820169683274787ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_regwren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4613316192809712570ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_rs1sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13111688551968865359ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_wbsel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14310046240291742116ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__c_alusel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15290493732143631569ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__f_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12048714892135156921ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__d_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13883393208245219622ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__d_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5636778193619115238ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__r_rs1data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15365371660887283203ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__r_rs2data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3492018336000668659ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__e_rs1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 113726842195917031ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__e_rs2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18180878279343696596ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__e_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8293025988462458858ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__e_brtaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18113200417034375890ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__m_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3427968213470400065ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__m_size_encoded = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5564226640662752578ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__m_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6021044361812548326ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__wb_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1478545651734473413ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__wb_nextPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 273543210730138150ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__is_program = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3526790071870633143ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__fetch1__DOT__insn_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13958646094164465422ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__fetch1__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14244068164273144251ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__decode1__DOT__insn_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1101290891028577273ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__register_file1__DOT__x[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3332003384800576126ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__core__DOT__register_file1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top__DOT__dut__DOT__core__DOT__e_alu1__DOT__breq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15850541412850366615ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__e_alu1__DOT__brlt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14397592643366321454ull);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11844625093970627893ull);
    }
    for (int __Vi0 = 0; __Vi0 < 154; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1463922315813575142ull);
    }
    vlSelf->top__DOT__dut__DOT__core__DOT__memory1__DOT__i = 0;
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14234138457933551086ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
