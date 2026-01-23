// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences___024unit__03a__03aVirtualTransaction;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_std__03a__03amailbox__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_std__03a__03amailbox__Tz1__Vclpkg();
    ~Vvirtual_sequences_std__03a__03amailbox__Tz1__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vvirtual_sequences__Syms;

class Vvirtual_sequences_std__03a__03amailbox__Tz1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &message);
    void __VnoInFunc_num(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &message);
    VlCoroutine __VnoInFunc_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> message);
    void __VnoInFunc_try_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_std__03a__03amailbox__Tz1(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vvirtual_sequences_std__03a__03amailbox__Tz1() {}
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_std__03a__03amailbox__Tz1>& obj);

#endif  // guard
