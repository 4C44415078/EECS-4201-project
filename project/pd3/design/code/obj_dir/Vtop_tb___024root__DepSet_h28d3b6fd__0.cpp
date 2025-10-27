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
    CData/*6:0*/ __Vtask_rtype_insn__3__opcode;
    __Vtask_rtype_insn__3__opcode = 0;
    CData/*4:0*/ __Vtask_rtype_insn__3__rd;
    __Vtask_rtype_insn__3__rd = 0;
    CData/*2:0*/ __Vtask_rtype_insn__3__funct3;
    __Vtask_rtype_insn__3__funct3 = 0;
    CData/*4:0*/ __Vtask_rtype_insn__3__rs1;
    __Vtask_rtype_insn__3__rs1 = 0;
    CData/*4:0*/ __Vtask_rtype_insn__3__rs2;
    __Vtask_rtype_insn__3__rs2 = 0;
    CData/*6:0*/ __Vtask_rtype_insn__3__funct7;
    __Vtask_rtype_insn__3__funct7 = 0;
    IData/*31:0*/ __Vtask_rtype_insn__3__insn;
    __Vtask_rtype_insn__3__insn = 0;
    CData/*6:0*/ __Vtask_rtype_insn__4__opcode;
    __Vtask_rtype_insn__4__opcode = 0;
    CData/*4:0*/ __Vtask_rtype_insn__4__rd;
    __Vtask_rtype_insn__4__rd = 0;
    CData/*2:0*/ __Vtask_rtype_insn__4__funct3;
    __Vtask_rtype_insn__4__funct3 = 0;
    CData/*4:0*/ __Vtask_rtype_insn__4__rs1;
    __Vtask_rtype_insn__4__rs1 = 0;
    CData/*4:0*/ __Vtask_rtype_insn__4__rs2;
    __Vtask_rtype_insn__4__rs2 = 0;
    CData/*6:0*/ __Vtask_rtype_insn__4__funct7;
    __Vtask_rtype_insn__4__funct7 = 0;
    IData/*31:0*/ __Vtask_rtype_insn__4__insn;
    __Vtask_rtype_insn__4__insn = 0;
    CData/*6:0*/ __Vtask_btype_insn__5__opcode;
    __Vtask_btype_insn__5__opcode = 0;
    CData/*2:0*/ __Vtask_btype_insn__5__funct3;
    __Vtask_btype_insn__5__funct3 = 0;
    CData/*4:0*/ __Vtask_btype_insn__5__rs1;
    __Vtask_btype_insn__5__rs1 = 0;
    CData/*4:0*/ __Vtask_btype_insn__5__rs2;
    __Vtask_btype_insn__5__rs2 = 0;
    SData/*11:0*/ __Vtask_btype_insn__5__imm;
    __Vtask_btype_insn__5__imm = 0;
    IData/*31:0*/ __Vtask_btype_insn__5__insn;
    __Vtask_btype_insn__5__insn = 0;
    CData/*6:0*/ __Vtask_btype_insn__6__opcode;
    __Vtask_btype_insn__6__opcode = 0;
    CData/*2:0*/ __Vtask_btype_insn__6__funct3;
    __Vtask_btype_insn__6__funct3 = 0;
    CData/*4:0*/ __Vtask_btype_insn__6__rs1;
    __Vtask_btype_insn__6__rs1 = 0;
    CData/*4:0*/ __Vtask_btype_insn__6__rs2;
    __Vtask_btype_insn__6__rs2 = 0;
    SData/*11:0*/ __Vtask_btype_insn__6__imm;
    __Vtask_btype_insn__6__imm = 0;
    IData/*31:0*/ __Vtask_btype_insn__6__insn;
    __Vtask_btype_insn__6__insn = 0;
    CData/*6:0*/ __Vtask_btype_insn__7__opcode;
    __Vtask_btype_insn__7__opcode = 0;
    CData/*2:0*/ __Vtask_btype_insn__7__funct3;
    __Vtask_btype_insn__7__funct3 = 0;
    CData/*4:0*/ __Vtask_btype_insn__7__rs1;
    __Vtask_btype_insn__7__rs1 = 0;
    CData/*4:0*/ __Vtask_btype_insn__7__rs2;
    __Vtask_btype_insn__7__rs2 = 0;
    SData/*11:0*/ __Vtask_btype_insn__7__imm;
    __Vtask_btype_insn__7__imm = 0;
    IData/*31:0*/ __Vtask_btype_insn__7__insn;
    __Vtask_btype_insn__7__insn = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x705f7462U;
    __Vtemp_1[2U] = 0x746fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.top_tb__DOT__insn = 0x9650513U;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = 0x9650513U;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         50);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0x96U == vlSelfRef.top_tb__DOT__hut__DOT__e_res)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res =        150 Got: res = %10#\n",0,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__e_res);
    }
    __Vtask_itype_insn__1__imm = 0xc8U;
    __Vtask_itype_insn__1__rs1 = 0xbU;
    __Vtask_itype_insn__1__funct3 = 0U;
    __Vtask_itype_insn__1__rd = 0xbU;
    __Vtask_itype_insn__1__opcode = 0x13U;
    __Vtask_itype_insn__1__insn = (((IData)(__Vtask_itype_insn__1__imm) 
                                    << 0x14U) | ((((IData)(__Vtask_itype_insn__1__rs1) 
                                                   << 0xfU) 
                                                  | ((IData)(__Vtask_itype_insn__1__funct3) 
                                                     << 0xcU)) 
                                                 | (((IData)(__Vtask_itype_insn__1__rd) 
                                                     << 7U) 
                                                    | (IData)(__Vtask_itype_insn__1__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_itype_insn__1__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xc8U == vlSelfRef.top_tb__DOT__hut__DOT__e_res)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res =        200 Got: res = %10#\n",0,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__e_res);
    }
    __Vtask_itype_insn__2__imm = 0xfceU;
    __Vtask_itype_insn__2__rs1 = 0xdU;
    __Vtask_itype_insn__2__funct3 = 0U;
    __Vtask_itype_insn__2__rd = 0xdU;
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
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xffffffceU == vlSelfRef.top_tb__DOT__hut__DOT__e_res)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected: res =        200 Got: res = %10#\n",0,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__e_res);
    }
    vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xaU] = 0x64U;
    vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xbU] = 0x96U;
    __Vtask_rtype_insn__3__funct7 = 0U;
    __Vtask_rtype_insn__3__rs2 = 0xbU;
    __Vtask_rtype_insn__3__rs1 = 0xaU;
    __Vtask_rtype_insn__3__funct3 = 0U;
    __Vtask_rtype_insn__3__rd = 0xcU;
    __Vtask_rtype_insn__3__opcode = 0x33U;
    __Vtask_rtype_insn__3__insn = ((((IData)(__Vtask_rtype_insn__3__funct7) 
                                     << 0x19U) | ((IData)(__Vtask_rtype_insn__3__rs2) 
                                                  << 0x14U)) 
                                   | ((((IData)(__Vtask_rtype_insn__3__rs1) 
                                        << 0xfU) | 
                                       ((IData)(__Vtask_rtype_insn__3__funct3) 
                                        << 0xcU)) | 
                                      (((IData)(__Vtask_rtype_insn__3__rd) 
                                        << 7U) | (IData)(__Vtask_rtype_insn__3__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_rtype_insn__3__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         85);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xfaU == vlSelfRef.top_tb__DOT__hut__DOT__e_res)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected res =        250 Got: res = %10#\n",0,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__e_res);
    }
    vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xaU] = 0x64U;
    vlSelfRef.top_tb__DOT__hut__DOT__register_file1__DOT__x[0xbU] = 0x96U;
    __Vtask_rtype_insn__4__funct7 = 0x20U;
    __Vtask_rtype_insn__4__rs2 = 0xbU;
    __Vtask_rtype_insn__4__rs1 = 0xaU;
    __Vtask_rtype_insn__4__funct3 = 0U;
    __Vtask_rtype_insn__4__rd = 0xcU;
    __Vtask_rtype_insn__4__opcode = 0x33U;
    __Vtask_rtype_insn__4__insn = ((((IData)(__Vtask_rtype_insn__4__funct7) 
                                     << 0x19U) | ((IData)(__Vtask_rtype_insn__4__rs2) 
                                                  << 0x14U)) 
                                   | ((((IData)(__Vtask_rtype_insn__4__rs1) 
                                        << 0xfU) | 
                                       ((IData)(__Vtask_rtype_insn__4__funct3) 
                                        << 0xcU)) | 
                                      (((IData)(__Vtask_rtype_insn__4__rd) 
                                        << 7U) | (IData)(__Vtask_rtype_insn__4__opcode))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_rtype_insn__4__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xffffffceU == vlSelfRef.top_tb__DOT__hut__DOT__e_res)) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected res =         -50 Got: res = %10#\n",0,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__e_res);
    }
    __Vtask_btype_insn__5__imm = 0x10U;
    __Vtask_btype_insn__5__rs2 = 0xbU;
    __Vtask_btype_insn__5__rs1 = 0xaU;
    __Vtask_btype_insn__5__funct3 = 1U;
    __Vtask_btype_insn__5__opcode = 0x63U;
    __Vtask_btype_insn__5__imm = (0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(__Vtask_btype_insn__5__imm), 1U));
    __Vtask_btype_insn__5__insn = (((0x80000000U & 
                                     ((IData)(__Vtask_btype_insn__5__imm) 
                                      << 0x14U)) | 
                                    ((0x7e000000U & 
                                      ((IData)(__Vtask_btype_insn__5__imm) 
                                       << 0x15U)) | 
                                     ((IData)(__Vtask_btype_insn__5__rs2) 
                                      << 0x14U))) | 
                                   ((((IData)(__Vtask_btype_insn__5__rs1) 
                                      << 0xfU) | ((IData)(__Vtask_btype_insn__5__funct3) 
                                                  << 0xcU)) 
                                    | ((0xf00U & ((IData)(__Vtask_btype_insn__5__imm) 
                                                  << 8U)) 
                                       | ((0x80U & 
                                           ((IData)(__Vtask_btype_insn__5__imm) 
                                            >> 3U)) 
                                          | (IData)(__Vtask_btype_insn__5__opcode)))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_btype_insn__5__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         109);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((vlSelfRef.top_tb__DOT__hut__DOT__e_res == 
          ((IData)(0x10U) + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)) 
         & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken))) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected res =    16777232 brtaken = 1 Got: res = %10# brtaken = %1#\n",0,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__e_res,
                     1,(IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken));
    }
    __Vtask_btype_insn__6__imm = 0xff0U;
    __Vtask_btype_insn__6__rs2 = 0xbU;
    __Vtask_btype_insn__6__rs1 = 0xaU;
    __Vtask_btype_insn__6__funct3 = 0U;
    __Vtask_btype_insn__6__opcode = 0x63U;
    __Vtask_btype_insn__6__imm = (0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(__Vtask_btype_insn__6__imm), 1U));
    __Vtask_btype_insn__6__insn = (((0x80000000U & 
                                     ((IData)(__Vtask_btype_insn__6__imm) 
                                      << 0x14U)) | 
                                    ((0x7e000000U & 
                                      ((IData)(__Vtask_btype_insn__6__imm) 
                                       << 0x15U)) | 
                                     ((IData)(__Vtask_btype_insn__6__rs2) 
                                      << 0x14U))) | 
                                   ((((IData)(__Vtask_btype_insn__6__rs1) 
                                      << 0xfU) | ((IData)(__Vtask_btype_insn__6__funct3) 
                                                  << 0xcU)) 
                                    | ((0xf00U & ((IData)(__Vtask_btype_insn__6__imm) 
                                                  << 8U)) 
                                       | ((0x80U & 
                                           ((IData)(__Vtask_btype_insn__6__imm) 
                                            >> 3U)) 
                                          | (IData)(__Vtask_btype_insn__6__opcode)))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_btype_insn__6__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((vlSelfRef.top_tb__DOT__hut__DOT__e_res == 
          (vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc 
           - (IData)(0x10U))) & (~ (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken)))) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected res =    16777216 brtaken = 0 Got: res = %10# brtaken = %1#\n",0,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__e_res,
                     1,(IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken));
    }
    __Vtask_btype_insn__7__imm = 0x10U;
    __Vtask_btype_insn__7__rs2 = 0xaU;
    __Vtask_btype_insn__7__rs1 = 0xbU;
    __Vtask_btype_insn__7__funct3 = 5U;
    __Vtask_btype_insn__7__opcode = 0x63U;
    __Vtask_btype_insn__7__imm = (0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(__Vtask_btype_insn__7__imm), 1U));
    __Vtask_btype_insn__7__insn = (((0x80000000U & 
                                     ((IData)(__Vtask_btype_insn__7__imm) 
                                      << 0x14U)) | 
                                    ((0x7e000000U & 
                                      ((IData)(__Vtask_btype_insn__7__imm) 
                                       << 0x15U)) | 
                                     ((IData)(__Vtask_btype_insn__7__rs2) 
                                      << 0x14U))) | 
                                   ((((IData)(__Vtask_btype_insn__7__rs1) 
                                      << 0xfU) | ((IData)(__Vtask_btype_insn__7__funct3) 
                                                  << 0xcU)) 
                                    | ((0xf00U & ((IData)(__Vtask_btype_insn__7__imm) 
                                                  << 8U)) 
                                       | ((0x80U & 
                                           ((IData)(__Vtask_btype_insn__7__imm) 
                                            >> 3U)) 
                                          | (IData)(__Vtask_btype_insn__7__opcode)))));
    vlSelfRef.top_tb__DOT__insn = __Vtask_btype_insn__7__insn;
    vlSelfRef.top_tb__DOT__hut__DOT__f_insn = vlSelfRef.top_tb__DOT__insn;
    co_await vlSelfRef.__VtrigSched_ha9f78880__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "top_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((vlSelfRef.top_tb__DOT__hut__DOT__e_res == 
          ((IData)(0x10U) + vlSelfRef.top_tb__DOT__hut__DOT__fetch1__DOT__pc)) 
         & (IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken))) {
        VL_WRITEF_NX("Test Passed.\n",0);
    } else {
        VL_WRITEF_NX("Test Failed. Expected res =    16777232 brtaken = 1 Got: res = %10# brtaken = %1#\n",0,
                     32,vlSelfRef.top_tb__DOT__hut__DOT__e_res,
                     1,(IData)(vlSelfRef.top_tb__DOT__hut__DOT__e_brtaken));
    }
    VL_FINISH_MT("top_tb.sv", 138, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__1(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x14ULL, 
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
