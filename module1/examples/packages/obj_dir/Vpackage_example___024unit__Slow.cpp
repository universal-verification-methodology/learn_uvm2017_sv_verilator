// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpackage_example.h for the primary calling header

#include "Vpackage_example__pch.h"
#include "Vpackage_example__Syms.h"
#include "Vpackage_example___024unit.h"

void Vpackage_example___024unit___ctor_var_reset(Vpackage_example___024unit* vlSelf);

Vpackage_example___024unit::Vpackage_example___024unit(Vpackage_example__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpackage_example___024unit___ctor_var_reset(this);
}

void Vpackage_example___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpackage_example___024unit::~Vpackage_example___024unit() {
}
