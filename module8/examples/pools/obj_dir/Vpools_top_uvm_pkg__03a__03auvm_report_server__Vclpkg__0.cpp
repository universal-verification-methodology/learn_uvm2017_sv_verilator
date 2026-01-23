// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_set_server(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> server) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_set_server\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vtask_get_report_server__2__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    cs = __Vfunc_get__0__Vfuncout;
    VL_NULL_CHECK(server, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 204)->__VnoInFunc_copy(vlProcess, vlSymsp, 
                                                                                ([&]() {
                VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 204)
                                                                                ->__VnoInFunc_get_report_server(vlProcess, vlSymsp, __Vtask_get_report_server__2__Vfuncout);
            }(), __Vtask_get_report_server__2__Vfuncout), VlNull{});
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 205)->__VnoInFunc_set_report_server(vlSymsp, server);
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> &get_server__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_report_server__Vclpkg::__VnoInFunc_get_server\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> __Vtask_get_report_server__5__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
    cs = __Vfunc_get__4__Vfuncout;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 231)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, __Vtask_get_report_server__5__Vfuncout);
    get_server__Vfuncrtn = __Vtask_get_report_server__5__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_server"s;
}

Vpools_top_uvm_pkg__03a__03auvm_report_server::Vpools_top_uvm_pkg__03a__03auvm_report_server(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_max_quit_count\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_max_quit_count\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_quit_count\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_quit_count\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count(Vpools_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_severity_count\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count(Vpools_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_count\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count(Vpools_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_id_count\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count(Vpools_top__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_count\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_set(Vpools_top__Syms* __restrict vlSymsp, VlQueue<std::string> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_id_set\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_set(Vpools_top__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_severity_set\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_message_database(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_database> database) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_set_message_database\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_message_database(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_get_message_database\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_do_copy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__Vfuncout;
    __Vfunc_uvm_report_enabled__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    std::string __Vfunc_uvm_report_enabled__2__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__5__Vfuncout;
    __Vtask_uvm_report_enabled__5__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__6__id;
    std::string __Vtask_uvm_report_error__6__message;
    IData/*31:0*/ __Vtask_uvm_report_error__6__verbosity;
    __Vtask_uvm_report_error__6__verbosity = 0;
    std::string __Vtask_uvm_report_error__6__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__6__line;
    __Vtask_uvm_report_error__6__line = 0;
    std::string __Vtask_uvm_report_error__6__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__6__report_enabled_checked;
    __Vtask_uvm_report_error__6__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    VlQueue<CData/*1:0*/> __Vtask_get_severity_set__10__q;
    __Vtask_get_severity_set__10__q.atDefault() = 0;
    IData/*31:0*/ __Vtask_get_severity_count__12__Vfuncout;
    __Vtask_get_severity_count__12__Vfuncout = 0;
    VlQueue<std::string> __Vtask_get_id_set__13__q;
    IData/*31:0*/ __Vtask_get_id_count__15__Vfuncout;
    __Vtask_get_id_count__15__Vfuncout = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_message_database__17__Vfuncout;
    IData/*31:0*/ __Vtask_get_max_quit_count__19__Vfuncout;
    __Vtask_get_max_quit_count__19__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_quit_count__21__Vfuncout;
    __Vtask_get_quit_count__21__Vfuncout = 0;
    // Body
    VlQueue<CData/*1:0*/> unnamedblk1__DOT__q;
    unnamedblk1__DOT__q.atDefault() = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__s;
    unnamedblk1__DOT__unnamedblk2__DOT__s = 0;
    VlQueue<std::string> unnamedblk3__DOT__q;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__s;
    unnamedblk3__DOT__unnamedblk4__DOT__s = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server> rhs_;
    Vpools_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
    if ((! VL_CAST_DYNAMIC(rhs, rhs_))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__2__id = "UVM/REPORT/SERVER/RPTCOPY"s;
                        __Vfunc_uvm_report_enabled__2__severity = 2U;
                        __Vfunc_uvm_report_enabled__2__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__3__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__4__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), __Vfunc_uvm_report_enabled__2__id, __Vtask_uvm_report_enabled__5__Vfuncout);
                        __Vfunc_uvm_report_enabled__2__Vfuncout 
                            = __Vtask_uvm_report_enabled__5__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__2__Vfuncout))) {
            __Vtask_uvm_report_error__6__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__6__context_name = ""s;
            __Vtask_uvm_report_error__6__line = 0x00000074U;
            __Vtask_uvm_report_error__6__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh"s;
            __Vtask_uvm_report_error__6__verbosity = 0U;
            __Vtask_uvm_report_error__6__message = "cannot copy to report_server from the given datatype"s;
            __Vtask_uvm_report_error__6__id = "UVM/REPORT/SERVER/RPTCOPY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__7__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__8__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__6__id, __Vtask_uvm_report_error__6__message, __Vtask_uvm_report_error__6__verbosity, __Vtask_uvm_report_error__6__filename, __Vtask_uvm_report_error__6__line, __Vtask_uvm_report_error__6__context_name, (IData)(__Vtask_uvm_report_error__6__report_enabled_checked));
        }
    }
    VL_NULL_CHECK(rhs_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 120)->__VnoInFunc_get_severity_set(vlSymsp, __Vtask_get_severity_set__10__q);
    unnamedblk1__DOT__q = __Vtask_get_severity_set__10__q;
    unnamedblk1__DOT__unnamedblk2__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__s, unnamedblk1__DOT__q.size())) {
        this->__VnoInFunc_set_severity_count(vlSymsp, unnamedblk1__DOT__q.at(unnamedblk1__DOT__unnamedblk2__DOT__s), 
                                             ([&]() {
                    VL_NULL_CHECK(rhs_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 122)
                                              ->__VnoInFunc_get_severity_count(vlSymsp, unnamedblk1__DOT__q.at(unnamedblk1__DOT__unnamedblk2__DOT__s), __Vtask_get_severity_count__12__Vfuncout);
                }(), __Vtask_get_severity_count__12__Vfuncout));
        unnamedblk1__DOT__unnamedblk2__DOT__s = ((IData)(1U) 
                                                 + unnamedblk1__DOT__unnamedblk2__DOT__s);
    }
    VL_NULL_CHECK(rhs_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 127)->__VnoInFunc_get_id_set(vlSymsp, __Vtask_get_id_set__13__q);
    unnamedblk3__DOT__q = __Vtask_get_id_set__13__q;
    unnamedblk3__DOT__unnamedblk4__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__s, unnamedblk3__DOT__q.size())) {
        this->__VnoInFunc_set_id_count(vlSymsp, VL_CVT_PACK_STR_NN(unnamedblk3__DOT__q.at(unnamedblk3__DOT__unnamedblk4__DOT__s)), 
                                       ([&]() {
                    VL_NULL_CHECK(rhs_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 129)
                                        ->__VnoInFunc_get_id_count(vlSymsp, 
                                                                   VL_CVT_PACK_STR_NN(unnamedblk3__DOT__q.at(unnamedblk3__DOT__unnamedblk4__DOT__s)), __Vtask_get_id_count__15__Vfuncout);
                }(), __Vtask_get_id_count__15__Vfuncout));
        unnamedblk3__DOT__unnamedblk4__DOT__s = ((IData)(1U) 
                                                 + unnamedblk3__DOT__unnamedblk4__DOT__s);
    }
    this->__VnoInFunc_set_message_database(vlSymsp, 
                                           ([&]() {
                VL_NULL_CHECK(rhs_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 132)
                                            ->__VnoInFunc_get_message_database(vlSymsp, __Vtask_get_message_database__17__Vfuncout);
            }(), __Vtask_get_message_database__17__Vfuncout));
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, 
                                         ([&]() {
                VL_NULL_CHECK(rhs_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 133)
                                          ->__VnoInFunc_get_max_quit_count(vlSymsp, __Vtask_get_max_quit_count__19__Vfuncout);
            }(), __Vtask_get_max_quit_count__19__Vfuncout), 1U);
    this->__VnoInFunc_set_quit_count(vlSymsp, ([&]() {
                VL_NULL_CHECK(rhs_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 134)
                                               ->__VnoInFunc_get_quit_count(vlSymsp, __Vtask_get_quit_count__21__Vfuncout);
            }(), __Vtask_get_quit_count__21__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_process_report_message\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_execute_report_message\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_compose_report_message\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report_summarize(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_report_summarize\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__23__Vfuncout;
    __Vfunc___VBasicRand__23__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__23__Vfuncout);
            }(), __Vfunc___VBasicRand__23__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_report_server::~Vpools_top_uvm_pkg__03a__03auvm_report_server() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_server>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_report_server::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_report_server::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_report_server::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vpools_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
