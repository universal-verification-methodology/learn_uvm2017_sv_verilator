// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"

void Verror_handling_example_error_handling_pkg___ctor_var_reset(Verror_handling_example_error_handling_pkg* vlSelf);

Verror_handling_example_error_handling_pkg::Verror_handling_example_error_handling_pkg() = default;
Verror_handling_example_error_handling_pkg::~Verror_handling_example_error_handling_pkg() = default;

void Verror_handling_example_error_handling_pkg::ctor(Verror_handling_example__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Verror_handling_example_error_handling_pkg___ctor_var_reset(this);
}

void Verror_handling_example_error_handling_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Verror_handling_example_error_handling_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
