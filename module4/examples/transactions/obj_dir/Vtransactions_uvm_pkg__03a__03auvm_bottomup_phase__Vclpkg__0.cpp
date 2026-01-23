// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_phase(vlProcess, vlSymsp, name, 0U, VlNull{}) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_traverse\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__1__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__2__Vfuncout;
    IData/*31:0*/ __Vtask_get_first_child__3__Vfuncout;
    __Vtask_get_first_child__3__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> __Vtask_get_child__5__Vfuncout;
    IData/*31:0*/ __Vtask_get_next_child__6__Vfuncout;
    __Vtask_get_next_child__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__Vfuncout;
    __Vfunc_uvm_report_enabled__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    std::string __Vfunc_uvm_report_enabled__7__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__10__Vfuncout;
    __Vtask_uvm_report_enabled__10__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__11__id;
    std::string __Vtask_uvm_report_info__11__message;
    IData/*31:0*/ __Vtask_uvm_report_info__11__verbosity;
    __Vtask_uvm_report_info__11__verbosity = 0;
    std::string __Vtask_uvm_report_info__11__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__11__line;
    __Vtask_uvm_report_info__11__line = 0;
    std::string __Vtask_uvm_report_info__11__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__11__report_enabled_checked;
    __Vtask_uvm_report_info__11__report_enabled_checked = 0;
    std::string __Vtask_get_name__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    std::string __Vtask_get_name__14__Vfuncout;
    std::string __Vtask_get_name__15__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_domain> __Vfunc_get_common_domain__19__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__Vfuncout;
    __Vfunc_uvm_report_enabled__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__25__verbosity;
    __Vfunc_uvm_report_enabled__25__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__25__severity;
    __Vfunc_uvm_report_enabled__25__severity = 0;
    std::string __Vfunc_uvm_report_enabled__25__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__28__Vfuncout;
    __Vtask_uvm_report_enabled__28__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph;
    std::string name;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_domain> phase_domain;
    VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 53)->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__1__Vfuncout);
    phase_domain = __Vtask_get_domain__1__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_domain> comp_domain;
    VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 54)->__VnoInFunc_get_domain(vlSymsp, __Vtask_get_domain__2__Vfuncout);
    comp_domain = __Vtask_get_domain__2__Vfuncout;
    if ((0U != ([&]() {
                    VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 56)
                ->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__3__Vfuncout);
                }(), __Vtask_get_first_child__3__Vfuncout))) {
        do {
            this->__VnoInFunc_traverse(vlProcess, vlSymsp, 
                                       ([&]() {
                        VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 58)
                                        ->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __Vtask_get_child__5__Vfuncout);
                    }(), __Vtask_get_child__5__Vfuncout), phase, state);
        } while ((0U != ([&]() {
                        VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 59)
                         ->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__6__Vfuncout);
                    }(), __Vtask_get_next_child__6__Vfuncout)));
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__7__id = "PH_TRACE"s;
                        __Vfunc_uvm_report_enabled__7__severity = 0U;
                        __Vfunc_uvm_report_enabled__7__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__8__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__9__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), __Vfunc_uvm_report_enabled__7__id, __Vtask_uvm_report_enabled__10__Vfuncout);
                        __Vfunc_uvm_report_enabled__7__Vfuncout 
                            = __Vtask_uvm_report_enabled__10__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__7__Vfuncout))) {
            __Vtask_uvm_report_info__11__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__11__context_name = ""s;
            __Vtask_uvm_report_info__11__line = 0x00000040U;
            __Vtask_uvm_report_info__11__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh"s;
            __Vtask_uvm_report_info__11__verbosity = 0x000001f4U;
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 64)
                         ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__12__Vfuncout);
                }(), __Vtask_get_name__12__Vfuncout);
            __Vtemp_2 = Vtransactions___024unit::__Venumtab_enum_name25
                .at(state);
            __Vtemp_3 = ([&]() {
                    VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 64)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                }(), __Vtask_get_full_name__13__Vfuncout);
            __Vtemp_4 = ([&]() {
                    VL_NULL_CHECK(comp_domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 64)
                         ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__14__Vfuncout);
                }(), __Vtask_get_name__14__Vfuncout);
            __Vtemp_5 = ([&]() {
                    VL_NULL_CHECK(phase_domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 64)
                         ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__15__Vfuncout);
                }(), __Vtask_get_name__15__Vfuncout);
            __Vtask_uvm_report_info__11__message = VL_SFORMATF_N_NX("bottomup-phase phase=%@ state=%@ comp=%@ comp.domain=%@ phase.domain=%@",0,
                                                                    -1,
                                                                    &(__Vtemp_1),
                                                                    -1,
                                                                    &(__Vtemp_2),
                                                                    -1,
                                                                    &(__Vtemp_3),
                                                                    -1,
                                                                    &(__Vtemp_4),
                                                                    -1,
                                                                    &(__Vtemp_5)) ;
            __Vtask_uvm_report_info__11__id = "PH_TRACE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__17__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__11__id, __Vtask_uvm_report_info__11__message, __Vtask_uvm_report_info__11__verbosity, __Vtask_uvm_report_info__11__filename, __Vtask_uvm_report_info__11__line, __Vtask_uvm_report_info__11__context_name, (IData)(__Vtask_uvm_report_info__11__report_enabled_checked));
        }
    }
    if (((phase_domain == ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __Vfunc_get_common_domain__19__Vfuncout);
                    }(), __Vfunc_get_common_domain__19__Vfuncout)) 
         || (phase_domain == comp_domain))) {
        if ((8U == state)) {
            VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 70)->__PVT__m_current_phase 
                = phase;
            VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 71)->__VnoInFunc_m_apply_verbosity_settings(vlProcess, vlSymsp, phase);
            VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 72)->__VnoInFunc_phase_started(vlProcess, vlSymsp, phase);
        } else if ((0x00000010U == state)) {
            unnamedblk1__DOT__ph = VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase>{this};
            if (VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 76)
                ->__PVT__m_phase_imps.exists(VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase>{this})) {
                unnamedblk1__DOT__ph = VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 77)
                    ->__PVT__m_phase_imps.at(VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase>{this});
            }
            VL_NULL_CHECK(unnamedblk1__DOT__ph, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 78)->__VnoInFunc_execute(vlProcess, vlSymsp, comp, phase);
        } else if ((0x00000020U == state)) {
            VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 81)->__VnoInFunc_phase_ready_to_end(vlSymsp, phase);
        } else if ((0x00000040U == state)) {
            VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 84)->__VnoInFunc_phase_ended(vlSymsp, phase);
            VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 85)->__PVT__m_current_phase = VlNull{};
        } else if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__25__id = "PH_BADEXEC"s;
                        __Vfunc_uvm_report_enabled__25__severity = 3U;
                        __Vfunc_uvm_report_enabled__25__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__26__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__27__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                           ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__25__verbosity, (IData)(__Vfunc_uvm_report_enabled__25__severity), __Vfunc_uvm_report_enabled__25__id, __Vtask_uvm_report_enabled__28__Vfuncout);
                        __Vfunc_uvm_report_enabled__25__Vfuncout 
                            = __Vtask_uvm_report_enabled__28__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__25__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADEXEC"s, "bottomup phase traverse internal error"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh"s, 0x00000058U, ""s, 1U);
        }
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_execute(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_execute\n"); );
    // Locals
    VlClassRef<Vtransactions_std__03a__03aprocess> __Vfunc_self__30__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__32__Vfuncout;
    __Vfunc_uvm_create_random_seed__32__Vfuncout = 0;
    std::string __Vfunc_uvm_create_random_seed__32__type_id;
    std::string __Vfunc_uvm_create_random_seed__32__inst_id;
    std::string __Vtask_get_full_name__33__Vfuncout;
    std::string __Vtask_get_type_name__34__Vfuncout;
    std::string __Vfunc_uvm_instance_scope__36__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_instance_scope__36____Vincrement2;
    __Vfunc_uvm_instance_scope__36____Vincrement2 = 0;
    std::string __Vtask_uvm_report_error__37__id;
    std::string __Vtask_uvm_report_error__37__message;
    IData/*31:0*/ __Vtask_uvm_report_error__37__verbosity;
    __Vtask_uvm_report_error__37__verbosity = 0;
    std::string __Vtask_uvm_report_error__37__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__37__line;
    __Vtask_uvm_report_error__37__line = 0;
    std::string __Vtask_uvm_report_error__37__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__37__report_enabled_checked;
    __Vtask_uvm_report_error__37__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__41__Vfuncout;
    __Vfunc_uvm_oneway_hash__41__Vfuncout = 0;
    std::string __Vfunc_uvm_oneway_hash__41__string_in;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__41__seed;
    __Vfunc_uvm_oneway_hash__41__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT___byte = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit;
    __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    VlClassRef<Vtransactions_std__03a__03aprocess> proc;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__30__Vfuncout);
    proc = __Vfunc_self__30__Vfuncout;
    VL_NULL_CHECK(proc, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 100)->__VnoInFunc_srandom(vlSymsp, 
                                                                                ([&]() {
                __Vfunc_uvm_create_random_seed__32__inst_id 
                    = VL_CVT_PACK_STR_NN(([&]() {
                            VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 100)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__33__Vfuncout);
                        }(), __Vtask_get_full_name__33__Vfuncout));
                __Vfunc_uvm_create_random_seed__32__type_id 
                    = VL_CVT_PACK_STR_NN(([&]() {
                            VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 100)
                                          ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__34__Vfuncout);
                        }(), __Vtask_get_type_name__34__Vfuncout));
                if ((""s == __Vfunc_uvm_create_random_seed__32__inst_id)) {
                    __Vfunc_uvm_create_random_seed__32__inst_id = "__global__"s;
                }
                if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(__Vfunc_uvm_create_random_seed__32__inst_id))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
                                                                                .at(__Vfunc_uvm_create_random_seed__32__inst_id) 
                        = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
                    .at(__Vfunc_uvm_create_random_seed__32__inst_id);
                __Vfunc_uvm_create_random_seed__32__type_id 
                    = VL_CONCATN_NNN(([&]() {
                            {
                                if ((""s != __Vfunc_uvm_instance_scope__36__Vfuncout)) {
                                    goto __Vlabel0;
                                }
                                VL_SFORMAT_NX(64,__Vfunc_uvm_instance_scope__36__Vfuncout
                                              ,"%Nuvm_pkg.uvm_instance_scope",0,
                                              vlSymsp->name());
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                    = (VL_LEN_IN(__Vfunc_uvm_instance_scope__36__Vfuncout) 
                                       - (IData)(1U));
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                                    = VL_GETC_N(__Vfunc_uvm_instance_scope__36__Vfuncout,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
                                while ((((0U != vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos) 
                                         & (0x2eU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c))) 
                                        & (0x3aU != (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c)))) {
                                    __Vfunc_uvm_instance_scope__36____Vincrement2 
                                        = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                           - (IData)(1U));
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos 
                                        = __Vfunc_uvm_instance_scope__36____Vincrement2;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c 
                                        = VL_GETC_N(__Vfunc_uvm_instance_scope__36__Vfuncout,__Vfunc_uvm_instance_scope__36____Vincrement2);
                                }
                                if ((0U == vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos)) {
                                    __Vtask_uvm_report_error__37__report_enabled_checked = 0U;
                                    __Vtask_uvm_report_error__37__context_name = ""s;
                                    __Vtask_uvm_report_error__37__line = 0U;
                                    __Vtask_uvm_report_error__37__filename = ""s;
                                    __Vtask_uvm_report_error__37__verbosity = 0U;
                                    __Vtask_uvm_report_error__37__message 
                                        = VL_SFORMATF_N_NX("Illegal name %@ in scope string",0,
                                                           -1,
                                                           &(__Vfunc_uvm_instance_scope__36__Vfuncout)) ;
                                    __Vtask_uvm_report_error__37__id = "SCPSTR"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                        = __Vfunc_get__38__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                                      ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                        = __Vtask_get_root__39__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                                      ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__37__id, __Vtask_uvm_report_error__37__message, __Vtask_uvm_report_error__37__verbosity, __Vtask_uvm_report_error__37__filename, __Vtask_uvm_report_error__37__line, __Vtask_uvm_report_error__37__context_name, (IData)(__Vtask_uvm_report_error__37__report_enabled_checked));
                                }
                                __Vfunc_uvm_instance_scope__36__Vfuncout 
                                    = VL_SUBSTR_N(__Vfunc_uvm_instance_scope__36__Vfuncout,0U,vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos);
                                __Vlabel0: ;
                            }
                        }(), __Vfunc_uvm_instance_scope__36__Vfuncout), __Vfunc_uvm_create_random_seed__32__type_id);
                if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 175)
                     ->__PVT__seed_table.exists(__Vfunc_uvm_create_random_seed__32__type_id))) {
                    __Vfunc_uvm_oneway_hash__41__seed 
                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
                    __Vfunc_uvm_oneway_hash__41__string_in 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(__Vfunc_uvm_create_random_seed__32__type_id, "::"s), __Vfunc_uvm_create_random_seed__32__inst_id));
                    __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT___byte = 0;
                    __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0;
                    if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__41__seed)))) {
                        __Vfunc_uvm_oneway_hash__41__seed 
                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
                    }
                    __Vfunc_uvm_oneway_hash__41__Vfuncout 
                        = __Vfunc_uvm_oneway_hash__41__seed;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
                    __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT___byte = 0U;
                    {
                        while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT___byte, 
                                          VL_LEN_IN(__Vfunc_uvm_oneway_hash__41__string_in))) {
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                                = VL_GETC_N(__Vfunc_uvm_oneway_hash__41__string_in,__Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT___byte);
                            if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                                goto __Vlabel1;
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 0U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                   >> 0x1fU);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                            if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                       ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (0x04c11db6U 
                                       ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 1U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                   >> 0x1fU);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                            if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                       ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                          >> 1U)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (0x04c11db6U 
                                       ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 2U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                   >> 0x1fU);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                            if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                       ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                          >> 2U)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (0x04c11db6U 
                                       ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 3U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                   >> 0x1fU);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                            if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                       ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                          >> 3U)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (0x04c11db6U 
                                       ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 4U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                   >> 0x1fU);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                            if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                       ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                          >> 4U)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (0x04c11db6U 
                                       ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 5U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                   >> 0x1fU);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                            if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                       ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                          >> 5U)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (0x04c11db6U 
                                       ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 6U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                   >> 0x1fU);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                            if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                       ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                          >> 6U)))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (0x04c11db6U 
                                       ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 7U;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                                = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                   >> 0x1fU);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                = VL_SHIFTL_III(32,32,32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1, 1U);
                            if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                                 ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                                    >> 7U))) {
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (0x04c11db6U 
                                       ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                    = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                            }
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT__unnamedblk2__DOT___bit = 8U;
                            __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT___byte 
                                = ((IData)(1U) + __Vfunc_uvm_oneway_hash__41__unnamedblk1__DOT___byte);
                        }
                        __Vlabel1: ;
                    }
                    __Vfunc_uvm_oneway_hash__41__Vfuncout 
                        = (__Vfunc_uvm_oneway_hash__41__Vfuncout 
                           + (~ ((((0x0000ff00U & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                       >> 8U))) << 0x00000010U) 
                                 | ((0x0000ff00U & 
                                     (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                      >> 8U)) | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                 >> 0x18U)))));
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 176)
                                                                                ->__PVT__seed_table
                                                                                .at(__Vfunc_uvm_create_random_seed__32__type_id) 
                        = __Vfunc_uvm_oneway_hash__41__Vfuncout;
                }
                if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 178)
                     ->__PVT__count.exists(__Vfunc_uvm_create_random_seed__32__type_id))) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 179)
                                                                                ->__PVT__count
                                                                                .at(__Vfunc_uvm_create_random_seed__32__type_id) = 0U;
                }
                __Vtemp_1 = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                             ->__PVT__seed_table.at(__Vfunc_uvm_create_random_seed__32__type_id) 
                             + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                             ->__PVT__count.at(__Vfunc_uvm_create_random_seed__32__type_id));
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 185)
                                                                                ->__PVT__seed_table
                                                                                .at(__Vfunc_uvm_create_random_seed__32__type_id) 
                    = __Vtemp_1;
                __Vtemp_2 = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
                             ->__PVT__count.at(__Vfunc_uvm_create_random_seed__32__type_id));
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 186)
                                                                                ->__PVT__count
                                                                                .at(__Vfunc_uvm_create_random_seed__32__type_id) 
                    = __Vtemp_2;
                __Vfunc_uvm_create_random_seed__32__Vfuncout 
                    = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_misc.svh", 188)
                    ->__PVT__seed_table.at(__Vfunc_uvm_create_random_seed__32__type_id);
            }(), __Vfunc_uvm_create_random_seed__32__Vfuncout));
    VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_bottomup_phase.svh", 102)->__PVT__m_current_phase 
        = phase;
    this->__VnoInFunc_exec_func(vlProcess, vlSymsp, comp, phase);
}

void Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__44__Vfuncout;
    __Vfunc___Vbasic_randomize__44__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__44__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__44__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___Vbasic_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_bottomup_phase::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtransactions_uvm_pkg__03a__03auvm_phase::to_string_middle();
    return (out);
}
