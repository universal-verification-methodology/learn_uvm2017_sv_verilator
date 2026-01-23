// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_FACTORY__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_component;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_factory;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_factory__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_factory__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_factory__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_factory__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_factory> &get__Vfuncrtn);
    void __VnoInFunc_set(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_factory> f);
};


class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_factory : public virtual VlClass {
  public:
    virtual void __VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn);
    virtual void __VnoInFunc_debug_create_by_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn);
    virtual void __VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn);
    virtual void __VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn);
    virtual void __VnoInFunc_is_type_name_registered(Vrecorders_top__Syms* __restrict vlSymsp, std::string type_name, CData/*0:0*/ &is_type_name_registered__Vfuncrtn);
    virtual void __VnoInFunc_is_type_registered(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> obj, CData/*0:0*/ &is_type_registered__Vfuncrtn);
    virtual void __VnoInFunc_print(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ all_types);
    virtual void __VnoInFunc_register(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> obj);
    virtual void __VnoInFunc_set_inst_alias(Vrecorders_top__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> original_type);
    virtual void __VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    virtual void __VnoInFunc_set_type_override_by_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_factory(Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_factory();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_factory>& obj);

#endif  // guard
