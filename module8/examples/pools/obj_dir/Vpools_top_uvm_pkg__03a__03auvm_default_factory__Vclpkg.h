// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_DEFAULT_FACTORY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vpools_top_uvm_pkg.h"
#include "Vpools_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg.h"
class Vpools_top_uvm_pkg__03a__03auvm_component;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_factory;
class Vpools_top_uvm_pkg__03a__03auvm_factory_override;
class Vpools_top_uvm_pkg__03a__03auvm_factory_queue_class;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_root;


class Vpools_top__Syms;
struct Vpools_top_m_inst_typename_alias_t__struct__0 {
    Vpools_top_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    std::string __PVT__alias_type_name;
    std::string __PVT__full_inst_path;

    bool operator==(const Vpools_top_m_inst_typename_alias_t__struct__0& rhs) const {
        return __PVT__orig == rhs.__PVT__orig
            && __PVT__alias_type_name == rhs.__PVT__alias_type_name
            && __PVT__full_inst_path == rhs.__PVT__full_inst_path;
    }
    bool operator!=(const Vpools_top_m_inst_typename_alias_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vpools_top_m_inst_typename_alias_t__struct__0& rhs) const {
        return std::tie(__PVT__orig, __PVT__alias_type_name, __PVT__full_inst_path)
            <  std::tie(rhs.__PVT__orig, rhs.__PVT__alias_type_name, rhs.__PVT__full_inst_path);
    }
};
template <>
struct VlIsCustomStruct<Vpools_top_m_inst_typename_alias_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_debug_pass;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_default_factory__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vpools_top_m_inst_typename_alias_t__struct__0& obj);
#include "Vpools_top_uvm_pkg__03a__03auvm_factory__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_default_factory : public Vpools_top_uvm_pkg__03a__03auvm_factory {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper>, CData/*0:0*/> __PVT__m_types;
    VlAssocArray<std::string, CData/*0:0*/> __PVT__m_lookup_strs;
    VlQueue<Vpools_top_m_inst_typename_alias_t__struct__0> __PVT__m_inst_aliases;
    VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper>> __PVT__m_type_names;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_type_overrides;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_inst_overrides;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory_override>> __PVT__m_override_info;
    void __VnoInFunc_check_inst_override_exists(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string original_type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string override_type_name, std::string full_inst_path, CData/*0:0*/ &check_inst_override_exists__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> &create_component_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_component_by_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> &create_component_by_type__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create_object_by_name__Vfuncrtn);
    virtual void __VnoInFunc_create_object_by_type(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create_object_by_type__Vfuncrtn);
    virtual void __VnoInFunc_debug_create_by_name(Vpools_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_debug_create_by_type(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    virtual void __VnoInFunc_find_override_by_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_name__Vfuncrtn);
    virtual void __VnoInFunc_find_override_by_type(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string full_inst_path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &find_override_by_type__Vfuncrtn);
    virtual void __VnoInFunc_find_wrapper_by_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &find_wrapper_by_name__Vfuncrtn);
    virtual void __VnoInFunc_is_type_name_registered(Vpools_top__Syms* __restrict vlSymsp, std::string type_name, CData/*0:0*/ &is_type_name_registered__Vfuncrtn);
    virtual void __VnoInFunc_is_type_registered(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> obj, CData/*0:0*/ &is_type_registered__Vfuncrtn);
    void __VnoInFunc_m_debug_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string parent_inst_path, std::string name);
    void __VnoInFunc_m_debug_display(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> result, std::string full_inst_path);
    void __VnoInFunc_m_matches_inst_override(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ &m_matches_inst_override__Vfuncrtn);
    void __VnoInFunc_m_matches_type_override(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_factory_override> __SYM__override, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, std::string full_inst_path, CData/*0:0*/ match_original_type, CData/*0:0*/ resolve_null_type_by_inst, CData/*0:0*/ &m_matches_type_override__Vfuncrtn);
    void __VnoInFunc_m_matches_type_pair(Vpools_top__Syms* __restrict vlSymsp, Vpools_top_m_uvm_factory_type_pair_t__struct__0 match_type_pair, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> requested_type, std::string requested_type_name, CData/*0:0*/ &m_matches_type_pair__Vfuncrtn);
    void __VnoInFunc_m_resolve_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string requested_type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name__Vfuncrtn);
    void __VnoInFunc_m_resolve_type_name_by_inst(Vpools_top__Syms* __restrict vlSymsp, std::string requested_type_name, std::string full_inst_path, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &m_resolve_type_name_by_inst__Vfuncrtn);
    virtual void __VnoInFunc_print(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ all_types);
    virtual void __VnoInFunc_register(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> obj);
    virtual void __VnoInFunc_set_inst_alias(Vpools_top__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, std::string full_inst_path);
    virtual void __VnoInFunc_set_inst_override_by_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string full_inst_path);
    virtual void __VnoInFunc_set_type_alias(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string alias_type_name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> original_type);
    virtual void __VnoInFunc_set_type_override_by_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string original_type_name, std::string override_type_name, CData/*0:0*/ replace);
    virtual void __VnoInFunc_set_type_override_by_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> original_type, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_default_factory(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_default_factory();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_default_factory>& obj);

#endif  // guard
