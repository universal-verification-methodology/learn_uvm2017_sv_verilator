// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__typename;
    VlAssocArray<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base>, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks_base>> __PVT__typeid_map;
    VlAssocArray<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callbacks_base>, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base>> __PVT__type_map;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base(Vvirtual_sequences__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_typeid_base>& obj);

#endif  // guard
