// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127::__PVT__m_if_mask = 0x00000100U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::__VnoInFunc_write(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::~Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz127::to_string_middle();
    return (out);
}
