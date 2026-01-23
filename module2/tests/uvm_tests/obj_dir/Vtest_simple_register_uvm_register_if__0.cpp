// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

std::string VL_TO_STRING(const Vtest_simple_register_uvm_register_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtest_simple_register_uvm_register_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
