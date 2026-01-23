// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_get_next_item(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_get_next_item\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__0__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__0__context_name = ""s;
    __Vtask_uvm_report_error__0__line = 0U;
    __Vtask_uvm_report_error__0__filename = ""s;
    __Vtask_uvm_report_error__0__verbosity = 0U;
    __Vtask_uvm_report_error__0__message = "Sequencer interface task not implemented"s;
    __Vtask_uvm_report_error__0__id = "get_next_item"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__2__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__0__id, __Vtask_uvm_report_error__0__message, __Vtask_uvm_report_error__0__verbosity, __Vtask_uvm_report_error__0__filename, __Vtask_uvm_report_error__0__line, __Vtask_uvm_report_error__0__context_name, (IData)(__Vtask_uvm_report_error__0__report_enabled_checked));
    co_return;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_try_next_item(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_try_next_item\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__4__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__4__context_name = ""s;
    __Vtask_uvm_report_error__4__line = 0U;
    __Vtask_uvm_report_error__4__filename = ""s;
    __Vtask_uvm_report_error__4__verbosity = 0U;
    __Vtask_uvm_report_error__4__message = "Sequencer interface task not implemented"s;
    __Vtask_uvm_report_error__4__id = "try_next_item"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__5__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__6__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__4__id, __Vtask_uvm_report_error__4__message, __Vtask_uvm_report_error__4__verbosity, __Vtask_uvm_report_error__4__filename, __Vtask_uvm_report_error__4__line, __Vtask_uvm_report_error__4__context_name, (IData)(__Vtask_uvm_report_error__4__report_enabled_checked));
    co_return;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_item_done(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_item_done\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    // Body
    __Vtask_uvm_report_error__8__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__8__context_name = ""s;
    __Vtask_uvm_report_error__8__line = 0U;
    __Vtask_uvm_report_error__8__filename = ""s;
    __Vtask_uvm_report_error__8__verbosity = 0U;
    __Vtask_uvm_report_error__8__message = "Sequencer interface function not implemented"s;
    __Vtask_uvm_report_error__8__id = "item_done"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__9__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__10__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_wait_for_sequences(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_wait_for_sequences\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__13__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__14__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__12__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__12__context_name = ""s;
    __Vtask_uvm_report_error__12__line = 0U;
    __Vtask_uvm_report_error__12__filename = ""s;
    __Vtask_uvm_report_error__12__verbosity = 0U;
    __Vtask_uvm_report_error__12__message = "Sequencer interface task not implemented"s;
    __Vtask_uvm_report_error__12__id = "wait_for_sequences"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__13__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__14__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__14__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__12__id, __Vtask_uvm_report_error__12__message, __Vtask_uvm_report_error__12__verbosity, __Vtask_uvm_report_error__12__filename, __Vtask_uvm_report_error__12__line, __Vtask_uvm_report_error__12__context_name, (IData)(__Vtask_uvm_report_error__12__report_enabled_checked));
    co_return;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_has_do_available(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_has_do_available\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__16__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__16__context_name = ""s;
    __Vtask_uvm_report_error__16__line = 0U;
    __Vtask_uvm_report_error__16__filename = ""s;
    __Vtask_uvm_report_error__16__verbosity = 0U;
    __Vtask_uvm_report_error__16__message = "Sequencer interface function not implemented"s;
    __Vtask_uvm_report_error__16__id = "has_do_available"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__17__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__18__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__16__id, __Vtask_uvm_report_error__16__message, __Vtask_uvm_report_error__16__verbosity, __Vtask_uvm_report_error__16__filename, __Vtask_uvm_report_error__16__line, __Vtask_uvm_report_error__16__context_name, (IData)(__Vtask_uvm_report_error__16__report_enabled_checked));
    has_do_available__Vfuncrtn = 0U;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_get\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__21__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__22__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__20__context_name = ""s;
    __Vtask_uvm_report_error__20__line = 0U;
    __Vtask_uvm_report_error__20__filename = ""s;
    __Vtask_uvm_report_error__20__verbosity = 0U;
    __Vtask_uvm_report_error__20__message = "Sequencer interface task not implemented"s;
    __Vtask_uvm_report_error__20__id = "get"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__21__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__21__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__22__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__22__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__20__id, __Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, __Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, __Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
    co_return;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_peek\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    __Vtask_uvm_report_error__24__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__24__context_name = ""s;
    __Vtask_uvm_report_error__24__line = 0U;
    __Vtask_uvm_report_error__24__filename = ""s;
    __Vtask_uvm_report_error__24__verbosity = 0U;
    __Vtask_uvm_report_error__24__message = "Sequencer interface task not implemented"s;
    __Vtask_uvm_report_error__24__id = "peek"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__25__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__26__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__24__id, __Vtask_uvm_report_error__24__message, __Vtask_uvm_report_error__24__verbosity, __Vtask_uvm_report_error__24__filename, __Vtask_uvm_report_error__24__line, __Vtask_uvm_report_error__24__context_name, (IData)(__Vtask_uvm_report_error__24__report_enabled_checked));
    co_return;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_put\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__28__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__28__context_name = ""s;
    __Vtask_uvm_report_error__28__line = 0U;
    __Vtask_uvm_report_error__28__filename = ""s;
    __Vtask_uvm_report_error__28__verbosity = 0U;
    __Vtask_uvm_report_error__28__message = "Sequencer interface task not implemented"s;
    __Vtask_uvm_report_error__28__id = "put"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__29__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__30__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__28__id, __Vtask_uvm_report_error__28__message, __Vtask_uvm_report_error__28__verbosity, __Vtask_uvm_report_error__28__filename, __Vtask_uvm_report_error__28__line, __Vtask_uvm_report_error__28__context_name, (IData)(__Vtask_uvm_report_error__28__report_enabled_checked));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_put_response(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_put_response\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    // Body
    __Vtask_uvm_report_error__32__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__32__context_name = ""s;
    __Vtask_uvm_report_error__32__line = 0U;
    __Vtask_uvm_report_error__32__filename = ""s;
    __Vtask_uvm_report_error__32__verbosity = 0U;
    __Vtask_uvm_report_error__32__message = "Sequencer interface function not implemented"s;
    __Vtask_uvm_report_error__32__id = "put_response"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__33__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__34__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__32__id, __Vtask_uvm_report_error__32__message, __Vtask_uvm_report_error__32__verbosity, __Vtask_uvm_report_error__32__filename, __Vtask_uvm_report_error__32__line, __Vtask_uvm_report_error__32__context_name, (IData)(__Vtask_uvm_report_error__32__report_enabled_checked));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_disable_auto_item_recording(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_disable_auto_item_recording\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__36__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__36__context_name = ""s;
    __Vtask_uvm_report_error__36__line = 0U;
    __Vtask_uvm_report_error__36__filename = ""s;
    __Vtask_uvm_report_error__36__verbosity = 0U;
    __Vtask_uvm_report_error__36__message = "Sequencer interface function not implemented"s;
    __Vtask_uvm_report_error__36__id = "disable_auto_item_recording"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__37__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__38__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__36__id, __Vtask_uvm_report_error__36__message, __Vtask_uvm_report_error__36__verbosity, __Vtask_uvm_report_error__36__filename, __Vtask_uvm_report_error__36__line, __Vtask_uvm_report_error__36__context_name, (IData)(__Vtask_uvm_report_error__36__report_enabled_checked));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_is_auto_item_recording_enabled(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::__VnoInFunc_is_auto_item_recording_enabled\n"); );
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
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__41__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    __Vtask_uvm_report_error__40__report_enabled_checked = 0U;
    __Vtask_uvm_report_error__40__context_name = ""s;
    __Vtask_uvm_report_error__40__line = 0U;
    __Vtask_uvm_report_error__40__filename = ""s;
    __Vtask_uvm_report_error__40__verbosity = 0U;
    __Vtask_uvm_report_error__40__message = "Sequencer interface function not implemented"s;
    __Vtask_uvm_report_error__40__id = "is_auto_item_recording_enabled"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
        = __Vfunc_get__41__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
        = __Vtask_get_root__42__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__40__id, __Vtask_uvm_report_error__40__message, __Vtask_uvm_report_error__40__verbosity, __Vtask_uvm_report_error__40__filename, __Vtask_uvm_report_error__40__line, __Vtask_uvm_report_error__40__context_name, (IData)(__Vtask_uvm_report_error__40__report_enabled_checked));
    is_auto_item_recording_enabled__Vfuncrtn = 0U;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vvirtual_sequences_uvm_pkg__03a__03auvm_sqr_if_base__Tz1_TBz1::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
