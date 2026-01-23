// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi68__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vuart_example___024unit__03a__03aUartDriver> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Vuart_example___024unit__03a__03aUartDriver> __Vfunc_create__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi68__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, parent, contxt, __Vfunc_create__2__Vfuncout);
    create__Vfuncrtn = __Vfunc_create__2__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_set_type_override(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi68__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_set_inst_override(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi68__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_set_type_alias(Vuart_example__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi68__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::__VnoInFunc_create_component(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::__VnoInFunc_create_component\n"); );
    // Body
    VlClassRef<Vuart_example___024unit__03a__03aUartDriver> obj;
    obj = VL_NEW(Vuart_example___024unit__03a__03aUartDriver, vlProcess, vlSymsp, name, parent);
    create_component__Vfuncrtn = obj;
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::__VnoInFunc_get_type_name\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_registry_common__pi68> __Vfunc_get__1__Vfuncout;
    std::string __Vtask_get_type_name__2__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_registry_common__pi68> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi68__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
    common = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 80)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__2__Vfuncout);
    get_type_name__Vfuncrtn = __Vtask_get_type_name__2__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::__VnoInFunc_initialize(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_registry_common__pi68> __Vfunc_get__3__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_registry_common__pi68> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi68__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
    common = __Vfunc_get__3__Vfuncout;
    VL_NULL_CHECK(common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 94)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62(Vuart_example__Syms* __restrict vlSymsp)
    : Vuart_example_uvm_pkg__03a__03auvm_object_wrapper(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi62::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vuart_example_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
