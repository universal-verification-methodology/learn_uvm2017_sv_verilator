// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"

void Vinterface_example_apb_if___ctor_var_reset(Vinterface_example_apb_if* vlSelf);

Vinterface_example_apb_if::Vinterface_example_apb_if() = default;
Vinterface_example_apb_if::~Vinterface_example_apb_if() = default;

void Vinterface_example_apb_if::ctor(Vinterface_example__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vinterface_example_apb_if___ctor_var_reset(this);
}

void Vinterface_example_apb_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vinterface_example_apb_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
