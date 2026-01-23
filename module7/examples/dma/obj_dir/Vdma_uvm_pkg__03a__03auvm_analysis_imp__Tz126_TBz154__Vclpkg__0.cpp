// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75> imp)
    : Vdma_uvm_pkg__03a__03auvm_port_base__Tz149(vlProcess, vlSymsp, name, imp, 2U, 1U, 1U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_imp = imp;
    Vdma_uvm_pkg__03a__03auvm_port_base__Tz149::__PVT__m_if_mask = 0x00000100U;
}

void Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_analysis_imp"s;
}

void Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::__VnoInFunc_write(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::__VnoInFunc_write\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm1/uvm_analysis_port.svh", 117)->__VnoInFunc_write(vlProcess, vlSymsp, t);
}

void Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_imp:" + VL_TO_STRING(__PVT__m_imp);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_port_base__Tz149::to_string_middle();
    return (out);
}
