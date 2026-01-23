// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"
#include "Vinterface_example__Syms.h"
#include "Vinterface_example_apb_if.h"

void Vinterface_example_apb_if___ctor_var_reset(Vinterface_example_apb_if* vlSelf);

Vinterface_example_apb_if::Vinterface_example_apb_if(Vinterface_example__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vinterface_example_apb_if___ctor_var_reset(this);
}

void Vinterface_example_apb_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vinterface_example_apb_if::~Vinterface_example_apb_if() {
}
