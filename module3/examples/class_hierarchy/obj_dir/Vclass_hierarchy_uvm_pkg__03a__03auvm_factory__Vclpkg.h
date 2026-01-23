// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_FACTORY__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_factory;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_factory__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_factory__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_factory__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_factory__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_factory> &get__Vfuncrtn);
    void __VnoInFunc_set(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_factory> f);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_factory : public virtual VlClass {
  public:
    virtual void __VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn);
    virtual void __VnoInFunc_debug_create_by_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn);
    virtual void __VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn);
    virtual void __VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn);
    virtual void __VnoInFunc_is_type_name_registered(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string type_name, CData/*0:0*/ &is_type_name_registered__Vfuncrtn);
    virtual void __VnoInFunc_is_type_registered(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> obj, CData/*0:0*/ &is_type_registered__Vfuncrtn);
    virtual void __VnoInFunc_print(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ all_types);
    virtual void __VnoInFunc_register(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> obj);
    virtual void __VnoInFunc_set_inst_alias(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> original_type);
    virtual void __VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    virtual void __VnoInFunc_set_type_override_by_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_factory(Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_factory();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_factory>& obj);

#endif  // guard
