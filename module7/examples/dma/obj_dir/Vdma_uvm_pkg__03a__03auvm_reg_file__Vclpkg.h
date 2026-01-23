// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_FILE__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_FILE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_comparer;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi101;
class Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz194;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_packer;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_queue__Tz2;
class Vdma_uvm_pkg__03a__03auvm_reg_block;
class Vdma_uvm_pkg__03a__03auvm_reg_file;
class Vdma_uvm_pkg__03a__03auvm_root;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_reg_file__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_reg_file__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_reg_file__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_reg_file__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi101> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_reg_file : public Vdma_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__default_hdl_path;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> __PVT__parent;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_file> __PVT__m_rf;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_string_pool__Tz194> __PVT__hdl_paths_pool;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_hdl_path(Vdma__Syms* __restrict vlSymsp, std::string path, std::string kind);
    void __VnoInFunc_clear_hdl_path(Vdma__Syms* __restrict vlSymsp, std::string kind);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> blk_parent, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_file> regfile_parent, std::string hdl_path);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_compare(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get_block(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> &get_block__Vfuncrtn);
    void __VnoInFunc_get_default_hdl_path(Vdma__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn);
    void __VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    void __VnoInFunc_get_hdl_path(Vdma__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_regfile(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_file> &get_regfile__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_hdl_path(Vdma__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_default_hdl_path(Vdma__Syms* __restrict vlSymsp, std::string kind);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_reg_file(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_reg_file();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_file>& obj);

#endif  // guard
