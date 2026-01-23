// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_std__03a__03asemaphore__Vclpkg___ctor_var_reset(Vtransactions_std__03a__03asemaphore__Vclpkg* vlSelf);

Vtransactions_std__03a__03asemaphore__Vclpkg::Vtransactions_std__03a__03asemaphore__Vclpkg(Vtransactions__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtransactions_std__03a__03asemaphore__Vclpkg___ctor_var_reset(this);
}

void Vtransactions_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtransactions_std__03a__03asemaphore__Vclpkg::~Vtransactions_std__03a__03asemaphore__Vclpkg() {
}
