// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent)
    : Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz174(vlProcess, vlSymsp, name, parent, 0U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__analysis_export = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_analysis_imp__Tz174_TBz249, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135>{this});
}

void Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::__VnoInFunc_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::__VnoInFunc_write\n"); );
    // Body
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::~Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi135::to_string_middle\n"); );
    // Body
    std::string out;
    out += "analysis_export:" + VL_TO_STRING(__PVT__analysis_export);
    out += ", sequencer_ptr:" + VL_TO_STRING(__PVT__sequencer_ptr);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz174::to_string_middle();
    return (out);
}
