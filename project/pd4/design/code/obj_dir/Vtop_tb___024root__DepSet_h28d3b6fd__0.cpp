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
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__1__insn_data;
    __Vtask_top_tb__DOT__writeInsnToMem__1__insn_data = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__1__insn_index;
    __Vtask_top_tb__DOT__writeInsnToMem__1__insn_index = 0;
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
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__3__insn_data;
    __Vtask_top_tb__DOT__writeInsnToMem__3__insn_data = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__3__insn_index;
    __Vtask_top_tb__DOT__writeInsnToMem__3__insn_index = 0;
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
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__5__insn_data;
    __Vtask_top_tb__DOT__writeInsnToMem__5__insn_data = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__5__insn_index;
    __Vtask_top_tb__DOT__writeInsnToMem__5__insn_index = 0;
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
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__7__insn_data;
    __Vtask_top_tb__DOT__writeInsnToMem__7__insn_data = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__7__insn_index;
    __Vtask_top_tb__DOT__writeInsnToMem__7__insn_index = 0;
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
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__9__insn_data;
    __Vtask_top_tb__DOT__writeInsnToMem__9__insn_data = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__9__insn_index;
    __Vtask_top_tb__DOT__writeInsnToMem__9__insn_index = 0;
    CData/*6:0*/ __Vtask_stype_insn__10__opcode;
    __Vtask_stype_insn__10__opcode = 0;
    CData/*2:0*/ __Vtask_stype_insn__10__funct3;
    __Vtask_stype_insn__10__funct3 = 0;
    CData/*4:0*/ __Vtask_stype_insn__10__rs1;
    __Vtask_stype_insn__10__rs1 = 0;
    CData/*4:0*/ __Vtask_stype_insn__10__rs2;
    __Vtask_stype_insn__10__rs2 = 0;
    SData/*11:0*/ __Vtask_stype_insn__10__imm;
    __Vtask_stype_insn__10__imm = 0;
    IData/*31:0*/ __Vtask_stype_insn__10__insn;
    __Vtask_stype_insn__10__insn = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__11__insn_data;
    __Vtask_top_tb__DOT__writeInsnToMem__11__insn_data = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__11__insn_index;
    __Vtask_top_tb__DOT__writeInsnToMem__11__insn_index = 0;
    CData/*6:0*/ __Vtask_itype_insn__12__opcode;
    __Vtask_itype_insn__12__opcode = 0;
    CData/*4:0*/ __Vtask_itype_insn__12__rd;
    __Vtask_itype_insn__12__rd = 0;
    CData/*2:0*/ __Vtask_itype_insn__12__funct3;
    __Vtask_itype_insn__12__funct3 = 0;
    CData/*4:0*/ __Vtask_itype_insn__12__rs1;
    __Vtask_itype_insn__12__rs1 = 0;
    SData/*11:0*/ __Vtask_itype_insn__12__imm;
    __Vtask_itype_insn__12__imm = 0;
    IData/*31:0*/ __Vtask_itype_insn__12__insn;
    __Vtask_itype_insn__12__insn = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__13__insn_data;
    __Vtask_top_tb__DOT__writeInsnToMem__13__insn_data = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__writeInsnToMem__13__insn_index;
    __Vtask_top_tb__DOT__writeInsnToMem__13__insn_index = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__14__rd;
    __Vtask_top_tb__DOT__checkWriteBack__14__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__14__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__14__expectedValue = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__15__rd;
    __Vtask_top_tb__DOT__checkWriteBack__15__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__15__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__15__expectedValue = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__16__rd;
    __Vtask_top_tb__DOT__checkWriteBack__16__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__16__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__16__expectedValue = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__17__rd;
    __Vtask_top_tb__DOT__checkWriteBack__17__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__17__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__17__expectedValue = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__18__rd;
    __Vtask_top_tb__DOT__checkWriteBack__18__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__18__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__18__expectedValue = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__19__rd;
    __Vtask_top_tb__DOT__checkWriteBack__19__rd = 0;
    IData/*31:0*/ __Vtask_top_tb__DOT__checkWriteBack__19__expectedValue;
    __Vtask_top_tb__DOT__checkWriteBack__19__expectedValue = 0;
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
                                                         80);
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
    __Vtask_top_tb__DOT__writeInsnToMem__1__insn_index 
        = vlSelfRef.top_tb__DOT__index;
    __Vtask_top_tb__DOT__writeInsnToMem__1__insn_data 
        = vlSelfRef.top_tb__DOT__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & __Vtask_top_tb__DOT__writeInsnToMem__1__insn_index)] 
        = (0xffU & __Vtask_top_tb__DOT__writeInsnToMem__1__insn_data);
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(1U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__1__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__1__insn_data 
                    >> 8U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(2U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__1__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__1__insn_data 
                    >> 0x10U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(3U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__1__insn_index))] 
        = (__Vtask_top_tb__DOT__writeInsnToMem__1__insn_data 
           >> 0x18U);
    vlSelfRef.top_tb__DOT__index = ((IData)(4U) + vlSelfRef.top_tb__DOT__index);
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
    __Vtask_top_tb__DOT__writeInsnToMem__3__insn_index 
        = vlSelfRef.top_tb__DOT__index;
    __Vtask_top_tb__DOT__writeInsnToMem__3__insn_data 
        = vlSelfRef.top_tb__DOT__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & __Vtask_top_tb__DOT__writeInsnToMem__3__insn_index)] 
        = (0xffU & __Vtask_top_tb__DOT__writeInsnToMem__3__insn_data);
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(1U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__3__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__3__insn_data 
                    >> 8U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(2U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__3__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__3__insn_data 
                    >> 0x10U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(3U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__3__insn_index))] 
        = (__Vtask_top_tb__DOT__writeInsnToMem__3__insn_data 
           >> 0x18U);
    vlSelfRef.top_tb__DOT__index = ((IData)(4U) + vlSelfRef.top_tb__DOT__index);
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
    __Vtask_top_tb__DOT__writeInsnToMem__5__insn_index 
        = vlSelfRef.top_tb__DOT__index;
    __Vtask_top_tb__DOT__writeInsnToMem__5__insn_data 
        = vlSelfRef.top_tb__DOT__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & __Vtask_top_tb__DOT__writeInsnToMem__5__insn_index)] 
        = (0xffU & __Vtask_top_tb__DOT__writeInsnToMem__5__insn_data);
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(1U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__5__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__5__insn_data 
                    >> 8U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(2U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__5__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__5__insn_data 
                    >> 0x10U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(3U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__5__insn_index))] 
        = (__Vtask_top_tb__DOT__writeInsnToMem__5__insn_data 
           >> 0x18U);
    vlSelfRef.top_tb__DOT__index = ((IData)(4U) + vlSelfRef.top_tb__DOT__index);
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
    __Vtask_top_tb__DOT__writeInsnToMem__7__insn_index 
        = vlSelfRef.top_tb__DOT__index;
    __Vtask_top_tb__DOT__writeInsnToMem__7__insn_data 
        = vlSelfRef.top_tb__DOT__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & __Vtask_top_tb__DOT__writeInsnToMem__7__insn_index)] 
        = (0xffU & __Vtask_top_tb__DOT__writeInsnToMem__7__insn_data);
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(1U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__7__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__7__insn_data 
                    >> 8U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(2U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__7__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__7__insn_data 
                    >> 0x10U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(3U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__7__insn_index))] 
        = (__Vtask_top_tb__DOT__writeInsnToMem__7__insn_data 
           >> 0x18U);
    vlSelfRef.top_tb__DOT__index = ((IData)(4U) + vlSelfRef.top_tb__DOT__index);
    __Vtask_rtype_insn__8__funct7 = 0x20U;
    __Vtask_rtype_insn__8__rs2 = 0xbU;
    __Vtask_rtype_insn__8__rs1 = 0xaU;
    __Vtask_rtype_insn__8__funct3 = 0U;
    __Vtask_rtype_insn__8__rd = 0xeU;
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
    __Vtask_top_tb__DOT__writeInsnToMem__9__insn_index 
        = vlSelfRef.top_tb__DOT__index;
    __Vtask_top_tb__DOT__writeInsnToMem__9__insn_data 
        = vlSelfRef.top_tb__DOT__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & __Vtask_top_tb__DOT__writeInsnToMem__9__insn_index)] 
        = (0xffU & __Vtask_top_tb__DOT__writeInsnToMem__9__insn_data);
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(1U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__9__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__9__insn_data 
                    >> 8U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(2U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__9__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__9__insn_data 
                    >> 0x10U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(3U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__9__insn_index))] 
        = (__Vtask_top_tb__DOT__writeInsnToMem__9__insn_data 
           >> 0x18U);
    vlSelfRef.top_tb__DOT__index = ((IData)(4U) + vlSelfRef.top_tb__DOT__index);
    __Vtask_stype_insn__10__imm = 0xfd8U;
    __Vtask_stype_insn__10__rs2 = 0x1dU;
    __Vtask_stype_insn__10__rs1 = 2U;
    __Vtask_stype_insn__10__funct3 = 2U;
    __Vtask_stype_insn__10__opcode = 0x23U;
    __Vtask_stype_insn__10__insn = (((0xfe000000U & 
                                      ((IData)(__Vtask_stype_insn__10__imm) 
                                       << 0x14U)) | 
                                     ((IData)(__Vtask_stype_insn__10__rs2) 
                                      << 0x14U)) | 
                                    ((((IData)(__Vtask_stype_insn__10__rs1) 
                                       << 0xfU) | ((IData)(__Vtask_stype_insn__10__funct3) 
                                                   << 0xcU)) 
                                     | ((0xf80U & ((IData)(__Vtask_stype_insn__10__imm) 
                                                   << 7U)) 
                                        | (IData)(__Vtask_stype_insn__10__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_stype_insn__10__insn;
    __Vtask_top_tb__DOT__writeInsnToMem__11__insn_index 
        = vlSelfRef.top_tb__DOT__index;
    __Vtask_top_tb__DOT__writeInsnToMem__11__insn_data 
        = vlSelfRef.top_tb__DOT__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & __Vtask_top_tb__DOT__writeInsnToMem__11__insn_index)] 
        = (0xffU & __Vtask_top_tb__DOT__writeInsnToMem__11__insn_data);
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(1U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__11__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__11__insn_data 
                    >> 8U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(2U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__11__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__11__insn_data 
                    >> 0x10U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(3U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__11__insn_index))] 
        = (__Vtask_top_tb__DOT__writeInsnToMem__11__insn_data 
           >> 0x18U);
    vlSelfRef.top_tb__DOT__index = ((IData)(4U) + vlSelfRef.top_tb__DOT__index);
    __Vtask_itype_insn__12__imm = 0xfd8U;
    __Vtask_itype_insn__12__rs1 = 2U;
    __Vtask_itype_insn__12__funct3 = 2U;
    __Vtask_itype_insn__12__rd = 0x16U;
    __Vtask_itype_insn__12__opcode = 3U;
    __Vtask_itype_insn__12__insn = (((IData)(__Vtask_itype_insn__12__imm) 
                                     << 0x14U) | ((
                                                   ((IData)(__Vtask_itype_insn__12__rs1) 
                                                    << 0xfU) 
                                                   | ((IData)(__Vtask_itype_insn__12__funct3) 
                                                      << 0xcU)) 
                                                  | (((IData)(__Vtask_itype_insn__12__rd) 
                                                      << 7U) 
                                                     | (IData)(__Vtask_itype_insn__12__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_itype_insn__12__insn;
    __Vtask_top_tb__DOT__writeInsnToMem__13__insn_index 
        = vlSelfRef.top_tb__DOT__index;
    __Vtask_top_tb__DOT__writeInsnToMem__13__insn_data 
        = vlSelfRef.top_tb__DOT__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & __Vtask_top_tb__DOT__writeInsnToMem__13__insn_index)] 
        = (0xffU & __Vtask_top_tb__DOT__writeInsnToMem__13__insn_data);
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(1U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__13__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__13__insn_data 
                    >> 8U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(2U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__13__insn_index))] 
        = (0xffU & (__Vtask_top_tb__DOT__writeInsnToMem__13__insn_data 
                    >> 0x10U));
    vlSelfRef.top_tb__DOT__hut__DOT__memory1__DOT__main_memory[(0xfffffU 
                                                                & ((IData)(3U) 
                                                                   + __Vtask_top_tb__DOT__writeInsnToMem__13__insn_index))] 
        = (__Vtask_top_tb__DOT__writeInsnToMem__13__insn_data 
           >> 0x18U);
    vlSelfRef.top_tb__DOT__index = ((IData)(4U) + vlSelfRef.top_tb__DOT__index);
    vlSelfRef.top_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.top_tb__DOT__rst = 0U;
    vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0x1dU] = 0xdeadbeefU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         133);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__14__expectedValue = 0x64U;
    __Vtask_top_tb__DOT__checkWriteBack__14__rd = 0xaU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         31);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__14__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__14__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__14__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__14__rd)]);
    }
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__15__expectedValue = 0x96U;
    __Vtask_top_tb__DOT__checkWriteBack__15__rd = 0xbU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         31);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__15__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__15__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__15__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__15__rd)]);
    }
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         141);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__16__expectedValue = 0xffffffceU;
    __Vtask_top_tb__DOT__checkWriteBack__16__rd = 0xdU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         31);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__16__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__16__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__16__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__16__rd)]);
    }
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__17__expectedValue = 0xfaU;
    __Vtask_top_tb__DOT__checkWriteBack__17__rd = 0xcU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         31);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__17__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__17__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__17__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__17__rd)]);
    }
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         149);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__18__expectedValue = 0xffffffceU;
    __Vtask_top_tb__DOT__checkWriteBack__18__rd = 0xeU;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         31);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__18__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__18__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__18__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__18__rd)]);
    }
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_top_tb__DOT__checkWriteBack__19__expectedValue = 0xdeadbeefU;
    __Vtask_top_tb__DOT__checkWriteBack__19__rd = 0x16U;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         31);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
         [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__19__rd)] 
         == __Vtask_top_tb__DOT__checkWriteBack__19__expectedValue)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res = %10# Got: res = %10#\n",0,
                     32,__Vtask_top_tb__DOT__checkWriteBack__19__expectedValue,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x
                     [(0x1fU & __Vtask_top_tb__DOT__checkWriteBack__19__rd)]);
    }
    (void)VL_SYSTEM_II(0x64617465U);
    VL_FINISH_MT("top_tb.sv", 162, "");
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
