// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165__Vclpkg::__VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165(Vuart_example__Syms* __restrict vlSymsp)
    : Vuart_example_uvm_pkg__03a__03auvm_typeid_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz165::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vuart_example_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
