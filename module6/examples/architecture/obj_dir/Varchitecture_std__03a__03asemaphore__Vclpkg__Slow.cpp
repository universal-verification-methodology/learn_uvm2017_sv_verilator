// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_std__03a__03asemaphore__Vclpkg___ctor_var_reset(Varchitecture_std__03a__03asemaphore__Vclpkg* vlSelf);

Varchitecture_std__03a__03asemaphore__Vclpkg::Varchitecture_std__03a__03asemaphore__Vclpkg() = default;
Varchitecture_std__03a__03asemaphore__Vclpkg::~Varchitecture_std__03a__03asemaphore__Vclpkg() = default;

void Varchitecture_std__03a__03asemaphore__Vclpkg::ctor(Varchitecture__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Varchitecture_std__03a__03asemaphore__Vclpkg___ctor_var_reset(this);
}

void Varchitecture_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Varchitecture_std__03a__03asemaphore__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
