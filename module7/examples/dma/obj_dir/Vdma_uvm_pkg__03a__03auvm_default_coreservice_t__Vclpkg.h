// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_DEFAULT_CORESERVICE_T__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_DEFAULT_CORESERVICE_T__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_std__03a__03aprocess;
class Vdma_uvm_pkg__03a__03auvm_comparer;
class Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor;
class Vdma_uvm_pkg__03a__03auvm_copier;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_default_factory;
class Vdma_uvm_pkg__03a__03auvm_default_report_server;
class Vdma_uvm_pkg__03a__03auvm_factory;
class Vdma_uvm_pkg__03a__03auvm_packer;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_report_server;
class Vdma_uvm_pkg__03a__03auvm_resource_pool;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_table_printer;
class Vdma_uvm_pkg__03a__03auvm_text_tr_database;
class Vdma_uvm_pkg__03a__03auvm_tr_database;
class Vdma_uvm_pkg__03a__03auvm_visitor_;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_default_coreservice_t__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_default_coreservice_t__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_default_coreservice_t__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_default_coreservice_t__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_default_coreservice_t : public Vdma_uvm_pkg__03a__03auvm_coreservice_t {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_use_uvm_seeding;
    IData/*31:0*/ __PVT__m_default_max_ready_to_end_iters;
    IData/*31:0*/ __PVT__m_default_precedence;
    IData/*31:0*/ __PVT__m_uvm_global_seed;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory> __PVT__factory;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> __PVT__tr_database;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> __PVT__report_server;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_visitor_> __PVT___visitor;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> __PVT__m_printer;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> __PVT__m_packer;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_comparer> __PVT__m_comparer;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_pool> __PVT__m_rp;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> __PVT__m_copier;
    virtual void __VnoInFunc_get_component_visitor(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_visitor_> &get_component_visitor__Vfuncrtn);
    virtual void __VnoInFunc_get_default_comparer(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_comparer> &get_default_comparer__Vfuncrtn);
    virtual void __VnoInFunc_get_default_copier(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> &get_default_copier__Vfuncrtn);
    virtual void __VnoInFunc_get_default_packer(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> &get_default_packer__Vfuncrtn);
    virtual void __VnoInFunc_get_default_printer(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> &get_default_printer__Vfuncrtn);
    virtual void __VnoInFunc_get_default_tr_database(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> &get_default_tr_database__Vfuncrtn);
    virtual void __VnoInFunc_get_factory(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory> &get_factory__Vfuncrtn);
    virtual void __VnoInFunc_get_global_seed(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_global_seed__Vfuncrtn);
    virtual void __VnoInFunc_get_phase_max_ready_to_end(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_max_ready_to_end__Vfuncrtn);
    virtual void __VnoInFunc_get_report_server(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    virtual void __VnoInFunc_get_resource_pool(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_pool> &get_resource_pool__Vfuncrtn);
    virtual void __VnoInFunc_get_resource_pool_default_precedence(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_resource_pool_default_precedence__Vfuncrtn);
    virtual void __VnoInFunc_get_root(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> &get_root__Vfuncrtn);
    virtual void __VnoInFunc_get_uvm_seeding(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_uvm_seeding__Vfuncrtn);
    virtual void __VnoInFunc_set_component_visitor(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_visitor_> v);
    virtual void __VnoInFunc_set_default_comparer(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_comparer> comparer);
    virtual void __VnoInFunc_set_default_copier(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> copier);
    virtual void __VnoInFunc_set_default_packer(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_set_default_printer(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_set_default_tr_database(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> db);
    virtual void __VnoInFunc_set_factory(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory> f);
    virtual void __VnoInFunc_set_phase_max_ready_to_end(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    virtual void __VnoInFunc_set_report_server(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> server);
    virtual void __VnoInFunc_set_resource_pool(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_pool> pool);
    virtual void __VnoInFunc_set_resource_pool_default_precedence(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ precedence);
    virtual void __VnoInFunc_set_uvm_seeding(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_default_coreservice_t(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_default_coreservice_t();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_default_coreservice_t>& obj);

#endif  // guard
