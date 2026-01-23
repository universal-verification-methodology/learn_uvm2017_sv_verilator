// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"
#include "Vdata_structures_example__Syms.h"
#include "Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg.h"

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg___ctor_var_reset(Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg* vlSelf);

Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg::Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg(Vdata_structures_example__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg___ctor_var_reset(this);
}

void Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg::~Vdata_structures_example_data_structures_pkg__03a__03aTransactionQueue__Vclpkg() {
}
