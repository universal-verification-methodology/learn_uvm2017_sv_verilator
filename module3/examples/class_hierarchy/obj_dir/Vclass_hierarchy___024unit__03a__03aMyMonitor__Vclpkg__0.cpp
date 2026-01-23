// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy___024unit__03a__03aMyMonitor__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aMyMonitor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyMonitor__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aMyMonitor__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "MyMonitor"s;
}

void Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi2> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "MyMonitor"s;
}

Vclass_hierarchy___024unit__03a__03aMyMonitor::Vclass_hierarchy___024unit__03a__03aMyMonitor(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_monitor(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__ap = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_port__Tz1, vlProcess, vlSymsp, "ap"s, 
                             VlClassRef<Vclass_hierarchy___024unit__03a__03aMyMonitor>{this});
}

void Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_build_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "MONITOR"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MONITOR"s, "Building monitor component"s, 0x000000c8U, "class_hierarchy.sv"s, 0x0000004cU, ""s, 1U);
    }
}

VlCoroutine Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_run_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "MONITOR"s, __Vfunc_uvm_report_enabled__6__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MONITOR"s, "Monitor run_phase executing"s, 0x000000c8U, "class_hierarchy.sv"s, 0x00000050U, ""s, 1U);
    }
    VL_NULL_CHECK(phase, "class_hierarchy.sv", 81)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aMyMonitor>{this}, ""s, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000000064ULL, 
                                            vlProcess, 
                                            "class_hierarchy.sv", 
                                            82);
    VL_NULL_CHECK(phase, "class_hierarchy.sv", 83)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                               VlClassRef<Vclass_hierarchy___024unit__03a__03aMyMonitor>{this}, ""s, 1U);
    co_return;}

void Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__11__Vfuncout;
    __Vfunc___VBasicRand__11__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__11__Vfuncout);
            }(), __Vfunc___VBasicRand__11__Vfuncout));
}

void Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vclass_hierarchy___024unit__03a__03aMyMonitor::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy___024unit__03a__03aMyMonitor::~Vclass_hierarchy___024unit__03a__03aMyMonitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy___024unit__03a__03aMyMonitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy___024unit__03a__03aMyMonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy___024unit__03a__03aMyMonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyMonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "ap:" + VL_TO_STRING(__PVT__ap);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_monitor::to_string_middle();
    return (out);
}
