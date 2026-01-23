// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"

void Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg___ctor_var_reset(Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg* vlSelf);

Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg::Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg() = default;
Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg::~Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg() = default;

void Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg::ctor(Vtransaction_example__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg___ctor_var_reset(this);
}

void Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtransaction_example_transaction_pkg__03a__03aReadTransaction__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
