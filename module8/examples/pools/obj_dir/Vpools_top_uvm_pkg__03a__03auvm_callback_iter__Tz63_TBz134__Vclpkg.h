// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ63_TBZ134__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_CALLBACK_ITER__TZ63_TBZ134__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_report_catcher;
class Vpools_top_uvm_pkg__03a__03auvm_report_object;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134__Vclpkg(Vpools_top__Syms* symsp, const char* v__name);
    ~Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134__Vclpkg();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> __PVT__m_obj;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> __PVT__m_cb;
    void __VnoInFunc_first(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &last__Vfuncrtn);
    void __VnoInFunc_next(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &next__Vfuncrtn);
    void __VnoInFunc_prev(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_catcher> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_object> obj);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__Tz63_TBz134>& obj);

#endif  // guard
