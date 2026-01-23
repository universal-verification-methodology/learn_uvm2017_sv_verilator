// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg___ctor_var_reset(Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg* vlSelf);

Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg() = default;
Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::~Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg() = default;

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::ctor(Vpools_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg___ctor_var_reset(this);
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
