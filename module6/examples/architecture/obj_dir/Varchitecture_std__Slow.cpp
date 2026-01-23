// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_std___ctor_var_reset(Varchitecture_std* vlSelf);

Varchitecture_std::Varchitecture_std() = default;
Varchitecture_std::~Varchitecture_std() = default;

void Varchitecture_std::ctor(Varchitecture__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Varchitecture_std___ctor_var_reset(this);
}

void Varchitecture_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Varchitecture_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
