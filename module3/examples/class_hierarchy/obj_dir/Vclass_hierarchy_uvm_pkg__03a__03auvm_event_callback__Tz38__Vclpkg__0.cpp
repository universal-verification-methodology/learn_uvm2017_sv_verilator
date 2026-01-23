// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc_pre_trigger(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38> e, std::string data, CData/*0:0*/ &pre_trigger__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc_pre_trigger\n"); );
    // Body
    pre_trigger__Vfuncrtn = 0U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc_post_trigger(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38> e, std::string data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc_post_trigger\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc_create\n"); );
    // Body
    create__Vfuncrtn = VlNull{};
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__2__Vfuncout;
    __Vfunc___Vbasic_randomize__2__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__2__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__2__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vclass_hierarchy_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
