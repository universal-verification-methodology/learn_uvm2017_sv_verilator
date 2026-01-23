// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AM_UVM_PRINTER_KNOBS__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AM_UVM_PRINTER_KNOBS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__identifier;
    CData/*0:0*/ __PVT__type_name;
    CData/*0:0*/ __PVT__size;
    CData/*0:0*/ __PVT__reference;
    CData/*0:0*/ __PVT__show_root;
    CData/*0:0*/ __PVT__show_radix;
    IData/*31:0*/ __PVT__depth;
    IData/*31:0*/ __PVT__begin_elements;
    IData/*31:0*/ __PVT__end_elements;
    IData/*31:0*/ __PVT__indent;
    IData/*31:0*/ __PVT__mcd;
    IData/*27:0*/ __PVT__default_radix;
    IData/*27:0*/ __PVT__recursion_policy;
    std::string __PVT__prefix;
    std::string __PVT__separator;
    std::string __PVT__dec_radix;
    std::string __PVT__bin_radix;
    std::string __PVT__oct_radix;
    std::string __PVT__unsigned_radix;
    std::string __PVT__hex_radix;
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs>& obj);

#endif  // guard
