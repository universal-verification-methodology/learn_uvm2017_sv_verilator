// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi106> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi106> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi106__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_text_tr_stream__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_text_tr_stream"s;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi106> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi106__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_stream> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_text_tr_stream, vlProcess, vlSymsp, "unnamed-uvm_text_tr_stream"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_text_tr_stream, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_tr_stream"s;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_execute_op\n"); );
    // Body
    Vdma_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(vlProcess, vlSymsp, op);
    this->__VnoInFunc____05Fm_uvm_execute_field_op(vlProcess, vlSymsp, op);
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc____05Fm_uvm_execute_field_op\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_get_rhs__5__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_get_rhs__6__Vfuncout;
    std::string __Vtask_get_name__7__Vfuncout;
    IData/*27:0*/ __Vtask_get_op_type__8__Vfuncout;
    __Vtask_get_op_type__8__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__9__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__10__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__11__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__12__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__13__Vfuncout;
    // Body
    IData/*27:0*/ local_op_type___05F;
    local_op_type___05F = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_stream> local_rhs___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> local_rsrc___05F;
    std::string local_rsrc_name___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> local_obj___05F;
    CData/*0:0*/ local_success___05F;
    local_success___05F = 0;
    IData/*31:0*/ local_size___05F;
    local_size___05F = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> ___05Flocal_printer___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_comparer> ___05Flocal_comparer___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> ___05Flocal_recorder___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_packer> ___05Flocal_packer___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_copier> ___05Flocal_copier___05F;
    {
        (void)VL_CAST_DYNAMIC(([&]() {
                    VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)
                               ->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __Vtask_get_rhs__5__Vfuncout);
                }(), __Vtask_get_rhs__5__Vfuncout), local_rhs___05F);
        if ((VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)
                              ->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __Vtask_get_rhs__6__Vfuncout);
                        }(), __Vtask_get_rhs__6__Vfuncout), local_rsrc___05F) 
             && (VlNull{} != local_rsrc___05F))) {
            VL_NULL_CHECK(local_rsrc___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__7__Vfuncout);
            local_rsrc_name___05F = __Vtask_get_name__7__Vfuncout;
        }
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)->__VnoInFunc_get_op_type(vlProcess, vlSymsp, __Vtask_get_op_type__8__Vfuncout);
        local_op_type___05F = __Vtask_get_op_type__8__Vfuncout;
        if ((0x00000010U == local_op_type___05F)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__9__Vfuncout);
                                    }(), __Vtask_get_policy__9__Vfuncout), ___05Flocal_printer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:41: Assertion failed in %Nuvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41, "");
            }
        } else if ((4U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__10__Vfuncout);
                                    }(), __Vtask_get_policy__10__Vfuncout), ___05Flocal_comparer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:41: Assertion failed in %Nuvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41, "");
            }
        } else if ((0x00000040U == local_op_type___05F)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__11__Vfuncout);
                                    }(), __Vtask_get_policy__11__Vfuncout), ___05Flocal_recorder___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:41: Assertion failed in %Nuvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41, "");
            }
        } else if (((0x00000100U == local_op_type___05F) 
                    || (0x00000400U == local_op_type___05F))) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__12__Vfuncout);
                                    }(), __Vtask_get_policy__12__Vfuncout), ___05Flocal_packer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:41: Assertion failed in %Nuvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41, "");
            }
        } else if ((1U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__13__Vfuncout);
                                    }(), __Vtask_get_policy__13__Vfuncout), ___05Flocal_copier___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:41: Assertion failed in %Nuvm_pkg.uvm_text_tr_stream.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 41, "");
            }
        }
        __Vlabel0: ;
    }
}

