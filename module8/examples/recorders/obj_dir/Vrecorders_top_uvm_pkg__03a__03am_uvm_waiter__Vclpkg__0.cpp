// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter(Vrecorders_top__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__inst_name = inst_name;
    this->__PVT__field_name = field_name;
}

void Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03am_uvm_waiter::to_string_middle\n"); );
    // Body
    std::string out;
    out += "inst_name:" + VL_TO_STRING(__PVT__inst_name);
    out += ", field_name:" + VL_TO_STRING(__PVT__field_name);
    out += ", trigger:" + VL_TO_STRING(__PVT__trigger);
    return (out);
}
