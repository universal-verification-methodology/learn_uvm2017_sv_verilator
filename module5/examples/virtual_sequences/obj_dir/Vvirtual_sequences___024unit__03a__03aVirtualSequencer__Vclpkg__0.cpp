// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi1> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aVirtualSequencer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences___024unit__03a__03aVirtualSequencer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "VirtualSequencer"s;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__pi1> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "VirtualSequencer"s;
}

Vvirtual_sequences___024unit__03a__03aVirtualSequencer::Vvirtual_sequences___024unit__03a__03aVirtualSequencer(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_build_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "VIRTUAL_SEQR"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "VIRTUAL_SEQR"s, "Building virtual sequencer"s, 0x000000c8U, "virtual_sequences.sv"s, 0x0000008eU, ""s, 1U);
    }
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_connect_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_param_base_::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "VIRTUAL_SEQR"s, __Vfunc_uvm_report_enabled__6__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "VIRTUAL_SEQR"s, "Connecting virtual sequencer"s, 0x000000c8U, "virtual_sequences.sv"s, 0x00000093U, ""s, 1U);
    }
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__9__Vfuncout;
    __Vfunc___VBasicRand__9__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__9__Vfuncout);
            }(), __Vfunc___VBasicRand__9__Vfuncout));
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences___024unit__03a__03aVirtualSequencer::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences___024unit__03a__03aVirtualSequencer::~Vvirtual_sequences___024unit__03a__03aVirtualSequencer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualSequencer>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences___024unit__03a__03aVirtualSequencer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences___024unit__03a__03aVirtualSequencer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvirtual_sequences___024unit__03a__03aVirtualSequencer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "master_seqr:" + VL_TO_STRING(__PVT__master_seqr);
    out += ", slave_seqr:" + VL_TO_STRING(__PVT__slave_seqr);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_::to_string_middle();
    return (out);
}
