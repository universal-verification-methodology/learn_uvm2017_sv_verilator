// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo__Tz15(vlProcess, vlSymsp, name, parent, 0U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__analysis_export = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_imp__Tz15_TBz125, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_>{this});
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc_write(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc_write\n"); );
    // Body
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::~Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_::to_string_middle\n"); );
    // Body
    std::string out;
    out += "analysis_export:" + VL_TO_STRING(__PVT__analysis_export);
    out += ", sequencer_ptr:" + VL_TO_STRING(__PVT__sequencer_ptr);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo__Tz15::to_string_middle();
    return (out);
}
