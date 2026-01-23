// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_EVENT__TZ49__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_EVENT__TZ49__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_event_;
class Vpools_top_uvm_pkg__03a__03auvm_event__Tz49;
class Vpools_top_uvm_pkg__03a__03auvm_event_base;
class Vpools_top_uvm_pkg__03a__03auvm_event_callback__Tz49;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz104;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_printer;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_event__Tz49__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_cb_registered;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_event__Tz49__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_event__Tz49__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_event__Tz49__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__Tz104> &get_type__Vfuncrtn);
    void __VnoInFunc_m_register_cb(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &m_register_cb__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_event_base__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_event__Tz49 : public Vpools_top_uvm_pkg__03a__03auvm_event_base {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__trigger_data;
    std::string __PVT__default_data;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_default_data(Vpools_top__Syms* __restrict vlSymsp, std::string &get_default_data__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_trigger_data(Vpools_top__Syms* __restrict vlSymsp, std::string &get_trigger_data__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_default_data(Vpools_top__Syms* __restrict vlSymsp, std::string data);
    virtual void __VnoInFunc_trigger(Vpools_top__Syms* __restrict vlSymsp, std::string data);
    virtual VlCoroutine __VnoInFunc_wait_ptrigger_data(Vpools_top__Syms* __restrict vlSymsp, std::string &data);
    virtual VlCoroutine __VnoInFunc_wait_trigger_data(Vpools_top__Syms* __restrict vlSymsp, std::string &data);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_event__Tz49(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_event__Tz49();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_event__Tz49>& obj);

#endif  // guard
