// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PORT_COMPONENT__TZ289__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PORT_COMPONENT__TZ289__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component_base;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component_base__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289 : public Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component_base {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> __PVT__m_port;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_connected_to(Vclass_hierarchy__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component_base>> &list);
    void __VnoInFunc_get_port(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> &get_port__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> port);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289>& obj);

#endif  // guard
