// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_and_gate_if___ctor_var_reset(Vtest_and_gate_uvm_and_gate_if* vlSelf);

Vtest_and_gate_uvm_and_gate_if::Vtest_and_gate_uvm_and_gate_if(Vtest_and_gate_uvm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_and_gate_uvm_and_gate_if___ctor_var_reset(this);
}

void Vtest_and_gate_uvm_and_gate_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtest_and_gate_uvm_and_gate_if::~Vtest_and_gate_uvm_and_gate_if() {
}
