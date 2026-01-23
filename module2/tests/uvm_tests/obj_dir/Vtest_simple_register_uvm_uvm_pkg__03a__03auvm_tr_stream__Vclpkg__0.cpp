// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_get_stream_from_handle(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> &get_stream_from_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_get_stream_from_handle\n"); );
    // Body
    {
        if ((0U == id)) {
            get_stream_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! this->__PVT__m_streams_by_id.exists(id))) {
            get_stream_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_stream_from_handle__Vfuncrtn = this->__PVT__m_streams_by_id
            .at(id);
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_m_free_id(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream__Vclpkg::__VnoInFunc_m_free_id\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream> stream;
    if ((0U != this->__PVT__m_streams_by_id.exists(id))) {
        stream = this->__PVT__m_streams_by_id.at(id);
    }
    if ((VlNull{} != stream)) {
        this->__PVT__m_streams_by_id.erase(id);
        this->__PVT__m_ids_by_stream.erase(stream);
    }
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_cfg_dap = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz18, vlProcess, vlSymsp, "cfg_dap"s);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_db(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> &get_db__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_db\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_get__2__Vfuncout;
    __Vtask_try_get__2__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__2__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__verbosity;
    __Vfunc_uvm_report_enabled__3__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__3__severity;
    __Vfunc_uvm_report_enabled__3__severity = 0;
    std::string __Vfunc_uvm_report_enabled__3__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__4__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__5__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__6__Vfuncout;
    __Vtask_uvm_report_enabled__6__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__7__id;
    std::string __Vtask_uvm_report_warning__7__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__verbosity;
    __Vtask_uvm_report_warning__7__verbosity = 0;
    std::string __Vtask_uvm_report_warning__7__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__7__line;
    __Vtask_uvm_report_warning__7__line = 0;
    std::string __Vtask_uvm_report_warning__7__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__7__report_enabled_checked;
    __Vtask_uvm_report_warning__7__report_enabled_checked = 0;
    std::string __Vfunc_get_name__8__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 90)
                      ->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__2__value, __Vtask_try_get__2__Vfuncout);
                            m_cfg = __Vtask_try_get__2__value;
                        }(), (IData)(__Vtask_try_get__2__Vfuncout))))) {
            if (this->__PVT__m_warn_null_cfg) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__3__id = "UVM/REC_STR/NO_CFG"s;
                                __Vfunc_uvm_report_enabled__3__severity = 1U;
                                __Vfunc_uvm_report_enabled__3__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__4__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__5__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__5__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__3__verbosity, (IData)(__Vfunc_uvm_report_enabled__3__severity), __Vfunc_uvm_report_enabled__3__id, __Vtask_uvm_report_enabled__6__Vfuncout);
                                __Vfunc_uvm_report_enabled__3__Vfuncout 
                                    = __Vtask_uvm_report_enabled__6__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
                    __Vtask_uvm_report_warning__7__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__7__context_name = ""s;
                    __Vtask_uvm_report_warning__7__line = 0x0000005eU;
                    __Vtask_uvm_report_warning__7__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__7__verbosity = 0U;
                    __Vtemp_1 = ([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__8__Vfuncout);
                        }(), __Vfunc_get_name__8__Vfuncout);
                    __Vtask_uvm_report_warning__7__message 
                        = VL_SFORMATF_N_NX("attempt to retrieve DB from '%@' before it was set!",0,
                                           -1,&(__Vtemp_1)) ;
                    __Vtask_uvm_report_warning__7__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__9__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__10__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__7__id, __Vtask_uvm_report_warning__7__message, __Vtask_uvm_report_warning__7__verbosity, __Vtask_uvm_report_warning__7__filename, __Vtask_uvm_report_warning__7__line, __Vtask_uvm_report_warning__7__context_name, (IData)(__Vtask_uvm_report_warning__7__report_enabled_checked));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_db__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_db__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 98)
            ->__PVT__db;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_scope(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_scope\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_get__12__Vfuncout;
    __Vtask_try_get__12__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__12__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
    __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    std::string __Vfunc_uvm_report_enabled__13__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__16__Vfuncout;
    __Vtask_uvm_report_enabled__16__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__17__id;
    std::string __Vtask_uvm_report_warning__17__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__17__verbosity;
    __Vtask_uvm_report_warning__17__verbosity = 0;
    std::string __Vtask_uvm_report_warning__17__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__17__line;
    __Vtask_uvm_report_warning__17__line = 0;
    std::string __Vtask_uvm_report_warning__17__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__17__report_enabled_checked;
    __Vtask_uvm_report_warning__17__report_enabled_checked = 0;
    std::string __Vfunc_get_name__18__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 105)
                      ->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__12__value, __Vtask_try_get__12__Vfuncout);
                            m_cfg = __Vtask_try_get__12__value;
                        }(), (IData)(__Vtask_try_get__12__Vfuncout))))) {
            if (this->__PVT__m_warn_null_cfg) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__13__id = "UVM/REC_STR/NO_CFG"s;
                                __Vfunc_uvm_report_enabled__13__severity = 1U;
                                __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__14__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__15__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), __Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__16__Vfuncout);
                                __Vfunc_uvm_report_enabled__13__Vfuncout 
                                    = __Vtask_uvm_report_enabled__16__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__13__Vfuncout))) {
                    __Vtask_uvm_report_warning__17__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__17__context_name = ""s;
                    __Vtask_uvm_report_warning__17__line = 0x0000006dU;
                    __Vtask_uvm_report_warning__17__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__17__verbosity = 0U;
                    __Vtemp_1 = ([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__18__Vfuncout);
                        }(), __Vfunc_get_name__18__Vfuncout);
                    __Vtask_uvm_report_warning__17__message 
                        = VL_SFORMATF_N_NX("attempt to retrieve scope from '%@' before it was set!",0,
                                           -1,&(__Vtemp_1)) ;
                    __Vtask_uvm_report_warning__17__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__17__id, __Vtask_uvm_report_warning__17__message, __Vtask_uvm_report_warning__17__verbosity, __Vtask_uvm_report_warning__17__filename, __Vtask_uvm_report_warning__17__line, __Vtask_uvm_report_warning__17__context_name, (IData)(__Vtask_uvm_report_warning__17__report_enabled_checked));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_scope__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        get_scope__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 113)
            ->__PVT__scope;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_stream_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_stream_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_stream_type_name\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_get__22__Vfuncout;
    __Vtask_try_get__22__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__22__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__Vfuncout;
    __Vfunc_uvm_report_enabled__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    std::string __Vfunc_uvm_report_enabled__23__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__26__Vfuncout;
    __Vtask_uvm_report_enabled__26__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__27__id;
    std::string __Vtask_uvm_report_warning__27__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__27__verbosity;
    __Vtask_uvm_report_warning__27__verbosity = 0;
    std::string __Vtask_uvm_report_warning__27__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__27__line;
    __Vtask_uvm_report_warning__27__line = 0;
    std::string __Vtask_uvm_report_warning__27__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__27__report_enabled_checked;
    __Vtask_uvm_report_warning__27__report_enabled_checked = 0;
    std::string __Vfunc_get_name__28__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 120)
                      ->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__22__value, __Vtask_try_get__22__Vfuncout);
                            m_cfg = __Vtask_try_get__22__value;
                        }(), (IData)(__Vtask_try_get__22__Vfuncout))))) {
            if (this->__PVT__m_warn_null_cfg) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__23__id = "UVM/REC_STR/NO_CFG"s;
                                __Vfunc_uvm_report_enabled__23__severity = 1U;
                                __Vfunc_uvm_report_enabled__23__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__24__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__25__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__23__verbosity, (IData)(__Vfunc_uvm_report_enabled__23__severity), __Vfunc_uvm_report_enabled__23__id, __Vtask_uvm_report_enabled__26__Vfuncout);
                                __Vfunc_uvm_report_enabled__23__Vfuncout 
                                    = __Vtask_uvm_report_enabled__26__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__23__Vfuncout))) {
                    __Vtask_uvm_report_warning__27__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__27__context_name = ""s;
                    __Vtask_uvm_report_warning__27__line = 0x0000007cU;
                    __Vtask_uvm_report_warning__27__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                    __Vtask_uvm_report_warning__27__verbosity = 0U;
                    __Vtemp_1 = ([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__28__Vfuncout);
                        }(), __Vfunc_get_name__28__Vfuncout);
                    __Vtask_uvm_report_warning__27__message 
                        = VL_SFORMATF_N_NX("attempt to retrieve STREAM_TYPE_NAME from '%@' before it was set!",0,
                                           -1,&(__Vtemp_1)) ;
                    __Vtask_uvm_report_warning__27__id = "UVM/REC_STR/NO_CFG"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__29__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__30__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__27__id, __Vtask_uvm_report_warning__27__message, __Vtask_uvm_report_warning__27__verbosity, __Vtask_uvm_report_warning__27__filename, __Vtask_uvm_report_warning__27__line, __Vtask_uvm_report_warning__27__context_name, (IData)(__Vtask_uvm_report_warning__27__report_enabled_checked));
                }
            }
            this->__PVT__m_warn_null_cfg = 0U;
            get_stream_type_name__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        get_stream_type_name__Vfuncrtn = VL_NULL_CHECK(m_cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 128)
            ->__PVT__stream_type_name;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_close(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_close\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_open__32__Vfuncout;
    __Vfunc_is_open__32__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_open__34__Vfuncout;
    __Vtask_is_open__34__Vfuncout = 0;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> unnamedblk1__DOT__idx;
    CData/*0:0*/ unnamedblk1__DOT__idx__Vfirst;
    unnamedblk1__DOT__idx__Vfirst = 0;
    {
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__32__Vfuncout);
                        }(), (IData)(__Vfunc_is_open__32__Vfuncout))))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_close(vlSymsp);
        if ((0U != this->__PVT__m_records.first(unnamedblk1__DOT__idx))) {
            unnamedblk1__DOT__idx__Vfirst = 1U;
            while (((IData)(unnamedblk1__DOT__idx__Vfirst) 
                    || (0U != this->__PVT__m_records.next(unnamedblk1__DOT__idx)))) {
                unnamedblk1__DOT__idx__Vfirst = 0U;
                if (([&]() {
                            VL_NULL_CHECK(unnamedblk1__DOT__idx, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 152)
                     ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__34__Vfuncout);
                        }(), (IData)(__Vtask_is_open__34__Vfuncout))) {
                    VL_NULL_CHECK(unnamedblk1__DOT__idx, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 153)->__VnoInFunc_close(vlSymsp, 0ULL);
                }
            }
        }
        this->__PVT__m_is_opened = 0U;
        this->__PVT__m_is_closed = 1U;
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_free(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_free\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_open__36__Vfuncout;
    __Vfunc_is_open__36__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_closed__37__Vfuncout;
    __Vfunc_is_closed__37__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_open__38__Vfuncout;
    __Vfunc_is_open__38__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> __Vfunc_get_db__42__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> __Vfunc_self__43__Vfuncout;
    std::string __Vtask_get_randstate__44__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> unnamedblk2__DOT__idx;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vfirst;
    unnamedblk2__DOT__idx__Vfirst = 0;
    VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> p;
    std::string s;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> db;
    {
        if ((1U & ((~ ([&]() {
                                this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__36__Vfuncout);
                            }(), (IData)(__Vfunc_is_open__36__Vfuncout))) 
                   & (~ ([&]() {
                                this->__VnoInFunc_is_closed(vlSymsp, __Vfunc_is_closed__37__Vfuncout);
                            }(), (IData)(__Vfunc_is_closed__37__Vfuncout)))))) {
            goto __Vlabel0;
        }
        if (([&]() {
                    this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__38__Vfuncout);
                }(), (IData)(__Vfunc_is_open__38__Vfuncout))) {
            this->__VnoInFunc_close(vlSymsp);
        }
        this->__VnoInFunc_do_free(vlSymsp);
        if ((0U != this->__PVT__m_records.first(unnamedblk2__DOT__idx))) {
            unnamedblk2__DOT__idx__Vfirst = 1U;
            while (((IData)(unnamedblk2__DOT__idx__Vfirst) 
                    || (0U != this->__PVT__m_records.next(unnamedblk2__DOT__idx)))) {
                unnamedblk2__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk2__DOT__idx, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 174)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
            }
        }
        this->__VnoInFunc_get_db(vlProcess, vlSymsp, __Vfunc_get_db__42__Vfuncout);
        db = __Vfunc_get_db__42__Vfuncout;
        this->__PVT__m_is_closed = 0U;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__43__Vfuncout);
        p = __Vfunc_self__43__Vfuncout;
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 181)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__44__Vfuncout);
            s = __Vtask_get_randstate__44__Vfuncout;
        }
        this->__PVT__m_cfg_dap = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_before_get_dap__Tz18, vlProcess, vlSymsp, "cfg_dap"s);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 184)->__VnoInFunc_set_randstate(vlSymsp, s);
        }
        this->__PVT__m_warn_null_cfg = 1U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.exists(
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this})) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_m_free_id(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                                                                                .at(
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this}));
        }
        if ((VlNull{} != db)) {
            VL_NULL_CHECK(db, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 191)->__VnoInFunc_m_free_stream(vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this});
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_do_open(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_do_open\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__Vfuncout;
    __Vfunc_uvm_report_enabled__49__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__49__verbosity;
    __Vfunc_uvm_report_enabled__49__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__49__severity;
    __Vfunc_uvm_report_enabled__49__severity = 0;
    std::string __Vfunc_uvm_report_enabled__49__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__52__Vfuncout;
    __Vtask_uvm_report_enabled__52__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__53__id;
    std::string __Vtask_uvm_report_error__53__message;
    IData/*31:0*/ __Vtask_uvm_report_error__53__verbosity;
    __Vtask_uvm_report_error__53__verbosity = 0;
    std::string __Vtask_uvm_report_error__53__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__53__line;
    __Vtask_uvm_report_error__53__line = 0;
    std::string __Vtask_uvm_report_error__53__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__53__report_enabled_checked;
    __Vtask_uvm_report_error__53__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__54__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
    CData/*0:0*/ __Vtask_try_get__58__Vfuncout;
    __Vtask_try_get__58__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> __Vtask_try_get__58__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__Vfuncout;
    __Vfunc_uvm_report_enabled__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__verbosity;
    __Vfunc_uvm_report_enabled__59__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__59__severity;
    __Vfunc_uvm_report_enabled__59__severity = 0;
    std::string __Vfunc_uvm_report_enabled__59__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__62__Vfuncout;
    __Vtask_uvm_report_enabled__62__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__63__id;
    std::string __Vtask_uvm_report_error__63__message;
    IData/*31:0*/ __Vtask_uvm_report_error__63__verbosity;
    __Vtask_uvm_report_error__63__verbosity = 0;
    std::string __Vtask_uvm_report_error__63__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__63__line;
    __Vtask_uvm_report_error__63__line = 0;
    std::string __Vtask_uvm_report_error__63__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__63__report_enabled_checked;
    __Vtask_uvm_report_error__63__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__64__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> m_cfg;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> m_db;
    {
        if ((VlNull{} == db)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__49__id = "UVM/REC_STR/NULL_DB"s;
                            __Vfunc_uvm_report_enabled__49__severity = 2U;
                            __Vfunc_uvm_report_enabled__49__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__50__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__51__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__49__verbosity, (IData)(__Vfunc_uvm_report_enabled__49__severity), __Vfunc_uvm_report_enabled__49__id, __Vtask_uvm_report_enabled__52__Vfuncout);
                            __Vfunc_uvm_report_enabled__49__Vfuncout 
                                = __Vtask_uvm_report_enabled__52__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__49__Vfuncout))) {
                __Vtask_uvm_report_error__53__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__53__context_name = ""s;
                __Vtask_uvm_report_error__53__line = 0x000000d9U;
                __Vtask_uvm_report_error__53__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                __Vtask_uvm_report_error__53__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__54__Vfuncout);
                    }(), __Vfunc_get_full_name__54__Vfuncout);
                __Vtask_uvm_report_error__53__message 
                    = VL_SFORMATF_N_NX("Illegal attempt to set DB for '%@' to '<null>'",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__53__id = "UVM/REC_STR/NULL_DB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__55__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__56__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__53__id, __Vtask_uvm_report_error__53__message, __Vtask_uvm_report_error__53__verbosity, __Vtask_uvm_report_error__53__filename, __Vtask_uvm_report_error__53__line, __Vtask_uvm_report_error__53__context_name, (IData)(__Vtask_uvm_report_error__53__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if (([&]() {
                    VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 221)
             ->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__58__value, __Vtask_try_get__58__Vfuncout);
                    m_cfg = __Vtask_try_get__58__value;
                }(), (IData)(__Vtask_try_get__58__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__59__id = "UVM/REC_STR/RE_CFG"s;
                            __Vfunc_uvm_report_enabled__59__severity = 2U;
                            __Vfunc_uvm_report_enabled__59__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__60__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__61__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__59__verbosity, (IData)(__Vfunc_uvm_report_enabled__59__severity), __Vfunc_uvm_report_enabled__59__id, __Vtask_uvm_report_enabled__62__Vfuncout);
                            __Vfunc_uvm_report_enabled__59__Vfuncout 
                                = __Vtask_uvm_report_enabled__62__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__59__Vfuncout))) {
                __Vtask_uvm_report_error__63__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__63__context_name = ""s;
                __Vtask_uvm_report_error__63__line = 0x000000e0U;
                __Vtask_uvm_report_error__63__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh"s;
                __Vtask_uvm_report_error__63__verbosity = 0U;
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__64__Vfuncout);
                    }(), __Vfunc_get_full_name__64__Vfuncout);
                __Vtask_uvm_report_error__63__message 
                    = VL_SFORMATF_N_NX("Illegal attempt to re-open '%@'",0,
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_error__63__id = "UVM/REC_STR/RE_CFG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__65__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__65__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__66__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__66__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__63__id, __Vtask_uvm_report_error__63__message, __Vtask_uvm_report_error__63__verbosity, __Vtask_uvm_report_error__63__filename, __Vtask_uvm_report_error__63__line, __Vtask_uvm_report_error__63__context_name, (IData)(__Vtask_uvm_report_error__63__report_enabled_checked));
            }
        } else {
            m_cfg = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg, vlSymsp);
            VL_NULL_CHECK(m_cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 229)->__PVT__db 
                = db;
            VL_NULL_CHECK(m_cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 230)->__PVT__scope 
                = scope;
            VL_NULL_CHECK(m_cfg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 231)->__PVT__stream_type_name 
                = stream_type_name;
            VL_NULL_CHECK(this->__PVT__m_cfg_dap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 232)->__VnoInFunc_set(vlSymsp, m_cfg);
            this->__PVT__m_is_opened = 1U;
            this->__VnoInFunc_do_open(vlSymsp, db, scope, stream_type_name);
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_open(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_closed(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_is_closed\n"); );
    // Body
    is_closed__Vfuncrtn = this->__PVT__m_is_closed;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_open_recorder(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> &open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_open_recorder\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_open__71__Vfuncout;
    __Vfunc_is_open__71__Vfuncout = 0;
    VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> __Vfunc_self__72__Vfuncout;
    std::string __Vtask_get_randstate__73__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> __Vfunc_do_open_recorder__74__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> unnamedblk3__DOT__p;
    std::string unnamedblk3__DOT__s;
    QData/*63:0*/ m_time;
    m_time = 0;
    m_time = ((0ULL == open_time) ? VL_TIME_UNITED_Q(1000)
               : open_time);
    if (([&]() {
                this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__71__Vfuncout);
            }(), (IData)(__Vfunc_is_open__71__Vfuncout))) {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__72__Vfuncout);
        unnamedblk3__DOT__p = __Vfunc_self__72__Vfuncout;
        if ((VlNull{} != unnamedblk3__DOT__p)) {
            VL_NULL_CHECK(unnamedblk3__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 275)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__73__Vfuncout);
            unnamedblk3__DOT__s = __Vtask_get_randstate__73__Vfuncout;
        }
        this->__VnoInFunc_do_open_recorder(vlProcess, vlSymsp, name, m_time, type_name, __Vfunc_do_open_recorder__74__Vfuncout);
        open_recorder__Vfuncrtn = __Vfunc_do_open_recorder__74__Vfuncout;
        if ((VlNull{} != open_recorder__Vfuncrtn)) {
            this->__PVT__m_records.at(open_recorder__Vfuncrtn) = 1U;
            VL_NULL_CHECK(open_recorder__Vfuncrtn, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 285)->__VnoInFunc_m_do_open(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this}, m_time, type_name);
        }
        if ((VlNull{} != unnamedblk3__DOT__p)) {
            VL_NULL_CHECK(unnamedblk3__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_tr_stream.svh", 288)->__VnoInFunc_set_randstate(vlSymsp, unnamedblk3__DOT__s);
        }
    } else {
        open_recorder__Vfuncrtn = VlNull{};
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_free_recorder(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_m_free_recorder\n"); );
    // Body
    if (this->__PVT__m_records.exists(recorder)) {
        this->__PVT__m_records.erase(recorder);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_recorders(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder>> &q, CData/*0:0*/ &get_recorders__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_recorders\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__idx;
    CData/*0:0*/ unnamedblk4__DOT__idx__Vfirst;
    unnamedblk4__DOT__idx__Vfirst = 0;
    q.clear();
    if ((0U != this->__PVT__m_records.first(unnamedblk4__DOT__idx))) {
        unnamedblk4__DOT__idx__Vfirst = 1U;
        while (((IData)(unnamedblk4__DOT__idx__Vfirst) 
                || (0U != this->__PVT__m_records.next(unnamedblk4__DOT__idx)))) {
            unnamedblk4__DOT__idx__Vfirst = 0U;
            q.push_back(unnamedblk4__DOT__idx);
        }
    }
    get_recorders__Vfuncrtn = (1U & q.size());
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_handle(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_get_handle\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_open__77__Vfuncout;
    __Vfunc_is_open__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_closed__78__Vfuncout;
    __Vfunc_is_closed__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__79__Vfuncout;
    __Vfunc_get_inst_id__79__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk5__DOT__handle;
    unnamedblk5__DOT__handle = 0;
    if ((1U & ((~ ([&]() {
                            this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__77__Vfuncout);
                        }(), (IData)(__Vfunc_is_open__77__Vfuncout))) 
               & (~ ([&]() {
                            this->__VnoInFunc_is_closed(vlSymsp, __Vfunc_is_closed__78__Vfuncout);
                        }(), (IData)(__Vfunc_is_closed__78__Vfuncout)))))) {
        get_handle__Vfuncrtn = 0U;
    } else {
        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__79__Vfuncout);
        unnamedblk5__DOT__handle = __Vfunc_get_inst_id__79__Vfuncout;
        if ((vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.exists(
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this}) 
             && (vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                 .at(VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this}) 
                 != unnamedblk5__DOT__handle))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_streams_by_id.erase(vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream
                                                                                .at(
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this}));
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_streams_by_id.at(unnamedblk5__DOT__handle) 
            = VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__PVT__m_ids_by_stream.at(
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>{this}) 
            = unnamedblk5__DOT__handle;
        get_handle__Vfuncrtn = unnamedblk5__DOT__handle;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_do_open_recorder\n"); );
    // Body
    do_open_recorder__Vfuncrtn = VlNull{};
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__81__Vfuncout;
    __Vfunc___Vbasic_randomize__81__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__81__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__81__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_records.atDefault() = 0;
    __PVT__m_warn_null_cfg = 0;
    __PVT__m_is_opened = 0;
    __PVT__m_is_closed = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_tr_stream::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_cfg_dap:" + VL_TO_STRING(__PVT__m_cfg_dap);
    out += ", m_records:" + VL_TO_STRING(__PVT__m_records);
    out += ", m_warn_null_cfg:" + VL_TO_STRING(__PVT__m_warn_null_cfg);
    out += ", m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_is_closed:" + VL_TO_STRING(__PVT__m_is_closed);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
