// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreset_patterns__Syms.h"


void Vreset_patterns___024root__trace_chg_0_sub_0(Vreset_patterns___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vreset_patterns___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_chg_0\n"); );
    // Body
    Vreset_patterns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreset_patterns___024root*>(voidSelf);
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vreset_patterns___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vreset_patterns___024root__trace_chg_0_sub_0(Vreset_patterns___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_chg_0_sub_0\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.reset_patterns__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelfRef.reset_patterns__DOT__rst_n));
    bufp->chgBit(oldp+2,(vlSelfRef.reset_patterns__DOT__rst_sync));
    bufp->chgCData(oldp+3,(vlSelfRef.reset_patterns__DOT__reg_async),8);
    bufp->chgCData(oldp+4,(vlSelfRef.reset_patterns__DOT__reg_sync),8);
}

void Vreset_patterns___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vreset_patterns___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreset_patterns___024root*>(voidSelf);
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
