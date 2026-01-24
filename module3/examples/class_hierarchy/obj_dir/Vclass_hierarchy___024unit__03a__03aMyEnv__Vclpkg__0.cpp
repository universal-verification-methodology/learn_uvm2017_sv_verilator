// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy___024unit__03a__03aMyEnv__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi4> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aMyEnv__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyEnv__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aMyEnv__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "MyEnv"s;
}

void Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "MyEnv"s;
}

Vclass_hierarchy___024unit__03a__03aMyEnv::Vclass_hierarchy___024unit__03a__03aMyEnv(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_env(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc_build_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyAgent> __Vfunc_create__5__Vfuncout;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "ENV"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "ENV"s, "Building environment component"s, 0x000000c8U, "class_hierarchy.sv"s, 0x000001d2U, ""s, 1U);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi3__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "agent"s, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aMyEnv>{this}, ""s, __Vfunc_create__5__Vfuncout);
    this->__PVT__agent = __Vfunc_create__5__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__7__Vfuncout;
    __Vfunc___VBasicRand__7__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__7__Vfuncout);
            }(), __Vfunc___VBasicRand__7__Vfuncout));
}

void Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vclass_hierarchy___024unit__03a__03aMyEnv::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy___024unit__03a__03aMyEnv::~Vclass_hierarchy___024unit__03a__03aMyEnv() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy___024unit__03a__03aMyEnv>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy___024unit__03a__03aMyEnv::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy___024unit__03a__03aMyEnv::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyEnv::to_string_middle\n"); );
    // Body
    std::string out;
    out += "agent:" + VL_TO_STRING(__PVT__agent);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_env::to_string_middle();
    return (out);
}
