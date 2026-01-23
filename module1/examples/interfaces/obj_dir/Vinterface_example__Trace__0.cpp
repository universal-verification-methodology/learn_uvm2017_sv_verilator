// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinterface_example__Syms.h"


void Vinterface_example___024root__trace_chg_0_sub_0(Vinterface_example___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vinterface_example___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_chg_0\n"); );
    // Body
    Vinterface_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinterface_example___024root*>(voidSelf);
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vinterface_example___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vinterface_example___024root__trace_chg_0_sub_0(Vinterface_example___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_chg_0_sub_0\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__interface_example__DOT__bus.psel));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__interface_example__DOT__bus.penable));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__interface_example__DOT__bus.pwrite));
        bufp->chgSData(oldp+3,(vlSymsp->TOP__interface_example__DOT__bus.paddr),16);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__interface_example__DOT__bus.pwdata),32);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.interface_example__DOT__clk));
    bufp->chgIData(oldp+6,(vlSelfRef.interface_example__DOT____Vcellout__dut__prdata),32);
    bufp->chgBit(oldp+7,(vlSelfRef.interface_example__DOT____Vcellout__dut__pready));
}

void Vinterface_example___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_cleanup\n"); );
    // Body
    Vinterface_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinterface_example___024root*>(voidSelf);
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
