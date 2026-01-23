// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi89> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi89> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi89__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_barrier"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_registry__pi89> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi89__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier> tmp;
    tmp = ((""s == name) ? VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier, vlProcess, vlSymsp, ""s, 0U)
            : VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier, vlProcess, vlSymsp, name, 0U));
    create__Vfuncrtn = tmp;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_barrier"s;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ threshold)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_event = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_event_, vlProcess, vlSymsp, 
                                  VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN("barrier_"s, name)));
    this->__PVT__threshold = threshold;
    this->__PVT__num_waiters = 0U;
    this->__PVT__auto_reset = 1U;
    this->__PVT__at_threshold = 0U;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_wait_for(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_wait_for\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    {
        if (this->__PVT__at_threshold) {
            goto __Vlabel0;
        }
        this->__PVT__num_waiters = ((IData)(1U) + this->__PVT__num_waiters);
        if (VL_GTES_III(32, this->__PVT__num_waiters, this->__PVT__threshold)) {
            if ((1U & (~ (IData)(this->__PVT__auto_reset)))) {
                this->__PVT__at_threshold = 1U;
            }
            co_await this->__VnoInFunc_m_trigger(vlSymsp);
            goto __Vlabel0;
        }
        co_await VL_NULL_CHECK(this->__PVT__m_event, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 81)->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
        __Vlabel0: ;
    }
    co_return;}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_reset(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ wakeup) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_reset\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__PVT__at_threshold = 0U;
    if ((0U != this->__PVT__num_waiters)) {
        if (wakeup) {
            VL_NULL_CHECK(this->__PVT__m_event, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 101)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
        } else {
            VL_NULL_CHECK(this->__PVT__m_event, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 103)->__VnoInFunc_reset(vlSymsp, 0U);
        }
    }
    this->__PVT__num_waiters = 0U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_auto_reset(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_auto_reset\n"); );
    // Body
    this->__PVT__at_threshold = 0U;
    this->__PVT__auto_reset = value;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_threshold(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ threshold) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_set_threshold\n"); );
    // Body
    this->__PVT__threshold = threshold;
    if (VL_LTES_III(32, threshold, this->__PVT__num_waiters)) {
        this->__VnoInFunc_reset(vlSymsp, 1U);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_threshold(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_threshold__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_threshold\n"); );
    // Body
    get_threshold__Vfuncrtn = this->__PVT__threshold;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_num_waiters(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_waiters__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_get_num_waiters\n"); );
    // Body
    get_num_waiters__Vfuncrtn = this->__PVT__num_waiters;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_cancel(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_cancel\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_num_waiters__11__Vfuncout;
    __Vtask_get_num_waiters__11__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_event, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 175)->__VnoInFunc_cancel(vlSymsp);
    VL_NULL_CHECK(this->__PVT__m_event, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 176)->__VnoInFunc_get_num_waiters(vlSymsp, __Vtask_get_num_waiters__11__Vfuncout);
    this->__PVT__num_waiters = __Vtask_get_num_waiters__11__Vfuncout;
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_m_trigger(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_m_trigger\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VL_NULL_CHECK(this->__PVT__m_event, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 180)->__VnoInFunc_trigger__Vtcwrap_1(vlProcess, vlSymsp);
    this->__PVT__num_waiters = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, nullptr, 
                                            "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 
                                            182);
    co_return;}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_print\n"); );
    // Body
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 186)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "threshold"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__threshold), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 187)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_waiters"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__num_waiters), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 188)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "at_threshold"s, (QData)((IData)(this->__PVT__at_threshold)), 1U, 0x01000000U, 0x2eU, "bit"s);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 189)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "auto_reset"s, (QData)((IData)(this->__PVT__auto_reset)), 1U, 0x01000000U, 0x2eU, "bit"s);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_do_copy\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier> b;
    {
        Vvirtual_sequences_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        if (((! VL_CAST_DYNAMIC(rhs, b)) || (VlNull{} 
                                             == b))) {
            goto __Vlabel0;
        }
        this->__PVT__threshold = VL_NULL_CHECK(b, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 197)
            ->__PVT__threshold;
        this->__PVT__num_waiters = VL_NULL_CHECK(b, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 198)
            ->__PVT__num_waiters;
        this->__PVT__at_threshold = VL_NULL_CHECK(b, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 199)
            ->__PVT__at_threshold;
        this->__PVT__auto_reset = VL_NULL_CHECK(b, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 200)
            ->__PVT__auto_reset;
        this->__PVT__m_event = VL_NULL_CHECK(b, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_barrier.svh", 201)
            ->__PVT__m_event;
        __Vlabel0: ;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__19__Vfuncout;
    __Vfunc___VBasicRand__19__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__19__Vfuncout);
            }(), __Vfunc___VBasicRand__19__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__threshold = 0;
    __PVT__num_waiters = 0;
    __PVT__at_threshold = 0;
    __PVT__auto_reset = 0;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::~Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_barrier::to_string_middle\n"); );
    // Body
    std::string out;
    out += "threshold:" + VL_TO_STRING(__PVT__threshold);
    out += ", num_waiters:" + VL_TO_STRING(__PVT__num_waiters);
    out += ", at_threshold:" + VL_TO_STRING(__PVT__at_threshold);
    out += ", auto_reset:" + VL_TO_STRING(__PVT__auto_reset);
    out += ", m_event:" + VL_TO_STRING(__PVT__m_event);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
