// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

VlCoroutine Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__0(Vtest_simple_register_uvm___024root* vlSelf);
VlCoroutine Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__1(Vtest_simple_register_uvm___024root* vlSelf);
VlCoroutine Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__2(Vtest_simple_register_uvm___024root* vlSelf, VlProcessRef vlProcess);

void Vtest_simple_register_uvm___024root___eval_initial(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_initial\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__2(vlSelf, std::make_shared<VlProcess>());
}

VlCoroutine Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__0(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_simple_register_uvm__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "test_simple_register_uvm.sv", 
                                             296);
        vlSelfRef.test_simple_register_uvm__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.test_simple_register_uvm__DOT__clk)));
    }
}

VlCoroutine Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__1(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_simple_register_uvm__DOT__rst_n = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "test_simple_register_uvm.sv", 
                                         302);
    vlSelfRef.test_simple_register_uvm__DOT__rst_n = 1U;
}

VlCoroutine Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__2(Vtest_simple_register_uvm___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    std::string __Vtask_run_test__1__test_name;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> TOP__uvm_pkg__DOT__run_test__Vstatic__top;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> TOP__uvm_pkg__DOT__run_test__Vstatic__cs;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "vif"s, (&vlSymsp->TOP__test_simple_register_uvm__DOT__reg_if));
    __Vtask_run_test__1__test_name = "RegisterTest"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
    TOP__uvm_pkg__DOT__run_test__Vstatic__cs = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(TOP__uvm_pkg__DOT__run_test__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 49)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
    TOP__uvm_pkg__DOT__run_test__Vstatic__top = __Vtask_get_root__3__Vfuncout;
    co_await VL_NULL_CHECK(TOP__uvm_pkg__DOT__run_test__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 50)->__VnoInFunc_run_test(vlProcess, vlSymsp, __Vtask_run_test__1__test_name);
    vlProcess->state(VlProcess::FINISHED);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_simple_register_uvm___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtest_simple_register_uvm___024root___eval_triggers__act(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_triggers__act\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h69246a8d__0;
    __Vtrigprevexpr_h69246a8d__0 = 0;
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_he8f502e3__3_Vtrigm_d)) 
                                               << 3U));
    vlSelfRef.__VvifTrigger_he8f502e3__3_Vtrigm_d = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_he8f502e3__2_Vtrigm_enable)) 
                                               << 2U));
    vlSelfRef.__VvifTrigger_he8f502e3__2_Vtrigm_enable = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_he8f502e3__1_Vtrigm_q)) 
                                               << 1U));
    vlSelfRef.__VvifTrigger_he8f502e3__1_Vtrigm_q = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VvifTrigger_he8f502e3__0_Vtrigm_clk)));
    vlSelfRef.__VvifTrigger_he8f502e3__0_Vtrigm_clk = 0U;
    __Vtrigprevexpr_h69246a8d__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,8, 
                                                 ((((IData)(__Vtrigprevexpr_h69246a8d__0) 
                                                    != (IData)(vlSelfRef.__Vtrigprevexpr_h69246a8d__1)) 
                                                   << 4U) 
                                                  | (((vlSelfRef.__VdynSched.evaluate() 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.test_simple_register_uvm__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_simple_register_uvm__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSymsp->TOP__test_simple_register_uvm__DOT__reg_if.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_simple_register_uvm__DOT__reg_if__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__test_simple_register_uvm__DOT__reg_if__clk__0 
        = vlSymsp->TOP__test_simple_register_uvm__DOT__reg_if.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_simple_register_uvm__DOT__rst_n__0 
        = vlSelfRef.test_simple_register_uvm__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_h69246a8d__1 = __Vtrigprevexpr_h69246a8d__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_simple_register_uvm___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vtest_simple_register_uvm___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtest_simple_register_uvm___024root___act_sequent__TOP__0(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___act_sequent__TOP__0\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__test_simple_register_uvm__DOT__reg_if.clk 
        = vlSelfRef.test_simple_register_uvm__DOT__clk;
    vlSelfRef.__VvifTrigger_he8f502e3__0_Vtrigm_clk = 1U;
}

void Vtest_simple_register_uvm___024root___eval_act(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_act\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtest_simple_register_uvm___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtest_simple_register_uvm___024root___nba_sequent__TOP__0(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___nba_sequent__TOP__0\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.test_simple_register_uvm__DOT__rst_n) {
        if (vlSymsp->TOP__test_simple_register_uvm__DOT__reg_if.enable) {
            vlSelfRef.test_simple_register_uvm__DOT____Vcellout__dut__q 
                = vlSymsp->TOP__test_simple_register_uvm__DOT__reg_if.d;
        }
    } else {
        vlSelfRef.test_simple_register_uvm__DOT____Vcellout__dut__q = 0U;
    }
    vlSymsp->TOP__test_simple_register_uvm__DOT__reg_if.q 
        = vlSelfRef.test_simple_register_uvm__DOT____Vcellout__dut__q;
    vlSelfRef.__VvifTrigger_he8f502e3__1_Vtrigm_q = 1U;
}

void Vtest_simple_register_uvm___024root___eval_nba(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_nba\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtest_simple_register_uvm___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtest_simple_register_uvm___024root___timing_commit(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___timing_commit\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hbd132277__0.commit(
                                                   "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void Vtest_simple_register_uvm___024root___timing_resume(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___timing_resume\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdynSched.resume();
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered
         [0U])) {
        vlSelfRef.__VtrigSched_hbd132277__0.resume(
                                                   "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtest_simple_register_uvm___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtest_simple_register_uvm___024root___eval_phase__act(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_phase__act\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtest_simple_register_uvm___024root___eval_triggers__act(vlSelf);
    Vtest_simple_register_uvm___024root___timing_commit(vlSelf);
    Vtest_simple_register_uvm___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtest_simple_register_uvm___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtest_simple_register_uvm___024root___timing_resume(vlSelf);
        Vtest_simple_register_uvm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtest_simple_register_uvm___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtest_simple_register_uvm___024root___eval_phase__nba(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_phase__nba\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtest_simple_register_uvm___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtest_simple_register_uvm___024root___eval_nba(vlSelf);
        Vtest_simple_register_uvm___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vtest_simple_register_uvm___024root___eval(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtest_simple_register_uvm___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("test_simple_register_uvm.sv", 276, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtest_simple_register_uvm___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("test_simple_register_uvm.sv", 276, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtest_simple_register_uvm___024root___eval_phase__act(vlSelf));
    } while (Vtest_simple_register_uvm___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtest_simple_register_uvm___024root___eval_debug_assertions(Vtest_simple_register_uvm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_simple_register_uvm___024root___eval_debug_assertions\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
