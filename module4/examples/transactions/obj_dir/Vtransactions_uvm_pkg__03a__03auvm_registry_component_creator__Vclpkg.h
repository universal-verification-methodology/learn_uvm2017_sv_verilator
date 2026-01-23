// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_REGISTRY_COMPONENT_CREATOR__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_REGISTRY_COMPONENT_CREATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_factory;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_base_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &base_type_name__Vfuncrtn);
    void __VnoInFunc_create_by_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> obj_wrpr, std::string contxt, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> &create_by_type__Vfuncrtn);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_registry_component_creator : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_registry_component_creator(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_uvm_pkg__03a__03auvm_registry_component_creator() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_registry_component_creator>& obj);

#endif  // guard
