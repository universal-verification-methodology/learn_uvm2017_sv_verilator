// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_PORT_BASE__TZ271__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_PORT_BASE__TZ271__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_port_component__Tz274;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_port_component_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_if_base__Tz203_TBz203;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__debug_connected_to__Vstatic__indent;
    std::string __PVT__debug_connected_to__Vstatic__save;
    std::string __PVT__debug_provided_to__Vstatic__indent;
    std::string __PVT__debug_provided_to__Vstatic__save;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_if_base__Tz203_TBz203__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_if_base__Tz203_TBz203 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_resolved;
    IData/*31:0*/ __PVT__m_if_mask;
    IData/*31:0*/ __PVT__m_def_index;
    IData/*31:0*/ __PVT__m_port_type;
    IData/*31:0*/ __PVT__m_min_size;
    IData/*31:0*/ __PVT__m_max_size;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271> __PVT__m_if;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_component__Tz274> __PVT__m_comp;
    VlAssocArray<std::string, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271>> __PVT__m_provided_by;
    VlAssocArray<std::string, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271>> __PVT__m_provided_to;
    VlAssocArray<std::string, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271>> __PVT__m_imp_list;
    virtual void __VnoInFunc_connect(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271> provider);
    void __VnoInFunc_debug_connected_to(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    void __VnoInFunc_debug_provided_to(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    virtual void __VnoInFunc_get_comp(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn);
    void __VnoInFunc_get_connected_to(Vvirtual_sequences__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271>> &list);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_if(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271> &get_if__Vfuncrtn);
    void __VnoInFunc_get_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_provided_to(Vvirtual_sequences__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271>> &list);
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    void __VnoInFunc_is_unbounded(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn);
    void __VnoInFunc_m_add_list(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271> provider);
    void __VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn);
    void __VnoInFunc_m_get_if_mask(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn);
    void __VnoInFunc_max_size(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn);
    void __VnoInFunc_min_size(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_default_index(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_set_if(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_size(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_port_base__Tz271>& obj);

#endif  // guard
