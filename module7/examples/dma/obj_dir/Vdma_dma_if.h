// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_DMA_IF_H_
#define VERILATED_VDMA_DMA_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_dma_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ rst_n;
    CData/*0:0*/ dma_start;
    CData/*0:0*/ dma_done;
    CData/*2:0*/ dma_channel;
    SData/*15:0*/ dma_length;
    IData/*31:0*/ dma_src_addr;
    IData/*31:0*/ dma_dst_addr;

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_dma_if(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_dma_if();
    VL_UNCOPYABLE(Vdma_dma_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vdma_dma_if* obj);

#endif  // guard
