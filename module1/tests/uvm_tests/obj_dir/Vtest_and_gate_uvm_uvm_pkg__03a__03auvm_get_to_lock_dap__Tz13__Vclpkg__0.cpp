// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz81> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz81> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz81__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__Tz81> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz81__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13, vlProcess, vlSymsp, "unnamed-uvm_get_to_lock_dap#(T)"s)
            : VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz13(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_locked = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_set(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    std::string __Vtask_uvm_report_error__8__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    std::string __Vtask_uvm_report_error__8__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__9__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    std::string __Vtemp_1;
    // Body
    if (this->__PVT__m_locked) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__4__id = "UVM/GET_TO_LOCK_DAP/SAG"s;
                        __Vfunc_uvm_report_enabled__4__severity = 2U;
                        __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__5__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__6__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                        __Vfunc_uvm_report_enabled__4__Vfuncout 
                            = __Vtask_uvm_report_enabled__7__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__8__context_name = ""s;
            __Vtask_uvm_report_error__8__line = 0x00000043U;
            __Vtask_uvm_report_error__8__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_get_to_lock_dap.svh"s;
            __Vtask_uvm_report_error__8__verbosity = 0U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__9__Vfuncout);
                }(), __Vfunc_get_full_name__9__Vfuncout);
            __Vtask_uvm_report_error__8__message = VL_SFORMATF_N_NX("Attempt to set new value on '%@', but the data access policy forbids setting after a get!",0,
                                                                    -1,
                                                                    &(__Vtemp_1)) ;
            __Vtask_uvm_report_error__8__id = "UVM/GET_TO_LOCK_DAP/SAG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
        }
    } else {
        this->__PVT__m_value = value;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_try_set(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_try_set\n"); );
    // Body
    if (this->__PVT__m_locked) {
        try_set__Vfuncrtn = 0U;
    } else {
        this->__PVT__m_value = value;
        try_set__Vfuncrtn = 1U;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_get\n"); );
    // Body
    this->__PVT__m_locked = 1U;
    get__Vfuncrtn = this->__PVT__m_value;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_try_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_try_get\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> __Vfunc_get__13__Vfuncout;
    // Body
    this->__VnoInFunc_get(vlSymsp, __Vfunc_get__13__Vfuncout);
    value = __Vfunc_get__13__Vfuncout;
    try_get__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_do_copy\n"); );
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
                    __Vfunc_uvm_report_enabled__14__id = "UVM/GET_TO_LOCK_DAP/CPY"s;
                    __Vfunc_uvm_report_enabled__14__severity = 2U;
                    __Vfunc_uvm_report_enabled__14__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__15__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__16__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), __Vfunc_uvm_report_enabled__14__id, __Vtask_uvm_report_enabled__17__Vfuncout);
                    __Vfunc_uvm_report_enabled__14__Vfuncout 
                        = __Vtask_uvm_report_enabled__17__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
        __Vtask_uvm_report_error__18__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__18__context_name = ""s;
        __Vtask_uvm_report_error__18__line = 0x00000077U;
        __Vtask_uvm_report_error__18__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__18__verbosity = 0U;
        __Vtask_uvm_report_error__18__message = "'copy()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        __Vtask_uvm_report_error__18__id = "UVM/GET_TO_LOCK_DAP/CPY"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__19__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__20__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__18__id, __Vtask_uvm_report_error__18__message, __Vtask_uvm_report_error__18__verbosity, __Vtask_uvm_report_error__18__filename, __Vtask_uvm_report_error__18__line, __Vtask_uvm_report_error__18__context_name, (IData)(__Vtask_uvm_report_error__18__report_enabled_checked));
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_do_pack(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_do_pack\n"); );
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
                    __Vfunc_uvm_report_enabled__22__id = "UVM/GET_TO_LOCK_DAP/PCK"s;
                    __Vfunc_uvm_report_enabled__22__severity = 2U;
                    __Vfunc_uvm_report_enabled__22__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__23__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__24__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__22__verbosity, (IData)(__Vfunc_uvm_report_enabled__22__severity), __Vfunc_uvm_report_enabled__22__id, __Vtask_uvm_report_enabled__25__Vfuncout);
                    __Vfunc_uvm_report_enabled__22__Vfuncout 
                        = __Vtask_uvm_report_enabled__25__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__22__Vfuncout))) {
        __Vtask_uvm_report_error__26__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__26__context_name = ""s;
        __Vtask_uvm_report_error__26__line = 0x0000007cU;
        __Vtask_uvm_report_error__26__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__26__verbosity = 0U;
        __Vtask_uvm_report_error__26__message = "'pack()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        __Vtask_uvm_report_error__26__id = "UVM/GET_TO_LOCK_DAP/PCK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__27__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__28__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__26__id, __Vtask_uvm_report_error__26__message, __Vtask_uvm_report_error__26__verbosity, __Vtask_uvm_report_error__26__filename, __Vtask_uvm_report_error__26__line, __Vtask_uvm_report_error__26__context_name, (IData)(__Vtask_uvm_report_error__26__report_enabled_checked));
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_do_unpack(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_do_unpack\n"); );
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
                    __Vfunc_uvm_report_enabled__30__id = "UVM/GET_TO_LOCK_DAP/UPK"s;
                    __Vfunc_uvm_report_enabled__30__severity = 2U;
                    __Vfunc_uvm_report_enabled__30__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__31__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__32__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), __Vfunc_uvm_report_enabled__30__id, __Vtask_uvm_report_enabled__33__Vfuncout);
                    __Vfunc_uvm_report_enabled__30__Vfuncout 
                        = __Vtask_uvm_report_enabled__33__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
        __Vtask_uvm_report_error__34__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__34__context_name = ""s;
        __Vtask_uvm_report_error__34__line = 0x00000081U;
        __Vtask_uvm_report_error__34__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_get_to_lock_dap.svh"s;
        __Vtask_uvm_report_error__34__verbosity = 0U;
        __Vtask_uvm_report_error__34__message = "'unpack()' is not supported for 'uvm_get_to_lock_dap#(T)'"s;
        __Vtask_uvm_report_error__34__id = "UVM/GET_TO_LOCK_DAP/UPK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__35__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__35__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__36__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__36__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__34__id, __Vtask_uvm_report_error__34__message, __Vtask_uvm_report_error__34__verbosity, __Vtask_uvm_report_error__34__filename, __Vtask_uvm_report_error__34__line, __Vtask_uvm_report_error__34__context_name, (IData)(__Vtask_uvm_report_error__34__report_enabled_checked));
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    __Vtemp_1 = VL_TO_STRING(this->__PVT__m_value);
    __Vtemp_2 = VL_TO_STRING(this->__PVT__m_value);
    convert2string__Vfuncrtn = ((IData)(this->__PVT__m_locked)
                                 ? VL_SFORMATF_N_NX("(PARAMTYPEDTYPE 'T') %@ [LOCKED]",0,
                                                    -1,
                                                    &(__Vtemp_1)) 
                                 : VL_SFORMATF_N_NX("(PARAMTYPEDTYPE 'T') %@ [UNLOCKED]",0,
                                                    -1,
                                                    &(__Vtemp_2)) );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_get_to_lock_dap.svh", 145)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "lock_state"s, (QData)((IData)(this->__PVT__m_locked)), 1U, 0U, 0x2eU, ""s);
    __Vtemp_1 = VL_TO_STRING(this->__PVT__m_value);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/dap/uvm_get_to_lock_dap.svh", 146)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "value"s, "PARAMTYPEDTYPE 'T'"s, 0U, VL_SFORMATF_N_NX("%@",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0x2eU);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__42__Vfuncout;
    __Vfunc___VBasicRand__42__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__42__Vfuncout);
            }(), __Vfunc___VBasicRand__42__Vfuncout));
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_locked = 0;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_value:" + VL_TO_STRING(__PVT__m_value);
    out += ", m_locked:" + VL_TO_STRING(__PVT__m_locked);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz13::to_string_middle();
    return (out);
}
