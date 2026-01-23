// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_typeid_base::Vdma_uvm_pkg__03a__03auvm_typeid_base(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_typeid_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_typeid_base::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_typeid_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_typeid_base::~Vdma_uvm_pkg__03a__03auvm_typeid_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_typeid_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_typeid_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_typeid_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_typeid_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_typeid_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_typeid_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_typeid_base::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
