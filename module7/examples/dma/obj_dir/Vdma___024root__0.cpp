// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

VlCoroutine Vdma___024root___eval_initial__TOP__Vtiming__0(Vdma___024root* vlSelf);
VlCoroutine Vdma___024root___eval_initial__TOP__Vtiming__1(Vdma___024root* vlSelf);
VlCoroutine Vdma___024root___eval_initial__TOP__Vtiming__2(Vdma___024root* vlSelf, VlProcessRef vlProcess);

void Vdma___024root___eval_initial(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_initial\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdma___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdma___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vdma___024root___eval_initial__TOP__Vtiming__2(vlSelf, std::make_shared<VlProcess>());
}

VlCoroutine Vdma___024root___eval_initial__TOP__Vtiming__0(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dma__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "dma.sv", 
                                             113);
        vlSelfRef.dma__DOT__clk = (1U & (~ (IData)(vlSelfRef.dma__DOT__clk)));
    }
}

VlCoroutine Vdma___024root___eval_initial__TOP__Vtiming__1(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ dma__DOT__unnamedblk1_1__DOT____Vrepeat0;
    dma__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->TOP__dma__DOT__vif.rst_n = 0U;
    vlSymsp->TOP__dma__DOT__vif.dma_start = 0U;
    vlSelfRef.__VvifTrigger_hd309e00d__2_Vtrigm_dma_start = 1U;
    dma__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, dma__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h73c6bdab__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dma.clk)", 
                                                             "dma.sv", 
                                                             117);
        dma__DOT__unnamedblk1_1__DOT____Vrepeat0 = 
            (dma__DOT__unnamedblk1_1__DOT____Vrepeat0 
             - (IData)(1U));
    }
    vlSymsp->TOP__dma__DOT__vif.rst_n = 1U;
}

