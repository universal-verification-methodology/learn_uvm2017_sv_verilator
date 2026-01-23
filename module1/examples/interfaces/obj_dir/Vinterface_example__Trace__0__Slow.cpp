// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinterface_example__Syms.h"


VL_ATTR_COLD void Vinterface_example___024root__trace_init_sub__TOP__interface_example__DOT__bus__0(Vinterface_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vinterface_example___024root__trace_init_sub__TOP__0(Vinterface_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_init_sub__TOP__0\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("interface_example", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bus", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vinterface_example___024root__trace_init_sub__TOP__interface_example__DOT__bus__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vinterface_example___024root__trace_init_sub__TOP__interface_example__DOT__bus__0(Vinterface_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_init_sub__TOP__interface_example__DOT__bus__0\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+6,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,0,"pwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vinterface_example___024root__trace_init_top(Vinterface_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_init_top\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vinterface_example___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vinterface_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vinterface_example___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinterface_example___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinterface_example___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vinterface_example___024root__trace_register(Vinterface_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_register\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vinterface_example___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vinterface_example___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vinterface_example___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vinterface_example___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vinterface_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_const_0\n"); );
    // Body
    Vinterface_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinterface_example___024root*>(voidSelf);
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vinterface_example___024root__trace_full_0_sub_0(Vinterface_example___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vinterface_example___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_full_0\n"); );
    // Body
    Vinterface_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinterface_example___024root*>(voidSelf);
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vinterface_example___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vinterface_example___024root__trace_full_0_sub_0(Vinterface_example___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root__trace_full_0_sub_0\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSymsp->TOP__interface_example__DOT__bus.psel));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__interface_example__DOT__bus.penable));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__interface_example__DOT__bus.pwrite));
    bufp->fullSData(oldp+4,(vlSymsp->TOP__interface_example__DOT__bus.paddr),16);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__interface_example__DOT__bus.pwdata),32);
    bufp->fullBit(oldp+6,(vlSelfRef.interface_example__DOT__clk));
    bufp->fullIData(oldp+7,(vlSelfRef.interface_example__DOT____Vcellout__dut__prdata),32);
    bufp->fullBit(oldp+8,(vlSelfRef.interface_example__DOT____Vcellout__dut__pready));
}
