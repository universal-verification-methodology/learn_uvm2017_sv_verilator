// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_RESOURCE_POOL__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg.h"
#include "Vrecorders_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"
class Vrecorders_top_std__03a__03aprocess;
class Vrecorders_top_uvm_pkg__03a__03aget_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_printer;
class Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20;
class Vrecorders_top_uvm_pkg__03a__03auvm_resource_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer;


class Vrecorders_top__Syms;
struct Vrecorders_top_rsrc_info_t__struct__0 {
    std::string __PVT__scope;
    IData/*31:0*/ __PVT__precedence;

    bool operator==(const Vrecorders_top_rsrc_info_t__struct__0& rhs) const {
        return __PVT__scope == rhs.__PVT__scope
            && __PVT__precedence == rhs.__PVT__precedence;
    }
    bool operator!=(const Vrecorders_top_rsrc_info_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vrecorders_top_rsrc_info_t__struct__0& rhs) const {
        return std::tie(__PVT__scope, __PVT__precedence)
            <  std::tie(rhs.__PVT__scope, rhs.__PVT__precedence);
    }
};
template <>
struct VlIsCustomStruct<Vrecorders_top_rsrc_info_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base>, Vrecorders_top_rsrc_info_t__struct__0> __PVT__ri_tab;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer> __PVT__print_resources__Vstatic__printer;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer> __PVT__dump__Vstatic__m_printer;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool> &get__Vfuncrtn);
    void __VnoInFunc_get_default_precedence(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_precedence__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> &q, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_set_default_precedence(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ precedence);
    void __VnoInFunc_sort_by_precedence(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> &q);
};

std::string VL_TO_STRING(const Vrecorders_top_rsrc_info_t__struct__0& obj);

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20>> __PVT__rtab;
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base>, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20>> __PVT__ttab;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03aget_t>> __PVT__get_record;
    virtual void __VnoInFunc_delete(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_dump(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ audit, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_dump_get_records(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> &get_by_type__Vfuncrtn);
    virtual void __VnoInFunc_get_precedence(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ &get_precedence__Vfuncrtn);
    virtual void __VnoInFunc_get_scope(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string &scope, CData/*0:0*/ &get_scope__Vfuncrtn);
    void __VnoInFunc_lookup_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> type_handle, CData/*0:0*/ rpterr, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> &lookup_name__Vfuncrtn);
    void __VnoInFunc_lookup_regex(Vrecorders_top__Syms* __restrict vlSymsp, std::string re, std::string scope, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> &lookup_regex__Vfuncrtn);
    void __VnoInFunc_lookup_regex_names(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> &lookup_regex_names__Vfuncrtn);
    void __VnoInFunc_lookup_scope(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> &lookup_scope__Vfuncrtn);
    void __VnoInFunc_lookup_type(Vrecorders_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> &lookup_type__Vfuncrtn);
    void __VnoInFunc_m_print_resources(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer> printer, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> rq, CData/*0:0*/ audit);
    void __VnoInFunc_print_resources(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> rq, CData/*0:0*/ audit);
    void __VnoInFunc_push_get_record(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string scope, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_set_name_override(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_set_override(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    virtual void __VnoInFunc_set_precedence(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> r, IData/*31:0*/ p);
    void __VnoInFunc_set_priority(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_priority_queue(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20> &q, IData/*31:0*/ &pri);
    void __VnoInFunc_set_priority_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, IData/*31:0*/ pri);
    void __VnoInFunc_set_scope(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_set_type_override(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_base> rsrc, std::string scope);
    void __VnoInFunc_spell_check(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &spell_check__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool(Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_pool>& obj);

#endif  // guard
