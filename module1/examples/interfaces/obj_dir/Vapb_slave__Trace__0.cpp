// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vapb_slave__Syms.h"


void Vapb_slave___024root__trace_chg_0_sub_0(Vapb_slave___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vapb_slave___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root__trace_chg_0\n"); );
    // Init
    Vapb_slave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_slave___024root*>(voidSelf);
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vapb_slave___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vapb_slave___024root__trace_chg_0_sub_0(Vapb_slave___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root__trace_chg_0_sub_0\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.psel));
    bufp->chgBit(oldp+2,(vlSelfRef.penable));
    bufp->chgBit(oldp+3,(vlSelfRef.pwrite));
    bufp->chgSData(oldp+4,(vlSelfRef.paddr),16);
    bufp->chgIData(oldp+5,(vlSelfRef.pwdata),32);
    bufp->chgIData(oldp+6,(vlSelfRef.prdata),32);
    bufp->chgBit(oldp+7,(vlSelfRef.pready));
}

void Vapb_slave___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root__trace_cleanup\n"); );
    // Init
    Vapb_slave___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vapb_slave___024root*>(voidSelf);
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
