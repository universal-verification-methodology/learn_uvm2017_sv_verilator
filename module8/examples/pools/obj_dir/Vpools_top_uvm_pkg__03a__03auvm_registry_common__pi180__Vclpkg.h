// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REGISTRY_COMMON__PI180__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REGISTRY_COMMON__PI180__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_factory;
class Vpools_top_uvm_pkg__03a__03auvm_mem_walk_seq;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi153;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m___05Finitialized;
    VlQueue<std::string> __PVT__m___05Ftype_aliases;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180> __PVT__get__Vstatic__m_inst;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc____05Fdeferred_init(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &___05Fdeferred_init__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_mem_walk_seq> &create__Vfuncrtn);
    void __VnoInFunc_get(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180> &get__Vfuncrtn);
    void __VnoInFunc_set_inst_override(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent);
    void __VnoInFunc_set_type_alias(Vpools_top__Syms* __restrict vlSymsp, std::string alias_name);
    void __VnoInFunc_set_type_override(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
    void __VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};


class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180 : public virtual VlClass {
  public:
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_initialize(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_registry_common__pi180>& obj);

#endif  // guard