VlCoroutine Vdma___024root___eval_initial__TOP__Vtiming__2(Vdma___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    std::string __Vtask_run_test__1__test_name;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> TOP__uvm_pkg__DOT__run_test__Vstatic__top;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> TOP__uvm_pkg__DOT__run_test__Vstatic__cs;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "vif"s, (&vlSymsp->TOP__dma__DOT__vif));
    __Vtask_run_test__1__test_name = "DmaTest"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
    TOP__uvm_pkg__DOT__run_test__Vstatic__cs = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(TOP__uvm_pkg__DOT__run_test__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 49)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
    TOP__uvm_pkg__DOT__run_test__Vstatic__top = __Vtask_get_root__3__Vfuncout;
    co_await VL_NULL_CHECK(TOP__uvm_pkg__DOT__run_test__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 50)->__VnoInFunc_run_test(vlProcess, vlSymsp, __Vtask_run_test__1__test_name);
    vlProcess->state(VlProcess::FINISHED);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdma___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vdma___024root___eval_triggers__act(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_triggers__act\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h69246a8d__0;
    __Vtrigprevexpr_h69246a8d__0 = 0;
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_hd309e00d__6_Vtrigm_dma_channel)) 
                                               << 6U));
    vlSelfRef.__VvifTrigger_hd309e00d__6_Vtrigm_dma_channel = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_hd309e00d__5_Vtrigm_dma_length)) 
                                               << 5U));
    vlSelfRef.__VvifTrigger_hd309e00d__5_Vtrigm_dma_length = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_hd309e00d__4_Vtrigm_dma_dst_addr)) 
                                               << 4U));
    vlSelfRef.__VvifTrigger_hd309e00d__4_Vtrigm_dma_dst_addr = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_hd309e00d__3_Vtrigm_dma_src_addr)) 
                                               << 3U));
    vlSelfRef.__VvifTrigger_hd309e00d__3_Vtrigm_dma_src_addr = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_hd309e00d__2_Vtrigm_dma_start)) 
                                               << 2U));
    vlSelfRef.__VvifTrigger_hd309e00d__2_Vtrigm_dma_start = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_hd309e00d__1_Vtrigm_dma_done)) 
                                               << 1U));
    vlSelfRef.__VvifTrigger_hd309e00d__1_Vtrigm_dma_done = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VvifTrigger_hd309e00d__0_Vtrigm_clk)));
    vlSelfRef.__VvifTrigger_hd309e00d__0_Vtrigm_clk = 0U;
    __Vtrigprevexpr_h69246a8d__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,8, 
                                                 ((((IData)(__Vtrigprevexpr_h69246a8d__0) 
                                                    != (IData)(vlSelfRef.__Vtrigprevexpr_h69246a8d__1)) 
                                                   << 4U) 
                                                  | (((vlSelfRef.__VdynSched.evaluate() 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSymsp->TOP__dma__DOT__vif.rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dma__DOT__vif__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.dma__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dma__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__dma__DOT__clk__0 
        = vlSelfRef.dma__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__dma__DOT__vif__rst_n__0 
        = vlSymsp->TOP__dma__DOT__vif.rst_n;
    vlSelfRef.__Vtrigprevexpr_h69246a8d__1 = __Vtrigprevexpr_h69246a8d__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdma___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vdma___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___trigger_anySet__act\n"); );
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

void Vdma___024root___act_sequent__TOP__0(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___act_sequent__TOP__0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__dma__DOT__vif.clk = vlSelfRef.dma__DOT__clk;
    vlSelfRef.__VvifTrigger_hd309e00d__0_Vtrigm_clk = 1U;
}

void Vdma___024root___eval_act(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_act\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vdma___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdma___024root___nba_sequent__TOP__0(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___nba_sequent__TOP__0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vdly__dma__DOT__dut__DOT__length_reg;
    __Vdly__dma__DOT__dut__DOT__length_reg = 0;
    SData/*15:0*/ __Vdly__dma__DOT__dut__DOT__count;
    __Vdly__dma__DOT__dut__DOT__count = 0;
    // Body
    __Vdly__dma__DOT__dut__DOT__length_reg = vlSelfRef.dma__DOT__dut__DOT__length_reg;
    __Vdly__dma__DOT__dut__DOT__count = vlSelfRef.dma__DOT__dut__DOT__count;
    if (vlSymsp->TOP__dma__DOT__vif.rst_n) {
        if (((IData)(vlSymsp->TOP__dma__DOT__vif.dma_start) 
             & (~ (IData)(vlSelfRef.dma__DOT____Vcellout__dut__dma_done)))) {
            vlSelfRef.dma__DOT__dut__DOT__src_addr_reg 
                = vlSymsp->TOP__dma__DOT__vif.dma_src_addr;
            vlSelfRef.dma__DOT__dut__DOT__dst_addr_reg 
                = vlSymsp->TOP__dma__DOT__vif.dma_dst_addr;
            __Vdly__dma__DOT__dut__DOT__length_reg 
                = vlSymsp->TOP__dma__DOT__vif.dma_length;
            vlSelfRef.dma__DOT__dut__DOT__channel_reg 
                = vlSymsp->TOP__dma__DOT__vif.dma_channel;
            __Vdly__dma__DOT__dut__DOT__count = 0U;
        } else if (vlSelfRef.dma__DOT____Vcellout__dut__dma_done) {
            vlSelfRef.dma__DOT____Vcellout__dut__dma_done = 0U;
        } else if (((IData)(vlSelfRef.dma__DOT__dut__DOT__count) 
                    < (IData)(vlSelfRef.dma__DOT__dut__DOT__length_reg))) {
            __Vdly__dma__DOT__dut__DOT__count = (0x0000ffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.dma__DOT__dut__DOT__count)));
        } else {
            vlSelfRef.dma__DOT____Vcellout__dut__dma_done = 1U;
        }
    } else {
        vlSelfRef.dma__DOT____Vcellout__dut__dma_done = 0U;
        vlSelfRef.dma__DOT__dut__DOT__src_addr_reg = 0U;
        vlSelfRef.dma__DOT__dut__DOT__dst_addr_reg = 0U;
        __Vdly__dma__DOT__dut__DOT__length_reg = 0U;
        vlSelfRef.dma__DOT__dut__DOT__channel_reg = 0U;
        __Vdly__dma__DOT__dut__DOT__count = 0U;
    }
    vlSelfRef.dma__DOT__dut__DOT__length_reg = __Vdly__dma__DOT__dut__DOT__length_reg;
    vlSelfRef.dma__DOT__dut__DOT__count = __Vdly__dma__DOT__dut__DOT__count;
    vlSymsp->TOP__dma__DOT__vif.dma_done = vlSelfRef.dma__DOT____Vcellout__dut__dma_done;
    vlSelfRef.__VvifTrigger_hd309e00d__1_Vtrigm_dma_done = 1U;
}

void Vdma___024root___eval_nba(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_nba\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdma___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdma___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vdma___024root___timing_commit(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___timing_commit\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h73c6bdab__0.commit(
                                                   "@(posedge dma.clk)");
    }
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hbd132277__0.commit(
                                                   "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void Vdma___024root___timing_resume(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___timing_resume\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h73c6bdab__0.resume(
                                                   "@(posedge dma.clk)");
    }
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

void Vdma___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vdma___024root___eval_phase__act(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_phase__act\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vdma___024root___eval_triggers__act(vlSelf);
    Vdma___024root___timing_commit(vlSelf);
    Vdma___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdma___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vdma___024root___timing_resume(vlSelf);
        Vdma___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vdma___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vdma___024root___eval_phase__nba(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_phase__nba\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdma___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdma___024root___eval_nba(vlSelf);
        Vdma___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vdma___024root___eval(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdma___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("dma.sv", 103, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdma___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("dma.sv", 103, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vdma___024root___eval_phase__act(vlSelf));
    } while (Vdma___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vdma___024root___eval_debug_assertions(Vdma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root___eval_debug_assertions\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
