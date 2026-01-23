// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi57__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection> __Vfunc_create__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi57__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, parent, contxt, __Vfunc_create__2__Vfuncout);
    create__Vfuncrtn = __Vfunc_create__2__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_set_type_override(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi57__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_set_inst_override(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi57__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_set_type_alias(Varchitecture__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi57__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::__VnoInFunc_create_object(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::__VnoInFunc_create_object\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection> obj;
    obj = ((""s == name) ? VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, ""s)
            : VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, name));
    create_object__Vfuncrtn = obj;
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::__VnoInFunc_get_type_name\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi57> __Vfunc_get__2__Vfuncout;
    std::string __Vtask_get_type_name__3__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi57> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi57__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    common = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 200)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__3__Vfuncout);
    get_type_name__Vfuncrtn = __Vtask_get_type_name__3__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::__VnoInFunc_initialize(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi57> __Vfunc_get__4__Vfuncout;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi57> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi57__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
    common = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 281)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33(Varchitecture__Syms* __restrict vlSymsp)
    : Varchitecture_uvm_pkg__03a__03auvm_object_wrapper(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::~Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi33::to_string_middle\n"); );
    // Body
    std::string out;
    out += Varchitecture_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
