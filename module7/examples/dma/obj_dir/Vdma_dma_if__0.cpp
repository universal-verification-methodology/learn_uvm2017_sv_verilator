// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

std::string VL_TO_STRING(const Vdma_dma_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vdma_dma_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
