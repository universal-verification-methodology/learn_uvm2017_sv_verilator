// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UART_IF_H_
#define VERILATED_VUART_EXAMPLE_UART_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uart_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ rst_n;
    CData/*7:0*/ tx_data;
    CData/*0:0*/ tx_start;
    CData/*0:0*/ tx_busy;

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uart_if(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uart_if();
    VL_UNCOPYABLE(Vuart_example_uart_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vuart_example_uart_if* obj);

#endif  // guard
