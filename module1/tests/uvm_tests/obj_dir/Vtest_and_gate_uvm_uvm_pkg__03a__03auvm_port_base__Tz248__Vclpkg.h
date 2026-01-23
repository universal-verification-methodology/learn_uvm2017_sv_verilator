// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_PORT_BASE__TZ248__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_PORT_BASE__TZ248__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_component__Tz279;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_component_base;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__debug_connected_to__Vstatic__indent;
    std::string __PVT__debug_connected_to__Vstatic__save;
    std::string __PVT__debug_provided_to__Vstatic__indent;
    std::string __PVT__debug_provided_to__Vstatic__save;

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248 : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_resolved;
    IData/*31:0*/ __PVT__m_if_mask;
    IData/*31:0*/ __PVT__m_def_index;
    IData/*31:0*/ __PVT__m_port_type;
    IData/*31:0*/ __PVT__m_min_size;
    IData/*31:0*/ __PVT__m_max_size;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248> __PVT__m_if;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_component__Tz279> __PVT__m_comp;
    VlAssocArray<std::string, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248>> __PVT__m_provided_by;
    VlAssocArray<std::string, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248>> __PVT__m_provided_to;
    VlAssocArray<std::string, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248>> __PVT__m_imp_list;
    virtual void __VnoInFunc_connect(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248> provider);
    void __VnoInFunc_debug_connected_to(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    void __VnoInFunc_debug_provided_to(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ level, IData/*31:0*/ max_level);
    virtual void __VnoInFunc_get_comp(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_component_base> &get_comp__Vfuncrtn);
    void __VnoInFunc_get_connected_to(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248>> &list);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_if(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248> &get_if__Vfuncrtn);
    void __VnoInFunc_get_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> &get_parent__Vfuncrtn);
    void __VnoInFunc_get_provided_to(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248>> &list);
    virtual void __VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_is_export(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_export__Vfuncrtn);
    void __VnoInFunc_is_imp(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_imp__Vfuncrtn);
    void __VnoInFunc_is_port(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_port__Vfuncrtn);
    void __VnoInFunc_is_unbounded(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_unbounded__Vfuncrtn);
    void __VnoInFunc_m_add_list(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248> provider);
    void __VnoInFunc_m_check_relationship(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248> provider, CData/*0:0*/ &m_check_relationship__Vfuncrtn);
    void __VnoInFunc_m_get_if_mask(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_if_mask__Vfuncrtn);
    void __VnoInFunc_max_size(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &max_size__Vfuncrtn);
    void __VnoInFunc_min_size(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &min_size__Vfuncrtn);
    virtual void __VnoInFunc_resolve_bindings(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_default_index(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_set_if(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ index);
    void __VnoInFunc_size(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ port_type, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_port_base__Tz248>& obj);

#endif  // guard
