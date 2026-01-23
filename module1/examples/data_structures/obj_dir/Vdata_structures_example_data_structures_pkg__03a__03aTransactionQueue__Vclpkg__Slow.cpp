// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg___ctor_var_reset(Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg* vlSelf);

Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg::Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg() = default;
Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg::~Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg() = default;

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg::ctor(Vdata_structures_example__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg___ctor_var_reset(this);
}

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
