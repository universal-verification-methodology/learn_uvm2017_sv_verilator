// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent)
    : Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz172(vlProcess, vlSymsp, name, parent, 0U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__analysis_export = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_analysis_imp__Tz172_TBz247, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133>{this});
}

void Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::__VnoInFunc_write(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::__VnoInFunc_write\n"); );
    // Body
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
}

void Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__5__Vfuncout;
    __Vfunc___Vbasic_randomize__5__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__5__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__5__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::__VnoInFunc___Vbasic_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vpools_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi133::to_string_middle\n"); );
    // Body
    std::string out;
    out += "analysis_export:" + VL_TO_STRING(__PVT__analysis_export);
    out += ", sequencer_ptr:" + VL_TO_STRING(__PVT__sequencer_ptr);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz172::to_string_middle();
    return (out);
}
