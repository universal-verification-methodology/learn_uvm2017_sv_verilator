// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

VlCoroutine Vuart_example___024root___eval_initial__TOP__Vtiming__0(Vuart_example___024root* vlSelf);
VlCoroutine Vuart_example___024root___eval_initial__TOP__Vtiming__1(Vuart_example___024root* vlSelf);
VlCoroutine Vuart_example___024root___eval_initial__TOP__Vtiming__2(Vuart_example___024root* vlSelf, VlProcessRef vlProcess);

void Vuart_example___024root___eval_initial(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_initial\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_example___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuart_example___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vuart_example___024root___eval_initial__TOP__Vtiming__2(vlSelf, std::make_shared<VlProcess>());
}

VlCoroutine Vuart_example___024root___eval_initial__TOP__Vtiming__0(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_example__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "uart_example.sv", 
                                             110);
        vlSelfRef.uart_example__DOT__clk = (1U & (~ (IData)(vlSelfRef.uart_example__DOT__clk)));
    }
}

VlCoroutine Vuart_example___024root___eval_initial__TOP__Vtiming__1(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ uart_example__DOT__unnamedblk1_1__DOT____Vrepeat0;
    uart_example__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->TOP__uart_example__DOT__vif.rst_n = 0U;
    vlSymsp->TOP__uart_example__DOT__vif.tx_start = 0U;
    vlSelfRef.__VvifTrigger_h43a827b7__2_Vtrigm_tx_start = 1U;
    vlSymsp->TOP__uart_example__DOT__vif.tx_data = 0U;
    vlSelfRef.__VvifTrigger_h43a827b7__3_Vtrigm_tx_data = 1U;
    uart_example__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, uart_example__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h3da394a3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_example.clk)", 
                                                             "uart_example.sv", 
                                                             113);
        uart_example__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (uart_example__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSymsp->TOP__uart_example__DOT__vif.rst_n = 1U;
}

