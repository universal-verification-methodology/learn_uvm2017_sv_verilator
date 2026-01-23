// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_CONFIG_DB___VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_CONFIG_DB___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm_std__03a__03aprocess;
class Vtest_and_gate_uvm_uvm_pkg__03a__03am_uvm_waiter;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz62;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz4;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz5;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_pool;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_config_db___Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component>, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_pool__Tz2_TBz62>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_queue__Tz4>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_config_db___Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_config_db___Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_config_db___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, IData/*31:0*/ &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, IData/*31:0*/ value);
    VlCoroutine __VnoInFunc_wait_modified(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_config_db_ : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource_db__Tz22 {
  public:
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_config_db_(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_config_db_();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_config_db_>& obj);

#endif  // guard
