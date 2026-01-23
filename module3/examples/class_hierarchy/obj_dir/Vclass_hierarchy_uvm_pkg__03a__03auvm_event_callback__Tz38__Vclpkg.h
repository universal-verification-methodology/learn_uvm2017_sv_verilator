// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_EVENT_CALLBACK__TZ38__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_EVENT_CALLBACK__TZ38__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_callback;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38__Vclpkg(Vclass_hierarchy__Syms* symsp, const char* v__name);
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38__Vclpkg();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_callback__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38 : public Vclass_hierarchy_uvm_pkg__03a__03auvm_callback {
  public:
    virtual void __VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_post_trigger(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38> e, std::string data);
    virtual void __VnoInFunc_pre_trigger(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event__Tz38> e, std::string data, CData/*0:0*/ &pre_trigger__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_callback__Tz38>& obj);

#endif  // guard
