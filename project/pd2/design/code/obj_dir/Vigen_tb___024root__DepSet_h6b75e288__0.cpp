// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vigen_tb.h for the primary calling header

#include "Vigen_tb__pch.h"
#include "Vigen_tb__Syms.h"
#include "Vigen_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vigen_tb___024root___eval_initial__TOP__Vtiming__0(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtask_itype_insn__1__opcode;
    __Vtask_itype_insn__1__opcode = 0;
    CData/*4:0*/ __Vtask_itype_insn__1__rd;
    __Vtask_itype_insn__1__rd = 0;
    CData/*2:0*/ __Vtask_itype_insn__1__funct3;
    __Vtask_itype_insn__1__funct3 = 0;
    CData/*4:0*/ __Vtask_itype_insn__1__rs1;
    __Vtask_itype_insn__1__rs1 = 0;
    SData/*11:0*/ __Vtask_itype_insn__1__imm;
    __Vtask_itype_insn__1__imm = 0;
    IData/*31:0*/ __Vtask_itype_insn__1__insn;
    __Vtask_itype_insn__1__insn = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6e5f7462U;
    __Vtemp_1[2U] = 0x696765U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.igen_tb__DOT__imm = 0U;
    VL_WRITEF_NX("\n ---- IGEN TEST BENCH ---- \n\n",0);
    vlSelfRef.igen_tb__DOT__opcode = 0x13U;
    vlSelfRef.igen_tb__DOT__insn = 0xfffe8e13U;
    co_await vlSelfRef.__VtrigSched_h4c9e1ea5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge igen_tb.clk)", 
                                                         "igen_tb.sv", 
                                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((0xffffffffU == vlSelfRef.igen_tb__DOT__imm)))) {
            VL_WRITEF_NX("Passed.\n\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: igen_tb.sv:58: Assertion failed in %Nigen_tb: I-type instruction failed.\n Expected: 0xffffffff, Got: 0x%x\n\n",0,
                         64,VL_TIME_UNITED_Q(10),-8,
                         vlSymsp->name(),32,vlSelfRef.igen_tb__DOT__imm);
            VL_STOP_MT("igen_tb.sv", 58, "");
        }
    }
    __Vtask_itype_insn__1__imm = 0U;
    __Vtask_itype_insn__1__rs1 = 0x1dU;
    __Vtask_itype_insn__1__funct3 = 0U;
    __Vtask_itype_insn__1__rd = 0x1cU;
    __Vtask_itype_insn__1__opcode = vlSelfRef.igen_tb__DOT__opcode;
    __Vtask_itype_insn__1__insn = (((IData)(__Vtask_itype_insn__1__imm) 
                                    << 0x14U) | ((((IData)(__Vtask_itype_insn__1__rs1) 
                                                   << 0xfU) 
                                                  | ((IData)(__Vtask_itype_insn__1__funct3) 
                                                     << 0xcU)) 
                                                 | (((IData)(__Vtask_itype_insn__1__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vtask_itype_insn__1__opcode))));
    vlSelfRef.igen_tb__DOT__insn = __Vtask_itype_insn__1__insn;
    co_await vlSelfRef.__VtrigSched_h4c9e1ea5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge igen_tb.clk)", 
                                                         "igen_tb.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_LIKELY(((0U == vlSelfRef.igen_tb__DOT__imm)))) {
            VL_WRITEF_NX("Passed.\n\n",0);
        } else {
            VL_WRITEF_NX("[%0t] %%Error: igen_tb.sv:65: Assertion failed in %Nigen_tb: I-type instruction failed.\n Expected: 0x00000000, Got: 0x%x\n\n",0,
                         64,VL_TIME_UNITED_Q(10),-8,
                         vlSymsp->name(),32,vlSelfRef.igen_tb__DOT__imm);
            VL_STOP_MT("igen_tb.sv", 65, "");
        }
    }
    VL_WRITEF_NX("\n ----  All Test Cases Passed! ---- \n\n",0);
    VL_FINISH_MT("igen_tb.sv", 68, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vigen_tb___024root___eval_initial__TOP__Vtiming__1(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x14ULL, 
                                             nullptr, 
                                             "igen_tb.sv", 
                                             16);
        vlSelfRef.igen_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.igen_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vigen_tb___024root___dump_triggers__act(Vigen_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vigen_tb___024root___eval_triggers__act(Vigen_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vigen_tb___024root___eval_triggers__act\n"); );
    Vigen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.igen_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__igen_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__igen_tb__DOT__clk__0 
        = vlSelfRef.igen_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vigen_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
