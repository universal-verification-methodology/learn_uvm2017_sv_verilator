// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_factory__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_factory__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__1__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    s = __Vfunc_get__0__Vfuncout;
    VL_NULL_CHECK(s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 92)->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__1__Vfuncout);
    get__Vfuncrtn = __Vtask_get_factory__1__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_factory__Vclpkg::__VnoInFunc_set(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory> f) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_factory__Vclpkg::__VnoInFunc_set\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
    s = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_factory.svh", 99)->__VnoInFunc_set_factory(vlSymsp, f);
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_register(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_register\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_override_by_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_override_by_type\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_override_by_name\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_override_by_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_override_by_type\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_override_by_name\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_object_by_type\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_component_by_type\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_object_by_name(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_object_by_name\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_is_type_name_registered(Vdma__Syms* __restrict vlSymsp, std::string type_name, CData/*0:0*/ &is_type_name_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_is_type_name_registered\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_is_type_registered(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> obj, CData/*0:0*/ &is_type_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_is_type_registered\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_create_component_by_name\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_type_alias\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_alias(Vdma__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string full_inst_path) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_set_inst_alias\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_debug_create_by_type\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_debug_create_by_name(Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_debug_create_by_name\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_override_by_type\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_override_by_name\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_find_wrapper_by_name\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_print(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ all_types) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::__VnoInFunc_print\n"); );
}

Vdma_uvm_pkg__03a__03auvm_factory::Vdma_uvm_pkg__03a__03auvm_factory(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_factory::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_factory::~Vdma_uvm_pkg__03a__03auvm_factory() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_factory::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_factory::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_factory::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
