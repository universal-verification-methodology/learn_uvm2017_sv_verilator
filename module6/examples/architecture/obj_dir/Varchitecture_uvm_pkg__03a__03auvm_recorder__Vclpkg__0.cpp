// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_object_registry__pi30> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_object_registry__pi30> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi30__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_recorder"s;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_m_free_id(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_m_free_id\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> recorder;
    if ((0U != this->__PVT__m_recorders_by_id.exists(id))) {
        recorder = this->__PVT__m_recorders_by_id.at(id);
    }
    if ((VlNull{} != recorder)) {
        this->__PVT__m_recorders_by_id.erase(id);
        this->__PVT__m_ids_by_recorder.erase(recorder);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_recorder_from_handle(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ id, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder> &get_recorder_from_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_recorder__Vclpkg::__VnoInFunc_get_recorder_from_handle\n"); );
    // Body
    {
        if ((0U == id)) {
            get_recorder_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! this->__PVT__m_recorders_by_id.exists(id))) {
            get_recorder_from_handle__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_recorder_from_handle__Vfuncrtn = this->__PVT__m_recorders_by_id
            .at(id);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_abstract_object_registry__pi30> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi30__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_recorder"s;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_recursion_policy(Varchitecture__Syms* __restrict vlSymsp, IData/*27:0*/ policy) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_recursion_policy\n"); );
    // Body
    this->__PVT__policy = policy;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_recursion_policy(Varchitecture__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_recursion_policy\n"); );
    // Body
    get_recursion_policy__Vfuncrtn = this->__PVT__policy;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_flush(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__policy = 0U;
    this->__PVT__identifier = 1U;
    this->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
}

Varchitecture_uvm_pkg__03a__03auvm_recorder::Varchitecture_uvm_pkg__03a__03auvm_recorder(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name)
    : Varchitecture_uvm_pkg__03a__03auvm_policy(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__policy = 0U;
    this->__PVT__identifier = 1U;
    this->__PVT__default_radix = 0x07000000U;
    ;
    this->__PVT__m_stream_dap = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_set_before_get_dap__Tz64, vlProcess, vlSymsp, "stream_dap"s);
    this->__PVT__m_warn_null_stream = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_stream(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> &get_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_stream\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_get__4__Vfuncout;
    __Vtask_try_get__4__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vtask_try_get__4__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    std::string __Vfunc_uvm_report_enabled__5__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__8__Vfuncout;
    __Vtask_uvm_report_enabled__8__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__9__id;
    std::string __Vtask_uvm_report_warning__9__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__9__verbosity;
    __Vtask_uvm_report_warning__9__verbosity = 0;
    std::string __Vtask_uvm_report_warning__9__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__9__line;
    __Vtask_uvm_report_warning__9__line = 0;
    std::string __Vtask_uvm_report_warning__9__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__9__report_enabled_checked;
    __Vtask_uvm_report_warning__9__report_enabled_checked = 0;
    std::string __Vfunc_get_name__10__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    std::string __Vtemp_1;
    // Body
    if ((1U & (~ ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 174)
                  ->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__4__value, __Vtask_try_get__4__Vfuncout);
                        get_stream__Vfuncrtn = __Vtask_try_get__4__value;
                    }(), (IData)(__Vtask_try_get__4__Vfuncout))))) {
        if (this->__PVT__m_warn_null_stream) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__5__id = "UVM/REC/NO_CFG"s;
                            __Vfunc_uvm_report_enabled__5__severity = 1U;
                            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
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
                __Vtask_uvm_report_warning__9__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__9__context_name = ""s;
                __Vtask_uvm_report_warning__9__line = 0x000000b2U;
                __Vtask_uvm_report_warning__9__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_warning__9__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__10__Vfuncout);
                    }(), __Vfunc_get_name__10__Vfuncout);
                __Vtask_uvm_report_warning__9__message 
                    = VL_SFORMATF_N_NX("attempt to retrieve STREAM from '%@' before it was set!",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_warning__9__id = "UVM/REC/NO_CFG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__11__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__12__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__9__id, __Vtask_uvm_report_warning__9__message, __Vtask_uvm_report_warning__9__verbosity, __Vtask_uvm_report_warning__9__filename, __Vtask_uvm_report_warning__9__line, __Vtask_uvm_report_warning__9__context_name, (IData)(__Vtask_uvm_report_warning__9__report_enabled_checked));
            }
        }
        this->__PVT__m_warn_null_stream = 0U;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_close(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_close\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_open__14__Vfuncout;
    __Vfunc_is_open__14__Vfuncout = 0;
    // Body
    {
        if ((0ULL == close_time)) {
            close_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        }
        if ((1U & (~ ([&]() {
                            this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__14__Vfuncout);
                        }(), (IData)(__Vfunc_is_open__14__Vfuncout))))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_close(vlSymsp, close_time);
        this->__PVT__m_is_opened = 0U;
        this->__PVT__m_is_closed = 1U;
        this->__PVT__m_close_time = close_time;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free\n"); );
    // Locals
    VlClassRef<Varchitecture_std__03a__03aprocess> __Vfunc_self__16__Vfuncout;
    CData/*0:0*/ __Vfunc_is_open__17__Vfuncout;
    __Vfunc_is_open__17__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_closed__18__Vfuncout;
    __Vfunc_is_closed__18__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_open__19__Vfuncout;
    __Vfunc_is_open__19__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream__22__Vfuncout;
    std::string __Vtask_get_randstate__23__Vfuncout;
    // Body
    VlClassRef<Varchitecture_std__03a__03aprocess> p;
    std::string s;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> stream;
    {
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__16__Vfuncout);
        p = __Vfunc_self__16__Vfuncout;
        if ((1U & ((~ ([&]() {
                                this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__17__Vfuncout);
                            }(), (IData)(__Vfunc_is_open__17__Vfuncout))) 
                   & (~ ([&]() {
                                this->__VnoInFunc_is_closed(vlSymsp, __Vfunc_is_closed__18__Vfuncout);
                            }(), (IData)(__Vfunc_is_closed__18__Vfuncout)))))) {
            goto __Vlabel0;
        }
        if (([&]() {
                    this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__19__Vfuncout);
                }(), (IData)(__Vfunc_is_open__19__Vfuncout))) {
            this->__VnoInFunc_close(vlSymsp, close_time);
        }
        this->__VnoInFunc_do_free(vlSymsp);
        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vfunc_get_stream__22__Vfuncout);
        stream = __Vfunc_get_stream__22__Vfuncout;
        this->__PVT__m_is_closed = 0U;
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 233)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__23__Vfuncout);
            s = __Vtask_get_randstate__23__Vfuncout;
        }
        this->__PVT__m_stream_dap = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_set_before_get_dap__Tz64, vlProcess, vlSymsp, "stream_dap"s);
        if ((VlNull{} != p)) {
            VL_NULL_CHECK(p, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 236)->__VnoInFunc_set_randstate(vlSymsp, s);
        }
        this->__PVT__m_warn_null_stream = 1U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.exists(
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this})) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_m_free_id(vlSymsp, vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                                                                                .at(
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this}));
        }
        if ((VlNull{} != stream)) {
            VL_NULL_CHECK(stream, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 243)->__VnoInFunc_m_free_recorder(vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this});
        }
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_open(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_open\n"); );
    // Body
    is_open__Vfuncrtn = this->__PVT__m_is_opened;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_open_time(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ &get_open_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_open_time\n"); );
    // Body
    get_open_time__Vfuncrtn = this->__PVT__m_open_time;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_closed(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_closed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_is_closed\n"); );
    // Body
    is_closed__Vfuncrtn = this->__PVT__m_is_closed;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_close_time(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ &get_close_time__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_close_time\n"); );
    // Body
    get_close_time__Vfuncrtn = this->__PVT__m_close_time;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_do_open(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_do_open\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__Vfuncout;
    __Vfunc_uvm_report_enabled__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__28__verbosity;
    __Vfunc_uvm_report_enabled__28__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__28__severity;
    __Vfunc_uvm_report_enabled__28__severity = 0;
    std::string __Vfunc_uvm_report_enabled__28__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__31__Vfuncout;
    __Vtask_uvm_report_enabled__31__Vfuncout = 0;
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
    std::string __Vfunc_get_name__33__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    CData/*0:0*/ __Vtask_try_get__37__Vfuncout;
    __Vtask_try_get__37__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vtask_try_get__37__value;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__Vfuncout;
    __Vfunc_uvm_report_enabled__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__38__verbosity;
    __Vfunc_uvm_report_enabled__38__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__38__severity;
    __Vfunc_uvm_report_enabled__38__severity = 0;
    std::string __Vfunc_uvm_report_enabled__38__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__39__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__40__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__41__Vfuncout;
    __Vtask_uvm_report_enabled__41__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__42__id;
    std::string __Vtask_uvm_report_error__42__message;
    IData/*31:0*/ __Vtask_uvm_report_error__42__verbosity;
    __Vtask_uvm_report_error__42__verbosity = 0;
    std::string __Vtask_uvm_report_error__42__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__42__line;
    __Vtask_uvm_report_error__42__line = 0;
    std::string __Vtask_uvm_report_error__42__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__42__report_enabled_checked;
    __Vtask_uvm_report_error__42__report_enabled_checked = 0;
    std::string __Vfunc_get_name__43__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__44__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__45__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> m_stream;
    {
        if ((VlNull{} == stream)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__28__id = "UVM/REC/NULL_STREAM"s;
                            __Vfunc_uvm_report_enabled__28__severity = 2U;
                            __Vfunc_uvm_report_enabled__28__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__29__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__30__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__28__verbosity, (IData)(__Vfunc_uvm_report_enabled__28__severity), __Vfunc_uvm_report_enabled__28__id, __Vtask_uvm_report_enabled__31__Vfuncout);
                            __Vfunc_uvm_report_enabled__28__Vfuncout 
                                = __Vtask_uvm_report_enabled__31__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__28__Vfuncout))) {
                __Vtask_uvm_report_error__32__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__32__context_name = ""s;
                __Vtask_uvm_report_error__32__line = 0x0000011fU;
                __Vtask_uvm_report_error__32__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_error__32__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__33__Vfuncout);
                    }(), __Vfunc_get_name__33__Vfuncout);
                __Vtask_uvm_report_error__32__message 
                    = VL_SFORMATF_N_NX("Illegal attempt to set STREAM for '%@' to '<null>'",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__32__id = "UVM/REC/NULL_STREAM"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__32__id, __Vtask_uvm_report_error__32__message, __Vtask_uvm_report_error__32__verbosity, __Vtask_uvm_report_error__32__filename, __Vtask_uvm_report_error__32__line, __Vtask_uvm_report_error__32__context_name, (IData)(__Vtask_uvm_report_error__32__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if (([&]() {
                    VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 291)
             ->__VnoInFunc_try_get(vlSymsp, __Vtask_try_get__37__value, __Vtask_try_get__37__Vfuncout);
                    m_stream = __Vtask_try_get__37__value;
                }(), (IData)(__Vtask_try_get__37__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__38__id = "UVM/REC/RE_INIT"s;
                            __Vfunc_uvm_report_enabled__38__severity = 2U;
                            __Vfunc_uvm_report_enabled__38__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__39__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__39__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__40__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__40__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__38__verbosity, (IData)(__Vfunc_uvm_report_enabled__38__severity), __Vfunc_uvm_report_enabled__38__id, __Vtask_uvm_report_enabled__41__Vfuncout);
                            __Vfunc_uvm_report_enabled__38__Vfuncout 
                                = __Vtask_uvm_report_enabled__41__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__38__Vfuncout))) {
                __Vtask_uvm_report_error__42__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__42__context_name = ""s;
                __Vtask_uvm_report_error__42__line = 0x00000126U;
                __Vtask_uvm_report_error__42__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh"s;
                __Vtask_uvm_report_error__42__verbosity = 0U;
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__43__Vfuncout);
                    }(), __Vfunc_get_name__43__Vfuncout);
                __Vtask_uvm_report_error__42__message 
                    = VL_SFORMATF_N_NX("Illegal attempt to re-initialize '%@'",0,
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_error__42__id = "UVM/REC/RE_INIT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__44__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__44__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__45__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__45__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__42__id, __Vtask_uvm_report_error__42__message, __Vtask_uvm_report_error__42__verbosity, __Vtask_uvm_report_error__42__filename, __Vtask_uvm_report_error__42__line, __Vtask_uvm_report_error__42__context_name, (IData)(__Vtask_uvm_report_error__42__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_stream_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 298)->__VnoInFunc_set(vlSymsp, stream);
        this->__PVT__m_open_time = open_time;
        this->__PVT__m_is_opened = 1U;
        this->__VnoInFunc_do_open(vlProcess, vlSymsp, stream, open_time, type_name);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_handle(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_handle\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_open__49__Vfuncout;
    __Vfunc_is_open__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_closed__50__Vfuncout;
    __Vfunc_is_closed__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_inst_id__51__Vfuncout;
    __Vfunc_get_inst_id__51__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__handle;
    unnamedblk1__DOT__handle = 0;
    if ((1U & ((~ ([&]() {
                            this->__VnoInFunc_is_open(vlSymsp, __Vfunc_is_open__49__Vfuncout);
                        }(), (IData)(__Vfunc_is_open__49__Vfuncout))) 
               & (~ ([&]() {
                            this->__VnoInFunc_is_closed(vlSymsp, __Vfunc_is_closed__50__Vfuncout);
                        }(), (IData)(__Vfunc_is_closed__50__Vfuncout)))))) {
        get_handle__Vfuncrtn = 0U;
    } else {
        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__51__Vfuncout);
        unnamedblk1__DOT__handle = __Vfunc_get_inst_id__51__Vfuncout;
        if ((vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.exists(
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this}) 
             && (vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                 .at(VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this}) 
                 != unnamedblk1__DOT__handle))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_recorders_by_id.erase(vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder
                                                                                .at(
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this}));
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_recorders_by_id.at(unnamedblk1__DOT__handle) 
            = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this};
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__PVT__m_ids_by_recorder.at(
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this}) 
            = unnamedblk1__DOT__handle;
        get_handle__Vfuncrtn = unnamedblk1__DOT__handle;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream__52__Vfuncout;
    // Body
    {
        if ((VlNull{} == ([&]() {
                        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vfunc_get_stream__52__Vfuncout);
                    }(), __Vfunc_get_stream__52__Vfuncout))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_field(vlSymsp, name, value, size, radix);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_int(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_int\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream__54__Vfuncout;
    // Body
    {
        if ((VlNull{} == ([&]() {
                        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vfunc_get_stream__54__Vfuncout);
                    }(), __Vfunc_get_stream__54__Vfuncout))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_field_int(vlSymsp, name, value, size, radix);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_real(Varchitecture__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_field_real\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream__56__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == ([&]() {
                        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vfunc_get_stream__56__Vfuncout);
                    }(), __Vfunc_get_stream__56__Vfuncout))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_field_real(vlSymsp, name, value);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_object\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream__58__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> __Vtask_pop_active_object__62__Vfuncout;
    // Body
    {
        if ((VlNull{} == ([&]() {
                        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vfunc_get_stream__58__Vfuncout);
                    }(), __Vfunc_get_stream__58__Vfuncout))) {
            goto __Vlabel0;
        }
        if ((VlNull{} == value)) {
            this->__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
        } else {
            this->__VnoInFunc_push_active_object(vlProcess, vlSymsp, value);
            this->__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
            this->__VnoInFunc_pop_active_object(vlProcess, vlSymsp, __Vtask_pop_active_object__62__Vfuncout);
        }
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_string\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream__63__Vfuncout;
    // Body
    {
        if ((VlNull{} == ([&]() {
                        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vfunc_get_stream__63__Vfuncout);
                    }(), __Vfunc_get_stream__63__Vfuncout))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_string(vlSymsp, name, value);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_time(Varchitecture__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_time\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream__65__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == ([&]() {
                        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vfunc_get_stream__65__Vfuncout);
                    }(), __Vfunc_get_stream__65__Vfuncout))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_time(vlSymsp, name, value);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_record_generic\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream__67__Vfuncout;
    // Body
    {
        if ((VlNull{} == ([&]() {
                        this->__VnoInFunc_get_stream(vlProcess, vlSymsp, __Vfunc_get_stream__67__Vfuncout);
                    }(), __Vfunc_get_stream__67__Vfuncout))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_do_record_generic(vlSymsp, name, value, type_name);
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_use_record_attribute(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &use_record_attribute__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_use_record_attribute\n"); );
    // Body
    use_record_attribute__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_record_attribute_handle(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_record_attribute_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_get_record_attribute_handle\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_handle__69__Vfuncout;
    __Vfunc_get_handle__69__Vfuncout = 0;
    // Body
    this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__69__Vfuncout);
    get_record_attribute_handle__Vfuncrtn = __Vfunc_get_handle__69__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_open(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_open\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_close(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_close\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_free(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_free\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_int(Varchitecture__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_int\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_real(Varchitecture__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_field_real\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object\n"); );
    // Locals
    IData/*27:0*/ __Vfunc_get_recursion_policy__70__Vfuncout;
    __Vfunc_get_recursion_policy__70__Vfuncout = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_field_op> __Vfunc_m_get_available_op__71__Vfuncout;
    CData/*0:0*/ __Vtask_user_hook_enabled__74__Vfuncout;
    __Vtask_user_hook_enabled__74__Vfuncout = 0;
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_field_op> unnamedblk2__DOT__field_op;
    if (((0x00040000U != ([&]() {
                        this->__VnoInFunc_get_recursion_policy(vlSymsp, __Vfunc_get_recursion_policy__70__Vfuncout);
                    }(), __Vfunc_get_recursion_policy__70__Vfuncout)) 
         & (VlNull{} != value))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__VnoInFunc_m_get_available_op(vlProcess, vlSymsp, __Vfunc_m_get_available_op__71__Vfuncout);
        unnamedblk2__DOT__field_op = __Vfunc_m_get_available_op__71__Vfuncout;
        VL_NULL_CHECK(unnamedblk2__DOT__field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 512)->__VnoInFunc_set(vlProcess, vlSymsp, 0x00000040U, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this}, VlNull{});
        VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 513)->__VnoInFunc_do_execute_op(vlProcess, vlSymsp, unnamedblk2__DOT__field_op);
        if (([&]() {
                    VL_NULL_CHECK(unnamedblk2__DOT__field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 514)
             ->__VnoInFunc_user_hook_enabled(vlProcess, vlSymsp, __Vtask_user_hook_enabled__74__Vfuncout);
                }(), (IData)(__Vtask_user_hook_enabled__74__Vfuncout))) {
            VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 515)->__VnoInFunc_do_record(vlProcess, vlSymsp, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>{this});
        }
        VL_NULL_CHECK(unnamedblk2__DOT__field_op, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 516)->__VnoInFunc_m_recycle(vlSymsp);
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_string(Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_string\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_time(Varchitecture__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_time\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_generic(Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_generic\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_open_file(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_open_file\n"); );
    // Body
    open_file__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create_stream(Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_create_stream\n"); );
    // Body
    create_stream__Vfuncrtn = 0xffffffffU;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_set_attribute(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_m_set_attribute\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_attribute(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_set_attribute\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_check_handle_kind(Varchitecture__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_check_handle_kind\n"); );
    // Body
    check_handle_kind__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_begin_tr(Varchitecture__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_begin_tr\n"); );
    // Body
    begin_tr__Vfuncrtn = 0xffffffffU;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_end_tr(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_end_tr\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_link_tr(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_link_tr\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free_tr(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_free_tr\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__78__Vfuncout;
    __Vfunc___VBasicRand__78__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__78__Vfuncout);
            }(), __Vfunc___VBasicRand__78__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_warn_null_stream = 0;
    __PVT__m_is_opened = 0;
    __PVT__m_is_closed = 0;
    __PVT__m_open_time = VL_SCOPED_RAND_RESET_Q(64, 14110915553244549694ULL, 6023116248236803926ull);
    __PVT__m_close_time = VL_SCOPED_RAND_RESET_Q(64, 14110915553244549694ULL, 5696291924415242857ull);
    __PVT__recording_depth = 0;
    __PVT__default_radix = 0;
    __PVT__identifier = 0;
    __PVT__policy = 0;
}

Varchitecture_uvm_pkg__03a__03auvm_recorder::~Varchitecture_uvm_pkg__03a__03auvm_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_recorder>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_recorder::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_recorder::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_recorder::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_stream_dap:" + VL_TO_STRING(__PVT__m_stream_dap);
    out += ", m_warn_null_stream:" + VL_TO_STRING(__PVT__m_warn_null_stream);
    out += ", m_is_opened:" + VL_TO_STRING(__PVT__m_is_opened);
    out += ", m_is_closed:" + VL_TO_STRING(__PVT__m_is_closed);
    out += ", m_open_time:" + VL_TO_STRING(__PVT__m_open_time);
    out += ", m_close_time:" + VL_TO_STRING(__PVT__m_close_time);
    out += ", recording_depth:" + VL_TO_STRING(__PVT__recording_depth);
    out += ", default_radix:" + VL_TO_STRING(__PVT__default_radix);
    out += ", identifier:" + VL_TO_STRING(__PVT__identifier);
    out += ", policy:" + VL_TO_STRING(__PVT__policy);
    out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_policy::to_string_middle();
    return (out);
}