VlCoroutine Vuart_example___024root___eval_initial__TOP__Vtiming__2(Vuart_example___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    std::string __Vtask_run_test__1__test_name;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> TOP__uvm_pkg__DOT__run_test__Vstatic__top;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> TOP__uvm_pkg__DOT__run_test__Vstatic__cs;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg.__VnoInFunc_set(vlProcess, vlSymsp, VlNull{}, "*"s, "vif"s, (&vlSymsp->TOP__uart_example__DOT__vif));
    __Vtask_run_test__1__test_name = "UartTest"s;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
    TOP__uvm_pkg__DOT__run_test__Vstatic__cs = __Vfunc_get__2__Vfuncout;
    VL_NULL_CHECK(TOP__uvm_pkg__DOT__run_test__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 49)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
    TOP__uvm_pkg__DOT__run_test__Vstatic__top = __Vtask_get_root__3__Vfuncout;
    co_await VL_NULL_CHECK(TOP__uvm_pkg__DOT__run_test__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 50)->__VnoInFunc_run_test(vlProcess, vlSymsp, __Vtask_run_test__1__test_name);
    vlProcess->state(VlProcess::FINISHED);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_example___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vuart_example___024root___eval_triggers__act(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_triggers__act\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h69246a8d__0;
    __Vtrigprevexpr_h69246a8d__0 = 0;
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_h43a827b7__3_Vtrigm_tx_data)) 
                                               << 3U));
    vlSelfRef.__VvifTrigger_h43a827b7__3_Vtrigm_tx_data = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_h43a827b7__2_Vtrigm_tx_start)) 
                                               << 2U));
    vlSelfRef.__VvifTrigger_h43a827b7__2_Vtrigm_tx_start = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_h43a827b7__1_Vtrigm_tx_busy)) 
                                               << 1U));
    vlSelfRef.__VvifTrigger_h43a827b7__1_Vtrigm_tx_busy = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VvifTrigger_h43a827b7__0_Vtrigm_clk)));
    vlSelfRef.__VvifTrigger_h43a827b7__0_Vtrigm_clk = 0U;
    __Vtrigprevexpr_h69246a8d__0 = (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size());
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,8, 
                                                 ((((IData)(__Vtrigprevexpr_h69246a8d__0) 
                                                    != (IData)(vlSelfRef.__Vtrigprevexpr_h69246a8d__1)) 
                                                   << 4U) 
                                                  | (((vlSelfRef.__VdynSched.evaluate() 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.uart_example__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_example__DOT__clk__0))) 
                                                         << 1U) 
                                                        | ((~ (IData)(vlSymsp->TOP__uart_example__DOT__vif.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_example__DOT__vif__rst_n__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_example__DOT__vif__rst_n__0 
        = vlSymsp->TOP__uart_example__DOT__vif.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_example__DOT__clk__0 
        = vlSelfRef.uart_example__DOT__clk;
    vlSelfRef.__Vtrigprevexpr_h69246a8d__1 = __Vtrigprevexpr_h69246a8d__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vuart_example___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___trigger_anySet__act\n"); );
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

void Vuart_example___024root___act_sequent__TOP__0(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___act_sequent__TOP__0\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__uart_example__DOT__vif.clk = vlSelfRef.uart_example__DOT__clk;
    vlSelfRef.__VvifTrigger_h43a827b7__0_Vtrigm_clk = 1U;
}

void Vuart_example___024root___eval_act(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_act\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vuart_example___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vuart_example___024root___nba_sequent__TOP__0(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___nba_sequent__TOP__0\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__uart_example__DOT__dut__DOT__tx_state;
    __Vdly__uart_example__DOT__dut__DOT__tx_state = 0;
    CData/*3:0*/ __Vdly__uart_example__DOT__dut__DOT__rx_state;
    __Vdly__uart_example__DOT__dut__DOT__rx_state = 0;
    // Body
    __Vdly__uart_example__DOT__dut__DOT__tx_state = vlSelfRef.uart_example__DOT__dut__DOT__tx_state;
    __Vdly__uart_example__DOT__dut__DOT__rx_state = vlSelfRef.uart_example__DOT__dut__DOT__rx_state;
    if (vlSymsp->TOP__uart_example__DOT__vif.rst_n) {
        if ((8U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__rx_state))) {
            __Vdly__uart_example__DOT__dut__DOT__rx_state = 0U;
            vlSelfRef.uart_example__DOT____Vcellout__dut__rx_ready = 0U;
        } else if ((4U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__rx_state))) {
            __Vdly__uart_example__DOT__dut__DOT__rx_state = 0U;
            vlSelfRef.uart_example__DOT____Vcellout__dut__rx_ready = 0U;
        } else if ((2U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__rx_state))) {
            if ((1U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__rx_state))) {
                vlSelfRef.uart_example__DOT____Vcellout__dut__rx_data 
                    = vlSelfRef.uart_example__DOT__dut__DOT__rx_shift;
                vlSelfRef.uart_example__DOT____Vcellout__dut__rx_ready = 1U;
                __Vdly__uart_example__DOT__dut__DOT__rx_state = 0U;
            } else {
                vlSelfRef.uart_example__DOT__dut__DOT__rx_shift 
                    = (((IData)(vlSelfRef.uart_example__DOT____Vcellout__dut__tx) 
                        << 7U) | (0x0000007fU & ((IData)(vlSelfRef.uart_example__DOT__dut__DOT__rx_shift) 
                                                 >> 1U)));
                if ((7U == (IData)(vlSelfRef.uart_example__DOT__dut__DOT__rx_bit_count))) {
                    __Vdly__uart_example__DOT__dut__DOT__rx_state = 3U;
                } else {
                    vlSelfRef.uart_example__DOT__dut__DOT__rx_bit_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.uart_example__DOT__dut__DOT__rx_bit_count)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__rx_state))) {
            vlSelfRef.uart_example__DOT__dut__DOT__rx_bit_count = 0U;
            __Vdly__uart_example__DOT__dut__DOT__rx_state = 2U;
        } else if ((1U & (~ (IData)(vlSelfRef.uart_example__DOT____Vcellout__dut__tx)))) {
            __Vdly__uart_example__DOT__dut__DOT__rx_state = 1U;
            vlSelfRef.uart_example__DOT____Vcellout__dut__rx_ready = 0U;
        }
        if ((8U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_state))) {
            __Vdly__uart_example__DOT__dut__DOT__tx_state = 0U;
            vlSelfRef.uart_example__DOT____Vcellout__dut__tx_busy = 0U;
        } else if ((4U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_state))) {
            __Vdly__uart_example__DOT__dut__DOT__tx_state = 0U;
            vlSelfRef.uart_example__DOT____Vcellout__dut__tx_busy = 0U;
        } else if ((2U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_state))) {
            if ((1U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_state))) {
                vlSelfRef.uart_example__DOT____Vcellout__dut__tx = 1U;
                __Vdly__uart_example__DOT__dut__DOT__tx_state = 0U;
                vlSelfRef.uart_example__DOT____Vcellout__dut__tx_busy = 0U;
            } else {
                vlSelfRef.uart_example__DOT____Vcellout__dut__tx 
                    = (1U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_shift));
                if ((7U == (IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_bit_count))) {
                    __Vdly__uart_example__DOT__dut__DOT__tx_state = 3U;
                } else {
                    vlSelfRef.uart_example__DOT__dut__DOT__tx_bit_count 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_bit_count)));
                }
                vlSelfRef.uart_example__DOT__dut__DOT__tx_shift 
                    = (0x0000007fU & ((IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_shift) 
                                      >> 1U));
            }
        } else if ((1U & (IData)(vlSelfRef.uart_example__DOT__dut__DOT__tx_state))) {
            vlSelfRef.uart_example__DOT__dut__DOT__tx_bit_count = 0U;
            vlSelfRef.uart_example__DOT____Vcellout__dut__tx = 0U;
            __Vdly__uart_example__DOT__dut__DOT__tx_state = 2U;
        } else if (vlSymsp->TOP__uart_example__DOT__vif.tx_start) {
            vlSelfRef.uart_example__DOT__dut__DOT__tx_shift 
                = vlSymsp->TOP__uart_example__DOT__vif.tx_data;
            __Vdly__uart_example__DOT__dut__DOT__tx_state = 1U;
            vlSelfRef.uart_example__DOT____Vcellout__dut__tx_busy = 1U;
        }
    } else {
        vlSelfRef.uart_example__DOT__dut__DOT__rx_shift = 0U;
        vlSelfRef.uart_example__DOT__dut__DOT__rx_bit_count = 0U;
        vlSelfRef.uart_example__DOT____Vcellout__dut__rx_data = 0U;
        vlSelfRef.uart_example__DOT____Vcellout__dut__rx_ready = 0U;
        __Vdly__uart_example__DOT__dut__DOT__rx_state = 0U;
        vlSelfRef.uart_example__DOT__dut__DOT__tx_shift = 0U;
        vlSelfRef.uart_example__DOT__dut__DOT__tx_bit_count = 0U;
        vlSelfRef.uart_example__DOT____Vcellout__dut__tx = 1U;
        vlSelfRef.uart_example__DOT____Vcellout__dut__tx_busy = 0U;
        __Vdly__uart_example__DOT__dut__DOT__tx_state = 0U;
    }
    vlSelfRef.uart_example__DOT__dut__DOT__rx_state 
        = __Vdly__uart_example__DOT__dut__DOT__rx_state;
    vlSelfRef.uart_example__DOT__dut__DOT__tx_state 
        = __Vdly__uart_example__DOT__dut__DOT__tx_state;
    vlSymsp->TOP__uart_example__DOT__vif.tx_busy = vlSelfRef.uart_example__DOT____Vcellout__dut__tx_busy;
    vlSelfRef.__VvifTrigger_h43a827b7__1_Vtrigm_tx_busy = 1U;
}

