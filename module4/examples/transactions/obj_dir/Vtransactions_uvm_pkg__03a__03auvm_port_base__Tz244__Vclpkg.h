// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_PORT_BASE__TZ244__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_PORT_BASE__TZ244__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_phase;
class Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244;
class Vtransactions_uvm_pkg__03a__03auvm_port_component__Tz249;
class Vtransactions_uvm_pkg__03a__03auvm_port_component_base;
class Vtransactions_uvm_pkg__03a__03auvm_root;
class Vtransactions_uvm_pkg__03a__03auvm_sqr_if_base__Tz175_TBz175;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__debug_connected_to__Vstatic__indent;
    std::string __PVT__debug_connected_to__Vstatic__save;
    std::string __PVT__debug_provided_to__Vstatic__indent;
    std::string __PVT__debug_provided_to__Vstatic__save;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_sqr_if_base__Tz175_TBz175__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244 : public Vtransactions_uvm_pkg__03a__03auvm_sqr_if_base__Tz175_TBz175 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_resolved;
    IData/*31:0*/ __PVT__m_if_mask;
    IData/*31:0*/ __PVT__m_def_index;
    IData/*31:0*/ __PVT__m_port_type;
    IData/*31:0*/ __PVT__m_min_size;
    IData/*31:0*/ __PVT__m_max_size;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244> __PVT__m_if;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_component__Tz249> __PVT__m_comp;
    VlAssocArray<std::string, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244>> __PVT__m_provided_by;
    VlAssocArray<std::string, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244>> __PVT__m_provided_to;
    VlAssocArray<std::string, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244>> __PVT__m_imp_list;
    virtual void __VnoInFunc_connect(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244> provider);
    void __VnoInFunc_debug_connected_to(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    void __VnoInFunc_debug_provided_to(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    virtual void __VnoInFunc_get_comp(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn);
    void __VnoInFunc_get_connected_to(Vtransactions__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244>> &list);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_if(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244> &get_if__Vfuncrtn);
    void __VnoInFunc_get_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_provided_to(Vtransactions__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244>> &list);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    void __VnoInFunc_is_unbounded(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn);
    void __VnoInFunc_m_add_list(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244> provider);
    void __VnoInFunc_m_check_relationship(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn);
    void __VnoInFunc_m_get_if_mask(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn);
    void __VnoInFunc_max_size(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn);
    void __VnoInFunc_min_size(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_default_index(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_set_if(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_size(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244>& obj);

#endif  // guard
