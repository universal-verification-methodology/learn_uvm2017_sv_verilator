// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"

std::string VL_TO_STRING(const Vinterface_example_apb_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vinterface_example_apb_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
