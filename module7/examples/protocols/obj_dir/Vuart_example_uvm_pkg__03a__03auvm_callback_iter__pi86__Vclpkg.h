// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI86__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_CALLBACK_ITER__PI86__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_reg_cbs;
class Vuart_example_uvm_pkg__03a__03auvm_reg_field;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_callback_iter__pi86__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_callback_iter__pi86__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_callback_iter__pi86__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__pi86__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_callback_iter__pi86 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_i;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_field> __PVT__m_obj;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_cbs> __PVT__m_cb;
    void __VnoInFunc_first(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_cbs> &first__Vfuncrtn);
    void __VnoInFunc_get_cb(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_cbs> &get_cb__Vfuncrtn);
    void __VnoInFunc_last(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_cbs> &last__Vfuncrtn);
    void __VnoInFunc_next(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_cbs> &next__Vfuncrtn);
    void __VnoInFunc_prev(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_cbs> &prev__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_callback_iter__pi86(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_field> obj);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vuart_example_uvm_pkg__03a__03auvm_callback_iter__pi86() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__pi86>& obj);

#endif  // guard
