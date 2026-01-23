// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vtask_uvm_init__0__cs;
    IData/*31:0*/ __Vtask_uvm_init__0__unnamedblk10__DOT__idx;
    __Vtask_uvm_init__0__unnamedblk10__DOT__idx = 0;
    IData/*31:0*/ __Vfunc_get_core_state__1__Vfuncout;
    __Vfunc_get_core_state__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_core_state__2__Vfuncout;
    __Vfunc_get_core_state__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    std::string __Vfunc_uvm_report_enabled__5__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__8__Vfuncout;
    __Vtask_uvm_report_enabled__8__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__Vfuncout;
    __Vfunc_uvm_report_enabled__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    std::string __Vfunc_uvm_report_enabled__11__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__14__Vfuncout;
    __Vtask_uvm_report_enabled__14__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__15__id;
    std::string __Vtask_uvm_report_warning__15__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__verbosity;
    __Vtask_uvm_report_warning__15__verbosity = 0;
    std::string __Vtask_uvm_report_warning__15__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__15__line;
    __Vtask_uvm_report_warning__15__line = 0;
    std::string __Vtask_uvm_report_warning__15__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__15__report_enabled_checked;
    __Vtask_uvm_report_warning__15__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vfunc_get__22__Vfuncout;
    // Body
    if ((VlNull{} == this->__PVT__inst)) {
        __Vtask_uvm_init__0__cs = VlNull{};
        __Vtask_uvm_init__0__unnamedblk10__DOT__idx = 0;
        {
            if ((0U != ([&]() {
                            __Vfunc_get_core_state__1__Vfuncout 
                                = vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state;
                        }(), __Vfunc_get_core_state__1__Vfuncout))) {
                if ((1U == ([&]() {
                                __Vfunc_get_core_state__2__Vfuncout 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state;
                            }(), __Vfunc_get_core_state__2__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__dcs 
                        = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_coreservice_t, vlSymsp);
                    this->__VnoInFunc_set(vlSymsp, vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__dcs);
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__5__id = "UVM/INIT/MULTI"s;
                                    __Vfunc_uvm_report_enabled__5__severity = 3U;
                                    __Vfunc_uvm_report_enabled__5__verbosity = 0U;
                                    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__6__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__7__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), __Vfunc_uvm_report_enabled__5__id, __Vtask_uvm_report_enabled__8__Vfuncout);
                                    __Vfunc_uvm_report_enabled__5__Vfuncout 
                                        = __Vtask_uvm_report_enabled__8__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/INIT/MULTI"s, "Non-recoverable race during uvm_init"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh"s, 0x0000014fU, ""s, 1U);
                    }
                } else {
                    this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__unnamedblk9__DOT__actual 
                        = __Vfunc_get__10__Vfuncout;
                    if (((__Vtask_uvm_init__0__cs != vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__unnamedblk9__DOT__actual) 
                         & (VlNull{} != __Vtask_uvm_init__0__cs))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__11__id = "UVM/INIT/MULTI"s;
                                        __Vfunc_uvm_report_enabled__11__severity = 1U;
                                        __Vfunc_uvm_report_enabled__11__verbosity = 0U;
                                        this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__12__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__13__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), __Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__14__Vfuncout);
                                        __Vfunc_uvm_report_enabled__11__Vfuncout 
                                            = __Vtask_uvm_report_enabled__14__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__11__Vfuncout))) {
                            __Vtask_uvm_report_warning__15__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__15__context_name = ""s;
                            __Vtask_uvm_report_warning__15__line = 0x00000158U;
                            __Vtask_uvm_report_warning__15__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh"s;
                            __Vtask_uvm_report_warning__15__verbosity = 0U;
                            __Vtask_uvm_report_warning__15__message = "uvm_init() called after library has already completed initialization, subsequent calls are ignored!"s;
                            __Vtask_uvm_report_warning__15__id = "UVM/INIT/MULTI"s;
                            this->__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__16__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__17__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__15__id, __Vtask_uvm_report_warning__15__message, __Vtask_uvm_report_warning__15__verbosity, __Vtask_uvm_report_warning__15__filename, __Vtask_uvm_report_warning__15__line, __Vtask_uvm_report_warning__15__context_name, (IData)(__Vtask_uvm_report_warning__15__report_enabled_checked));
                        }
                    }
                }
                goto __Vlabel0;
            }
            vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 1U;
            if ((VlNull{} == __Vtask_uvm_init__0__cs)) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__dcs 
                    = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_default_coreservice_t, vlSymsp);
                __Vtask_uvm_init__0__cs = vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__dcs;
            }
            this->__VnoInFunc_set(vlSymsp, __Vtask_uvm_init__0__cs);
            vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 2U;
            __Vtask_uvm_init__0__unnamedblk10__DOT__idx = 0U;
            while (VL_LTS_III(32, __Vtask_uvm_init__0__unnamedblk10__DOT__idx, vlSymsp->TOP__uvm_pkg.__PVT__uvm_deferred_init.size())) {
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_deferred_init.at(__Vtask_uvm_init__0__unnamedblk10__DOT__idx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 374)->__VnoInFunc_initialize(vlProcess, vlSymsp);
                __Vtask_uvm_init__0__unnamedblk10__DOT__idx 
                    = ((IData)(1U) + __Vtask_uvm_init__0__unnamedblk10__DOT__idx);
            }
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_deferred_init.clear();
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__unnamedblk11__DOT__top 
                = __Vfunc_get__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__unnamedblk11__DOT__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 385)->__VnoInFunc_report_header(vlProcess, vlSymsp, 0U);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__unnamedblk11__DOT__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 386)->__VnoInFunc_m_check_uvm_field_flag_size(vlSymsp);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_init__Vstatic__unnamedblk11__DOT__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 389)->__VnoInFunc_m_check_verbosity(vlProcess, vlSymsp);
            vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 3U;
            __Vlabel0: ;
        }
    }
    get__Vfuncrtn = this->__PVT__inst;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_set(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> cs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg::__VnoInFunc_set\n"); );
    // Body
    this->__PVT__inst = cs;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_factory(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> &get_factory__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_factory\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_factory(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_factory> f) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_factory\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_report_server(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_report_server\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_report_server(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_report_server\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_tr_database(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> &get_default_tr_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_tr_database\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_tr_database(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> db) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_tr_database\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_component_visitor(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_> v) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_component_visitor\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_component_visitor(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_> &get_component_visitor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_component_visitor\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_root(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> &get_root__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_root\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_phase_max_ready_to_end(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_phase_max_ready_to_end\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_phase_max_ready_to_end(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_max_ready_to_end__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_phase_max_ready_to_end\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_printer(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_printer\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_printer(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> &get_default_printer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_printer\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_packer(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> packer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_packer\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_packer(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_packer> &get_default_packer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_packer\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_comparer(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_comparer> comparer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_comparer\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_comparer(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_comparer> &get_default_comparer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_comparer\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_global_seed(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_global_seed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_global_seed\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_copier(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_copier> copier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_default_copier\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_copier(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_copier> &get_default_copier__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_default_copier\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_uvm_seeding(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &get_uvm_seeding__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_uvm_seeding\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_uvm_seeding(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_uvm_seeding\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_resource_pool(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_pool> pool) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_resource_pool\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_resource_pool(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource_pool> &get_resource_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_resource_pool\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_resource_pool_default_precedence(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ precedence) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_set_resource_pool_default_precedence\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_resource_pool_default_precedence(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_resource_pool_default_precedence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::__VnoInFunc_get_resource_pool_default_precedence\n"); );
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
