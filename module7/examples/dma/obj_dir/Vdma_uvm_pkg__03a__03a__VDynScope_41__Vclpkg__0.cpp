// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03a__VDynScope_41::Vdma_uvm_pkg__03a__03a__VDynScope_41(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03a__VDynScope_41::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vdma_uvm_pkg__03a__03a__VDynScope_41::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03a__VDynScope_41::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__k = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03a__VDynScope_41>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03a__VDynScope_41::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03a__VDynScope_41::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03a__VDynScope_41::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03a__VDynScope_41::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03a__VDynScope_41::to_string_middle\n"); );
    // Body
    std::string out;
    out += "k:" + VL_TO_STRING(__PVT__k);
    return (out);
}
