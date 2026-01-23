// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdma__Syms.h"


VL_ATTR_COLD void Vdma___024root__trace_init_sub__TOP__uvm_pkg__0(Vdma___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vdma___024root__trace_init_sub__TOP__dma__DOT__vif__0(Vdma___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdma___024root__trace_init_sub__TOP__0(Vdma___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_init_sub__TOP__0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("uvm_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vdma___024root__trace_init_sub__TOP__uvm_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dma", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("vif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vdma___024root__trace_init_sub__TOP__dma__DOT__vif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"dma_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"dma_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"dma_src_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"dma_dst_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"dma_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"dma_channel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"src_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"dst_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"length_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"channel_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdma___024root__trace_init_sub__TOP__uvm_pkg__0(Vdma___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_init_sub__TOP__uvm_pkg__0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+31,0,"UVM_HDL_MAX_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+15,0,"uvm_re_match__Vstatic__e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+16,0,"uvm_re_match__Vstatic__es",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+17,0,"uvm_re_match__Vstatic__s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+18,0,"uvm_re_match__Vstatic__ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+32,0,"UVM_STREAMBITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"UVM_FIELD_FLAG_RESERVED_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"UVM_RADIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"UVM_RECURSION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+36,0,"UVM_MACRO_NUMFLAGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+37,0,"UVM_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+38,0,"UVM_ALL_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+38,0,"UVM_FLAGS_ON",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+39,0,"UVM_FLAGS_OFF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+40,0,"UVM_COPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+41,0,"UVM_NOCOPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+42,0,"UVM_COMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+43,0,"UVM_NOCOMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+44,0,"UVM_PRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+45,0,"UVM_NOPRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+46,0,"UVM_RECORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+47,0,"UVM_NORECORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+48,0,"UVM_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+49,0,"UVM_NOPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+50,0,"UVM_UNPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+49,0,"UVM_NOUNPACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+51,0,"UVM_SET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+52,0,"UVM_NOSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+53,0,"UVM_NODEFPRINT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+54,0,"UVM_MACRO_EXTRAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+55,0,"UVM_FLAGS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+56,0,"UVM_CHECK_FIELDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+57,0,"UVM_END_DATA_EXTRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+58,0,"UVM_START_FUNCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+59,0,"UVM_END_FUNCS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 27,0);
    tracep->declBus(c+60,0,"UVM_STDIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+61,0,"UVM_STDOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+62,0,"UVM_STDERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+19,0,"m_uvm_core_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+63,0,"UVM_CORE_POST_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1,0,"uvm_global_random_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+20,0,"uvm_instance_scope__Vstatic__c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, false,-1, 7,0);
    tracep->declBus(c+21,0,"uvm_instance_scope__Vstatic__pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+64,0,"UVM_STR_CRC_POLYNOMIAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"uvm_oneway_hash__Vstatic__msb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+23,0,"uvm_oneway_hash__Vstatic__current_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 7,0);
    tracep->declBus(c+24,0,"uvm_oneway_hash__Vstatic__crc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBus(c+9,0,"uvm_leaf_scope__Vstatic__bracket_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BYTE, false,-1, 7,0);
    tracep->declBus(c+10,0,"uvm_leaf_scope__Vstatic__pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+11,0,"uvm_leaf_scope__Vstatic__bmatches",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+65,0,"uvm_get_array_index_int__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+66,0,"uvm_get_array_index_string__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+67,0,"UVM_LINE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"UVM_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"UVM_SMALL_STRING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"UVM_LARGE_STRING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"uvm_wait_for_nba_region__Vstatic__next_nba",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+70,0,"UVM_UNBOUNDED_CONNECTIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vdma___024root__trace_init_sub__TOP__dma__DOT__vif__0(Vdma___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_init_sub__TOP__dma__DOT__vif__0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+26,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"dma_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"dma_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"dma_src_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"dma_dst_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"dma_length",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"dma_channel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vdma___024root__trace_init_top(Vdma___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_init_top\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdma___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdma___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdma___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdma___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdma___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdma___024root__trace_register(Vdma___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_register\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vdma___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vdma___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vdma___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vdma___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdma___024root__trace_const_0_sub_0(Vdma___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdma___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_const_0\n"); );
    // Body
    Vdma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdma___024root*>(voidSelf);
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdma___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdma___024root__trace_const_0_sub_0(Vdma___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_const_0_sub_0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__dma__DOT__vif.dma_src_addr),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__dma__DOT__vif.dma_dst_addr),32);
    bufp->fullSData(oldp+29,(vlSymsp->TOP__dma__DOT__vif.dma_length),16);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__dma__DOT__vif.dma_channel),3);
    bufp->fullIData(oldp+31,(0x00000400U),32);
    bufp->fullIData(oldp+32,(0x00001000U),32);
    bufp->fullIData(oldp+33,(0x0000001cU),32);
    bufp->fullIData(oldp+34,(0x0f000000U),32);
    bufp->fullIData(oldp+35,(0x00070000U),28);
    bufp->fullIData(oldp+36,(0x00000013U),28);
    bufp->fullIData(oldp+37,(0x00000555U),28);
    bufp->fullIData(oldp+38,(0x00000155U),28);
    bufp->fullIData(oldp+39,(0U),28);
    bufp->fullIData(oldp+40,(1U),28);
    bufp->fullIData(oldp+41,(2U),28);
    bufp->fullIData(oldp+42,(4U),28);
    bufp->fullIData(oldp+43,(8U),28);
    bufp->fullIData(oldp+44,(0x00000010U),28);
    bufp->fullIData(oldp+45,(0x00000020U),28);
    bufp->fullIData(oldp+46,(0x00000040U),28);
    bufp->fullIData(oldp+47,(0x00000080U),28);
    bufp->fullIData(oldp+48,(0x00000100U),28);
    bufp->fullIData(oldp+49,(0x00000200U),28);
    bufp->fullIData(oldp+50,(0x00000400U),28);
    bufp->fullIData(oldp+51,(0x00000800U),28);
    bufp->fullIData(oldp+52,(0x00001000U),28);
    bufp->fullIData(oldp+53,(0x00008000U),28);
    bufp->fullIData(oldp+54,(0x00080000U),28);
    bufp->fullIData(oldp+55,(0x00080001U),28);
    bufp->fullIData(oldp+56,(0x00080002U),28);
    bufp->fullIData(oldp+57,(0x00080003U),28);
    bufp->fullIData(oldp+58,(0x00080004U),28);
    bufp->fullIData(oldp+59,(0x00080005U),28);
    bufp->fullIData(oldp+60,(0x80000000U),32);
    bufp->fullIData(oldp+61,(0x80000001U),32);
    bufp->fullIData(oldp+62,(0x80000002U),32);
    bufp->fullIData(oldp+63,(3U),32);
    bufp->fullIData(oldp+64,(0x04c11db6U),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_int__Vstatic__i),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_get_array_index_string__Vstatic__i),32);
    bufp->fullIData(oldp+67,(0x00000078U),32);
    bufp->fullIData(oldp+68,(0x000003bfU),32);
    bufp->fullIData(oldp+69,(0x0001c1ffU),32);
    bufp->fullIData(oldp+70,(0xffffffffU),32);
}

