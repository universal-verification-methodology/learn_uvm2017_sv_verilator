// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_visitor_adapter__TBz65(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_accept(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> s, VlClassRef<Vdma_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<Vdma_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_accept\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_component>> c;
    if (invoke_begin_end) {
        VL_NULL_CHECK(v, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh", 129)->__VnoInFunc_begin_v(vlProcess, vlSymsp);
    }
    VL_NULL_CHECK(v, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh", 131)->__VnoInFunc_visit(vlProcess, vlSymsp, s);
    VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh", 132)->__VnoInFunc_get_immediate_children(vlSymsp, s, c);
    unnamedblk1__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__idx, c.size())) {
        this->__VnoInFunc_accept(vlProcess, vlSymsp, c.at(unnamedblk1__DOT__idx), v, p, 0U);
        unnamedblk1__DOT__idx = ((IData)(1U) + unnamedblk1__DOT__idx);
    }
    if (invoke_begin_end) {
        VL_NULL_CHECK(v, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh", 138)->__VnoInFunc_end_v(vlSymsp);
    }
}

void Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__7__Vfuncout;
    __Vfunc___VBasicRand__7__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__7__Vfuncout);
            }(), __Vfunc___VBasicRand__7__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::~Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vdma_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::to_string_middle();
    return (out);
}
