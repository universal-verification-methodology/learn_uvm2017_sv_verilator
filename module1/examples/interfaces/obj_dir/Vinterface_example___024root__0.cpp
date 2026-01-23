// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"

VlCoroutine Vinterface_example___024root___eval_initial__TOP__Vtiming__0(Vinterface_example___024root* vlSelf);
VlCoroutine Vinterface_example___024root___eval_initial__TOP__Vtiming__1(Vinterface_example___024root* vlSelf);

void Vinterface_example___024root___eval_initial(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_initial\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinterface_example___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vinterface_example___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vinterface_example___024root___eval_initial__TOP__Vtiming__0(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.interface_example__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "interface_example.sv", 
                                             80);
        vlSelfRef.interface_example__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.interface_example__DOT__clk)));
    }
    co_return;}

VlCoroutine Vinterface_example___024root___eval_initial__TOP__Vtiming__1(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("============================================================\nModule 1 Example 1.2: Interfaces and Modports\n============================================================\n\n",0);
    vlSymsp->TOP__interface_example__DOT__bus.psel = 0U;
    vlSymsp->TOP__interface_example__DOT__bus.penable = 0U;
    vlSymsp->TOP__interface_example__DOT__bus.pwrite = 0U;
    vlSymsp->TOP__interface_example__DOT__bus.paddr = 0U;
    vlSymsp->TOP__interface_example__DOT__bus.pwdata = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "interface_example.sv", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("1. Performing write operation:\n",0);
    co_await vlSelfRef.__VtrigSched_h85849ca4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.psel = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.pwrite = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.paddr = 0x0100U;
    vlSymsp->TOP__interface_example__DOT__bus.pwdata = 0xdeadbeefU;
    co_await vlSelfRef.__VtrigSched_h85849ca4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.penable = 1U;
    co_await vlSelfRef.__VtrigSched_h85849ca4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.interface_example__DOT____Vcellout__dut__pready)))) {
        co_await vlSelfRef.__VtrigSched_h85849ca4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge interface_example.clk)", 
                                                             "interface_example.sv", 
                                                             128);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("   Write: addr=0x%0x, data=0x%0x\n",0,
                 16,vlSymsp->TOP__interface_example__DOT__bus.paddr,
                 32,vlSymsp->TOP__interface_example__DOT__bus.pwdata);
    vlSymsp->TOP__interface_example__DOT__bus.psel = 0U;
    vlSymsp->TOP__interface_example__DOT__bus.penable = 0U;
    VL_WRITEF_NX("\n2. Performing read operation:\n",0);
    co_await vlSelfRef.__VtrigSched_h85849ca4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.psel = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.pwrite = 0U;
    vlSymsp->TOP__interface_example__DOT__bus.paddr = 0x0100U;
    co_await vlSelfRef.__VtrigSched_h85849ca4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         142);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.penable = 1U;
    co_await vlSelfRef.__VtrigSched_h85849ca4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.interface_example__DOT____Vcellout__dut__pready)))) {
        co_await vlSelfRef.__VtrigSched_h85849ca4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge interface_example.clk)", 
                                                             "interface_example.sv", 
                                                             146);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("   Read: addr=0x%0x, data=0x%0x\n",0,
                 16,vlSymsp->TOP__interface_example__DOT__bus.paddr,
                 32,vlSelfRef.interface_example__DOT____Vcellout__dut__prdata);
    vlSymsp->TOP__interface_example__DOT__bus.psel = 0U;
    vlSymsp->TOP__interface_example__DOT__bus.penable = 0U;
    VL_WRITEF_NX("\n============================================================\nExample completed successfully!\n============================================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000032ULL, 
                                         nullptr, "interface_example.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("interface_example.sv", 158, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinterface_example___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vinterface_example___024root___eval_triggers__act(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_triggers__act\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.interface_example__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__interface_example__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__interface_example__DOT__clk__0 
        = vlSelfRef.interface_example__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinterface_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vinterface_example___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vinterface_example___024root___nba_sequent__TOP__0(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___nba_sequent__TOP__0\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__interface_example__DOT__dut__DOT__mem__v0;
    __VdlyVal__interface_example__DOT__dut__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__interface_example__DOT__dut__DOT__mem__v0;
    __VdlyDim0__interface_example__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__interface_example__DOT__dut__DOT__mem__v0;
    __VdlySet__interface_example__DOT__dut__DOT__mem__v0 = 0;
    // Body
    __VdlySet__interface_example__DOT__dut__DOT__mem__v0 = 0U;
    if (((IData)(vlSymsp->TOP__interface_example__DOT__bus.psel) 
         & (IData)(vlSymsp->TOP__interface_example__DOT__bus.penable))) {
        if (vlSymsp->TOP__interface_example__DOT__bus.pwrite) {
            __VdlyVal__interface_example__DOT__dut__DOT__mem__v0 
                = vlSymsp->TOP__interface_example__DOT__bus.pwdata;
            __VdlyDim0__interface_example__DOT__dut__DOT__mem__v0 
                = (0x000003ffU & ((IData)(vlSymsp->TOP__interface_example__DOT__bus.paddr) 
                                  >> 2U));
            __VdlySet__interface_example__DOT__dut__DOT__mem__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__interface_example__DOT__bus.pwrite)))) {
            vlSelfRef.interface_example__DOT____Vcellout__dut__prdata 
                = vlSelfRef.interface_example__DOT__dut__DOT__mem
                [(0x000003ffU & ((IData)(vlSymsp->TOP__interface_example__DOT__bus.paddr) 
                                 >> 2U))];
        }
        vlSelfRef.interface_example__DOT____Vcellout__dut__pready = 1U;
    } else {
        vlSelfRef.interface_example__DOT____Vcellout__dut__pready = 0U;
    }
    if (__VdlySet__interface_example__DOT__dut__DOT__mem__v0) {
        vlSelfRef.interface_example__DOT__dut__DOT__mem[__VdlyDim0__interface_example__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__interface_example__DOT__dut__DOT__mem__v0;
    }
}

void Vinterface_example___024root___eval_nba(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_nba\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vinterface_example___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vinterface_example___024root___timing_commit(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___timing_commit\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h85849ca4__0.commit(
                                                   "@(posedge interface_example.clk)");
    }
}

void Vinterface_example___024root___timing_resume(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___timing_resume\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h85849ca4__0.resume(
                                                   "@(posedge interface_example.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vinterface_example___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vinterface_example___024root___eval_phase__act(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_phase__act\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vinterface_example___024root___eval_triggers__act(vlSelf);
    Vinterface_example___024root___timing_commit(vlSelf);
    Vinterface_example___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vinterface_example___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vinterface_example___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vinterface_example___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vinterface_example___024root___eval_phase__nba(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_phase__nba\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vinterface_example___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vinterface_example___024root___eval_nba(vlSelf);
        Vinterface_example___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vinterface_example___024root___eval(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vinterface_example___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("interface_example.sv", 75, "", "DIDNOTCONVERGE: NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vinterface_example___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("interface_example.sv", 75, "", "DIDNOTCONVERGE: Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vinterface_example___024root___eval_phase__act(vlSelf));
    } while (Vinterface_example___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vinterface_example___024root___eval_debug_assertions(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_debug_assertions\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
