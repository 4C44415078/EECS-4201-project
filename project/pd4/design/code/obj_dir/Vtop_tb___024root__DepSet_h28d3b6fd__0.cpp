// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtask_itype_insn__0__opcode;
    __Vtask_itype_insn__0__opcode = 0;
    CData/*4:0*/ __Vtask_itype_insn__0__rd;
    __Vtask_itype_insn__0__rd = 0;
    CData/*2:0*/ __Vtask_itype_insn__0__funct3;
    __Vtask_itype_insn__0__funct3 = 0;
    CData/*4:0*/ __Vtask_itype_insn__0__rs1;
    __Vtask_itype_insn__0__rs1 = 0;
    SData/*11:0*/ __Vtask_itype_insn__0__imm;
    __Vtask_itype_insn__0__imm = 0;
    IData/*31:0*/ __Vtask_itype_insn__0__insn;
    __Vtask_itype_insn__0__insn = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__1__rd;
    __Vtask_top_tb__DOT__checkWriteBack__1__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__1__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__1__expectedValue = 0;
    CData/*6:0*/ __Vtask_itype_insn__2__opcode;
    __Vtask_itype_insn__2__opcode = 0;
    CData/*4:0*/ __Vtask_itype_insn__2__rd;
    __Vtask_itype_insn__2__rd = 0;
    CData/*2:0*/ __Vtask_itype_insn__2__funct3;
    __Vtask_itype_insn__2__funct3 = 0;
    CData/*4:0*/ __Vtask_itype_insn__2__rs1;
    __Vtask_itype_insn__2__rs1 = 0;
    SData/*11:0*/ __Vtask_itype_insn__2__imm;
    __Vtask_itype_insn__2__imm = 0;
    IData/*31:0*/ __Vtask_itype_insn__2__insn;
    __Vtask_itype_insn__2__insn = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__3__rd;
    __Vtask_top_tb__DOT__checkWriteBack__3__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__3__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__3__expectedValue = 0;
    CData/*6:0*/ __Vtask_itype_insn__4__opcode;
    __Vtask_itype_insn__4__opcode = 0;
    CData/*4:0*/ __Vtask_itype_insn__4__rd;
    __Vtask_itype_insn__4__rd = 0;
    CData/*2:0*/ __Vtask_itype_insn__4__funct3;
    __Vtask_itype_insn__4__funct3 = 0;
    CData/*4:0*/ __Vtask_itype_insn__4__rs1;
    __Vtask_itype_insn__4__rs1 = 0;
    SData/*11:0*/ __Vtask_itype_insn__4__imm;
    __Vtask_itype_insn__4__imm = 0;
    IData/*31:0*/ __Vtask_itype_insn__4__insn;
    __Vtask_itype_insn__4__insn = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__5__rd;
    __Vtask_top_tb__DOT__checkWriteBack__5__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__5__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__5__expectedValue = 0;
    CData/*6:0*/ __Vtask_rtype_insn__6__opcode;
    __Vtask_rtype_insn__6__opcode = 0;
    CData/*4:0*/ __Vtask_rtype_insn__6__rd;
    __Vtask_rtype_insn__6__rd = 0;
    CData/*2:0*/ __Vtask_rtype_insn__6__funct3;
    __Vtask_rtype_insn__6__funct3 = 0;
    CData/*4:0*/ __Vtask_rtype_insn__6__rs1;
    __Vtask_rtype_insn__6__rs1 = 0;
    CData/*4:0*/ __Vtask_rtype_insn__6__rs2;
    __Vtask_rtype_insn__6__rs2 = 0;
    CData/*6:0*/ __Vtask_rtype_insn__6__funct7;
    __Vtask_rtype_insn__6__funct7 = 0;
    IData/*31:0*/ __Vtask_rtype_insn__6__insn;
    __Vtask_rtype_insn__6__insn = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__7__rd;
    __Vtask_top_tb__DOT__checkWriteBack__7__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__7__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__7__expectedValue = 0;
    CData/*6:0*/ __Vtask_rtype_insn__8__opcode;
    __Vtask_rtype_insn__8__opcode = 0;
    CData/*4:0*/ __Vtask_rtype_insn__8__rd;
    __Vtask_rtype_insn__8__rd = 0;
    CData/*2:0*/ __Vtask_rtype_insn__8__funct3;
    __Vtask_rtype_insn__8__funct3 = 0;
    CData/*4:0*/ __Vtask_rtype_insn__8__rs1;
    __Vtask_rtype_insn__8__rs1 = 0;
    CData/*4:0*/ __Vtask_rtype_insn__8__rs2;
    __Vtask_rtype_insn__8__rs2 = 0;
    CData/*6:0*/ __Vtask_rtype_insn__8__funct7;
    __Vtask_rtype_insn__8__funct7 = 0;
    IData/*31:0*/ __Vtask_rtype_insn__8__insn;
    __Vtask_rtype_insn__8__insn = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__9__rd;
    __Vtask_top_tb__DOT__checkWriteBack__9__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__9__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__9__expectedValue = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x705f7462U;
    __Vtemp_1[2U] = 0x746fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_itype_insn__0__imm = 0x64U;
    __Vtask_itype_insn__0__rs1 = 0xaU;
    __Vtask_itype_insn__0__funct3 = 0U;
    __Vtask_itype_insn__0__rd = 0xaU;
    __Vtask_itype_insn__0__opcode = 0x13U;
    __Vtask_itype_insn__0__insn = (((IData)(__Vtask_itype_insn__0__imm) 
                                    << 0x14U) | ((((IData)(__Vtask_itype_insn__0__rs1) 
                                                   << 0xfU) 
                                                  | ((IData)(__Vtask_itype_insn__0__funct3) 
                                                     << 0xcU)) 
                                                 | (((IData)(__Vtask_itype_insn__0__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vtask_itype_insn__0__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_itype_insn__0__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__1__expectedValue = 0x64U;
    __Vtask_top_tb__DOT__checkWriteBack__1__rd = 0xaU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__1__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__1__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__1__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__1__rd)]);
    }
    __Vtask_itype_insn__2__imm = 0x96U;
    __Vtask_itype_insn__2__rs1 = 0xbU;
    __Vtask_itype_insn__2__funct3 = 0U;
    __Vtask_itype_insn__2__rd = 0xbU;
    __Vtask_itype_insn__2__opcode = 0x13U;
    __Vtask_itype_insn__2__insn = (((IData)(__Vtask_itype_insn__2__imm) 
                                    << 0x14U) | ((((IData)(__Vtask_itype_insn__2__rs1) 
                                                   << 0xfU) 
                                                  | ((IData)(__Vtask_itype_insn__2__funct3) 
                                                     << 0xcU)) 
                                                 | (((IData)(__Vtask_itype_insn__2__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vtask_itype_insn__2__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_itype_insn__2__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__3__expectedValue = 0x96U;
    __Vtask_top_tb__DOT__checkWriteBack__3__rd = 0xbU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__3__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__3__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__3__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__3__rd)]);
    }
    __Vtask_itype_insn__4__imm = 0xfceU;
    __Vtask_itype_insn__4__rs1 = 0xdU;
    __Vtask_itype_insn__4__funct3 = 0U;
    __Vtask_itype_insn__4__rd = 0xdU;
    __Vtask_itype_insn__4__opcode = 0x13U;
    __Vtask_itype_insn__4__insn = (((IData)(__Vtask_itype_insn__4__imm) 
                                    << 0x14U) | ((((IData)(__Vtask_itype_insn__4__rs1) 
                                                   << 0xfU) 
                                                  | ((IData)(__Vtask_itype_insn__4__funct3) 
                                                     << 0xcU)) 
                                                 | (((IData)(__Vtask_itype_insn__4__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vtask_itype_insn__4__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_itype_insn__4__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__5__expectedValue = 0xffffffceU;
    __Vtask_top_tb__DOT__checkWriteBack__5__rd = 0xdU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__5__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__5__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__5__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__5__rd)]);
    }
    __Vtask_rtype_insn__6__funct7 = 0U;
    __Vtask_rtype_insn__6__rs2 = 0xbU;
    __Vtask_rtype_insn__6__rs1 = 0xaU;
    __Vtask_rtype_insn__6__funct3 = 0U;
    __Vtask_rtype_insn__6__rd = 0xcU;
    __Vtask_rtype_insn__6__opcode = 0x33U;
    __Vtask_rtype_insn__6__insn = ((((IData)(__Vtask_rtype_insn__6__funct7) 
                                     << 0x19U) | ((IData)(__Vtask_rtype_insn__6__rs2) 
                                                  << 0x14U)) 
                                   | ((((IData)(__Vtask_rtype_insn__6__rs1) 
                                        << 0xfU) | 
                                       ((IData)(__Vtask_rtype_insn__6__funct3) 
                                        << 0xcU)) | 
                                      (((IData)(__Vtask_rtype_insn__6__rd) 
                                        << 7U) | (IData)(__Vtask_rtype_insn__6__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_rtype_insn__6__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__7__expectedValue = 0xfaU;
    __Vtask_top_tb__DOT__checkWriteBack__7__rd = 0xcU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__7__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__7__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__7__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__7__rd)]);
    }
    __Vtask_rtype_insn__8__funct7 = 0x20U;
    __Vtask_rtype_insn__8__rs2 = 0xbU;
    __Vtask_rtype_insn__8__rs1 = 0xaU;
    __Vtask_rtype_insn__8__funct3 = 0U;
    __Vtask_rtype_insn__8__rd = 0xcU;
    __Vtask_rtype_insn__8__opcode = 0x33U;
    __Vtask_rtype_insn__8__insn = ((((IData)(__Vtask_rtype_insn__8__funct7) 
                                     << 0x19U) | ((IData)(__Vtask_rtype_insn__8__rs2) 
                                                  << 0x14U)) 
                                   | ((((IData)(__Vtask_rtype_insn__8__rs1) 
                                        << 0xfU) | 
                                       ((IData)(__Vtask_rtype_insn__8__funct3) 
                                        << 0xcU)) | 
                                      (((IData)(__Vtask_rtype_insn__8__rd) 
                                        << 7U) | (IData)(__Vtask_rtype_insn__8__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_rtype_insn__8__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__9__expectedValue = 0xffffffceU;
    __Vtask_top_tb__DOT__checkWriteBack__9__rd = 0xcU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         30);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__9__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__9__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__9__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__9__rd)]);
    }
    (void)VL_SYSTEM_II(0x64617465U);
    VL_FINISH_MT("top_tb.sv", 97, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                             nullptr, 
                                             "top_tb.sv", 
                                             16);
        vlSelfRef.top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.top_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.top_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelfRef.top_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
