// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vpackage_example__Syms.h"


VL_ATTR_COLD void Vpackage_example___024root__trace_init_sub__TOP__verification_pkg__0(Vpackage_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpackage_example___024root__trace_init_sub__TOP__0(Vpackage_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_init_sub__TOP__0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("verification_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vpackage_example___024root__trace_init_sub__TOP__verification_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("package_example", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+2,0,"trans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBit(c+4,0,"condition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"timeout_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpackage_example___024root__trace_init_sub__TOP__verification_pkg__0(Vpackage_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_init_sub__TOP__verification_pkg__0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+6,0,"MAX_TRANSACTIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"TIMEOUT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vpackage_example___024root__trace_init_top(Vpackage_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_init_top\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpackage_example___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpackage_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpackage_example___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpackage_example___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpackage_example___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpackage_example___024root__trace_register(Vpackage_example___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_register\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vpackage_example___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vpackage_example___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vpackage_example___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vpackage_example___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpackage_example___024root__trace_const_0_sub_0(Vpackage_example___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpackage_example___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_const_0\n"); );
    // Body
    Vpackage_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpackage_example___024root*>(voidSelf);
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vpackage_example___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpackage_example___024root__trace_const_0_sub_0(Vpackage_example___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_const_0_sub_0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+6,(0x00000064U),32);
    bufp->fullIData(oldp+7,(0x000003e8U),32);
}

VL_ATTR_COLD void Vpackage_example___024root__trace_full_0_sub_0(Vpackage_example___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpackage_example___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_full_0\n"); );
    // Body
    Vpackage_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpackage_example___024root*>(voidSelf);
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vpackage_example___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpackage_example___024root__trace_full_0_sub_0(Vpackage_example___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root__trace_full_0_sub_0\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+1,(vlSelfRef.package_example__DOT__current_state),2);
    bufp->fullQData(oldp+2,(vlSelfRef.package_example__DOT__trans),49);
    bufp->fullBit(oldp+4,(vlSelfRef.package_example__DOT__condition));
    bufp->fullIData(oldp+5,(vlSelfRef.package_example__DOT__unnamedblk1__DOT__timeout_val),32);
}
