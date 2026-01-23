// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_STD__03A__03AMAILBOX__TZ216__VCLPKG_H_
#define VERILATED_VARCHITECTURE_STD__03A__03AMAILBOX__TZ216__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_reg_item;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_std__03a__03amailbox__Tz216__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_std__03a__03amailbox__Tz216__Vclpkg();
    ~Varchitecture_std__03a__03amailbox__Tz216__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_std__03a__03amailbox__Tz216__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Varchitecture__Syms;

class Varchitecture_std__03a__03amailbox__Tz216 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &message);
    void __VnoInFunc_num(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &message);
    VlCoroutine __VnoInFunc_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> message);
    void __VnoInFunc_try_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_item> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_std__03a__03amailbox__Tz216(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_std__03a__03amailbox__Tz216() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_std__03a__03amailbox__Tz216>& obj);

#endif  // guard
