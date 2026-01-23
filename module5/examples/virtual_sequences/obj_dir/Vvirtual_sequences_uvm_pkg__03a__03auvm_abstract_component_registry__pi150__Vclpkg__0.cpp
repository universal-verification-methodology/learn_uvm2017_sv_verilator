// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_type_name\n"); );
    // Locals
    std::string __Vfunc_type_name__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg.__VnoInFunc_type_name(vlSymsp, __Vfunc_type_name__0__Vfuncout);
    type_name__Vfuncrtn = __Vfunc_type_name__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__get__Vstatic__m_inst)) {
        this->__PVT__get__Vstatic__m_inst = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__get__Vstatic__m_inst;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_create(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz203> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_create\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz203> __Vfunc_create__2__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg.__VnoInFunc_create(vlSymsp, name, parent, contxt, __Vfunc_create__2__Vfuncout);
    create__Vfuncrtn = __Vfunc_create__2__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_set_type_override(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_set_type_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg.__VnoInFunc_set_type_override(vlSymsp, override_type, replace);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_set_inst_override(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_set_inst_override\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg.__VnoInFunc_set_inst_override(vlSymsp, override_type, inst_path, parent);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_set_type_alias(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150__Vclpkg::__VnoInFunc_set_type_alias\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg.__VnoInFunc_set_type_alias(vlSymsp, alias_name);
    set_type_alias__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::__VnoInFunc_create_component(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::__VnoInFunc_create_component\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__0__Vfuncout;
    __Vfunc_uvm_report_enabled__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__0__verbosity;
    __Vfunc_uvm_report_enabled__0__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__0__severity;
    __Vfunc_uvm_report_enabled__0__severity = 0;
    std::string __Vfunc_uvm_report_enabled__0__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
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
    std::string __Vtask_get_full_name__6__Vfuncout;
    std::string __Vfunc_get_type_name__7__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__0__id = "UVM/ABST_RGTRY/CREATE_ABSTRACT_CMPNT"s;
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
        __Vtask_uvm_report_error__4__line = 0x00000134U;
        __Vtask_uvm_report_error__4__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh"s;
        __Vtask_uvm_report_error__4__verbosity = 0U;
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__5__Vfuncout);
            }(), __Vfunc_get_type_name__5__Vfuncout);
        __Vtemp_2 = ([&]() {
                VL_NULL_CHECK(parent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 308)
                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__6__Vfuncout);
            }(), __Vtask_get_full_name__6__Vfuncout);
        __Vtemp_3 = ([&]() {
                this->__VnoInFunc_get_type_name(vlSymsp, __Vfunc_get_type_name__7__Vfuncout);
            }(), __Vfunc_get_type_name__7__Vfuncout);
        __Vtask_uvm_report_error__4__message = VL_SFORMATF_N_NX("Cannot create an instance of abstract class %@ (with name %@ and parent %@). Check for missing factory overrides for %@.",0,
                                                                -1,
                                                                &(__Vtemp_1),
                                                                -1,
                                                                &(name),
                                                                -1,
                                                                &(__Vtemp_2),
                                                                -1,
                                                                &(__Vtemp_3)) ;
        __Vtask_uvm_report_error__4__id = "UVM/ABST_RGTRY/CREATE_ABSTRACT_CMPNT"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__4__id, __Vtask_uvm_report_error__4__message, __Vtask_uvm_report_error__4__verbosity, __Vtask_uvm_report_error__4__filename, __Vtask_uvm_report_error__4__line, __Vtask_uvm_report_error__4__context_name, (IData)(__Vtask_uvm_report_error__4__report_enabled_checked));
    }
    create_component__Vfuncrtn = VlNull{};
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::__VnoInFunc_get_type_name\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi151> __Vfunc_get__11__Vfuncout;
    std::string __Vtask_get_type_name__12__Vfuncout;
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi151> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__11__Vfuncout);
    common = __Vfunc_get__11__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 323)->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__12__Vfuncout);
    get_type_name__Vfuncrtn = __Vtask_get_type_name__12__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::__VnoInFunc_initialize(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::__VnoInFunc_initialize\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi151> __Vfunc_get__13__Vfuncout;
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi151> common;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_registry_common__pi151__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__13__Vfuncout);
    common = __Vfunc_get__13__Vfuncout;
    VL_NULL_CHECK(common, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_registry.svh", 401)->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150(Vvirtual_sequences__Syms* __restrict vlSymsp)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::~Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_component_registry__pi150::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle();
    return (out);
}