Vdma_uvm_pkg__03a__03auvm_text_tr_stream::Vdma_uvm_pkg__03a__03auvm_text_tr_stream(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_tr_stream(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> db, std::string scope, std::string stream_type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__15__Vfuncout;
    __Vtask_open_db__15__Vfuncout = 0;
    std::string __Vfunc_get_name__16__Vfuncout;
    IData/*31:0*/ __Vfunc_get_handle__17__Vfuncout;
    __Vfunc_get_handle__17__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(db, this->__PVT__m_text_db))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_text_tr_stream.svh:62: Assertion failed in %Nuvm_pkg.uvm_text_tr_stream.do_open: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 62, "");
    }
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 63)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__15__Vfuncout);
                    }(), (IData)(__Vtask_open_db__15__Vfuncout))))) {
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__16__Vfuncout);
            }(), __Vfunc_get_name__16__Vfuncout);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 64)
                      ->__PVT__m_file,"  CREATE_STREAM @%0t {NAME:%@ T:%@ SCOPE:%@ STREAM:%0d}\n",0,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      -1,&(__Vtemp_1),-1,&(stream_type_name),
                      -1,&(scope),32,([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__17__Vfuncout);
                    }(), __Vfunc_get_handle__17__Vfuncout));
    }
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_close(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_close\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__18__Vfuncout;
    __Vtask_open_db__18__Vfuncout = 0;
    std::string __Vfunc_get_name__19__Vfuncout;
    std::string __Vfunc_get_stream_type_name__20__Vfuncout;
    std::string __Vfunc_get_scope__21__Vfuncout;
    IData/*31:0*/ __Vfunc_get_handle__22__Vfuncout;
    __Vfunc_get_handle__22__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 78)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__18__Vfuncout);
                    }(), (IData)(__Vtask_open_db__18__Vfuncout))))) {
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__19__Vfuncout);
            }(), __Vfunc_get_name__19__Vfuncout);
        __Vtemp_2 = ([&]() {
                this->__VnoInFunc_get_stream_type_name(vlSymsp, __Vfunc_get_stream_type_name__20__Vfuncout);
            }(), __Vfunc_get_stream_type_name__20__Vfuncout);
        __Vtemp_3 = ([&]() {
                this->__VnoInFunc_get_scope(vlSymsp, __Vfunc_get_scope__21__Vfuncout);
            }(), __Vfunc_get_scope__21__Vfuncout);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 79)
                      ->__PVT__m_file,"  CLOSE_STREAM @%0t {NAME:%@ T:%@ SCOPE:%@ STREAM:%0d}\n",0,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      -1,&(__Vtemp_1),-1,&(__Vtemp_2),
                      -1,&(__Vtemp_3),32,([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__22__Vfuncout);
                    }(), __Vfunc_get_handle__22__Vfuncout));
    }
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_free(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_free\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__23__Vfuncout;
    __Vtask_open_db__23__Vfuncout = 0;
    std::string __Vfunc_get_name__24__Vfuncout;
    std::string __Vfunc_get_stream_type_name__25__Vfuncout;
    std::string __Vfunc_get_scope__26__Vfuncout;
    IData/*31:0*/ __Vfunc_get_handle__27__Vfuncout;
    __Vfunc_get_handle__27__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 93)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__23__Vfuncout);
                    }(), (IData)(__Vtask_open_db__23__Vfuncout))))) {
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__24__Vfuncout);
            }(), __Vfunc_get_name__24__Vfuncout);
        __Vtemp_2 = ([&]() {
                this->__VnoInFunc_get_stream_type_name(vlSymsp, __Vfunc_get_stream_type_name__25__Vfuncout);
            }(), __Vfunc_get_stream_type_name__25__Vfuncout);
        __Vtemp_3 = ([&]() {
                this->__VnoInFunc_get_scope(vlSymsp, __Vfunc_get_scope__26__Vfuncout);
            }(), __Vfunc_get_scope__26__Vfuncout);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 94)
                      ->__PVT__m_file,"  FREE_STREAM @%0t {NAME:%@ T:%@ SCOPE:%@ STREAM:%0d}\n",0,
                      64,VL_TIME_UNITED_Q(1000),-9,
                      -1,&(__Vtemp_1),-1,&(__Vtemp_2),
                      -1,&(__Vtemp_3),32,([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__27__Vfuncout);
                    }(), __Vfunc_get_handle__27__Vfuncout));
    }
    this->__PVT__m_text_db = VlNull{};
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open_recorder(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ open_time, std::string type_name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> &do_open_recorder__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_do_open_recorder\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__28__Vfuncout;
    __Vtask_open_db__28__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_recorder> __Vfunc_create__29__Vfuncout;
    // Body
    {
        if (([&]() {
                    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_text_tr_stream.svh", 114)
             ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__28__Vfuncout);
                }(), (IData)(__Vtask_open_db__28__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi160__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, name, VlNull{}, ""s, __Vfunc_create__29__Vfuncout);
            do_open_recorder__Vfuncrtn = __Vfunc_create__29__Vfuncout;
            goto __Vlabel0;
        }
        do_open_recorder__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__31__Vfuncout;
    __Vfunc___VBasicRand__31__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__31__Vfuncout);
            }(), __Vfunc___VBasicRand__31__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_text_tr_stream::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_text_tr_stream::~Vdma_uvm_pkg__03a__03auvm_text_tr_stream() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_text_tr_stream>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_text_tr_stream::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_text_tr_stream::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_text_tr_stream::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_text_db:" + VL_TO_STRING(__PVT__m_text_db);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_tr_stream::to_string_middle();
    return (out);
}
