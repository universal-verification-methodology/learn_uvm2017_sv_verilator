// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_callbacks_base;
class Vpools_top_uvm_pkg__03a__03auvm_typeid_base;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__typename;
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_typeid_base>, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callbacks_base>> __PVT__typeid_map;
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callbacks_base>, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_typeid_base>> __PVT__type_map;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_typeid_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_typeid_base : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_typeid_base(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_typeid_base();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_typeid_base>& obj);

#endif  // guard
