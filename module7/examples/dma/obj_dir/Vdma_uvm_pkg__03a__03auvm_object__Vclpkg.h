// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_OBJECT__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_comparer;
class Vdma_uvm_pkg__03a__03auvm_copier;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_factory;
class Vdma_uvm_pkg__03a__03auvm_field_op;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_packer;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_recorder;
class Vdma_uvm_pkg__03a__03auvm_report_object;
class Vdma_uvm_pkg__03a__03auvm_resource_base;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_void;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_object__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_inst_count;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_object__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_object__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_inst_count(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_count__Vfuncrtn);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_type__Vfuncrtn);
    void __VnoInFunc_get_uvm_seeding(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_uvm_seeding__Vfuncrtn);
    void __VnoInFunc_set_uvm_seeding(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
};

#include "Vdma_uvm_pkg__03a__03auvm_void__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_object : public Vdma_uvm_pkg__03a__03auvm_void {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_inst_id;
    std::string __PVT__m_leaf_name;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc____05Fm_uvm_field_automation(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*27:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_compare(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &compare__Vfuncrtn);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> copier);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> op);
    virtual void __VnoInFunc_do_pack(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_do_unpack(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_inst_id(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_inst_id__Vfuncrtn);
    virtual void __VnoInFunc_get_name(Vdma__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_get_report_object(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_object> &m_get_report_object__Vfuncrtn);
    void __VnoInFunc_m_pack(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> &packer);
    void __VnoInFunc_m_unpack_post(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &m_unpack_post__Vfuncrtn);
    void __VnoInFunc_m_unpack_pre(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> &packer);
    virtual void __VnoInFunc_m_unsupported_set_local(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> rsrc);
    void __VnoInFunc_pack(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack__Vfuncrtn);
    void __VnoInFunc_pack_bytes(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_bytes__Vfuncrtn);
    void __VnoInFunc_pack_ints(Vdma__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_ints__Vfuncrtn);
    void __VnoInFunc_pack_longints(Vdma__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &longintstream, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &pack_longints__Vfuncrtn);
    void __VnoInFunc_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_record(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_reseed(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_local(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> rsrc);
    virtual void __VnoInFunc_set_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    void __VnoInFunc_sprint(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer, std::string &sprint__Vfuncrtn);
    void __VnoInFunc_unpack(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack__Vfuncrtn);
    void __VnoInFunc_unpack_bytes(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_bytes__Vfuncrtn);
    void __VnoInFunc_unpack_ints(Vdma__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_ints__Vfuncrtn);
    void __VnoInFunc_unpack_longints(Vdma__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &longintstream, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer, IData/*31:0*/ &unpack_longints__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_object(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_object();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_object>& obj);

#endif  // guard
