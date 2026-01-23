// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_REG_FIFO__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_REG_FIFO__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_reg;
class Vrecorders_top_uvm_pkg__03a__03auvm_reg_field;
class Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo;
class Vrecorders_top_uvm_pkg__03a__03auvm_reg_item;
class Vrecorders_top_uvm_pkg__03a__03auvm_reg_map;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_reg__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo : public Vrecorders_top_uvm_pkg__03a__03auvm_reg {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_set_cnt;
    IData/*31:0*/ __PVT__m_size;
    IData/*31:0*/ __Vfifo_size;
    VlQueue<QData/*63:0*/> __PVT__fifo;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field> __PVT__value;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vresize_constrained_arrays(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_build(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_capacity(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &capacity__Vfuncrtn);
    virtual void __VnoInFunc_do_predict(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw, IData/*31:0*/ kind, CData/*7:0*/ be);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string fname, IData/*31:0*/ lineno, QData/*63:0*/ &get__Vfuncrtn);
    void __VnoInFunc_post_randomize(Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_pre_read(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_pre_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_set_compare(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ check);
    void __VnoInFunc_size(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_update(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_valid_fifo_size_resize_constrained_array(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_valid_fifo_size_setup_constraint(Vrecorders_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, IData/*31:0*/ n_bits, IData/*31:0*/ has_cover);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_fifo>& obj);

#endif  // guard
