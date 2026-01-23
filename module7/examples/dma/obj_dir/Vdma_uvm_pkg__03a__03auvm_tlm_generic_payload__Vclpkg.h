// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_TLM_GENERIC_PAYLOAD__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_TLM_GENERIC_PAYLOAD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_comparer;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi92;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_packer;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_recorder;
class Vdma_uvm_pkg__03a__03auvm_sequence_item;
class Vdma_uvm_pkg__03a__03auvm_tlm_extension_base;
class Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi92> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload : public Vdma_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_dmi;
    IData/*31:0*/ __PVT__m_command;
    IData/*31:0*/ __PVT__m_length;
    IData/*31:0*/ __PVT__m_response_status;
    IData/*31:0*/ __PVT__m_byte_enable_length;
    IData/*31:0*/ __PVT__m_streaming_width;
    QData/*63:0*/ __PVT__m_address;
    VlQueue<CData/*7:0*/> __PVT__m_data;
    VlQueue<CData/*7:0*/> __PVT__m_byte_enable;
    VlAssocArray<VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_extension_base>, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_extension_base>> __PVT__m_extensions;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_extension_base>> __PVT__m_rand_exts;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_clear_extension(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle);
    void __VnoInFunc_clear_extensions(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    void __VnoInFunc_do_compare(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_do_pack(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_do_record(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_do_unpack(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_address(Vdma__Syms* __restrict vlSymsp, QData/*63:0*/ &get_address__Vfuncrtn);
    virtual void __VnoInFunc_get_byte_enable(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_get_byte_enable_length(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_byte_enable_length__Vfuncrtn);
    virtual void __VnoInFunc_get_command(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_command__Vfuncrtn);
    virtual void __VnoInFunc_get_data(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_get_data_length(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_data_length__Vfuncrtn);
    void __VnoInFunc_get_extension(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_extension_base> ext_handle, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_extension_base> &get_extension__Vfuncrtn);
    void __VnoInFunc_get_num_extensions(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_extensions__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_response_status(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_status__Vfuncrtn);
    virtual void __VnoInFunc_get_response_string(Vdma__Syms* __restrict vlSymsp, std::string &get_response_string__Vfuncrtn);
    virtual void __VnoInFunc_get_streaming_width(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_streaming_width__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_is_dmi_allowed(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_dmi_allowed__Vfuncrtn);
    virtual void __VnoInFunc_is_read(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read__Vfuncrtn);
    virtual void __VnoInFunc_is_response_error(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_error__Vfuncrtn);
    virtual void __VnoInFunc_is_response_ok(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_response_ok__Vfuncrtn);
    virtual void __VnoInFunc_is_write(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_write__Vfuncrtn);
    void __VnoInFunc_post_randomize(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_pre_randomize(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_address(Vdma__Syms* __restrict vlSymsp, QData/*63:0*/ addr);
    virtual void __VnoInFunc_set_byte_enable(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_set_byte_enable_length(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ length);
    virtual void __VnoInFunc_set_command(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ command);
    virtual void __VnoInFunc_set_data(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &p);
    virtual void __VnoInFunc_set_data_length(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ length);
    virtual void __VnoInFunc_set_dmi_allowed(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ dmi);
    void __VnoInFunc_set_extension(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_extension_base> ext, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_extension_base> &set_extension__Vfuncrtn);
    virtual void __VnoInFunc_set_read(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_response_status(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ status);
    virtual void __VnoInFunc_set_streaming_width(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ width);
    virtual void __VnoInFunc_set_write(Vdma__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_generic_payload>& obj);

#endif  // guard
