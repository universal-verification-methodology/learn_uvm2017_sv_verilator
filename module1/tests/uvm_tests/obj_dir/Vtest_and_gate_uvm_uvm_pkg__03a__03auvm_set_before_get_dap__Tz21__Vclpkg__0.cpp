// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz74> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz74> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz74__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz74> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz74__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21, vlProcess, vlSymsp, "unnamed-uvm_set_before_get_dap#(T)"s)
            : VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_set = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_set(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__m_set = 1U;
    this->__PVT__m_value = value;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_try_set(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_try_set\n"); );
    // Body
    this->__VnoInFunc_set(vlSymsp, value);
    try_set__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    std::string __Vfunc_uvm_report_enabled__5__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__8__Vfuncout;
    __Vtask_uvm_report_enabled__8__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__9__id;
    std::string __Vtask_uvm_report_error__9__message;
    IData/*31:0*/ __Vtask_uvm_report_error__9__verbosity;
    __Vtask_uvm_report_error__9__verbosity = 0;
    std::string __Vtask_uvm_report_error__9__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__9__line;
    __Vtask_uvm_report_error__9__line = 0;
    std::string __Vtask_uvm_report_error__9__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__9__report_enabled_checked;
    __Vtask_uvm_report_error__9__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__10__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((1U & (~ (IData)(this->__PVT__m_set)))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__5__id = "UVM/SET_BEFORE_GET_DAP/NO_SET"s;
                        __Vfunc_uvm_report_enabled__5__severity = 2U;
                        __Vfunc_uvm_report_enabled__5__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__6__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__7__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), __Vfunc_uvm_report_enabled__5__id, __Vtask_uvm_report_enabled__8__Vfuncout);
                        __Vfunc_uvm_report_enabled__5__Vfuncout 
                            = __Vtask_uvm_report_enabled__8__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
            __Vtask_uvm_report_error__9__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__9__context_name = ""s;
            __Vtask_uvm_report_error__9__line = 0x00000075U;
            __Vtask_uvm_report_error__9__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh"s;
            __Vtask_uvm_report_error__9__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__10__Vfuncout);
                }(), __Vfunc_get_full_name__10__Vfuncout);
            __Vtask_uvm_report_error__9__message = VL_SFORMATF_N_NX("Attempt to get value on '%@', but the data access policy forbits calling 'get' prior to calling 'set' or 'try_set'!",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_error__9__id = "UVM/SET_BEFORE_GET_DAP/NO_SET"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__9__id, __Vtask_uvm_report_error__9__message, __Vtask_uvm_report_error__9__verbosity, __Vtask_uvm_report_error__9__filename, __Vtask_uvm_report_error__9__line, __Vtask_uvm_report_error__9__context_name, (IData)(__Vtask_uvm_report_error__9__report_enabled_checked));
        }
    }
    get__Vfuncrtn = this->__PVT__m_value;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_try_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tr_stream> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_try_get\n"); );
    // Body
    if (this->__PVT__m_set) {
        value = this->__PVT__m_value;
        try_get__Vfuncrtn = 1U;
    } else {
        try_get__Vfuncrtn = 0U;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    std::string __Vfunc_uvm_report_enabled__14__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__18__id;
    std::string __Vtask_uvm_report_error__18__message;
    IData/*31:0*/ __Vtask_uvm_report_error__18__verbosity;
    __Vtask_uvm_report_error__18__verbosity = 0;
    std::string __Vtask_uvm_report_error__18__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__18__line;
    __Vtask_uvm_report_error__18__line = 0;
    std::string __Vtask_uvm_report_error__18__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__18__report_enabled_checked;
    __Vtask_uvm_report_error__18__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__14__id = "UVM/SET_BEFORE_GET_DAP/CPY"s;
                    __Vfunc_uvm_report_enabled__14__severity = 2U;
                    __Vfunc_uvm_report_enabled__14__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__15__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__16__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), __Vfunc_uvm_report_enabled__14__id, __Vtask_uvm_report_enabled__17__Vfuncout);
                    __Vfunc_uvm_report_enabled__14__Vfuncout 
                        = __Vtask_uvm_report_enabled__17__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
        __Vtask_uvm_report_error__18__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__18__context_name = ""s;
        __Vtask_uvm_report_error__18__line = 0x00000095U;
        __Vtask_uvm_report_error__18__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__18__verbosity = 0U;
        __Vtask_uvm_report_error__18__message = "'copy()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        __Vtask_uvm_report_error__18__id = "UVM/SET_BEFORE_GET_DAP/CPY"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__19__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__20__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__18__id, __Vtask_uvm_report_error__18__message, __Vtask_uvm_report_error__18__verbosity, __Vtask_uvm_report_error__18__filename, __Vtask_uvm_report_error__18__line, __Vtask_uvm_report_error__18__context_name, (IData)(__Vtask_uvm_report_error__18__report_enabled_checked));
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_do_pack(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_do_pack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__Vfuncout;
    __Vfunc_uvm_report_enabled__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__verbosity;
    __Vfunc_uvm_report_enabled__22__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__22__severity;
    __Vfunc_uvm_report_enabled__22__severity = 0;
    std::string __Vfunc_uvm_report_enabled__22__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__25__Vfuncout;
    __Vtask_uvm_report_enabled__25__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__26__id;
    std::string __Vtask_uvm_report_error__26__message;
    IData/*31:0*/ __Vtask_uvm_report_error__26__verbosity;
    __Vtask_uvm_report_error__26__verbosity = 0;
    std::string __Vtask_uvm_report_error__26__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__26__line;
    __Vtask_uvm_report_error__26__line = 0;
    std::string __Vtask_uvm_report_error__26__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__26__report_enabled_checked;
    __Vtask_uvm_report_error__26__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__22__id = "UVM/SET_BEFORE_GET_DAP/PCK"s;
                    __Vfunc_uvm_report_enabled__22__severity = 2U;
                    __Vfunc_uvm_report_enabled__22__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__23__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__24__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), __Vfunc_uvm_report_enabled__22__id, __Vtask_uvm_report_enabled__25__Vfuncout);
                    __Vfunc_uvm_report_enabled__22__Vfuncout 
                        = __Vtask_uvm_report_enabled__25__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__22__Vfuncout))) {
        __Vtask_uvm_report_error__26__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__26__context_name = ""s;
        __Vtask_uvm_report_error__26__line = 0x0000009aU;
        __Vtask_uvm_report_error__26__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__26__verbosity = 0U;
        __Vtask_uvm_report_error__26__message = "'pack()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        __Vtask_uvm_report_error__26__id = "UVM/SET_BEFORE_GET_DAP/PCK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__27__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__28__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__26__id, __Vtask_uvm_report_error__26__message, __Vtask_uvm_report_error__26__verbosity, __Vtask_uvm_report_error__26__filename, __Vtask_uvm_report_error__26__line, __Vtask_uvm_report_error__26__context_name, (IData)(__Vtask_uvm_report_error__26__report_enabled_checked));
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_do_unpack(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_do_unpack\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    std::string __Vfunc_uvm_report_enabled__30__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__33__Vfuncout;
    __Vtask_uvm_report_enabled__33__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__34__id;
    std::string __Vtask_uvm_report_error__34__message;
    IData/*31:0*/ __Vtask_uvm_report_error__34__verbosity;
    __Vtask_uvm_report_error__34__verbosity = 0;
    std::string __Vtask_uvm_report_error__34__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__34__line;
    __Vtask_uvm_report_error__34__line = 0;
    std::string __Vtask_uvm_report_error__34__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__34__report_enabled_checked;
    __Vtask_uvm_report_error__34__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__35__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__36__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__30__id = "UVM/SET_BEFORE_GET_DAP/UPK"s;
                    __Vfunc_uvm_report_enabled__30__severity = 2U;
                    __Vfunc_uvm_report_enabled__30__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__31__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__32__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), __Vfunc_uvm_report_enabled__30__id, __Vtask_uvm_report_enabled__33__Vfuncout);
                    __Vfunc_uvm_report_enabled__30__Vfuncout 
                        = __Vtask_uvm_report_enabled__33__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
        __Vtask_uvm_report_error__34__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__34__context_name = ""s;
        __Vtask_uvm_report_error__34__line = 0x0000009fU;
        __Vtask_uvm_report_error__34__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh"s;
        __Vtask_uvm_report_error__34__verbosity = 0U;
        __Vtask_uvm_report_error__34__message = "'unpack()' is not supported for 'uvm_set_before_get_dap#(T)'"s;
        __Vtask_uvm_report_error__34__id = "UVM/SET_BEFORE_GET_DAP/UPK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__35__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__36__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__34__id, __Vtask_uvm_report_error__34__message, __Vtask_uvm_report_error__34__verbosity, __Vtask_uvm_report_error__34__filename, __Vtask_uvm_report_error__34__line, __Vtask_uvm_report_error__34__context_name, (IData)(__Vtask_uvm_report_error__34__report_enabled_checked));
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    __Vtemp_1 = VL_TO_STRING(this->__PVT__m_value);
    __Vtemp_2 = VL_TO_STRING(this->__PVT__m_value);
    convert2string__Vfuncrtn = ((IData)(this->__PVT__m_set)
                                 ? VL_SFORMATF_N_NX("(PARAMTYPEDTYPE 'T') %@ [SET]",0,
                                                    -1,
                                                    &(__Vtemp_1)) 
                                 : VL_SFORMATF_N_NX("(PARAMTYPEDTYPE 'T') %@ [UNSET]",0,
                                                    -1,
                                                    &(__Vtemp_2)) );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 175)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "set_state"s, (QData)((IData)(this->__PVT__m_set)), 1U, 0U, 0x2eU, ""s);
    __Vtemp_1 = VL_TO_STRING(this->__PVT__m_value);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_set_before_get_dap.svh", 176)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "value"s, "PARAMTYPEDTYPE 'T'"s, 0U, VL_SFORMATF_N_NX("%@",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x2eU);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__42__Vfuncout;
    __Vfunc___Vbasic_randomize__42__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__42__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__42__Vfuncout));
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc___Vbasic_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_set = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz21::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_value:" + VL_TO_STRING(__PVT__m_value);
    out += ", m_set:" + VL_TO_STRING(__PVT__m_set);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::to_string_middle();
    return (out);
}
