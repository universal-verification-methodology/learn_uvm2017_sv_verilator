// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> target)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_objection_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::new\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__0__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    this->__PVT__cs = __Vfunc_get__0__Vfuncout;
    ;
    this->__PVT__target = ((VlNull{} != target) ? target
                            : (VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object>)(
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 312)
                                                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
                }(), __Vtask_get_root__2__Vfuncout)));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised\n"); );
    // Locals
    IData/*31:0*/ __Vtemp_1;
    // Body
    if ((obj == this->__PVT__target)) {
        if ((! this->__PVT__cnt.exists(source_obj))) {
            this->__PVT__cnt.at(source_obj) = 0U;
        }
        __Vtemp_1 = ((IData)(1U) + this->__PVT__cnt
                     .at(source_obj));
        this->__PVT__cnt.at(source_obj) = __Vtemp_1;
        this->__PVT__last_trigger.at(source_obj) = 
            VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped\n"); );
    // Body
    this->__VnoInFunc_raised(vlSymsp, objection, obj, source_obj, description, count);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_reset_counts(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_reset_counts\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> unnamedblk1__DOT__i;
    CData/*0:0*/ unnamedblk1__DOT__i__Vfirst;
    unnamedblk1__DOT__i__Vfirst = 0;
    if ((0U != this->__PVT__cnt.first(unnamedblk1__DOT__i))) {
        unnamedblk1__DOT__i__Vfirst = 1U;
        while (((IData)(unnamedblk1__DOT__i__Vfirst) 
                || (0U != this->__PVT__cnt.next(unnamedblk1__DOT__i)))) {
            unnamedblk1__DOT__i__Vfirst = 0U;
            this->__PVT__cnt.at(unnamedblk1__DOT__i) = 0U;
        }
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_objects_triggered(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &objects_triggered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_objects_triggered\n"); );
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> unnamedblk2__DOT__i;
    CData/*0:0*/ unnamedblk2__DOT__i__Vfirst;
    unnamedblk2__DOT__i__Vfirst = 0;
    objects_triggered__Vfuncrtn = 0U;
    if ((0U != this->__PVT__cnt.first(unnamedblk2__DOT__i))) {
        unnamedblk2__DOT__i__Vfirst = 1U;
        while (((IData)(unnamedblk2__DOT__i__Vfirst) 
                || (0U != this->__PVT__cnt.next(unnamedblk2__DOT__i)))) {
            unnamedblk2__DOT__i__Vfirst = 0U;
            if ((0U != this->__PVT__cnt.at(unnamedblk2__DOT__i))) {
                objects_triggered__Vfuncrtn = ((IData)(1U) 
                                               + objects_triggered__Vfuncrtn);
            }
        }
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__cnt.atDefault() = 0;
    __PVT__last_trigger.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 6832164394050517435ULL, 14228963972983550624ull);
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::~Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_heartbeat_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += "cnt:" + VL_TO_STRING(__PVT__cnt);
    out += ", last_trigger:" + VL_TO_STRING(__PVT__last_trigger);
    out += ", target:" + VL_TO_STRING(__PVT__target);
    out += ", cs:" + VL_TO_STRING(__PVT__cs);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_objection_callback::to_string_middle();
    return (out);
}
