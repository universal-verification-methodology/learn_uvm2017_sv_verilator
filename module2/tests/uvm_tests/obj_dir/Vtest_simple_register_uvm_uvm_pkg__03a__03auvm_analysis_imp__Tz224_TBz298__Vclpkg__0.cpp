// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi167> imp)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz300(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz300::__PVT__m_if_mask = 0x00000100U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::__VnoInFunc_write(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz224_TBz298::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz300::to_string_middle();
    return (out);
}
