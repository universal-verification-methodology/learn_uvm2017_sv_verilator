// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153> imp)
    : Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz276(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz276::__PVT__m_if_mask = 0x00000100U;
}

void Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::__VnoInFunc_write(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz276::to_string_middle();
    return (out);
}
