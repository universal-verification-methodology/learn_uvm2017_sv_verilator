// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg___ctor_var_reset(Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg* vlSelf);

Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg::Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg() = default;
Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg::~Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg() = default;

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg::ctor(Varchitecture__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg___ctor_var_reset(this);
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__Tz123__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
