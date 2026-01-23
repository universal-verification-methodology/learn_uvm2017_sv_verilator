// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

std::string VL_TO_STRING(const Vtest_and_gate_uvm_and_gate_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtest_and_gate_uvm_and_gate_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
