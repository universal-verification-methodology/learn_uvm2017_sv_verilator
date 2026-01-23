// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_REGISTRY_COMMON__PI72__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_REGISTRY_COMMON__PI72__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__Tz126;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_factory;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo__Tz15;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m___05Finitialized;
    VlQueue<std::string> __PVT__m___05Ftype_aliases;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72> __PVT__get__Vstatic__m_inst;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc____05Fdeferred_init(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &___05Fdeferred_init__Vfuncrtn);
    void __VnoInFunc_create(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tlm_fifo__Tz15> &create__Vfuncrtn);
    void __VnoInFunc_get(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72> &get__Vfuncrtn);
    void __VnoInFunc_set_inst_override(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent);
    void __VnoInFunc_set_type_alias(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string alias_name);
    void __VnoInFunc_set_type_override(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
    void __VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};


class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72 : public virtual VlClass {
  public:
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_initialize(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72(Vvirtual_sequences__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72() {}
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_registry_common__pi72>& obj);

#endif  // guard
