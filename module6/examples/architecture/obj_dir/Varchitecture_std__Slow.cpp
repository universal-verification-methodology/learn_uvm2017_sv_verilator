// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_std___ctor_var_reset(Varchitecture_std* vlSelf);

Varchitecture_std::Varchitecture_std(Varchitecture__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Varchitecture_std___ctor_var_reset(this);
}

void Varchitecture_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Varchitecture_std::~Varchitecture_std() {
}
