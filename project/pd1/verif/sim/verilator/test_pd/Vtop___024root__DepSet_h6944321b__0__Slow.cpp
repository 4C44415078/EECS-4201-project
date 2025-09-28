// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clock__0 
        = vlSelfRef.top__DOT__clock;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clkg__DOT__counter = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

extern const VlWide<33>/*1055:0*/ Vtop__ConstPool__CONST_hc3994f83_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i;
    top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x64756d70U;
    __Vtemp_1[1U] = 0x7374312eU;
    __Vtemp_1[2U] = 0x7465U;
    vlSelfRef.top__DOT__genblk2__DOT_____05Fdump_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                      , std::string{"w"});
    ;
    vlSelfRef.top__DOT__clock = 0U;
    vlSelfRef.top__DOT__reset = 1U;
    vlSelfRef.top__DOT__dut__DOT__core__DOT__insn_o = 0U;
    VL_READMEM_N(true, 32, 1048576, 0, VL_CVT_PACK_STR_NW(33, Vtop__ConstPool__CONST_hc3994f83_0)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory)
                 , 0, ~0ULL);
    top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x7fU, top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[(0xfffffU 
                                                                               & VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i))] 
            = (0xffU & vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory
               [(0xfffffU & top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)]);
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[(0xfffffU 
                                                                               & ((IData)(1U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)))] 
            = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory
                        [(0xfffffU & top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)] 
                        >> 8U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[(0xfffffU 
                                                                               & ((IData)(2U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)))] 
            = (0xffU & (vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory
                        [(0xfffffU & top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)] 
                        >> 0x10U));
        vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[(0xfffffU 
                                                                               & ((IData)(3U) 
                                                                                + 
                                                                                VL_MULS_III(32, (IData)(4U), top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)))] 
            = (vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory
               [(0xfffffU & top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i)] 
               >> 0x18U);
        top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("IMEMORY: Loaded 127 32-bit words from /Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd1/verif/data/test1.x\n",0);
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
            VL_FATAL_MT("/Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd1/verif/tests/test_pd.sv", 4, "", "Settle region did not converge.");
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
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__dut__DOT__core__DOT__insn_o = 0U;
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_write_en_i)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__reset)))) {
            if (vlSelfRef.top__DOT__dut__DOT__core__DOT__memory_read_en_i) {
                vlSelfRef.top__DOT__dut__DOT__core__DOT__insn_o 
                    = (((vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory
                         [3U] << 0x18U) | (vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory
                                           [2U] << 0x10U)) 
                       | ((vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory
                           [1U] << 8U) | vlSelfRef.top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory
                          [0U]));
            }
        }
    }
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

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->top__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844775645289313205ull);
    vlSelf->top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4457194187413456923ull);
    vlSelf->top__DOT__genblk2__DOT_____05Fdump_fd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2131419011722022482ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk2__DOT__pattern_dump, __VscopeHash, 10955522923576967124ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->top__DOT__genblk2__DOT__pattern_dump_proc__DOT__stage, __VscopeHash, 15181666039126907824ull);
    vlSelf->top__DOT__clkg__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7673510899991897937ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__insn_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2862744194841267609ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__memory_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13967569771835543805ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__memory_read_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11996785298533567879ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__memory_write_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10828913594423111069ull);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__temp_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12322818067280580616ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__core__DOT__pd1_memory__DOT__main_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16707294210780848022ull);
    }
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14234138457933551086ull);
}
