// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_STD__03A__03AMAILBOX__TZ13__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_STD__03A__03AMAILBOX__TZ13__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_phase;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_std__03a__03amailbox__Tz13__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_std__03a__03amailbox__Tz13__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_std__03a__03amailbox__Tz13__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_std__03a__03amailbox__Tz13__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuart_example__Syms;

class Vuart_example_std__03a__03amailbox__Tz13 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_he898e707__0;
    CData/*0:0*/ __Vtrigprevexpr_h792dd5c7__0;
    CData/*0:0*/ __Vtrigprevexpr_h792dd5c7__1;
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &message);
    void __VnoInFunc_num(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &message);
    VlCoroutine __VnoInFunc_put(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> message);
    void __VnoInFunc_try_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_std__03a__03amailbox__Tz13(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vuart_example_std__03a__03amailbox__Tz13() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_std__03a__03amailbox__Tz13>& obj);

#endif  // guard
