// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vpools_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg.h"
#include "Vpools_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class Vpools_top_std__03a__03aprocess;
class Vpools_top_uvm_pkg__03a__03aget_t;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_printer;
class Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19;
class Vpools_top_uvm_pkg__03a__03auvm_resource_base;
class Vpools_top_uvm_pkg__03a__03auvm_resource_pool;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_tree_printer;


class Vpools_top__Syms;
struct Vpools_top_rsrc_info_t__struct__0 {
    std::string __PVT__scope;
    IData/*31:0*/ __PVT__precedence;

    bool operator==(const Vpools_top_rsrc_info_t__struct__0& rhs) const {
        return __PVT__scope == rhs.__PVT__scope
            && __PVT__precedence == rhs.__PVT__precedence;
    }
    bool operator!=(const Vpools_top_rsrc_info_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vpools_top_rsrc_info_t__struct__0& rhs) const {
        return std::tie(__PVT__scope, __PVT__precedence)
            <  std::tie(rhs.__PVT__scope, rhs.__PVT__precedence);
    }
};
template <>
struct VlIsCustomStruct<Vpools_top_rsrc_info_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base>, Vpools_top_rsrc_info_t__struct__0> __PVT__ri_tab;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tree_printer> __PVT__print_resources__Vstatic__printer;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tree_printer> __PVT__dump__Vstatic__m_printer;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn);
    void __VnoInFunc_get_default_precedence(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_precedence__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> &q, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_set_default_precedence(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ precedence);
    void __VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> &q);
};

std::string VL_TO_STRING(const Vpools_top_rsrc_info_t__struct__0& obj);

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_resource_pool : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19>> __PVT__rtab;
    VlAssocArray<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base>, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19>> __PVT__ttab;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03aget_t>> __PVT__get_record;
    virtual void __VnoInFunc_delete(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_dump(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ audit, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_dump_get_records(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vpools_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn);
    virtual void __VnoInFunc_get_precedence(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ &get_precedence__Vfuncrtn);
    virtual void __VnoInFunc_get_scope(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string &scope, CData/*0:0*/ &get_scope__Vfuncrtn);
    void __VnoInFunc_lookup_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> &lookup_name__Vfuncrtn);
    void __VnoInFunc_lookup_regex(Vpools_top__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> &lookup_regex__Vfuncrtn);
    void __VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> &lookup_regex_names__Vfuncrtn);
    void __VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> &lookup_scope__Vfuncrtn);
    void __VnoInFunc_lookup_type(Vpools_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> &lookup_type__Vfuncrtn);
    void __VnoInFunc_m_print_resources(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> rq, CData/*0:0*/ audit);
    void __VnoInFunc_print_resources(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> rq, CData/*0:0*/ audit);
    void __VnoInFunc_push_get_record(Vpools_top__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_name_override(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_set_override(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    virtual void __VnoInFunc_set_precedence(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ p);
    void __VnoInFunc_set_priority(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19> &q, IData/*31:0*/ &pri);
    void __VnoInFunc_set_priority_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_scope(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_set_type_override(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_spell_check(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_resource_pool(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_uvm_pkg__03a__03auvm_resource_pool() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_resource_pool>& obj);

#endif  // guard
