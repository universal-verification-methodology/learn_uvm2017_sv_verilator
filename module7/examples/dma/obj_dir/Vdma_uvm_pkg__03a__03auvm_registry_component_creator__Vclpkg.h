// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REGISTRY_COMPONENT_CREATOR__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REGISTRY_COMPONENT_CREATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_factory;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_registry_component_creator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_base_type_name(Vdma__Syms* __restrict vlSymsp, std::string &base_type_name__Vfuncrtn);
    void __VnoInFunc_create_by_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> obj_wrpr, std::string contxt, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> &create_by_type__Vfuncrtn);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_registry_component_creator : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_registry_component_creator(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03auvm_registry_component_creator() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_registry_component_creator>& obj);

#endif  // guard
