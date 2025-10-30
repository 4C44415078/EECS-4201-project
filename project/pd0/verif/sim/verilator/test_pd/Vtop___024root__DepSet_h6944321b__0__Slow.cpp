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
    vlSelfRef.top__DOT__counter = 0U;
    vlSelfRef.top__DOT__clkg__DOT__counter = 0U;
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

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__clock = 0U;
    vlSelfRef.top__DOT__reset = 1U;
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
            VL_FATAL_MT("/Users/padl/Library/CloudStorage/OneDrive-Personal/School/York/7_EECS_4201/_project/EECS-4201-project/project/pd0/verif/tests/test_pd.sv", 8, "", "Settle region did not converge.");
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
    // Body
    vlSelfRef.top__DOT__dut__DOT__core__DOT__alu_op2 
        = (((0x80000000U & (vlSelfRef.top__DOT__counter 
                            << 0x1dU)) | (0x40000000U 
                                          & (vlSelfRef.top__DOT__counter 
                                             << 0x1bU))) 
           | ((0x20000000U & (vlSelfRef.top__DOT__counter 
                              << 0x1dU)) | ((0x10000000U 
                                             & (vlSelfRef.top__DOT__counter 
                                                << 0x1bU)) 
                                            | (vlSelfRef.top__DOT__counter 
                                               >> 4U))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_op2 
        = ((0x80000000U & (vlSelfRef.top__DOT__counter 
                           << 0x1eU)) | ((0x40000000U 
                                          & (vlSelfRef.top__DOT__counter 
                                             << 0x1cU)) 
                                         | ((0x20000000U 
                                             & (vlSelfRef.top__DOT__counter 
                                                << 0x1dU)) 
                                            | (vlSelfRef.top__DOT__counter 
                                               >> 3U))));
    vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_add 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage1_reg1 
           + vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage1_reg2);
    vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_sub 
        = (vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_add 
           - vlSelfRef.top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage1_reg1);
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge top.clock)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( top.clock)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top.clock)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge top.clock)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( top.clock)\n");
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
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->top__DOT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5844775645289313205ull);
    vlSelf->top__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4457194187413456923ull);
    vlSelf->top__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6797571695291562472ull);
    vlSelf->top__DOT__reset_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3686022322838255580ull);
    vlSelf->top__DOT__reset_neg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3724103439689995768ull);
    vlSelf->top__DOT__reset_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17469324818229561880ull);
    vlSelf->top__DOT__reset_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14804442011333458122ull);
    vlSelf->top__DOT__assign_xor_op1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1585798373919760276ull);
    vlSelf->top__DOT__assign_xor_op2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11845753206154770132ull);
    vlSelf->top__DOT__assign_xor_res = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3357429954009463323ull);
    vlSelf->top__DOT__alu_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6886353081755940289ull);
    vlSelf->top__DOT__alu_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8405775526985533812ull);
    vlSelf->top__DOT__alu_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8975236504074052258ull);
    vlSelf->top__DOT__alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 301497065803549643ull);
    vlSelf->top__DOT__reg_rst_inp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4570564172915963781ull);
    vlSelf->top__DOT__reg_rst_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10934896715691624173ull);
    vlSelf->top__DOT__tsp_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5928499694773629707ull);
    vlSelf->top__DOT__tsp_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4698624706670475261ull);
    vlSelf->top__DOT__tsp_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15223574839969021573ull);
    vlSelf->top__DOT__clkg__DOT__counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7673510899991897937ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__alu_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10576004182438974248ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__reg_rst_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10019208891549603719ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16261067792227087922ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 688340630034101395ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__opcode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 767453348154860541ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_add = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10942348549773193550ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__res_alu_sub = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14941882627921772202ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage1_reg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7216467242241379400ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage1_reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6522138144564785748ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage2_reg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3158028862250998164ull);
    vlSelf->top__DOT__dut__DOT__core__DOT__three_stage_pipeline_0__DOT__stage2_reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8238887053637137261ull);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14234138457933551086ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
