// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vigen_tb.h for the primary calling header

#include "Vigen_tb__pch.h"
#include "Vigen_tb__Syms.h"
#include "Vigen_tb___024root.h"

void Vigen_tb___024root___ctor_var_reset(Vigen_tb___024root* vlSelf);

Vigen_tb___024root::Vigen_tb___024root(Vigen_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vigen_tb___024root___ctor_var_reset(this);
}

void Vigen_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vigen_tb___024root::~Vigen_tb___024root() {
}
