// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg____Vdpiexp_m___05Fuvm_report_dpi_TOP__uvm_pkg(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy_uvm_pkg____Vdpiexp_m___05Fuvm_report_dpi_TOP__uvm_pkg\n"); );
    // Locals
    CData/*1:0*/ __Vtask_uvm_report__0__severity;
    __Vtask_uvm_report__0__severity = 0;
    std::string __Vtask_uvm_report__0__id;
    std::string __Vtask_uvm_report__0__message;
    IData/*31:0*/ __Vtask_uvm_report__0__verbosity;
    __Vtask_uvm_report__0__verbosity = 0;
    std::string __Vtask_uvm_report__0__filename;
    IData/*31:0*/ __Vtask_uvm_report__0__line;
    __Vtask_uvm_report__0__line = 0;
    std::string __Vtask_uvm_report__0__context_name;
    CData/*0:0*/ __Vtask_uvm_report__0__report_enabled_checked;
    __Vtask_uvm_report__0__report_enabled_checked = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report__0__report_enabled_checked = 0U;
    __Vtask_uvm_report__0__context_name = ""s;
    __Vtask_uvm_report__0__line = line;
    __Vtask_uvm_report__0__filename = filename;
    __Vtask_uvm_report__0__verbosity = verbosity;
    __Vtask_uvm_report__0__message = message;
    __Vtask_uvm_report__0__id = id;
    __Vtask_uvm_report__0__severity = (3U & severity);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs 
        = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 108)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top 
        = __Vtask_get_root__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 109)->__VnoInFunc_uvm_report(vlProcess, vlSymsp, __Vtask_uvm_report__0__severity, __Vtask_uvm_report__0__id, __Vtask_uvm_report__0__message, __Vtask_uvm_report__0__verbosity, __Vtask_uvm_report__0__filename, __Vtask_uvm_report__0__line, __Vtask_uvm_report__0__context_name, (IData)(__Vtask_uvm_report__0__report_enabled_checked));
}

void Vclass_hierarchy_uvm_pkg::__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy_uvm_pkg::__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __PVT__uvm_report_fatal__Vstatic__top;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __PVT__uvm_report_fatal__Vstatic__cs;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
    __PVT__uvm_report_fatal__Vstatic__cs = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(__PVT__uvm_report_fatal__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 202)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
    __PVT__uvm_report_fatal__Vstatic__top = __Vtask_get_root__5__Vfuncout;
    VL_NULL_CHECK(__PVT__uvm_report_fatal__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 203)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

std::string VL_TO_STRING(const Vclass_hierarchy_m_uvm_factory_type_pair_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy_uvm_pkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{m_type:" + VL_TO_STRING(obj.__PVT__m_type);
    out += ", m_type_name:" + VL_TO_STRING(obj.__PVT__m_type_name);
    out += "}";
    return (out);
}

std::string VL_TO_STRING(const Vclass_hierarchy_uvm_hdl_path_slice__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy_uvm_pkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{path:" + VL_TO_STRING(obj.__PVT__path);
    out += ", offset:" + VL_TO_STRING(obj.__PVT__offset);
    out += ", size:" + VL_TO_STRING(obj.__PVT__size);
    out += "}";
    return (out);
}

std::string VL_TO_STRING(const Vclass_hierarchy_uvm_reg_bus_op__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy_uvm_pkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{kind:" + VL_TO_STRING(obj.__PVT__kind);
    out += ", addr:" + VL_TO_STRING(obj.__PVT__addr);
    out += ", data:" + VL_TO_STRING(obj.__PVT__data);
    out += ", n_bits:" + VL_TO_STRING(obj.__PVT__n_bits);
    out += ", byte_en:" + VL_TO_STRING(obj.__PVT__byte_en);
    out += ", status:" + VL_TO_STRING(obj.__PVT__status);
    out += "}";
    return (out);
}
