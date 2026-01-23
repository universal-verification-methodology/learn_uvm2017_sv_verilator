// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi163> imp)
    : Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz292(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz292::__PVT__m_if_mask = 0x00000100U;
}

void Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::__VnoInFunc_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz216_TBz290::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_port_base__Tz292::to_string_middle();
    return (out);
}
