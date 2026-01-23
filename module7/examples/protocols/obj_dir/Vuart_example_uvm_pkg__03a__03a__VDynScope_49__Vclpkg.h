// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03A__VDYNSCOPE_49__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03A__VDYNSCOPE_49__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03a__VDynScope_49__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03a__VDynScope_49__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03a__VDynScope_49__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03a__VDynScope_49__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03a__VDynScope_49 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__i;
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03a__VDynScope_49(Vuart_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vuart_example_uvm_pkg__03a__03a__VDynScope_49() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_49>& obj);

#endif  // guard
