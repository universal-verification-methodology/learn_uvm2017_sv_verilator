// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ71_TBZ72__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ71_TBZ72__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_objection;
class Varchitecture_uvm_pkg__03a__03auvm_objection_callback;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_callback_iter__Tz71_TBz72__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_callback_iter__Tz71_TBz72__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_callback_iter__Tz71_TBz72__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_callback_iter__Tz71_TBz72__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_callback_iter__Tz71_TBz72 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection> __PVT__m_obj;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection_callback> __PVT__m_cb;
    void __VnoInFunc_first(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection_callback> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection_callback> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection_callback> &last__Vfuncrtn);
    void __VnoInFunc_next(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection_callback> &next__Vfuncrtn);
    void __VnoInFunc_prev(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection_callback> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_callback_iter__Tz71_TBz72(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_objection> obj);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_uvm_pkg__03a__03auvm_callback_iter__Tz71_TBz72() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_callback_iter__Tz71_TBz72>& obj);

#endif  // guard
