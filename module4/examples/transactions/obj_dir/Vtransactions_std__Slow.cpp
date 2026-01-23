// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_std___ctor_var_reset(Vtransactions_std* vlSelf);

Vtransactions_std::Vtransactions_std() = default;
Vtransactions_std::~Vtransactions_std() = default;

void Vtransactions_std::ctor(Vtransactions__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtransactions_std___ctor_var_reset(this);
}

void Vtransactions_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtransactions_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
