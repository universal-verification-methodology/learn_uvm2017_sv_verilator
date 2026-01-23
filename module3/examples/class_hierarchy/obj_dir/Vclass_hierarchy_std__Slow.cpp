// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_std___ctor_var_reset(Vclass_hierarchy_std* vlSelf);

Vclass_hierarchy_std::Vclass_hierarchy_std(Vclass_hierarchy__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vclass_hierarchy_std___ctor_var_reset(this);
}

void Vclass_hierarchy_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vclass_hierarchy_std::~Vclass_hierarchy_std() {
}
