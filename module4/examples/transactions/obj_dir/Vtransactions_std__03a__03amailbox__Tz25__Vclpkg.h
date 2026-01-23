// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_STD__03A__03AMAILBOX__TZ25__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_STD__03A__03AMAILBOX__TZ25__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_phase;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_std__03a__03amailbox__Tz25__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransactions_std__03a__03amailbox__Tz25__Vclpkg(Vtransactions__Syms* symsp, const char* v__name);
    ~Vtransactions_std__03a__03amailbox__Tz25__Vclpkg();
    VL_UNCOPYABLE(Vtransactions_std__03a__03amailbox__Tz25__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransactions__Syms;

class Vtransactions_std__03a__03amailbox__Tz25 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_h5d8a4629__0;
    CData/*0:0*/ __Vtrigprevexpr_hfff5dfdc__0;
    CData/*0:0*/ __Vtrigprevexpr_hfff5dfdc__1;
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &message);
    void __VnoInFunc_num(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &message);
    VlCoroutine __VnoInFunc_put(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> message);
    void __VnoInFunc_try_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_std__03a__03amailbox__Tz25(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_std__03a__03amailbox__Tz25() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_std__03a__03amailbox__Tz25>& obj);

#endif  // guard