void Vuart_example___024root___eval_nba(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_nba\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_example___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_example___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vuart_example___024root___timing_commit(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___timing_commit\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h3da394a3__0.commit(
                                                   "@(posedge uart_example.clk)");
    }
    if ((! (0x0000000000000010ULL & vlSelfRef.__VactTriggered
            [0U]))) {
        vlSelfRef.__VtrigSched_hbd132277__0.commit(
                                                   "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))");
    }
}

void Vuart_example___024root___timing_resume(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___timing_resume\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3da394a3__0.resume(
                                                   "@(posedge uart_example.clk)");
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

void Vuart_example___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vuart_example___024root___eval_phase__act(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_phase__act\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_example___024root___eval_triggers__act(vlSelf);
    Vuart_example___024root___timing_commit(vlSelf);
    Vuart_example___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vuart_example___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vuart_example___024root___timing_resume(vlSelf);
        Vuart_example___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vuart_example___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vuart_example___024root___eval_phase__nba(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_phase__nba\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vuart_example___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vuart_example___024root___eval_nba(vlSelf);
        Vuart_example___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vuart_example___024root___eval(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vuart_example___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("uart_example.sv", 98, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vuart_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("uart_example.sv", 98, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vuart_example___024root___eval_phase__act(vlSelf));
    } while (Vuart_example___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vuart_example___024root___eval_debug_assertions(Vuart_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_example___024root___eval_debug_assertions\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
