// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent)
    : Vdma_uvm_pkg__03a__03auvm_tlm_fifo__Tz199(vlProcess, vlSymsp, name, parent, 0U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__analysis_export = VL_NEW(Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153>{this});
}

void Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::__VnoInFunc_write(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::__VnoInFunc_write\n"); );
    // Body
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
}

void Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::~Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153::to_string_middle\n"); );
    // Body
    std::string out;
    out += "analysis_export:" + VL_TO_STRING(__PVT__analysis_export);
    out += ", sequencer_ptr:" + VL_TO_STRING(__PVT__sequencer_ptr);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_tlm_fifo__Tz199::to_string_middle();
    return (out);
}
