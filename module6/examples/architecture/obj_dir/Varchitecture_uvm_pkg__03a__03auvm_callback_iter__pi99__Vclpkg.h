// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI99__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI99__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_vreg;
class Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi99__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi99__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi99__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi99__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi99 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> __PVT__m_obj;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs> __PVT__m_cb;
    void __VnoInFunc_first(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi99(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> obj);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi99() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback_iter__pi99>& obj);

#endif  // guard
