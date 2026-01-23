// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vvirtual_sequences_uvm_pkg.h"
#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory__Vclpkg.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_factory;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_queue_class;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;


class Vvirtual_sequences__Syms;
struct Vvirtual_sequences_m_inst_typename_alias_t__struct__0 {
    Vvirtual_sequences_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    std::string __PVT__alias_type_name;
    std::string __PVT__full_inst_path;

    bool operator==(const Vvirtual_sequences_m_inst_typename_alias_t__struct__0& rhs) const {
        return __PVT__orig == rhs.__PVT__orig
            && __PVT__alias_type_name == rhs.__PVT__alias_type_name
            && __PVT__full_inst_path == rhs.__PVT__full_inst_path;
    }
    bool operator!=(const Vvirtual_sequences_m_inst_typename_alias_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vvirtual_sequences_m_inst_typename_alias_t__struct__0& rhs) const {
        return std::tie(__PVT__orig, __PVT__alias_type_name, __PVT__full_inst_path)
            <  std::tie(rhs.__PVT__orig, rhs.__PVT__alias_type_name, rhs.__PVT__full_inst_path);
    }
};
template <>
struct VlIsCustomStruct<Vvirtual_sequences_m_inst_typename_alias_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_debug_pass;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vvirtual_sequences_m_inst_typename_alias_t__struct__0& obj);
#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_factory__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory : public Vvirtual_sequences_uvm_pkg__03a__03auvm_factory {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper>, CData/*0:0*/> __PVT__m_types;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_lookup_strs;
    VlQueue<Vvirtual_sequences_m_inst_typename_alias_t__struct__0> __PVT__m_inst_aliases;
    VlAssocArray<std::string, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__m_type_names;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_type_overrides;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_inst_overrides;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_override_info;
    void __VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string original_type_name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string override_type_name, std::string full_inst_path, CData/*0:0*/ &check_inst_override_exists__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_type(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn);
    virtual void __VnoInFunc_debug_create_by_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn);
    virtual void __VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn);
    virtual void __VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn);
    virtual void __VnoInFunc_is_type_name_registered(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string type_name, CData/*0:0*/ &is_type_name_registered__Vfuncrtn);
    virtual void __VnoInFunc_is_type_registered(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> obj, CData/*0:0*/ &is_type_registered__Vfuncrtn);
    void __VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    void __VnoInFunc_m_debug_display(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> result, std::string full_inst_path);
    void __VnoInFunc_m_matches_inst_override(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ &m_matches_inst_override__Vfuncrtn);
    void __VnoInFunc_m_matches_type_override(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ match_original_type, CData/*0:0*/ resolve_null_type_by_inst, CData/*0:0*/ &m_matches_type_override__Vfuncrtn);
    void __VnoInFunc_m_matches_type_pair(Vvirtual_sequences__Syms* __restrict vlSymsp, Vvirtual_sequences_m_uvm_factory_type_pair_t__struct__0 match_type_pair, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, CData/*0:0*/ &m_matches_type_pair__Vfuncrtn);
    void __VnoInFunc_m_resolve_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name__Vfuncrtn);
    void __VnoInFunc_m_resolve_type_name_by_inst(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name_by_inst__Vfuncrtn);
    virtual void __VnoInFunc_print(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ all_types);
    virtual void __VnoInFunc_register(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> obj);
    virtual void __VnoInFunc_set_inst_alias(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> original_type);
    virtual void __VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    virtual void __VnoInFunc_set_type_override_by_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory(Vvirtual_sequences__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_default_factory>& obj);

#endif  // guard
