// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi11> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi11> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_field_op"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_m_get_available_op(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op> &m_get_available_op__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_field_op__Vclpkg::__VnoInFunc_m_get_available_op\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op> __Vfunc_create__1__Vfuncout;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op> field_op;
    field_op = (VL_LTS_III(32, 0U, this->__PVT__m_recycled_op.size())
                 ? this->__PVT__m_recycled_op.pop_back()
                 : ([&]() {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "field_op"s, VlNull{}, ""s, __Vfunc_create__1__Vfuncout);
            }(), __Vfunc_create__1__Vfuncout));
    m_get_available_op__Vfuncrtn = field_op;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi11> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi11__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_field_op, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_field_op, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_field_op"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_field_op::Vrecorders_top_uvm_pkg__03a__03auvm_field_op(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_is_set = 0U;
    this->__PVT__m_user_hook = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_set(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*27:0*/ op_type, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_policy> policy, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_set\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    std::string __Vtask_uvm_report_error__8__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    std::string __Vtask_uvm_report_error__8__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    std::string __Vfunc_m_uvm_string_queue_join__9__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
    __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    std::string __Vfunc_uvm_report_enabled__13__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__16__Vfuncout;
    __Vtask_uvm_report_enabled__16__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__17__id;
    std::string __Vtask_uvm_report_error__17__message;
    IData/*31:0*/ __Vtask_uvm_report_error__17__verbosity;
    __Vtask_uvm_report_error__17__verbosity = 0;
    std::string __Vtask_uvm_report_error__17__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__17__line;
    __Vtask_uvm_report_error__17__line = 0;
    std::string __Vtask_uvm_report_error__17__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__17__report_enabled_checked;
    __Vtask_uvm_report_error__17__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    // Body
    VlQueue<std::string> unnamedblk1__DOT__msg_queue;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    VlQueue<std::string> matching_ops;
    if ((0U != (1U & op_type))) {
        matching_ops.push_back("UVM_COPY"s);
    }
    if ((0U != (4U & op_type))) {
        matching_ops.push_back("UVM_COMPARE"s);
    }
    if ((0U != (0x00000010U & op_type))) {
        matching_ops.push_back("UVM_PRINT"s);
    }
    if ((0U != (0x00000040U & op_type))) {
        matching_ops.push_back("UVM_RECORD"s);
    }
    if ((0U != (0x00000100U & op_type))) {
        matching_ops.push_back("UVM_PACK"s);
    }
    if ((0U != (0x00000400U & op_type))) {
        matching_ops.push_back("UVM_UNPACK"s);
    }
    if ((0U != (0x00000800U & op_type))) {
        matching_ops.push_back("UVM_SET"s);
    }
    if (VL_LTS_III(32, 1U, matching_ops.size())) {
        unnamedblk1__DOT__msg_queue.push_back("("s);
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, matching_ops.size())) {
            unnamedblk1__DOT__msg_queue.push_back(matching_ops.at(unnamedblk1__DOT__unnamedblk2__DOT__i));
            if ((unnamedblk1__DOT__unnamedblk2__DOT__i 
                 != (matching_ops.size() - (IData)(1U)))) {
                unnamedblk1__DOT__msg_queue.push_back(","s);
            }
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        unnamedblk1__DOT__msg_queue.push_back(")"s);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__4__id = "UVM/FIELD_OP/SET_BAD_OP_TYPE"s;
                        __Vfunc_uvm_report_enabled__4__severity = 2U;
                        __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__5__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__6__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                        __Vfunc_uvm_report_enabled__4__Vfuncout 
                            = __Vtask_uvm_report_enabled__7__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__8__context_name = ""s;
            __Vtask_uvm_report_error__8__line = 0x00000058U;
            __Vtask_uvm_report_error__8__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__8__verbosity = 0U;
            __Vtask_uvm_report_error__8__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("set() was passed op_type matching multiple operations: "s, 
                                                  ([&]() {
                            __Vfunc_m_uvm_string_queue_join__9__Vfuncout 
                                = VL_CVT_PACK_STR_ND(
                                                     unnamedblk1__DOT__msg_queue);
                        }(), __Vfunc_m_uvm_string_queue_join__9__Vfuncout)));
            __Vtask_uvm_report_error__8__id = "UVM/FIELD_OP/SET_BAD_OP_TYPE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__10__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
        }
    }
    if (this->__PVT__m_is_set) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__13__id = "UVM/FIELD_OP/SET"s;
                        __Vfunc_uvm_report_enabled__13__severity = 2U;
                        __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__14__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__15__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), __Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__16__Vfuncout);
                        __Vfunc_uvm_report_enabled__13__Vfuncout 
                            = __Vtask_uvm_report_enabled__16__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__13__Vfuncout))) {
            __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__17__context_name = ""s;
            __Vtask_uvm_report_error__17__line = 0x00000062U;
            __Vtask_uvm_report_error__17__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
            __Vtask_uvm_report_error__17__verbosity = 0U;
            __Vtask_uvm_report_error__17__message = "Attempting to set values in policy without flushing"s;
            __Vtask_uvm_report_error__17__id = "UVM/FIELD_OP/SET"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__17__id, __Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, __Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, __Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
        }
    } else {
        this->__PVT__m_op_type = op_type;
        this->__PVT__m_policy = policy;
        this->__PVT__m_object = rhs;
        this->__PVT__m_is_set = 1U;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_op_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_name\n"); );
    // Body
    get_op_name__Vfuncrtn = ((1U == this->__PVT__m_op_type)
                              ? "copy"s : ((4U == this->__PVT__m_op_type)
                                            ? "compare"s
                                            : ((0x00000010U 
                                                == this->__PVT__m_op_type)
                                                ? "print"s
                                                : (
                                                   (0x00000040U 
                                                    == this->__PVT__m_op_type)
                                                    ? "record"s
                                                    : 
                                                   ((0x00000100U 
                                                     == this->__PVT__m_op_type)
                                                     ? "pack"s
                                                     : 
                                                    ((0x00000400U 
                                                      == this->__PVT__m_op_type)
                                                      ? "unpack"s
                                                      : 
                                                     ((0x00000800U 
                                                       == this->__PVT__m_op_type)
                                                       ? "set"s
                                                       : ""s)))))));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_type(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*27:0*/ &get_op_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_op_type\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__Vfuncout;
    __Vfunc_uvm_report_enabled__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__verbosity;
    __Vfunc_uvm_report_enabled__21__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__21__severity;
    __Vfunc_uvm_report_enabled__21__severity = 0;
    std::string __Vfunc_uvm_report_enabled__21__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__24__Vfuncout;
    __Vtask_uvm_report_enabled__24__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__25__id;
    std::string __Vtask_uvm_report_error__25__message;
    IData/*31:0*/ __Vtask_uvm_report_error__25__verbosity;
    __Vtask_uvm_report_error__25__verbosity = 0;
    std::string __Vtask_uvm_report_error__25__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__25__line;
    __Vtask_uvm_report_error__25__line = 0;
    std::string __Vtask_uvm_report_error__25__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__25__report_enabled_checked;
    __Vtask_uvm_report_error__25__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__27__Vfuncout;
    // Body
    if (this->__PVT__m_is_set) {
        get_op_type__Vfuncrtn = this->__PVT__m_op_type;
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__21__id = "UVM/FIELD_OP/GET_OP_TYPE"s;
                    __Vfunc_uvm_report_enabled__21__severity = 2U;
                    __Vfunc_uvm_report_enabled__21__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__22__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__23__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__21__verbosity, (IData)(__Vfunc_uvm_report_enabled__21__severity), __Vfunc_uvm_report_enabled__21__id, __Vtask_uvm_report_enabled__24__Vfuncout);
                    __Vfunc_uvm_report_enabled__21__Vfuncout 
                        = __Vtask_uvm_report_enabled__24__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__21__Vfuncout))) {
        __Vtask_uvm_report_error__25__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__25__context_name = ""s;
        __Vtask_uvm_report_error__25__line = 0x00000078U;
        __Vtask_uvm_report_error__25__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
        __Vtask_uvm_report_error__25__verbosity = 0U;
        __Vtask_uvm_report_error__25__message = "Calling get_op_type() before calling set() is not allowed"s;
        __Vtask_uvm_report_error__25__id = "UVM/FIELD_OP/GET_OP_TYPE"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__26__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__27__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__27__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__25__id, __Vtask_uvm_report_error__25__message, __Vtask_uvm_report_error__25__verbosity, __Vtask_uvm_report_error__25__filename, __Vtask_uvm_report_error__25__line, __Vtask_uvm_report_error__25__context_name, (IData)(__Vtask_uvm_report_error__25__report_enabled_checked));
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_policy(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_policy> &get_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_policy\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__Vfuncout;
    __Vfunc_uvm_report_enabled__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__29__verbosity;
    __Vfunc_uvm_report_enabled__29__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__29__severity;
    __Vfunc_uvm_report_enabled__29__severity = 0;
    std::string __Vfunc_uvm_report_enabled__29__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__32__Vfuncout;
    __Vtask_uvm_report_enabled__32__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__33__id;
    std::string __Vtask_uvm_report_error__33__message;
    IData/*31:0*/ __Vtask_uvm_report_error__33__verbosity;
    __Vtask_uvm_report_error__33__verbosity = 0;
    std::string __Vtask_uvm_report_error__33__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__33__line;
    __Vtask_uvm_report_error__33__line = 0;
    std::string __Vtask_uvm_report_error__33__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__33__report_enabled_checked;
    __Vtask_uvm_report_error__33__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    // Body
    if (this->__PVT__m_is_set) {
        get_policy__Vfuncrtn = this->__PVT__m_policy;
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__29__id = "UVM/FIELD_OP/GET_POLICY"s;
                    __Vfunc_uvm_report_enabled__29__severity = 2U;
                    __Vfunc_uvm_report_enabled__29__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__30__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__31__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__29__verbosity, (IData)(__Vfunc_uvm_report_enabled__29__severity), __Vfunc_uvm_report_enabled__29__id, __Vtask_uvm_report_enabled__32__Vfuncout);
                    __Vfunc_uvm_report_enabled__29__Vfuncout 
                        = __Vtask_uvm_report_enabled__32__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__29__Vfuncout))) {
        __Vtask_uvm_report_error__33__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__33__context_name = ""s;
        __Vtask_uvm_report_error__33__line = 0x00000081U;
        __Vtask_uvm_report_error__33__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
        __Vtask_uvm_report_error__33__verbosity = 0U;
        __Vtask_uvm_report_error__33__message = "Attempting to call get_policy() before calling set() is not allowed"s;
        __Vtask_uvm_report_error__33__id = "UVM/FIELD_OP/GET_POLICY"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__34__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__35__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__33__id, __Vtask_uvm_report_error__33__message, __Vtask_uvm_report_error__33__verbosity, __Vtask_uvm_report_error__33__filename, __Vtask_uvm_report_error__33__line, __Vtask_uvm_report_error__33__context_name, (IData)(__Vtask_uvm_report_error__33__report_enabled_checked));
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_rhs(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_get_rhs\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__Vfuncout;
    __Vfunc_uvm_report_enabled__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__37__verbosity;
    __Vfunc_uvm_report_enabled__37__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__37__severity;
    __Vfunc_uvm_report_enabled__37__severity = 0;
    std::string __Vfunc_uvm_report_enabled__37__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__40__Vfuncout;
    __Vtask_uvm_report_enabled__40__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__41__id;
    std::string __Vtask_uvm_report_error__41__message;
    IData/*31:0*/ __Vtask_uvm_report_error__41__verbosity;
    __Vtask_uvm_report_error__41__verbosity = 0;
    std::string __Vtask_uvm_report_error__41__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__41__line;
    __Vtask_uvm_report_error__41__line = 0;
    std::string __Vtask_uvm_report_error__41__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__41__report_enabled_checked;
    __Vtask_uvm_report_error__41__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    // Body
    if (this->__PVT__m_is_set) {
        get_rhs__Vfuncrtn = this->__PVT__m_object;
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__37__id = "UVM/FIELD_OP/GET_RHS"s;
                    __Vfunc_uvm_report_enabled__37__severity = 2U;
                    __Vfunc_uvm_report_enabled__37__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__38__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__39__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__37__verbosity, (IData)(__Vfunc_uvm_report_enabled__37__severity), __Vfunc_uvm_report_enabled__37__id, __Vtask_uvm_report_enabled__40__Vfuncout);
                    __Vfunc_uvm_report_enabled__37__Vfuncout 
                        = __Vtask_uvm_report_enabled__40__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__37__Vfuncout))) {
        __Vtask_uvm_report_error__41__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__41__context_name = ""s;
        __Vtask_uvm_report_error__41__line = 0x00000089U;
        __Vtask_uvm_report_error__41__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
        __Vtask_uvm_report_error__41__verbosity = 0U;
        __Vtask_uvm_report_error__41__message = "Calling get_rhs() before calling set() is not allowed"s;
        __Vtask_uvm_report_error__41__id = "UVM/FIELD_OP/GET_RHS"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__42__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__43__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__41__id, __Vtask_uvm_report_error__41__message, __Vtask_uvm_report_error__41__verbosity, __Vtask_uvm_report_error__41__filename, __Vtask_uvm_report_error__41__line, __Vtask_uvm_report_error__41__context_name, (IData)(__Vtask_uvm_report_error__41__report_enabled_checked));
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_user_hook_enabled(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &user_hook_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_user_hook_enabled\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__Vfuncout;
    __Vfunc_uvm_report_enabled__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__verbosity;
    __Vfunc_uvm_report_enabled__45__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__45__severity;
    __Vfunc_uvm_report_enabled__45__severity = 0;
    std::string __Vfunc_uvm_report_enabled__45__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__48__Vfuncout;
    __Vtask_uvm_report_enabled__48__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__49__id;
    std::string __Vtask_uvm_report_error__49__message;
    IData/*31:0*/ __Vtask_uvm_report_error__49__verbosity;
    __Vtask_uvm_report_error__49__verbosity = 0;
    std::string __Vtask_uvm_report_error__49__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__49__line;
    __Vtask_uvm_report_error__49__line = 0;
    std::string __Vtask_uvm_report_error__49__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__49__report_enabled_checked;
    __Vtask_uvm_report_error__49__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    // Body
    if (this->__PVT__m_is_set) {
        user_hook_enabled__Vfuncrtn = this->__PVT__m_user_hook;
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__45__id = "UVM/FIELD_OP/GET_USER_HOOK"s;
                    __Vfunc_uvm_report_enabled__45__severity = 2U;
                    __Vfunc_uvm_report_enabled__45__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__46__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__47__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__45__verbosity, (IData)(__Vfunc_uvm_report_enabled__45__severity), __Vfunc_uvm_report_enabled__45__id, __Vtask_uvm_report_enabled__48__Vfuncout);
                    __Vfunc_uvm_report_enabled__45__Vfuncout 
                        = __Vtask_uvm_report_enabled__48__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__45__Vfuncout))) {
        __Vtask_uvm_report_error__49__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__49__context_name = ""s;
        __Vtask_uvm_report_error__49__line = 0x00000091U;
        __Vtask_uvm_report_error__49__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_field_op.svh"s;
        __Vtask_uvm_report_error__49__verbosity = 0U;
        __Vtask_uvm_report_error__49__message = "Attempting to get_user_hook before calling set() is not allowed"s;
        __Vtask_uvm_report_error__49__id = "UVM/FIELD_OP/GET_USER_HOOK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__50__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__51__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__49__id, __Vtask_uvm_report_error__49__message, __Vtask_uvm_report_error__49__verbosity, __Vtask_uvm_report_error__49__filename, __Vtask_uvm_report_error__49__line, __Vtask_uvm_report_error__49__context_name, (IData)(__Vtask_uvm_report_error__49__report_enabled_checked));
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_disable_user_hook(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_disable_user_hook\n"); );
    // Body
    this->__PVT__m_user_hook = 0U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_flush(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_flush\n"); );
    // Body
    this->__PVT__m_policy = VlNull{};
    this->__PVT__m_object = VlNull{};
    this->__PVT__m_user_hook = 1U;
    this->__PVT__m_is_set = 0U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_m_recycle(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_m_recycle\n"); );
    // Body
    this->__VnoInFunc_flush(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_field_op__Vclpkg.__PVT__m_recycled_op.push_back(
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op>{this});
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__55__Vfuncout;
    __Vfunc___VBasicRand__55__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__55__Vfuncout);
            }(), __Vfunc___VBasicRand__55__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_field_op::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_user_hook = 0;
    __PVT__m_is_set = 0;
    __PVT__m_op_type = 0;
}

Vrecorders_top_uvm_pkg__03a__03auvm_field_op::~Vrecorders_top_uvm_pkg__03a__03auvm_field_op() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_field_op>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_field_op::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_field_op::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_field_op::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_policy:" + VL_TO_STRING(__PVT__m_policy);
    out += ", m_user_hook:" + VL_TO_STRING(__PVT__m_user_hook);
    out += ", m_object:" + VL_TO_STRING(__PVT__m_object);
    out += ", m_is_set:" + VL_TO_STRING(__PVT__m_is_set);
    out += ", m_op_type:" + VL_TO_STRING(__PVT__m_op_type);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
