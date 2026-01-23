// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsignal_access__Syms.h"


void Vsignal_access___024root__trace_chg_0_sub_0(Vsignal_access___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsignal_access___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_chg_0\n"); );
    // Body
    Vsignal_access___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignal_access___024root*>(voidSelf);
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsignal_access___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsignal_access___024root__trace_chg_0_sub_0(Vsignal_access___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_chg_0_sub_0\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.signal_access__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.signal_access__DOT__enable));
        bufp->chgCData(oldp+2,(vlSelfRef.signal_access__DOT__d),8);
        bufp->chgBit(oldp+3,(vlSelfRef.signal_access__DOT__single_bit));
        bufp->chgSData(oldp+4,(vlSelfRef.signal_access__DOT__multi_bit),16);
        bufp->chgIData(oldp+5,(vlSelfRef.signal_access__DOT__array_signal),32);
    }
    bufp->chgBit(oldp+6,(vlSelfRef.signal_access__DOT__clk));
    bufp->chgCData(oldp+7,(vlSelfRef.signal_access__DOT__q),8);
    bufp->chgIData(oldp+8,(vlSelfRef.signal_access__DOT__monitor_count),32);
}

void Vsignal_access___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root__trace_cleanup\n"); );
    // Body
    Vsignal_access___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignal_access___024root*>(voidSelf);
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
