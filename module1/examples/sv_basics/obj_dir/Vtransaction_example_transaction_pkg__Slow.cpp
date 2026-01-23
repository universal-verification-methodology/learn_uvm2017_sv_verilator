// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"

void Vtransaction_example_transaction_pkg___ctor_var_reset(Vtransaction_example_transaction_pkg* vlSelf);

Vtransaction_example_transaction_pkg::Vtransaction_example_transaction_pkg() = default;
Vtransaction_example_transaction_pkg::~Vtransaction_example_transaction_pkg() = default;

void Vtransaction_example_transaction_pkg::ctor(Vtransaction_example__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtransaction_example_transaction_pkg___ctor_var_reset(this);
}

void Vtransaction_example_transaction_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtransaction_example_transaction_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
