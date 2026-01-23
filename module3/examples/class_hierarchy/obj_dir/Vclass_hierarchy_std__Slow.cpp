// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_std___ctor_var_reset(Vclass_hierarchy_std* vlSelf);

Vclass_hierarchy_std::Vclass_hierarchy_std() = default;
Vclass_hierarchy_std::~Vclass_hierarchy_std() = default;

void Vclass_hierarchy_std::ctor(Vclass_hierarchy__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vclass_hierarchy_std___ctor_var_reset(this);
}

void Vclass_hierarchy_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vclass_hierarchy_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
