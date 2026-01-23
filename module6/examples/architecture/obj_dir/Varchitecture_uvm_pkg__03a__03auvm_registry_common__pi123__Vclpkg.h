// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REGISTRY_COMMON__PI123__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_REGISTRY_COMMON__PI123__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_component_registry__Tz194;
class Varchitecture_uvm_pkg__03a__03auvm_factory;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123;
class Varchitecture_uvm_pkg__03a__03auvm_sequencer_;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m___05Finitialized;
    VlQueue<std::string> __PVT__m___05Ftype_aliases;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123> __PVT__get__Vstatic__m_inst;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc____05Fdeferred_init(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &___05Fdeferred_init__Vfuncrtn);
    void __VnoInFunc_create(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_> &create__Vfuncrtn);
    void __VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123> &get__Vfuncrtn);
    void __VnoInFunc_set_inst_override(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent);
    void __VnoInFunc_set_type_alias(Varchitecture__Syms* __restrict vlSymsp, std::string alias_name);
    void __VnoInFunc_set_type_override(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123 : public virtual VlClass {
  public:
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_initialize(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123(Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_registry_common__pi123>& obj);

#endif  // guard
