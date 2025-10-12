// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vigen_tb.h for the primary calling header

#ifndef VERILATED_VIGEN_TB___024ROOT_H_
#define VERILATED_VIGEN_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vigen_tb___024unit;


class Vigen_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vigen_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vigen_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ igen_tb__DOT__clk;
    CData/*6:0*/ igen_tb__DOT__opcode;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__igen_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ igen_tb__DOT__dut__DOT__btype_imm;
    IData/*31:0*/ igen_tb__DOT__insn;
    IData/*31:0*/ igen_tb__DOT__imm;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4c9e1ea5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vigen_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vigen_tb___024root(Vigen_tb__Syms* symsp, const char* v__name);
    ~Vigen_tb___024root();
    VL_UNCOPYABLE(Vigen_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
