// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> addr_reg, IData/*31:0*/ idx, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg> data_reg)
    : Vpools_top_uvm_pkg__03a__03auvm_reg_frontdoor(vlProcess, vlSymsp, "uvm_reg_indirect_ftdr_seq"s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_addr_reg = addr_reg;
    this->__PVT__m_idx = idx;
    this->__PVT__m_data_reg = data_reg;
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> __Vtask_clone__1__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> __Vtask_clone__5__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw;
    {
        if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                    VL_NULL_CHECK(Vpools_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 287)
                                             ->__VnoInFunc_clone(vlProcess, vlSymsp, __Vtask_clone__1__Vfuncout);
                                }(), __Vtask_clone__1__Vfuncout), rw))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_indirect.svh:287: Assertion failed in %Nuvm_pkg.uvm_reg_indirect_ftdr_seq.body: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 287, "");
        }
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 288)->__PVT__element 
            = this->__PVT__m_addr_reg;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 289)->__PVT__kind = 1U;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 290)->__PVT__value.atWrite(0U) 
            = VL_EXTENDS_QI(64,32, this->__PVT__m_idx);
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 292)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 293)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 1U);
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 295)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
        if ((1U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 297)
             ->__PVT__status)) {
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                    VL_NULL_CHECK(Vpools_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 300)
                                             ->__VnoInFunc_clone(vlProcess, vlSymsp, __Vtask_clone__5__Vfuncout);
                                }(), __Vtask_clone__5__Vfuncout), rw))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_indirect.svh:300: Assertion failed in %Nuvm_pkg.uvm_reg_indirect_ftdr_seq.body: '$cast' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 300, "");
        }
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 301)->__PVT__element 
            = this->__PVT__m_data_reg;
        if ((1U == VL_NULL_CHECK(Vpools_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 303)
             ->__PVT__kind)) {
            co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 304)->__VnoInFunc_do_write(vlProcess, vlSymsp, rw);
        } else {
            co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 306)->__VnoInFunc_do_read(vlProcess, vlSymsp, rw);
            VL_NULL_CHECK(Vpools_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 307)->__PVT__value.atWrite(0U) 
                = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 307)
                ->__PVT__value.at(0U);
        }
        co_await VL_NULL_CHECK(this->__PVT__m_addr_reg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 310)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        co_await VL_NULL_CHECK(this->__PVT__m_data_reg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 311)->__VnoInFunc_XatomicX(vlProcess, vlSymsp, 0U);
        VL_NULL_CHECK(Vpools_top_uvm_pkg__03a__03auvm_reg_frontdoor::__PVT__rw_info, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 313)->__PVT__status 
            = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_indirect.svh", 313)
            ->__PVT__status;
        __Vlabel0: ;
    }
    co_return;}

void Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__11__Vfuncout;
    __Vfunc___VBasicRand__11__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__11__Vfuncout);
            }(), __Vfunc___VBasicRand__11__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_idx = 0;
}

Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::~Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_addr_reg:" + VL_TO_STRING(__PVT__m_addr_reg);
    out += ", m_data_reg:" + VL_TO_STRING(__PVT__m_data_reg);
    out += ", m_idx:" + VL_TO_STRING(__PVT__m_idx);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_reg_frontdoor::to_string_middle();
    return (out);
}
