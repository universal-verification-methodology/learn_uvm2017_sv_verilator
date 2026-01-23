// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_EVENT__TZ2__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_EVENT__TZ2__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_event_;
class Vdma_uvm_pkg__03a__03auvm_event__Tz2;
class Vdma_uvm_pkg__03a__03auvm_event_base;
class Vdma_uvm_pkg__03a__03auvm_event_callback__Tz2;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__Tz100;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_printer;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_cb_registered;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_event__Tz2__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__Tz100> &get_type__Vfuncrtn);
    void __VnoInFunc_m_register_cb(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &m_register_cb__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_event_base__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_event__Tz2 : public Vdma_uvm_pkg__03a__03auvm_event_base {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__trigger_data;
    std::string __PVT__default_data;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get_default_data(Vdma__Syms* __restrict vlSymsp, std::string &get_default_data__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_trigger_data(Vdma__Syms* __restrict vlSymsp, std::string &get_trigger_data__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_default_data(Vdma__Syms* __restrict vlSymsp, std::string data);
    virtual void __VnoInFunc_trigger(Vdma__Syms* __restrict vlSymsp, std::string data);
    virtual VlCoroutine __VnoInFunc_wait_ptrigger_data(Vdma__Syms* __restrict vlSymsp, std::string &data);
    virtual VlCoroutine __VnoInFunc_wait_trigger_data(Vdma__Syms* __restrict vlSymsp, std::string &data);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_event__Tz2(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_event__Tz2();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_event__Tz2>& obj);

#endif  // guard