VL_ATTR_COLD void Vdma___024root__trace_full_0_sub_0(Vdma___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdma___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_full_0\n"); );
    // Body
    Vdma___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdma___024root*>(voidSelf);
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vdma___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdma___024root__trace_full_0_sub_0(Vdma___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdma___024root__trace_full_0_sub_0\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed),32);
    bufp->fullBit(oldp+2,(vlSelfRef.dma__DOT____Vcellout__dut__dma_done));
    bufp->fullIData(oldp+3,(vlSelfRef.dma__DOT__dut__DOT__src_addr_reg),32);
    bufp->fullIData(oldp+4,(vlSelfRef.dma__DOT__dut__DOT__dst_addr_reg),32);
    bufp->fullSData(oldp+5,(vlSelfRef.dma__DOT__dut__DOT__length_reg),16);
    bufp->fullCData(oldp+6,(vlSelfRef.dma__DOT__dut__DOT__channel_reg),3);
    bufp->fullSData(oldp+7,(vlSelfRef.dma__DOT__dut__DOT__count),16);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__dma__DOT__vif.dma_done));
    bufp->fullCData(oldp+9,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bracket_match),8);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__pos),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_leaf_scope__Vstatic__bmatches),32);
    bufp->fullBit(oldp+12,(vlSelfRef.dma__DOT__clk));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__dma__DOT__vif.rst_n));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__dma__DOT__vif.dma_start));
    bufp->fullIData(oldp+15,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state),32);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__c),8);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_instance_scope__Vstatic__pos),32);
    bufp->fullBit(oldp+22,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb));
    bufp->fullCData(oldp+23,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte),8);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba),32);
    bufp->fullBit(oldp+26,(vlSymsp->TOP__dma__DOT__vif.clk));
}
