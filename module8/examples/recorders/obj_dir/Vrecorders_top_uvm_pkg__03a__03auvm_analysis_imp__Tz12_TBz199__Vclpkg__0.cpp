// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp)
    : Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz198(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz198::__PVT__m_if_mask = 0x00000100U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::__VnoInFunc_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz12_TBz199::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz198::to_string_middle();
    return (out);
}
