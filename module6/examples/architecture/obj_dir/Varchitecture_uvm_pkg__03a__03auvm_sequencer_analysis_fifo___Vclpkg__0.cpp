// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent)
    : Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19(vlProcess, vlSymsp, name, parent, 0U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__analysis_export = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_analysis_imp__Tz19_TBz241, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_>{this});
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc_write(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc_write\n"); );
    // Body
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::~Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::to_string_middle\n"); );
    // Body
    std::string out;
    out += "analysis_export:" + VL_TO_STRING(__PVT__analysis_export);
    out += ", sequencer_ptr:" + VL_TO_STRING(__PVT__sequencer_ptr);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_tlm_fifo__Tz19::to_string_middle();
    return (out);
}
