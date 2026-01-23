// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vclock_gen__Syms.h"


void Vclock_gen___024root__trace_chg_0_sub_0(Vclock_gen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vclock_gen___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_chg_0\n"); );
    // Body
    Vclock_gen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_gen___024root*>(voidSelf);
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vclock_gen___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vclock_gen___024root__trace_chg_0_sub_0(Vclock_gen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_chg_0_sub_0\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    bufp->chgBit(oldp+0,(vlSelfRef.clock_gen__DOT__clk1));
    bufp->chgBit(oldp+1,(vlSelfRef.clock_gen__DOT__clk2));
    bufp->chgBit(oldp+2,(vlSelfRef.clock_gen__DOT__clk3));
    bufp->chgBit(oldp+3,(vlSelfRef.clock_gen__DOT__clk_gated));
    bufp->chgBit(oldp+4,(vlSelfRef.clock_gen__DOT__clk_enable));
    bufp->chgBit(oldp+5,(vlSelfRef.clock_gen__DOT__clk_stop));
    bufp->chgBit(oldp+6,(vlSelfRef.clock_gen__DOT__clk_stopped));
    bufp->chgIData(oldp+7,(vlSelfRef.clock_gen__DOT__clk1_edges),32);
    bufp->chgIData(oldp+8,(vlSelfRef.clock_gen__DOT__clk2_edges),32);
    bufp->chgIData(oldp+9,(vlSelfRef.clock_gen__DOT__clk3_edges),32);
}

void Vclock_gen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vclock_gen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_gen___024root*>(voidSelf);
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
