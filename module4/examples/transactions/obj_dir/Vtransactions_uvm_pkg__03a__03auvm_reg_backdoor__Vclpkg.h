// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_REG_BACKDOOR__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_REG_BACKDOOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_std__03a__03aprocess;
class Vtransactions_uvm_pkg__03a__03a__VDynScope_45;
class Vtransactions_uvm_pkg__03a__03auvm_abstract_object_registry__pi76;
class Vtransactions_uvm_pkg__03a__03auvm_callback_iter__pi66;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_reg;
class Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor;
class Vtransactions_uvm_pkg__03a__03auvm_reg_cbs;
class Vtransactions_uvm_pkg__03a__03auvm_reg_field;
class Vtransactions_uvm_pkg__03a__03auvm_reg_item;
class Vtransactions_uvm_pkg__03a__03auvm_root;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_register_cb_uvm_reg_cbs;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_abstract_object_registry__pi76> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor : public Vtransactions_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, VlClassRef<Vtransactions_std__03a__03aprocess>> __PVT__m_update_thread;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_post_read(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_do_post_write(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_do_pre_read(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_do_pre_write(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_update_threads(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &has_update_threads__Vfuncrtn);
    virtual void __VnoInFunc_is_auto_updated(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_field> field, CData/*0:0*/ &is_auto_updated__Vfuncrtn);
    void __VnoInFunc_kill_update_thread(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> element);
    virtual void __VnoInFunc_post_read(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_post_write(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_read(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_read(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_read_func(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
    void __VnoInFunc_start_update_thread(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> element);
  private:
    VlCoroutine __VnoInFunc_start_update_thread____Vfork_1__0(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_start_update_thread_0, VlClassRef<Vtransactions_std__03a__03aprocess> unnamedblk274__DOT____VforkParent);
  public:
    virtual void __VnoInFunc_wait_for_change(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> element);
    virtual void __VnoInFunc_write(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> rw);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_backdoor>& obj);

#endif  // guard
