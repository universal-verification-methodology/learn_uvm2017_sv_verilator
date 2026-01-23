// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi78__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent> __Vfunc_create__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi78__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, parent, contxt, __Vfunc_create__2__Vfuncout);
    create__Vfuncrtn = __Vfunc_create__2__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_set_type_override(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi78__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_set_inst_override(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi78__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_set_type_alias(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi78__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::__VnoInFunc_create_component(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::__VnoInFunc_create_component\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent> obj;
    obj = VL_NEW(Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent, vlProcess, vlSymsp, name, parent);
    create_component__Vfuncrtn = obj;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::__VnoInFunc_get_type_name\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi78> __Vfunc_get__1__Vfuncout;
    std::string __Vtask_get_type_name__2__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi78> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi78__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
    common = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 80)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__2__Vfuncout);
    get_type_name__Vfuncrtn = __Vtask_get_type_name__2__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi78> __Vfunc_get__3__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi78> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi78__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
    common = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 94)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65(Vtest_simple_register_uvm__Syms* __restrict vlSymsp)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
