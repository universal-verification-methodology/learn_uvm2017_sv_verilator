// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PORT_BASE__TZ286__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PORT_BASE__TZ286__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_phase;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component_base;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_if_base__Tz210_TBz210;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__debug_connected_to__Vstatic__indent;
    std::string __PVT__debug_connected_to__Vstatic__save;
    std::string __PVT__debug_provided_to__Vstatic__indent;
    std::string __PVT__debug_provided_to__Vstatic__save;

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_if_base__Tz210_TBz210__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286 : public Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_if_base__Tz210_TBz210 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_resolved;
    IData/*31:0*/ __PVT__m_if_mask;
    IData/*31:0*/ __PVT__m_def_index;
    IData/*31:0*/ __PVT__m_port_type;
    IData/*31:0*/ __PVT__m_min_size;
    IData/*31:0*/ __PVT__m_max_size;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> __PVT__m_if;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component__Tz289> __PVT__m_comp;
    VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286>> __PVT__m_provided_by;
    VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286>> __PVT__m_provided_to;
    VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286>> __PVT__m_imp_list;
    virtual void __VnoInFunc_connect(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> provider);
    void __VnoInFunc_debug_connected_to(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    void __VnoInFunc_debug_provided_to(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    virtual void __VnoInFunc_get_comp(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn);
    void __VnoInFunc_get_connected_to(Vclass_hierarchy__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286>> &list);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_if(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> &get_if__Vfuncrtn);
    void __VnoInFunc_get_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_provided_to(Vclass_hierarchy__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286>> &list);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    void __VnoInFunc_is_unbounded(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn);
    void __VnoInFunc_m_add_list(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> provider);
    void __VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn);
    void __VnoInFunc_m_get_if_mask(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn);
    void __VnoInFunc_max_size(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn);
    void __VnoInFunc_min_size(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_default_index(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_set_if(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_size(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_port_base__Tz286>& obj);

#endif  // guard
