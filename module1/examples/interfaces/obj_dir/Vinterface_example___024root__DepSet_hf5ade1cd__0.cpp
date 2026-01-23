// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"
#include "Vinterface_example__Syms.h"
#include "Vinterface_example___024root.h"

VL_INLINE_OPT VlCoroutine Vinterface_example___024root___eval_initial__TOP__Vtiming__1(Vinterface_example___024root* vlSelf) {
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
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "interface_example.sv", 
                                         114);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("1. Performing write operation:\n",0);
    co_await vlSelfRef.__VtrigSched_h58f3d192__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.psel = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.pwrite = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.paddr = 0x100U;
    vlSymsp->TOP__interface_example__DOT__bus.pwdata = 0xdeadbeefU;
    co_await vlSelfRef.__VtrigSched_h58f3d192__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.penable = 1U;
    co_await vlSelfRef.__VtrigSched_h58f3d192__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.interface_example__DOT____Vcellout__dut__pready)))) {
        co_await vlSelfRef.__VtrigSched_h58f3d192__0.trigger(0U, 
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
    co_await vlSelfRef.__VtrigSched_h58f3d192__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.psel = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.pwrite = 0U;
    vlSymsp->TOP__interface_example__DOT__bus.paddr = 0x100U;
    co_await vlSelfRef.__VtrigSched_h58f3d192__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         142);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__interface_example__DOT__bus.penable = 1U;
    co_await vlSelfRef.__VtrigSched_h58f3d192__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge interface_example.clk)", 
                                                         "interface_example.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelfRef.interface_example__DOT____Vcellout__dut__pready)))) {
        co_await vlSelfRef.__VtrigSched_h58f3d192__0.trigger(0U, 
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
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "interface_example.sv", 
                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("interface_example.sv", 158, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinterface_example___024root___dump_triggers__act(Vinterface_example___024root* vlSelf);
#endif  // VL_DEBUG

void Vinterface_example___024root___eval_triggers__act(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_triggers__act\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.interface_example__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__interface_example__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__interface_example__DOT__clk__0 
        = vlSelfRef.interface_example__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vinterface_example___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vinterface_example___024root___nba_sequent__TOP__0(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___nba_sequent__TOP__0\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
                = (0x3ffU & ((IData)(vlSymsp->TOP__interface_example__DOT__bus.paddr) 
                             >> 2U));
            __VdlySet__interface_example__DOT__dut__DOT__mem__v0 = 1U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__interface_example__DOT__bus.pwrite)))) {
            vlSelfRef.interface_example__DOT____Vcellout__dut__prdata 
                = vlSelfRef.interface_example__DOT__dut__DOT__mem
                [(0x3ffU & ((IData)(vlSymsp->TOP__interface_example__DOT__bus.paddr) 
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
