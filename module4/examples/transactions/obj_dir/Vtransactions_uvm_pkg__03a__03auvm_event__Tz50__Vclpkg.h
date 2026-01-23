// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_EVENT__TZ50__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_EVENT__TZ50__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_event_;
class Vtransactions_uvm_pkg__03a__03auvm_event__Tz50;
class Vtransactions_uvm_pkg__03a__03auvm_event_base;
class Vtransactions_uvm_pkg__03a__03auvm_event_callback__Tz50;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz107;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_printer;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_event__Tz50__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_cb_registered;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_event__Tz50__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_event__Tz50__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_event__Tz50__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__Tz107> &get_type__Vfuncrtn);
    void __VnoInFunc_m_register_cb(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &m_register_cb__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_event_base__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_event__Tz50 : public Vtransactions_uvm_pkg__03a__03auvm_event_base {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__trigger_data;
    std::string __PVT__default_data;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_default_data(Vtransactions__Syms* __restrict vlSymsp, std::string &get_default_data__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_trigger_data(Vtransactions__Syms* __restrict vlSymsp, std::string &get_trigger_data__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_default_data(Vtransactions__Syms* __restrict vlSymsp, std::string data);
    virtual void __VnoInFunc_trigger(Vtransactions__Syms* __restrict vlSymsp, std::string data);
    virtual VlCoroutine __VnoInFunc_wait_ptrigger_data(Vtransactions__Syms* __restrict vlSymsp, std::string &data);
    virtual VlCoroutine __VnoInFunc_wait_trigger_data(Vtransactions__Syms* __restrict vlSymsp, std::string &data);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_event__Tz50(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_event__Tz50();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_event__Tz50>& obj);

#endif  // guard
