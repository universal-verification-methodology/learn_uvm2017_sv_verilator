// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

VL_ATTR_COLD void Vdma_dma_if___ctor_var_reset(Vdma_dma_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vdma_dma_if___ctor_var_reset\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->dma_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4393136156052734320ull);
    vlSelf->dma_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2996778355584335120ull);
    vlSelf->dma_src_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3513935004971436176ull);
    vlSelf->dma_dst_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2826994158666866718ull);
    vlSelf->dma_length = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4942991477412797479ull);
    vlSelf->dma_channel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16447802703073874515ull);
}
