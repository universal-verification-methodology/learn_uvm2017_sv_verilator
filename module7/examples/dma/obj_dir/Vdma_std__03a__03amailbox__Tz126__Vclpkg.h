// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_STD__03A__03AMAILBOX__TZ126__VCLPKG_H_
#define VERILATED_VDMA_STD__03A__03AMAILBOX__TZ126__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaTxn;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_std__03a__03amailbox__Tz126__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_std__03a__03amailbox__Tz126__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_std__03a__03amailbox__Tz126__Vclpkg();
    VL_UNCOPYABLE(Vdma_std__03a__03amailbox__Tz126__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_std__03a__03amailbox__Tz126 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_heead471a__0;
    CData/*0:0*/ __Vtrigprevexpr_hdf590bed__0;
    CData/*0:0*/ __Vtrigprevexpr_hdf590bed__1;
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vdma___024unit__03a__03aDmaTxn>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &message);
    void __VnoInFunc_num(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &message);
    VlCoroutine __VnoInFunc_put(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> message);
    void __VnoInFunc_try_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_std__03a__03amailbox__Tz126(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_std__03a__03amailbox__Tz126() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_std__03a__03amailbox__Tz126>& obj);

#endif  // guard
