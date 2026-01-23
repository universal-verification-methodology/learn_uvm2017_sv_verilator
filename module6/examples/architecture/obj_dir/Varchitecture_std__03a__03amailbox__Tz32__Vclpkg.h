// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_STD__03A__03AMAILBOX__TZ32__VCLPKG_H_
#define VERILATED_VARCHITECTURE_STD__03A__03AMAILBOX__TZ32__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_phase;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_std__03a__03amailbox__Tz32__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* const vlSymsp;

    // CONSTRUCTORS
    Varchitecture_std__03a__03amailbox__Tz32__Vclpkg(Varchitecture__Syms* symsp, const char* v__name);
    ~Varchitecture_std__03a__03amailbox__Tz32__Vclpkg();
    VL_UNCOPYABLE(Varchitecture_std__03a__03amailbox__Tz32__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Varchitecture__Syms;

class Varchitecture_std__03a__03amailbox__Tz32 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_hf4cf889a__0;
    CData/*0:0*/ __Vtrigprevexpr_h46d7caf2__0;
    CData/*0:0*/ __Vtrigprevexpr_h46d7caf2__1;
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> &message);
    void __VnoInFunc_num(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> &message);
    VlCoroutine __VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> message);
    void __VnoInFunc_try_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_std__03a__03amailbox__Tz32(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_std__03a__03amailbox__Tz32() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_std__03a__03amailbox__Tz32>& obj);

#endif  // guard
