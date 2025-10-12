// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vigen_tb.h for the primary calling header

#ifndef VERILATED_VIGEN_TB___024UNIT_H_
#define VERILATED_VIGEN_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vigen_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vigen_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    IData/*20:0*/ __PVT__jtype_insn__Vstatic__imm_jtype;

    // INTERNAL VARIABLES
    Vigen_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vigen_tb___024unit(Vigen_tb__Syms* symsp, const char* v__name);
    ~Vigen_tb___024unit();
    VL_UNCOPYABLE(Vigen_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
