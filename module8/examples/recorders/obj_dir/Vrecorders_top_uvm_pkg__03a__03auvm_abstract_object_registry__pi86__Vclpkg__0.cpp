// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi108__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_create(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_frontdoor> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_frontdoor> __Vfunc_create__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi108__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, __Vfunc_create__2__Vfuncout);
    create__Vfuncrtn = __Vfunc_create__2__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_set_type_override(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi108__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_set_inst_override(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi108__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_set_type_alias(Vrecorders_top__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi108__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::__VnoInFunc_create_object(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::__VnoInFunc_create_object\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__0__Vfuncout;
    __Vfunc_uvm_report_enabled__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__0__verbosity;
    __Vfunc_uvm_report_enabled__0__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__0__severity;
    __Vfunc_uvm_report_enabled__0__severity = 0;
    std::string __Vfunc_uvm_report_enabled__0__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__3__Vfuncout;
    __Vtask_uvm_report_enabled__3__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__4__id;
    std::string __Vtask_uvm_report_error__4__message;
    IData/*31:0*/ __Vtask_uvm_report_error__4__verbosity;
    __Vtask_uvm_report_error__4__verbosity = 0;
    std::string __Vtask_uvm_report_error__4__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__4__line;
    __Vtask_uvm_report_error__4__line = 0;
    std::string __Vtask_uvm_report_error__4__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__4__report_enabled_checked;
    __Vtask_uvm_report_error__4__report_enabled_checked = 0;
    std::string __Vfunc_get_type_name__5__Vfuncout;
    std::string __Vfunc_get_type_name__6__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__0__id = "UVM/ABST_RGTRY/CREATE_ABSTRACT_OBJ"s;
                    __Vfunc_uvm_report_enabled__0__severity = 2U;
                    __Vfunc_uvm_report_enabled__0__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__1__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__2__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__0__verbosity, (IData)(__Vfunc_uvm_report_enabled__0__severity), __Vfunc_uvm_report_enabled__0__id, __Vtask_uvm_report_enabled__3__Vfuncout);
                    __Vfunc_uvm_report_enabled__0__Vfuncout 
                        = __Vtask_uvm_report_enabled__3__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__0__Vfuncout))) {
        __Vtask_uvm_report_error__4__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__4__context_name = ""s;
        __Vtask_uvm_report_error__4__line = 0x000001acU;
        __Vtask_uvm_report_error__4__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh"s;
        __Vtask_uvm_report_error__4__verbosity = 0U;
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__5__Vfuncout);
            }(), __Vfunc_get_type_name__5__Vfuncout);
        __Vtemp_2 = ([&]() {
                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__6__Vfuncout);
            }(), __Vfunc_get_type_name__6__Vfuncout);
        __Vtask_uvm_report_error__4__message = VL_SFORMATF_N_NX("Cannot create an instance of abstract class %@ (with name %@). Check for missing factory overrides for %@.",0,
                                                                -1,
                                                                &(__Vtemp_1),
                                                                -1,
                                                                &(name),
                                                                -1,
                                                                &(__Vtemp_2)) ;
        __Vtask_uvm_report_error__4__id = "UVM/ABST_RGTRY/CREATE_ABSTRACT_OBJ"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__4__id, __Vtask_uvm_report_error__4__message, __Vtask_uvm_report_error__4__verbosity, __Vtask_uvm_report_error__4__filename, __Vtask_uvm_report_error__4__line, __Vtask_uvm_report_error__4__context_name, (IData)(__Vtask_uvm_report_error__4__report_enabled_checked));
    }
    create_object__Vfuncrtn = VlNull{};
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::__VnoInFunc_get_type_name\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_registry_common__pi108> __Vfunc_get__10__Vfuncout;
    std::string __Vtask_get_type_name__11__Vfuncout;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_registry_common__pi108> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi108__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__10__Vfuncout);
    common = __Vfunc_get__10__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 443)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__11__Vfuncout);
    get_type_name__Vfuncrtn = __Vtask_get_type_name__11__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::__VnoInFunc_initialize(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_registry_common__pi108> __Vfunc_get__12__Vfuncout;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_registry_common__pi108> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi108__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__12__Vfuncout);
    common = __Vfunc_get__12__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 521)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86(Vrecorders_top__Syms* __restrict vlSymsp)
    : Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::~Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi86::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
