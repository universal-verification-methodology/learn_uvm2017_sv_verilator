// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_put(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_put\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__0__id;
    std::string __Vtask_uvm_report_error__0__message;
    IData/*31:0*/ __Vtask_uvm_report_error__0__verbosity;
    __Vtask_uvm_report_error__0__verbosity = 0;
    std::string __Vtask_uvm_report_error__0__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__0__line;
    __Vtask_uvm_report_error__0__line = 0;
    std::string __Vtask_uvm_report_error__0__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__0__report_enabled_checked;
    __Vtask_uvm_report_error__0__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__0__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__0__context_name = ""s;
    __Vtask_uvm_report_error__0__line = 0U;
    __Vtask_uvm_report_error__0__filename = ""s;
    __Vtask_uvm_report_error__0__verbosity = 0U;
    __Vtask_uvm_report_error__0__message = "UVM TLM interface task not implemented"s;
    __Vtask_uvm_report_error__0__id = "put"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__0__id, __Vtask_uvm_report_error__0__message, __Vtask_uvm_report_error__0__verbosity, __Vtask_uvm_report_error__0__filename, __Vtask_uvm_report_error__0__line, __Vtask_uvm_report_error__0__context_name, (IData)(__Vtask_uvm_report_error__0__report_enabled_checked));
    co_return;}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_get\n"); );
    // Locals
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
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__4__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__4__context_name = ""s;
    __Vtask_uvm_report_error__4__line = 0U;
    __Vtask_uvm_report_error__4__filename = ""s;
    __Vtask_uvm_report_error__4__verbosity = 0U;
    __Vtask_uvm_report_error__4__message = "UVM TLM interface task not implemented"s;
    __Vtask_uvm_report_error__4__id = "get"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__5__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__6__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__4__id, __Vtask_uvm_report_error__4__message, __Vtask_uvm_report_error__4__verbosity, __Vtask_uvm_report_error__4__filename, __Vtask_uvm_report_error__4__line, __Vtask_uvm_report_error__4__context_name, (IData)(__Vtask_uvm_report_error__4__report_enabled_checked));
    co_return;}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_peek(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_peek\n"); );
    // Locals
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
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__8__context_name = ""s;
    __Vtask_uvm_report_error__8__line = 0U;
    __Vtask_uvm_report_error__8__filename = ""s;
    __Vtask_uvm_report_error__8__verbosity = 0U;
    __Vtask_uvm_report_error__8__message = "UVM TLM interface task not implemented"s;
    __Vtask_uvm_report_error__8__id = "peek"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__9__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__10__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
    co_return;}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_try_put(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> t, CData/*0:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_try_put\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__12__id;
    std::string __Vtask_uvm_report_error__12__message;
    IData/*31:0*/ __Vtask_uvm_report_error__12__verbosity;
    __Vtask_uvm_report_error__12__verbosity = 0;
    std::string __Vtask_uvm_report_error__12__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__12__line;
    __Vtask_uvm_report_error__12__line = 0;
    std::string __Vtask_uvm_report_error__12__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__12__report_enabled_checked;
    __Vtask_uvm_report_error__12__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__12__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__12__context_name = ""s;
    __Vtask_uvm_report_error__12__line = 0U;
    __Vtask_uvm_report_error__12__filename = ""s;
    __Vtask_uvm_report_error__12__verbosity = 0U;
    __Vtask_uvm_report_error__12__message = "UVM TLM interface function not implemented"s;
    __Vtask_uvm_report_error__12__id = "try_put"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__13__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__14__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__12__id, __Vtask_uvm_report_error__12__message, __Vtask_uvm_report_error__12__verbosity, __Vtask_uvm_report_error__12__filename, __Vtask_uvm_report_error__12__line, __Vtask_uvm_report_error__12__context_name, (IData)(__Vtask_uvm_report_error__12__report_enabled_checked));
    try_put__Vfuncrtn = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_can_put(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_can_put\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__16__id;
    std::string __Vtask_uvm_report_error__16__message;
    IData/*31:0*/ __Vtask_uvm_report_error__16__verbosity;
    __Vtask_uvm_report_error__16__verbosity = 0;
    std::string __Vtask_uvm_report_error__16__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__16__line;
    __Vtask_uvm_report_error__16__line = 0;
    std::string __Vtask_uvm_report_error__16__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__16__report_enabled_checked;
    __Vtask_uvm_report_error__16__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__16__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__16__context_name = ""s;
    __Vtask_uvm_report_error__16__line = 0U;
    __Vtask_uvm_report_error__16__filename = ""s;
    __Vtask_uvm_report_error__16__verbosity = 0U;
    __Vtask_uvm_report_error__16__message = "UVM TLM interface function not implemented"s;
    __Vtask_uvm_report_error__16__id = "can_put"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__17__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__18__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__16__id, __Vtask_uvm_report_error__16__message, __Vtask_uvm_report_error__16__verbosity, __Vtask_uvm_report_error__16__filename, __Vtask_uvm_report_error__16__line, __Vtask_uvm_report_error__16__context_name, (IData)(__Vtask_uvm_report_error__16__report_enabled_checked));
    can_put__Vfuncrtn = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_try_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &t, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_try_get\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__20__id;
    std::string __Vtask_uvm_report_error__20__message;
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    std::string __Vtask_uvm_report_error__20__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    std::string __Vtask_uvm_report_error__20__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__20__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__20__context_name = ""s;
    __Vtask_uvm_report_error__20__line = 0U;
    __Vtask_uvm_report_error__20__filename = ""s;
    __Vtask_uvm_report_error__20__verbosity = 0U;
    __Vtask_uvm_report_error__20__message = "UVM TLM interface function not implemented"s;
    __Vtask_uvm_report_error__20__id = "try_get"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__21__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__22__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__20__id, __Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, __Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, __Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
    try_get__Vfuncrtn = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_can_get(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_can_get\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__24__id;
    std::string __Vtask_uvm_report_error__24__message;
    IData/*31:0*/ __Vtask_uvm_report_error__24__verbosity;
    __Vtask_uvm_report_error__24__verbosity = 0;
    std::string __Vtask_uvm_report_error__24__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__24__line;
    __Vtask_uvm_report_error__24__line = 0;
    std::string __Vtask_uvm_report_error__24__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__24__report_enabled_checked;
    __Vtask_uvm_report_error__24__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__24__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__24__context_name = ""s;
    __Vtask_uvm_report_error__24__line = 0U;
    __Vtask_uvm_report_error__24__filename = ""s;
    __Vtask_uvm_report_error__24__verbosity = 0U;
    __Vtask_uvm_report_error__24__message = "UVM TLM interface function not implemented"s;
    __Vtask_uvm_report_error__24__id = "can_get"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__25__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__26__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__24__id, __Vtask_uvm_report_error__24__message, __Vtask_uvm_report_error__24__verbosity, __Vtask_uvm_report_error__24__filename, __Vtask_uvm_report_error__24__line, __Vtask_uvm_report_error__24__context_name, (IData)(__Vtask_uvm_report_error__24__report_enabled_checked));
    can_get__Vfuncrtn = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_try_peek(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &t, CData/*0:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_try_peek\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__28__id;
    std::string __Vtask_uvm_report_error__28__message;
    IData/*31:0*/ __Vtask_uvm_report_error__28__verbosity;
    __Vtask_uvm_report_error__28__verbosity = 0;
    std::string __Vtask_uvm_report_error__28__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__28__line;
    __Vtask_uvm_report_error__28__line = 0;
    std::string __Vtask_uvm_report_error__28__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__28__report_enabled_checked;
    __Vtask_uvm_report_error__28__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__28__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__28__context_name = ""s;
    __Vtask_uvm_report_error__28__line = 0U;
    __Vtask_uvm_report_error__28__filename = ""s;
    __Vtask_uvm_report_error__28__verbosity = 0U;
    __Vtask_uvm_report_error__28__message = "UVM TLM interface function not implemented"s;
    __Vtask_uvm_report_error__28__id = "try_peek"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__29__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__30__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__28__id, __Vtask_uvm_report_error__28__message, __Vtask_uvm_report_error__28__verbosity, __Vtask_uvm_report_error__28__filename, __Vtask_uvm_report_error__28__line, __Vtask_uvm_report_error__28__context_name, (IData)(__Vtask_uvm_report_error__28__report_enabled_checked));
    try_peek__Vfuncrtn = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_can_peek(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_can_peek\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__32__id;
    std::string __Vtask_uvm_report_error__32__message;
    IData/*31:0*/ __Vtask_uvm_report_error__32__verbosity;
    __Vtask_uvm_report_error__32__verbosity = 0;
    std::string __Vtask_uvm_report_error__32__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__32__line;
    __Vtask_uvm_report_error__32__line = 0;
    std::string __Vtask_uvm_report_error__32__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__32__report_enabled_checked;
    __Vtask_uvm_report_error__32__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__32__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__32__context_name = ""s;
    __Vtask_uvm_report_error__32__line = 0U;
    __Vtask_uvm_report_error__32__filename = ""s;
    __Vtask_uvm_report_error__32__verbosity = 0U;
    __Vtask_uvm_report_error__32__message = "UVM TLM interface function not implemented"s;
    __Vtask_uvm_report_error__32__id = "can_ppeek"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__33__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__34__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__32__id, __Vtask_uvm_report_error__32__message, __Vtask_uvm_report_error__32__verbosity, __Vtask_uvm_report_error__32__filename, __Vtask_uvm_report_error__32__line, __Vtask_uvm_report_error__32__context_name, (IData)(__Vtask_uvm_report_error__32__report_enabled_checked));
    can_peek__Vfuncrtn = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_transport(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> req, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &rsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_transport\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__36__id;
    std::string __Vtask_uvm_report_error__36__message;
    IData/*31:0*/ __Vtask_uvm_report_error__36__verbosity;
    __Vtask_uvm_report_error__36__verbosity = 0;
    std::string __Vtask_uvm_report_error__36__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__36__line;
    __Vtask_uvm_report_error__36__line = 0;
    std::string __Vtask_uvm_report_error__36__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__36__report_enabled_checked;
    __Vtask_uvm_report_error__36__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__36__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__36__context_name = ""s;
    __Vtask_uvm_report_error__36__line = 0U;
    __Vtask_uvm_report_error__36__filename = ""s;
    __Vtask_uvm_report_error__36__verbosity = 0U;
    __Vtask_uvm_report_error__36__message = "UVM TLM interface task not implemented"s;
    __Vtask_uvm_report_error__36__id = "transport"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__37__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__38__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__36__id, __Vtask_uvm_report_error__36__message, __Vtask_uvm_report_error__36__verbosity, __Vtask_uvm_report_error__36__filename, __Vtask_uvm_report_error__36__line, __Vtask_uvm_report_error__36__context_name, (IData)(__Vtask_uvm_report_error__36__report_enabled_checked));
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_nb_transport(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> req, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &rsp, CData/*0:0*/ &nb_transport__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_nb_transport\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__40__id;
    std::string __Vtask_uvm_report_error__40__message;
    IData/*31:0*/ __Vtask_uvm_report_error__40__verbosity;
    __Vtask_uvm_report_error__40__verbosity = 0;
    std::string __Vtask_uvm_report_error__40__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__40__line;
    __Vtask_uvm_report_error__40__line = 0;
    std::string __Vtask_uvm_report_error__40__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__40__report_enabled_checked;
    __Vtask_uvm_report_error__40__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__41__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__40__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__40__context_name = ""s;
    __Vtask_uvm_report_error__40__line = 0U;
    __Vtask_uvm_report_error__40__filename = ""s;
    __Vtask_uvm_report_error__40__verbosity = 0U;
    __Vtask_uvm_report_error__40__message = "UVM TLM interface function not implemented"s;
    __Vtask_uvm_report_error__40__id = "nb_transport"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__41__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__42__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__40__id, __Vtask_uvm_report_error__40__message, __Vtask_uvm_report_error__40__verbosity, __Vtask_uvm_report_error__40__filename, __Vtask_uvm_report_error__40__line, __Vtask_uvm_report_error__40__context_name, (IData)(__Vtask_uvm_report_error__40__report_enabled_checked));
    nb_transport__Vfuncrtn = 0U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_write(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::__VnoInFunc_write\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__44__id;
    std::string __Vtask_uvm_report_error__44__message;
    IData/*31:0*/ __Vtask_uvm_report_error__44__verbosity;
    __Vtask_uvm_report_error__44__verbosity = 0;
    std::string __Vtask_uvm_report_error__44__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__44__line;
    __Vtask_uvm_report_error__44__line = 0;
    std::string __Vtask_uvm_report_error__44__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__44__report_enabled_checked;
    __Vtask_uvm_report_error__44__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__45__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__46__Vfuncout;
    // Body
    __Vtask_uvm_report_error__44__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__44__context_name = ""s;
    __Vtask_uvm_report_error__44__line = 0U;
    __Vtask_uvm_report_error__44__filename = ""s;
    __Vtask_uvm_report_error__44__verbosity = 0U;
    __Vtask_uvm_report_error__44__message = "UVM TLM interface function not implemented"s;
    __Vtask_uvm_report_error__44__id = "write"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__45__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__46__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__46__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__44__id, __Vtask_uvm_report_error__44__message, __Vtask_uvm_report_error__44__verbosity, __Vtask_uvm_report_error__44__filename, __Vtask_uvm_report_error__44__line, __Vtask_uvm_report_error__44__context_name, (IData)(__Vtask_uvm_report_error__44__report_enabled_checked));
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz126_TBz126::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
