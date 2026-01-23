// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent)
    : Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo__Tz126(vlProcess, vlSymsp, name, parent, 0U) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__analysis_export = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz154, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75>{this});
}

void Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::__VnoInFunc_write(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::__VnoInFunc_write\n"); );
    // Body
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
}

void Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__5__Vfuncout;
    __Vfunc___Vbasic_randomize__5__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__5__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__5__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi75::to_string_middle\n"); );
    // Body
    std::string out;
    out += "analysis_export:" + VL_TO_STRING(__PVT__analysis_export);
    out += ", sequencer_ptr:" + VL_TO_STRING(__PVT__sequencer_ptr);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo__Tz126::to_string_middle();
    return (out);
}
