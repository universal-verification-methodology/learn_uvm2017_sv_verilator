// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_std__03a__03asemaphore__Vclpkg___ctor_var_reset(Vpools_top_std__03a__03asemaphore__Vclpkg* vlSelf);

Vpools_top_std__03a__03asemaphore__Vclpkg::Vpools_top_std__03a__03asemaphore__Vclpkg() = default;
Vpools_top_std__03a__03asemaphore__Vclpkg::~Vpools_top_std__03a__03asemaphore__Vclpkg() = default;

void Vpools_top_std__03a__03asemaphore__Vclpkg::ctor(Vpools_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vpools_top_std__03a__03asemaphore__Vclpkg___ctor_var_reset(this);
}

void Vpools_top_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vpools_top_std__03a__03asemaphore__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
