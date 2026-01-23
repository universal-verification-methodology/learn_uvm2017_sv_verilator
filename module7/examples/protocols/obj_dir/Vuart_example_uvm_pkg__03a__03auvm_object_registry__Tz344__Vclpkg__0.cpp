// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_create(Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz296> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz296> __Vfunc_create__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, __Vfunc_create__2__Vfuncout);
    create__Vfuncrtn = __Vfunc_create__2__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_set_type_override(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_set_inst_override(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_set_type_alias(Vuart_example__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::__VnoInFunc_create_object(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::__VnoInFunc_create_object\n"); );
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz296> obj;
    obj = ((""s == name) ? VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_resource__Tz296, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_resource__Tz296, vlProcess, vlSymsp, name));
    create_object__Vfuncrtn = obj;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::__VnoInFunc_get_type_name\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_registry_common__pi210> __Vfunc_get__2__Vfuncout;
    std::string __Vtask_get_type_name__3__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_registry_common__pi210> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    common = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 200)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__3__Vfuncout);
    get_type_name__Vfuncrtn = __Vtask_get_type_name__3__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::__VnoInFunc_initialize(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_registry_common__pi210> __Vfunc_get__4__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_registry_common__pi210> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi210__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
    common = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 281)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344(Vuart_example__Syms* __restrict vlSymsp)
    : Vuart_example_uvm_pkg__03a__03auvm_object_wrapper(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz344::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vuart_example_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
