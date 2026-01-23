// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_std___ctor_var_reset(Vrecorders_top_std* vlSelf);

Vrecorders_top_std::Vrecorders_top_std() = default;
Vrecorders_top_std::~Vrecorders_top_std() = default;

void Vrecorders_top_std::ctor(Vrecorders_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vrecorders_top_std___ctor_var_reset(this);
}

void Vrecorders_top_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vrecorders_top_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
