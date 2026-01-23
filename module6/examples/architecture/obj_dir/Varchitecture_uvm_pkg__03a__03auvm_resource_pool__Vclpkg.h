// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Varchitecture_uvm_pkg__03a__03auvm_resource_pool__Vclpkg.h"
#include "Varchitecture_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03aget_t;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_printer;
class Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26;
class Varchitecture_uvm_pkg__03a__03auvm_resource_base;
class Varchitecture_uvm_pkg__03a__03auvm_resource_pool;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_tree_printer;


class Varchitecture__Syms;
struct Varchitecture_rsrc_info_t__struct__0 {
    std::string __PVT__scope;
    IData/*31:0*/ __PVT__precedence;

    bool operator==(const Varchitecture_rsrc_info_t__struct__0& rhs) const {
        return __PVT__scope == rhs.__PVT__scope
            && __PVT__precedence == rhs.__PVT__precedence;
    }
    bool operator!=(const Varchitecture_rsrc_info_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Varchitecture_rsrc_info_t__struct__0& rhs) const {
        return std::tie(__PVT__scope, __PVT__precedence)
            <  std::tie(rhs.__PVT__scope, rhs.__PVT__precedence);
    }
};
template <>
struct VlIsCustomStruct<Varchitecture_rsrc_info_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_resource_pool__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base>, Varchitecture_rsrc_info_t__struct__0> __PVT__ri_tab;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tree_printer> __PVT__print_resources__Vstatic__printer;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tree_printer> __PVT__dump__Vstatic__m_printer;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn);
    void __VnoInFunc_get_default_precedence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_precedence__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> &q, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_set_default_precedence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ precedence);
    void __VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> &q);
};

std::string VL_TO_STRING(const Varchitecture_rsrc_info_t__struct__0& obj);

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_resource_pool : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26>> __PVT__rtab;
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base>, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26>> __PVT__ttab;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03aget_t>> __PVT__get_record;
    virtual void __VnoInFunc_delete(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_dump(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ audit, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_dump_get_records(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Varchitecture__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn);
    virtual void __VnoInFunc_get_precedence(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ &get_precedence__Vfuncrtn);
    virtual void __VnoInFunc_get_scope(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string &scope, CData/*0:0*/ &get_scope__Vfuncrtn);
    void __VnoInFunc_lookup_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> &lookup_name__Vfuncrtn);
    void __VnoInFunc_lookup_regex(Varchitecture__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> &lookup_regex__Vfuncrtn);
    void __VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> &lookup_regex_names__Vfuncrtn);
    void __VnoInFunc_lookup_scope(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> &lookup_scope__Vfuncrtn);
    void __VnoInFunc_lookup_type(Varchitecture__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> &lookup_type__Vfuncrtn);
    void __VnoInFunc_m_print_resources(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> rq, CData/*0:0*/ audit);
    void __VnoInFunc_print_resources(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> rq, CData/*0:0*/ audit);
    void __VnoInFunc_push_get_record(Varchitecture__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_name_override(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_set_override(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    virtual void __VnoInFunc_set_precedence(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ p);
    void __VnoInFunc_set_priority(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26> &q, IData/*31:0*/ &pri);
    void __VnoInFunc_set_priority_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_scope(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_set_type_override(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_spell_check(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_resource_pool(Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_uvm_pkg__03a__03auvm_resource_pool() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_pool>& obj);

#endif  // guard
