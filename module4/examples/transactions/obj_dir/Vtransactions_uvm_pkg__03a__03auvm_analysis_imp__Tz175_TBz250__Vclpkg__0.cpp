// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135> imp)
    : Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz252(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz252::__PVT__m_if_mask = 0x00000100U;
}

void Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::__VnoInFunc_write(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtransactions_uvm_pkg__03a__03auvm_analysis_imp__Tz175_TBz250::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz252::to_string_middle();
    return (out);
}
