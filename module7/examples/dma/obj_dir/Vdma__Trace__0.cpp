// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vdma__Syms.h"


void Vdma___024root__trace_chg_0_sub_0(Vdma___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdma___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_chg_0\n"); );
    // Body
    Vdma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdma___024root*>(voidSelf);
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vdma___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdma___024root__trace_chg_0_sub_0(Vdma___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_chg_0_sub_0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,(vlSelfRef.dma__DOT____Vcellout__dut__dma_done));
        bufp->chgIData(oldp+2,(vlSelfRef.dma__DOT__dut__DOT__src_addr_reg),32);
        bufp->chgIData(oldp+3,(vlSelfRef.dma__DOT__dut__DOT__dst_addr_reg),32);
        bufp->chgSData(oldp+4,(vlSelfRef.dma__DOT__dut__DOT__length_reg),16);
        bufp->chgCData(oldp+5,(vlSelfRef.dma__DOT__dut__DOT__channel_reg),3);
        bufp->chgSData(oldp+6,(vlSelfRef.dma__DOT__dut__DOT__count),16);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__dma__DOT__vif.dma_done));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+8,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match),8);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches),32);
    }
    bufp->chgBit(oldp+11,(vlSelfRef.dma__DOT__clk));
    bufp->chgBit(oldp+12,(vlSymsp->TOP__dma__DOT__vif.rst_n));
    bufp->chgBit(oldp+13,(vlSymsp->TOP__dma__DOT__vif.dma_start));
    bufp->chgIData(oldp+14,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e),32);
    bufp->chgIData(oldp+15,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es),32);
    bufp->chgIData(oldp+16,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s),32);
    bufp->chgIData(oldp+17,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss),32);
    bufp->chgIData(oldp+18,(vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state),32);
    bufp->chgCData(oldp+19,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c),8);
    bufp->chgIData(oldp+20,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos),32);
    bufp->chgBit(oldp+21,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb));
    bufp->chgCData(oldp+22,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte),8);
    bufp->chgIData(oldp+23,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1),32);
    bufp->chgIData(oldp+24,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba),32);
    bufp->chgBit(oldp+25,(vlSymsp->TOP__dma__DOT__vif.clk));
}

void Vdma___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_cleanup\n"); );
    // Body
    Vdma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdma___024root*>(voidSelf);
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
