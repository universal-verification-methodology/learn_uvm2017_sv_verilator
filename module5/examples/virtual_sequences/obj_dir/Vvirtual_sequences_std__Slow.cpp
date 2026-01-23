// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_std___ctor_var_reset(Vvirtual_sequences_std* vlSelf);

Vvirtual_sequences_std::Vvirtual_sequences_std() = default;
Vvirtual_sequences_std::~Vvirtual_sequences_std() = default;

void Vvirtual_sequences_std::ctor(Vvirtual_sequences__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vvirtual_sequences_std___ctor_var_reset(this);
}

void Vvirtual_sequences_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vvirtual_sequences_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
