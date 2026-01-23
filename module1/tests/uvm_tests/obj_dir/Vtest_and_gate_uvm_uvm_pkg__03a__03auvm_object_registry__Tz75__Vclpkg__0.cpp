// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi47__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_create(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> __Vfunc_create__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi47__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, __Vfunc_create__2__Vfuncout);
    create__Vfuncrtn = __Vfunc_create__2__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_set_type_override(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi47__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_set_inst_override(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi47__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_set_type_alias(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi47__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::__VnoInFunc_create_object(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::__VnoInFunc_create_object\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> obj;
    obj = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, name));
    create_object__Vfuncrtn = obj;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::__VnoInFunc_get_type_name\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_registry_common__pi47> __Vfunc_get__2__Vfuncout;
    std::string __Vtask_get_type_name__3__Vfuncout;
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_registry_common__pi47> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi47__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__2__Vfuncout);
    common = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 200)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__3__Vfuncout);
    get_type_name__Vfuncrtn = __Vtask_get_type_name__3__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::__VnoInFunc_initialize(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_registry_common__pi47> __Vfunc_get__4__Vfuncout;
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_registry_common__pi47> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi47__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__4__Vfuncout);
    common = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(common, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 281)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75(Vtest_and_gate_uvm__Syms* __restrict vlSymsp)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz75::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
