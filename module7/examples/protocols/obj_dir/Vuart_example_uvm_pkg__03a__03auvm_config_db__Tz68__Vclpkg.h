// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ68__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ68__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_std__03a__03aprocess;
class Vuart_example_uvm_pkg__03a__03am_uvm_waiter;
class Vuart_example_uvm_pkg__03a__03auvm_component;
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_object;
class Vuart_example_uvm_pkg__03a__03auvm_phase;
class Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz173;
class Vuart_example_uvm_pkg__03a__03auvm_queue__Tz4;
class Vuart_example_uvm_pkg__03a__03auvm_queue__Tz5;
class Vuart_example_uvm_pkg__03a__03auvm_resource__Tz68;
class Vuart_example_uvm_pkg__03a__03auvm_resource_db_;
class Vuart_example_uvm_pkg__03a__03auvm_resource_pool;
class Vuart_example_uvm_pkg__03a__03auvm_root;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_config_db__Tz68__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_pool__Tz2_TBz173>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_queue__Tz4>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_config_db__Tz68__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_config_db__Tz68__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_config_db__Tz68__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> value);
    VlCoroutine __VnoInFunc_wait_modified(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_resource_db___Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_config_db__Tz68 : public Vuart_example_uvm_pkg__03a__03auvm_resource_db_ {
  public:
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_config_db__Tz68(Vuart_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_config_db__Tz68() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_config_db__Tz68>& obj);

#endif  // guard
