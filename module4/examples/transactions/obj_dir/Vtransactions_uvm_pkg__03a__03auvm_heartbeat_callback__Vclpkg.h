// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_HEARTBEAT_CALLBACK__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_HEARTBEAT_CALLBACK__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_objection;
class Vtransactions_uvm_pkg__03a__03auvm_objection_callback;
class Vtransactions_uvm_pkg__03a__03auvm_root;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_heartbeat_callback__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_objection_callback__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_heartbeat_callback : public Vtransactions_uvm_pkg__03a__03auvm_objection_callback {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, IData/*31:0*/> __PVT__cnt;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, QData/*63:0*/> __PVT__last_trigger;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> __PVT__target;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __PVT__cs;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_dropped(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    void __VnoInFunc_objects_triggered(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &objects_triggered__Vfuncrtn);
    virtual void __VnoInFunc_raised(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_reset_counts(Vtransactions__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_heartbeat_callback(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> target);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_heartbeat_callback();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_heartbeat_callback>& obj);

#endif  // guard
