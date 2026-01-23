// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_TYPEID__TZ171__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_TYPEID__TZ171__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171;
class Vuart_example_uvm_pkg__03a__03auvm_typeid_base;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171> __PVT__m_b_inst;

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171> &get__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_typeid_base__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171 : public Vuart_example_uvm_pkg__03a__03auvm_typeid_base {
  public:
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171(Vuart_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_typeid__Tz171>& obj);

#endif  // guard
