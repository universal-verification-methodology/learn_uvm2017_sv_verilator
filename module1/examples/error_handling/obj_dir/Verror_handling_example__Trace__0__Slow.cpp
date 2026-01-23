// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Verror_handling_example__Syms.h"


VL_ATTR_COLD void Verror_handling_example___024root__trace_init_sub__TOP__0(Verror_handling_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root__trace_init_sub__TOP__0\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
}

VL_ATTR_COLD void Verror_handling_example___024root__trace_init_top(Verror_handling_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root__trace_init_top\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verror_handling_example___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Verror_handling_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Verror_handling_example___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Verror_handling_example___024root__trace_register(Verror_handling_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root__trace_register\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Verror_handling_example___024root__trace_const_0, 0, vlSelf);
    tracep->addCleanupCb(&Verror_handling_example___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Verror_handling_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root__trace_const_0\n"); );
    // Body
    Verror_handling_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Verror_handling_example___024root*>(voidSelf);
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}
