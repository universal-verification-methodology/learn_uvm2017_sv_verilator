// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AM_UVM_WAITER__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AM_UVM_WAITER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03am_uvm_waiter__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03am_uvm_waiter__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03am_uvm_waiter__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03am_uvm_waiter__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03am_uvm_waiter : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__inst_name;
    std::string __PVT__field_name;
    VlAssignableEvent __PVT__trigger;
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03am_uvm_waiter(Vtransactions__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_uvm_pkg__03a__03am_uvm_waiter() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03am_uvm_waiter>& obj);

#endif  // guard
