// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ40__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ40__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_std__03a__03aprocess;
class Vtransactions_uvm_pkg__03a__03am_uvm_waiter;
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_phase;
class Vtransactions_uvm_pkg__03a__03auvm_pool__Tz50_TBz88;
class Vtransactions_uvm_pkg__03a__03auvm_queue__Tz22;
class Vtransactions_uvm_pkg__03a__03auvm_queue__Tz74;
class Vtransactions_uvm_pkg__03a__03auvm_resource__Tz40;
class Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz40;
class Vtransactions_uvm_pkg__03a__03auvm_resource_pool;
class Vtransactions_uvm_pkg__03a__03auvm_root;
class Vtransactions_uvm_pkg__03a__03auvm_sequence_base;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_config_db__Tz40__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component>, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_pool__Tz50_TBz88>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_queue__Tz74>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_config_db__Tz40__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_config_db__Tz40__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_config_db__Tz40__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> value);
    VlCoroutine __VnoInFunc_wait_modified(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz40__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_config_db__Tz40 : public Vtransactions_uvm_pkg__03a__03auvm_resource_db__Tz40 {
  public:
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_config_db__Tz40(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_config_db__Tz40();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_config_db__Tz40>& obj);

#endif  // guard
