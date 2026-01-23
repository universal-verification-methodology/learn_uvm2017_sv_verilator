// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133> imp)
    : Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz249(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz249::__PVT__m_if_mask = 0x00000100U;
}

void Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::__VnoInFunc_write(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::~Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz249::to_string_middle();
    return (out);
}
