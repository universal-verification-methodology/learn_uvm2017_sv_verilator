// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"

void Vtransaction_example_transaction_pkg___ctor_var_reset(Vtransaction_example_transaction_pkg* vlSelf);

Vtransaction_example_transaction_pkg::Vtransaction_example_transaction_pkg(Vtransaction_example__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtransaction_example_transaction_pkg___ctor_var_reset(this);
}

void Vtransaction_example_transaction_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtransaction_example_transaction_pkg::~Vtransaction_example_transaction_pkg() {
}
