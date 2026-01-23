// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example__Syms.h"
#include "Verror_handling_example_error_handling_pkg.h"

void Verror_handling_example_error_handling_pkg___ctor_var_reset(Verror_handling_example_error_handling_pkg* vlSelf);

Verror_handling_example_error_handling_pkg::Verror_handling_example_error_handling_pkg(Verror_handling_example__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Verror_handling_example_error_handling_pkg___ctor_var_reset(this);
}

void Verror_handling_example_error_handling_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Verror_handling_example_error_handling_pkg::~Verror_handling_example_error_handling_pkg() {
}
