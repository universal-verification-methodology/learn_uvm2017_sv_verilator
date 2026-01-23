// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg___ctor_var_reset(Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg* vlSelf);

Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg() = default;
Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::~Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg() = default;

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::ctor(Vclass_hierarchy__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg___ctor_var_reset(this);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
