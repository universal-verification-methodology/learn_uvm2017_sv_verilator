// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_FIELD_OP__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_FIELD_OP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_field_op;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi11;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_policy;
class Vtransactions_uvm_pkg__03a__03auvm_root;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_field_op__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_field_op>> __PVT__m_recycled_op;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_field_op__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_field_op__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_field_op__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi11> &get_type__Vfuncrtn);
    void __VnoInFunc_m_get_available_op(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_field_op> &m_get_available_op__Vfuncrtn);
    void __VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_field_op : public Vtransactions_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_user_hook;
    CData/*0:0*/ __PVT__m_is_set;
    IData/*27:0*/ __PVT__m_op_type;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_policy> __PVT__m_policy;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> __PVT__m_object;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_disable_user_hook(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_flush(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_op_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_op_name__Vfuncrtn);
    virtual void __VnoInFunc_get_op_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*27:0*/ &get_op_type__Vfuncrtn);
    virtual void __VnoInFunc_get_policy(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_policy> &get_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_rhs(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_recycle(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*27:0*/ op_type, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_policy> policy, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_user_hook_enabled(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &user_hook_enabled__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_field_op(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_field_op();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_field_op>& obj);

#endif  // guard
