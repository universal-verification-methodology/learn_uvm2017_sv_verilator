// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::__VnoInFunc_accept(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> s, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::__VnoInFunc_accept\n"); );
}

Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__2__Vfuncout;
    __Vfunc___Vbasic_randomize__2__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__2__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__2__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::__VnoInFunc___Vbasic_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_visitor_adapter__TBz95::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
