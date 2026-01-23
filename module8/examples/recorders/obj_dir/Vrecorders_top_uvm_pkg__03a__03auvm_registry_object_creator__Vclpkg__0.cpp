// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg::__VnoInFunc_create_by_type(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> obj_wrpr, std::string contxt, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> unused, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg::__VnoInFunc_create_by_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__1__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> __Vtask_create_object_by_type__2__Vfuncout;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_factory> factory;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    cs = __Vfunc_get__0__Vfuncout;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 670)->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__1__Vfuncout);
    factory = __Vtask_get_factory__1__Vfuncout;
    VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 672)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, obj_wrpr, contxt, name, __Vtask_create_object_by_type__2__Vfuncout);
    create_by_type__Vfuncrtn = __Vtask_create_object_by_type__2__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg::__VnoInFunc_base_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &base_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator__Vclpkg::__VnoInFunc_base_type_name\n"); );
    // Body
    base_type_name__Vfuncrtn = "object"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_registry_object_creator::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
