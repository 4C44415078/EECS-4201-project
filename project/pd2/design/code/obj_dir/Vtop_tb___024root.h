// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop_tb___024unit;


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top_tb__DOT__clk;
    CData/*6:0*/ top_tb__DOT__opcode;
    CData/*6:0*/ top_tb__DOT__funct7;
    CData/*0:0*/ top_tb__DOT__pcsel;
    CData/*0:0*/ top_tb__DOT__immsel;
    CData/*0:0*/ top_tb__DOT__regwren;
    CData/*0:0*/ top_tb__DOT__rs1sel;
    CData/*0:0*/ top_tb__DOT__rs2sel;
    CData/*0:0*/ top_tb__DOT__memren;
    CData/*0:0*/ top_tb__DOT__memwren;
    CData/*1:0*/ top_tb__DOT__wbsel;
    CData/*3:0*/ top_tb__DOT__alusel;
    CData/*4:0*/ top_tb__DOT__dut_decode__DOT__shamt_o;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top_tb__DOT__insn;
    IData/*31:0*/ top_tb__DOT__imm;
    IData/*31:0*/ top_tb__DOT__pc;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha9f78880__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
