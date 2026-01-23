// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_PORT_BASE__TZ151__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_PORT_BASE__TZ151__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_phase;
class Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151;
class Vpools_top_uvm_pkg__03a__03auvm_port_component__Tz194;
class Vpools_top_uvm_pkg__03a__03auvm_port_component_base;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz9_TBz9;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__debug_connected_to__Vstatic__indent;
    std::string __PVT__debug_connected_to__Vstatic__save;
    std::string __PVT__debug_provided_to__Vstatic__indent;
    std::string __PVT__debug_provided_to__Vstatic__save;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz9_TBz9__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151 : public Vpools_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz9_TBz9 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_resolved;
    IData/*31:0*/ __PVT__m_if_mask;
    IData/*31:0*/ __PVT__m_def_index;
    IData/*31:0*/ __PVT__m_port_type;
    IData/*31:0*/ __PVT__m_min_size;
    IData/*31:0*/ __PVT__m_max_size;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151> __PVT__m_if;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_component__Tz194> __PVT__m_comp;
    VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151>> __PVT__m_provided_by;
    VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151>> __PVT__m_provided_to;
    VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151>> __PVT__m_imp_list;
    virtual void __VnoInFunc_connect(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151> provider);
    void __VnoInFunc_debug_connected_to(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    void __VnoInFunc_debug_provided_to(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    virtual void __VnoInFunc_get_comp(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn);
    void __VnoInFunc_get_connected_to(Vpools_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151>> &list);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_if(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151> &get_if__Vfuncrtn);
    void __VnoInFunc_get_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_provided_to(Vpools_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151>> &list);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    void __VnoInFunc_is_unbounded(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn);
    void __VnoInFunc_m_add_list(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151> provider);
    void __VnoInFunc_m_check_relationship(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn);
    void __VnoInFunc_m_get_if_mask(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn);
    void __VnoInFunc_max_size(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn);
    void __VnoInFunc_min_size(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_default_index(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_set_if(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_size(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_port_base__Tz151>& obj);

#endif  // guard
