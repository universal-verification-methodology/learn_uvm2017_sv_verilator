// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_time__Vclpkg::__VnoInFunc_set_time_resolution(Vpools_top__Syms* __restrict vlSymsp, double res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_time__Vclpkg::__VnoInFunc_set_time_resolution\n"); );
    // Body
    this->__PVT__m_resolution = res;
}

Vpools_top_uvm_pkg__03a__03auvm_time::Vpools_top_uvm_pkg__03a__03auvm_time(Vpools_top__Syms* __restrict vlSymsp, std::string name, double res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_name = name;
    this->__PVT__m_res = ((0.0 == res) ? vlSymsp->TOP__uvm_pkg__03a__03auvm_time__Vclpkg.__PVT__m_resolution
                           : res);
    this->__VnoInFunc_reset(vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_name\n"); );
    // Body
    get_name__Vfuncrtn = this->__PVT__m_name;
}

void Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_reset\n"); );
    // Body
    this->__PVT__m_time = 0ULL;
}

void Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_to_m_res(Vpools_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs, double &to_m_res__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_to_m_res\n"); );
    // Body
    to_m_res__Vfuncrtn = ((t / VL_ITOR_D_Q(64, scaled)) 
                          * (secs / this->__PVT__m_res));
}

void Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_realtime(Vpools_top__Syms* __restrict vlSymsp, QData/*63:0*/ scaled, double secs, double &get_realtime__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_realtime\n"); );
    // Body
    get_realtime__Vfuncrtn = (((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                * VL_ITOR_D_Q(64, scaled)) 
                               * this->__PVT__m_res) 
                              / secs);
}

void Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_incr(Vpools_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_incr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__Vfuncout;
    __Vfunc_uvm_report_enabled__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    std::string __Vfunc_uvm_report_enabled__1__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__4__Vfuncout;
    __Vtask_uvm_report_enabled__4__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__5__id;
    std::string __Vtask_uvm_report_error__5__message;
    IData/*31:0*/ __Vtask_uvm_report_error__5__verbosity;
    __Vtask_uvm_report_error__5__verbosity = 0;
    std::string __Vtask_uvm_report_error__5__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__5__line;
    __Vtask_uvm_report_error__5__line = 0;
    std::string __Vtask_uvm_report_error__5__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__5__report_enabled_checked;
    __Vtask_uvm_report_error__5__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    std::string __Vfunc_uvm_report_enabled__9__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__12__Vfuncout;
    __Vtask_uvm_report_enabled__12__Vfuncout = 0;
    double __Vfunc_to_m_res__14__Vfuncout;
    __Vfunc_to_m_res__14__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((t < 0.0)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__1__id = "UVM/TLM/TIMENEG"s;
                            __Vfunc_uvm_report_enabled__1__severity = 2U;
                            __Vfunc_uvm_report_enabled__1__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__2__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__3__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), __Vfunc_uvm_report_enabled__1__id, __Vtask_uvm_report_enabled__4__Vfuncout);
                            __Vfunc_uvm_report_enabled__1__Vfuncout 
                                = __Vtask_uvm_report_enabled__4__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__1__Vfuncout))) {
                __Vtask_uvm_report_error__5__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__5__context_name = ""s;
                __Vtask_uvm_report_error__5__line = 0x00000086U;
                __Vtask_uvm_report_error__5__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s;
                __Vtask_uvm_report_error__5__verbosity = 0U;
                __Vtask_uvm_report_error__5__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot increment uvm_tlm_time variable "s, this->__PVT__m_name), " by a negative value"s));
                __Vtask_uvm_report_error__5__id = "UVM/TLM/TIMENEG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__6__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__7__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__5__id, __Vtask_uvm_report_error__5__message, __Vtask_uvm_report_error__5__verbosity, __Vtask_uvm_report_error__5__filename, __Vtask_uvm_report_error__5__line, __Vtask_uvm_report_error__5__context_name, (IData)(__Vtask_uvm_report_error__5__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((0ULL == scaled)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__9__id = "UVM/TLM/BADSCALE"s;
                            __Vfunc_uvm_report_enabled__9__severity = 3U;
                            __Vfunc_uvm_report_enabled__9__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__10__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__11__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), __Vfunc_uvm_report_enabled__9__id, __Vtask_uvm_report_enabled__12__Vfuncout);
                            __Vfunc_uvm_report_enabled__9__Vfuncout 
                                = __Vtask_uvm_report_enabled__12__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/TLM/BADSCALE"s, "uvm_tlm_time::incr() called with a scaled time literal that is smaller than the current timescale"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s, 0x0000008bU, ""s, 1U);
            }
        }
        this->__PVT__m_time = VL_RTOIROUND_Q_D((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                                + ([&]() {
                        this->__VnoInFunc_to_m_res(vlSymsp, t, scaled, secs, __Vfunc_to_m_res__14__Vfuncout);
                    }(), __Vfunc_to_m_res__14__Vfuncout)));
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_decr(Vpools_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_decr\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__Vfuncout;
    __Vfunc_uvm_report_enabled__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__15__verbosity;
    __Vfunc_uvm_report_enabled__15__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__15__severity;
    __Vfunc_uvm_report_enabled__15__severity = 0;
    std::string __Vfunc_uvm_report_enabled__15__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__18__Vfuncout;
    __Vtask_uvm_report_enabled__18__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__19__id;
    std::string __Vtask_uvm_report_error__19__message;
    IData/*31:0*/ __Vtask_uvm_report_error__19__verbosity;
    __Vtask_uvm_report_error__19__verbosity = 0;
    std::string __Vtask_uvm_report_error__19__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__19__line;
    __Vtask_uvm_report_error__19__line = 0;
    std::string __Vtask_uvm_report_error__19__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__19__report_enabled_checked;
    __Vtask_uvm_report_error__19__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__20__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__21__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__Vfuncout;
    __Vfunc_uvm_report_enabled__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__23__verbosity;
    __Vfunc_uvm_report_enabled__23__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__23__severity;
    __Vfunc_uvm_report_enabled__23__severity = 0;
    std::string __Vfunc_uvm_report_enabled__23__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__26__Vfuncout;
    __Vtask_uvm_report_enabled__26__Vfuncout = 0;
    double __Vfunc_to_m_res__28__Vfuncout;
    __Vfunc_to_m_res__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__Vfuncout;
    __Vfunc_uvm_report_enabled__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    std::string __Vfunc_uvm_report_enabled__29__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__32__Vfuncout;
    __Vtask_uvm_report_enabled__32__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__33__id;
    std::string __Vtask_uvm_report_error__33__message;
    IData/*31:0*/ __Vtask_uvm_report_error__33__verbosity;
    __Vtask_uvm_report_error__33__verbosity = 0;
    std::string __Vtask_uvm_report_error__33__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__33__line;
    __Vtask_uvm_report_error__33__line = 0;
    std::string __Vtask_uvm_report_error__33__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__33__report_enabled_checked;
    __Vtask_uvm_report_error__33__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((t < 0.0)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__15__id = "UVM/TLM/TIMENEG"s;
                            __Vfunc_uvm_report_enabled__15__severity = 2U;
                            __Vfunc_uvm_report_enabled__15__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__16__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__17__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__15__verbosity, (IData)(__Vfunc_uvm_report_enabled__15__severity), __Vfunc_uvm_report_enabled__15__id, __Vtask_uvm_report_enabled__18__Vfuncout);
                            __Vfunc_uvm_report_enabled__15__Vfuncout 
                                = __Vtask_uvm_report_enabled__18__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__15__Vfuncout))) {
                __Vtask_uvm_report_error__19__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__19__context_name = ""s;
                __Vtask_uvm_report_error__19__line = 0x000000a1U;
                __Vtask_uvm_report_error__19__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s;
                __Vtask_uvm_report_error__19__verbosity = 0U;
                __Vtask_uvm_report_error__19__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot decrement uvm_tlm_time variable "s, this->__PVT__m_name), " by a negative value"s));
                __Vtask_uvm_report_error__19__id = "UVM/TLM/TIMENEG"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__20__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__20__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__21__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__21__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__19__id, __Vtask_uvm_report_error__19__message, __Vtask_uvm_report_error__19__verbosity, __Vtask_uvm_report_error__19__filename, __Vtask_uvm_report_error__19__line, __Vtask_uvm_report_error__19__context_name, (IData)(__Vtask_uvm_report_error__19__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((0ULL == scaled)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__23__id = "UVM/TLM/BADSCALE"s;
                            __Vfunc_uvm_report_enabled__23__severity = 3U;
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
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/TLM/BADSCALE"s, "uvm_tlm_time::decr() called with a scaled time literal that is smaller than the current timescale"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s, 0x000000a6U, ""s, 1U);
            }
        }
        this->__PVT__m_time = VL_RTOIROUND_Q_D((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                                                - ([&]() {
                        this->__VnoInFunc_to_m_res(vlSymsp, t, scaled, secs, __Vfunc_to_m_res__28__Vfuncout);
                    }(), __Vfunc_to_m_res__28__Vfuncout)));
        if ((VL_ITOR_D_Q(64, this->__PVT__m_time) < 0.0)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__29__id = "UVM/TLM/TOODECR"s;
                            __Vfunc_uvm_report_enabled__29__severity = 2U;
                            __Vfunc_uvm_report_enabled__29__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__30__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__31__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), __Vfunc_uvm_report_enabled__29__id, __Vtask_uvm_report_enabled__32__Vfuncout);
                            __Vfunc_uvm_report_enabled__29__Vfuncout 
                                = __Vtask_uvm_report_enabled__32__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__29__Vfuncout))) {
                __Vtask_uvm_report_error__33__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__33__context_name = ""s;
                __Vtask_uvm_report_error__33__line = 0x000000acU;
                __Vtask_uvm_report_error__33__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/tlm2/uvm_tlm_time.svh"s;
                __Vtask_uvm_report_error__33__verbosity = 0U;
                __Vtask_uvm_report_error__33__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Cannot decrement uvm_tlm_time variable "s, this->__PVT__m_name), " to a negative value"s));
                __Vtask_uvm_report_error__33__id = "UVM/TLM/TOODECR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__35__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__33__id, __Vtask_uvm_report_error__33__message, __Vtask_uvm_report_error__33__verbosity, __Vtask_uvm_report_error__33__filename, __Vtask_uvm_report_error__33__line, __Vtask_uvm_report_error__33__context_name, (IData)(__Vtask_uvm_report_error__33__report_enabled_checked));
            }
            this->__VnoInFunc_reset(vlSymsp);
        }
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_abstime(Vpools_top__Syms* __restrict vlSymsp, double secs, double &get_abstime__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_get_abstime\n"); );
    // Body
    get_abstime__Vfuncrtn = ((VL_ITOR_D_Q(64, this->__PVT__m_time) 
                              * this->__PVT__m_res) 
                             / secs);
}

void Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_set_abstime(Vpools_top__Syms* __restrict vlSymsp, double t, double secs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::__VnoInFunc_set_abstime\n"); );
    // Body
    this->__PVT__m_time = VL_RTOIROUND_Q_D(((t * secs) 
                                            / this->__PVT__m_res));
}

void Vpools_top_uvm_pkg__03a__03auvm_time::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_res = 0;
    __PVT__m_time = VL_SCOPED_RAND_RESET_Q(64, 15686929798528229692ULL, 8253044889826645110ull);
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_time>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_time::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_time::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_time::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_res:" + VL_TO_STRING(__PVT__m_res);
    out += ", m_time:" + VL_TO_STRING(__PVT__m_time);
    out += ", m_name:" + VL_TO_STRING(__PVT__m_name);
    return (out);
}
