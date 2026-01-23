// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdata_structures_example__Syms.h"


VL_ATTR_COLD void Vdata_structures_example___024root__trace_init_sub__TOP__0(Vdata_structures_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root__trace_init_sub__TOP__0\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("data_structures_example", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdata_structures_example___024root__trace_init_top(Vdata_structures_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root__trace_init_top\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdata_structures_example___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdata_structures_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdata_structures_example___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_structures_example___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_structures_example___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdata_structures_example___024root__trace_register(Vdata_structures_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root__trace_register\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdata_structures_example___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vdata_structures_example___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vdata_structures_example___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vdata_structures_example___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdata_structures_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root__trace_const_0\n"); );
    // Body
    Vdata_structures_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_structures_example___024root*>(voidSelf);
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vdata_structures_example___024root__trace_full_0_sub_0(Vdata_structures_example___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdata_structures_example___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root__trace_full_0\n"); );
    // Body
    Vdata_structures_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_structures_example___024root*>(voidSelf);
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdata_structures_example___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdata_structures_example___024root__trace_full_0_sub_0(Vdata_structures_example___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root__trace_full_0_sub_0\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.data_structures_example__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.data_structures_example__DOT__unnamedblk2__DOT__i),32);
}
