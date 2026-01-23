// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_FIELD_OP__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_FIELD_OP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_field_op;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi13;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_policy;
class Vdma_uvm_pkg__03a__03auvm_root;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_field_op__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op>> __PVT__m_recycled_op;

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_field_op__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03auvm_field_op__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_field_op__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi13> &get_type__Vfuncrtn);
    void __VnoInFunc_m_get_available_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> &m_get_available_op__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_field_op : public Vdma_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_user_hook;
    CData/*0:0*/ __PVT__m_is_set;
    IData/*27:0*/ __PVT__m_op_type;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_policy> __PVT__m_policy;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __PVT__m_object;
    virtual void __VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_disable_user_hook(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_flush(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_op_name(Vdma__Syms* __restrict vlSymsp, std::string &get_op_name__Vfuncrtn);
    virtual void __VnoInFunc_get_op_type(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ &get_op_type__Vfuncrtn);
    virtual void __VnoInFunc_get_policy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_policy> &get_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_rhs(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_m_recycle(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*27:0*/ op_type, VlClassRef<Vdma_uvm_pkg__03a__03auvm_policy> policy, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_user_hook_enabled(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &user_hook_enabled__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_field_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_field_op() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op>& obj);

#endif  // guard
