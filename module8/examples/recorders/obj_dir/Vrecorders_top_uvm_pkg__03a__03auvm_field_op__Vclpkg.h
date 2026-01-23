// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_FIELD_OP__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_FIELD_OP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_field_op;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi11;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_policy;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op>> __PVT__m_recycled_op;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi11> &get_type__Vfuncrtn);
    void __VnoInFunc_m_get_available_op(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op> &m_get_available_op__Vfuncrtn);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_field_op : public Vrecorders_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_user_hook;
    CData/*0:0*/ __PVT__m_is_set;
    IData/*27:0*/ __PVT__m_op_type;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_policy> __PVT__m_policy;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> __PVT__m_object;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_disable_user_hook(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_flush(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_op_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_op_name__Vfuncrtn);
    virtual void __VnoInFunc_get_op_type(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*27:0*/ &get_op_type__Vfuncrtn);
    virtual void __VnoInFunc_get_policy(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_policy> &get_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_rhs(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_recycle(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*27:0*/ op_type, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_policy> policy, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_user_hook_enabled(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &user_hook_enabled__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_field_op(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_field_op();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op>& obj);

#endif  // guard
