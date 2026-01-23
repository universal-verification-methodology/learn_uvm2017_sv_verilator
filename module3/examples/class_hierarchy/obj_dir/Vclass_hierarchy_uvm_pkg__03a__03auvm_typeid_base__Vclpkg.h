// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_TYPEID_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks_base;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__typename;
    VlAssocArray<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base>, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks_base>> __PVT__typeid_map;
    VlAssocArray<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callbacks_base>, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base>> __PVT__type_map;

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base(Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base>& obj);

#endif  // guard
