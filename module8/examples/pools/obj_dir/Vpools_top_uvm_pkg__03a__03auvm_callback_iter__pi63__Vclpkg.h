// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI63__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI63__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_reg;
class Vpools_top_uvm_pkg__03a__03auvm_reg_cbs;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi63__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi63__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi63__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi63__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi63 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> __PVT__m_obj;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __PVT__m_cb;
    void __VnoInFunc_first(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi63(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> obj);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi63() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi63>& obj);

#endif  // guard
