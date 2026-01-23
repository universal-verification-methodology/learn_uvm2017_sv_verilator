// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

void Vdata_structures_example_data_structures_pkg___ctor_var_reset(Vdata_structures_example_data_structures_pkg* vlSelf);

Vdata_structures_example_data_structures_pkg::Vdata_structures_example_data_structures_pkg() = default;
Vdata_structures_example_data_structures_pkg::~Vdata_structures_example_data_structures_pkg() = default;

void Vdata_structures_example_data_structures_pkg::ctor(Vdata_structures_example__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdata_structures_example_data_structures_pkg___ctor_var_reset(this);
}

void Vdata_structures_example_data_structures_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdata_structures_example_data_structures_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
