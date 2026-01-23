// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ1__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_std__03a__03aprocess;
class Vdma_uvm_pkg__03a__03am_uvm_waiter;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_phase;
class Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz3;
class Vdma_uvm_pkg__03a__03auvm_queue__Tz4;
class Vdma_uvm_pkg__03a__03auvm_queue__Tz5;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz1;
class Vdma_uvm_pkg__03a__03auvm_resource_db__Tz1;
class Vdma_uvm_pkg__03a__03auvm_resource_pool;
class Vdma_uvm_pkg__03a__03auvm_root;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vdma_uvm_pkg__03a__03auvm_component>, VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz3>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz4>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_config_db__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, Vdma_dma_if* &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, Vdma_dma_if* value);
    VlCoroutine __VnoInFunc_wait_modified(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Vdma_uvm_pkg__03a__03auvm_resource_db__Tz1__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_config_db__Tz1 : public Vdma_uvm_pkg__03a__03auvm_resource_db__Tz1 {
  public:
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_config_db__Tz1(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_config_db__Tz1() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_config_db__Tz1>& obj);

#endif  // guard
