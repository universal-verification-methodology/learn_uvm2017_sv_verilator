// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vrecorders_top_uvm_pkg__03a__03auvm_comparer__Vclpkg.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_comparer;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_field_op;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi13;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_policy;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;


class Vrecorders_top__Syms;
struct Vrecorders_top_state_info_t__struct__0 {
    IData/*31:0*/ __PVT__state;
    CData/*0:0*/ __PVT__ret_val;

    bool operator==(const Vrecorders_top_state_info_t__struct__0& rhs) const {
        return __PVT__state == rhs.__PVT__state
            && __PVT__ret_val == rhs.__PVT__ret_val;
    }
    bool operator!=(const Vrecorders_top_state_info_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vrecorders_top_state_info_t__struct__0& rhs) const {
        return std::tie(__PVT__state, __PVT__ret_val)
            <  std::tie(rhs.__PVT__state, rhs.__PVT__ret_val);
    }
};
template <>
struct VlIsCustomStruct<Vrecorders_top_state_info_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_comparer__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_comparer__Vclpkg(Vrecorders_top__Syms* symsp, const char* v__name);
    ~Vrecorders_top_uvm_pkg__03a__03auvm_comparer__Vclpkg();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_comparer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_comparer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi13> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_comparer> comparer);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

std::string VL_TO_STRING(const Vrecorders_top_state_info_t__struct__0& obj);
#include "Vrecorders_top_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_comparer : public Vrecorders_top_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT__sev;
    CData/*0:0*/ __PVT__check_type;
    IData/*27:0*/ __PVT__policy;
    IData/*31:0*/ __PVT__show_max;
    IData/*31:0*/ __PVT__verbosity;
    IData/*31:0*/ __PVT__result;
    IData/*31:0*/ __PVT__m_threshold;
    IData/*31:0*/ __PVT__depth;
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object>, VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object>, VlAssocArray<IData/*27:0*/, Vrecorders_top_state_info_t__struct__0>>> __PVT__m_recur_states;
    VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object>, VlAssocArray<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object>, CData/*0:0*/>> __PVT__compare_map;
    VlQueue<std::string> __PVT__m_object_names;
    std::string __PVT__miscompares;
    virtual void __VnoInFunc___Vbasic_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_compare_field(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ lhs, VlWide<128>/*4095:0*/ rhs, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*0:0*/ &compare_field__Vfuncrtn);
    virtual void __VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ lhs, QData/*63:0*/ rhs, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*0:0*/ &compare_field_int__Vfuncrtn);
    virtual void __VnoInFunc_compare_field_real(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, double lhs, double rhs, CData/*0:0*/ &compare_field_real__Vfuncrtn);
    virtual void __VnoInFunc_compare_object(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs, CData/*0:0*/ &compare_object__Vfuncrtn);
    virtual void __VnoInFunc_compare_string(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string lhs, std::string rhs, CData/*0:0*/ &compare_string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_check_type(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_type__Vfuncrtn);
    virtual void __VnoInFunc_get_miscompares(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_miscompares__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vrecorders_top__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_result(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_result__Vfuncrtn);
    virtual void __VnoInFunc_get_severity(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ &get_severity__Vfuncrtn);
    virtual void __VnoInFunc_get_show_max(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_show_max__Vfuncrtn);
    virtual void __VnoInFunc_get_threshold(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_verbosity(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_verbosity__Vfuncrtn);
    void __VnoInFunc_m_current_context(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string &m_current_context__Vfuncrtn);
    virtual void __VnoInFunc_object_compared(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs, IData/*27:0*/ recursion, CData/*0:0*/ &ret_val, IData/*31:0*/ &object_compared__Vfuncrtn);
    void __VnoInFunc_print_msg(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string msg);
    void __VnoInFunc_print_msg_object(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_check_type(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_recursion_policy(Vrecorders_top__Syms* __restrict vlSymsp, IData/*27:0*/ policy);
    virtual void __VnoInFunc_set_result(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ result);
    virtual void __VnoInFunc_set_severity(Vrecorders_top__Syms* __restrict vlSymsp, CData/*1:0*/ severity);
    virtual void __VnoInFunc_set_show_max(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ show_max);
    virtual void __VnoInFunc_set_threshold(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ threshold);
    virtual void __VnoInFunc_set_verbosity(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_comparer(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_comparer() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_comparer>& obj);

#endif  // guard
