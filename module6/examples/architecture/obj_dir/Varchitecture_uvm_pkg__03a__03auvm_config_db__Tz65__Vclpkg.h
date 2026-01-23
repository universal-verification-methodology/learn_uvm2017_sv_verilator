// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ65__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ65__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03am_uvm_waiter;
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_phase;
class Varchitecture_uvm_pkg__03a__03auvm_pool__Tz43_TBz122;
class Varchitecture_uvm_pkg__03a__03auvm_queue__Tz26;
class Varchitecture_uvm_pkg__03a__03auvm_queue__Tz97;
class Varchitecture_uvm_pkg__03a__03auvm_resource__Tz65;
class Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz65;
class Varchitecture_uvm_pkg__03a__03auvm_resource_pool;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_base;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_config_db__Tz65__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component>, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_pool__Tz43_TBz122>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz97>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_config_db__Tz65__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_config_db__Tz65__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_config_db__Tz65__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> value);
    VlCoroutine __VnoInFunc_wait_modified(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz65__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_config_db__Tz65 : public Varchitecture_uvm_pkg__03a__03auvm_resource_db__Tz65 {
  public:
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_config_db__Tz65(Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_config_db__Tz65();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_config_db__Tz65>& obj);

#endif  // guard
