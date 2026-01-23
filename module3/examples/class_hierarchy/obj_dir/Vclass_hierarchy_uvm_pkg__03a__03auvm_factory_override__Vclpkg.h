// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vclass_hierarchy_uvm_pkg.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_factory_override__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_factory_override__Vclpkg(Vclass_hierarchy__Syms* symsp, const char* v__name);
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__replace;
    CData/*0:0*/ __PVT__selected;
    CData/*0:0*/ __PVT__has_wildcard;
    IData/*31:0*/ __PVT__used;
    Vclass_hierarchy_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    Vclass_hierarchy_m_uvm_factory_type_pair_t__struct__0 __PVT__ovrd;
    std::string __PVT__full_inst_path;
    void __VnoInFunc_m_has_wildcard(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_factory_override(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type, std::string ovrd_type_name, CData/*0:0*/ replace);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_factory_override() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_factory_override>& obj);

#endif  // guard
