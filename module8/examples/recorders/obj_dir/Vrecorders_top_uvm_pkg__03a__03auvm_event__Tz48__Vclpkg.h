// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_EVENT__TZ48__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_EVENT__TZ48__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_event_;
class Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48;
class Vrecorders_top_uvm_pkg__03a__03auvm_event_base;
class Vrecorders_top_uvm_pkg__03a__03auvm_event_callback__Tz48;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz107;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_printer;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_cb_registered;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz107> &get_type__Vfuncrtn);
    void __VnoInFunc_m_register_cb(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &m_register_cb__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_event_base__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48 : public Vrecorders_top_uvm_pkg__03a__03auvm_event_base {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__trigger_data;
    std::string __PVT__default_data;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_default_data(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_default_data__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_trigger_data(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_trigger_data__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_default_data(Vrecorders_top__Syms* __restrict vlSymsp, std::string data);
    virtual void __VnoInFunc_trigger(Vrecorders_top__Syms* __restrict vlSymsp, std::string data);
    virtual VlCoroutine __VnoInFunc_wait_ptrigger_data(Vrecorders_top__Syms* __restrict vlSymsp, std::string &data);
    virtual VlCoroutine __VnoInFunc_wait_trigger_data(Vrecorders_top__Syms* __restrict vlSymsp, std::string &data);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_event__Tz48>& obj);

#endif  // guard
