// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ28__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_RESOURCE_DB__TZ28__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_resource__Tz28;
class Vdma_uvm_pkg__03a__03auvm_resource_base;
class Vdma_uvm_pkg__03a__03auvm_resource_pool;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_sequence_base;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_resource_db__Tz28__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_dump(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_by_name(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz28> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vdma__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz28> &get_by_type__Vfuncrtn);
    void __VnoInFunc_m_show_msg(Vdma__Syms* __restrict vlSymsp, std::string id, std::string rtype, std::string action, std::string scope, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz28> rsrc);
    void __VnoInFunc_read_by_name(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> &val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_name__Vfuncrtn);
    void __VnoInFunc_read_by_type(Vdma__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> &val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &read_by_type__Vfuncrtn);
    void __VnoInFunc_set(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_anonymous(Vdma__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_default(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz28> &set_default__Vfuncrtn);
    void __VnoInFunc_set_override(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_name(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_set_override_type(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor);
    void __VnoInFunc_write_by_name(Vdma__Syms* __restrict vlSymsp, std::string scope, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_name__Vfuncrtn);
    void __VnoInFunc_write_by_type(Vdma__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> val, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> accessor, CData/*0:0*/ &write_by_type__Vfuncrtn);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_resource_db__Tz28 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_resource_db__Tz28(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_resource_db__Tz28() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_db__Tz28>& obj);

#endif  // guard
