// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi119__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_create(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_driver_> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_driver_> __Vfunc_create__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi119__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, __Vfunc_create__2__Vfuncout);
    create__Vfuncrtn = __Vfunc_create__2__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_set_type_override(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi119__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_set_inst_override(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi119__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_set_type_alias(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi119__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::__VnoInFunc_create_component(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::__VnoInFunc_create_component\n"); );
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_driver_> obj;
    obj = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_driver_, vlProcess, vlSymsp, name, parent);
    create_component__Vfuncrtn = obj;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::__VnoInFunc_get_type_name\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi119> __Vfunc_get__1__Vfuncout;
    std::string __Vtask_get_type_name__2__Vfuncout;
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi119> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi119__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
    common = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 80)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__2__Vfuncout);
    get_type_name__Vfuncrtn = __Vtask_get_type_name__2__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::__VnoInFunc_initialize(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi119> __Vfunc_get__3__Vfuncout;
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_registry_common__pi119> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi119__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
    common = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 94)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190(Vclass_hierarchy__Syms* __restrict vlSymsp)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::~Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__Tz190::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
