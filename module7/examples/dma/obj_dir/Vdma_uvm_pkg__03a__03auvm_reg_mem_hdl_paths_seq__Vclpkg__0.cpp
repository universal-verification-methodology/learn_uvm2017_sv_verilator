// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi182> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi182> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi182__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_hdl_paths_seq"s;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi182> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi182__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_hdl_paths_seq"s;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_execute_op\n"); );
    // Body
    Vdma_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(vlProcess, vlSymsp, op);
    this->__VnoInFunc____05Fm_uvm_execute_field_op(vlProcess, vlSymsp, op);
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_execute_field_op\n"); );
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
    IData/*31:0*/ __Vtask_get_threshold__14__Vfuncout;
    __Vtask_get_threshold__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_result__15__Vfuncout;
    __Vtask_get_result__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__16__Vfuncout;
    __Vtask_get_threshold__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__17__Vfuncout;
    __Vtask_get_threshold__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_result__18__Vfuncout;
    __Vtask_get_result__18__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__19__Vfuncout;
    __Vtask_get_threshold__19__Vfuncout = 0;
    CData/*0:0*/ __Vtask_compare_field_int__20__Vfuncout;
    __Vtask_compare_field_int__20__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__21__Vfuncout;
    __Vtask_get_threshold__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_result__22__Vfuncout;
    __Vtask_get_result__22__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__23__Vfuncout;
    __Vtask_get_threshold__23__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__24__Vfuncout;
    __Vtask_get_threshold__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_result__25__Vfuncout;
    __Vtask_get_result__25__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__26__Vfuncout;
    __Vtask_get_threshold__26__Vfuncout = 0;
    CData/*0:0*/ __Vtask_compare_string__27__Vfuncout;
    __Vtask_compare_string__27__Vfuncout = 0;
    QData/*63:0*/ __Vtask_unpack_field_int__30__Vfuncout;
    __Vtask_unpack_field_int__30__Vfuncout = 0;
    std::string __Vtask_unpack_string__31__Vfuncout;
    CData/*0:0*/ __Vtask_is_open__32__Vfuncout;
    __Vtask_is_open__32__Vfuncout = 0;
    CData/*0:0*/ __Vtask_use_record_attribute__33__Vfuncout;
    __Vtask_use_record_attribute__33__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_open__36__Vfuncout;
    __Vtask_is_open__36__Vfuncout = 0;
    CData/*0:0*/ __Vtask_use_record_attribute__37__Vfuncout;
    __Vtask_use_record_attribute__37__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_open__40__Vfuncout;
    __Vtask_is_open__40__Vfuncout = 0;
    CData/*0:0*/ __Vtask_use_record_attribute__41__Vfuncout;
    __Vtask_use_record_attribute__41__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_open__44__Vfuncout;
    __Vtask_is_open__44__Vfuncout = 0;
    CData/*0:0*/ __Vtask_use_record_attribute__45__Vfuncout;
    __Vtask_use_record_attribute__45__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_max_depth__49__Vfuncout;
    __Vtask_get_max_depth__49__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_active_object_depth__50__Vfuncout;
    __Vtask_get_active_object_depth__50__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_max_depth__51__Vfuncout;
    __Vtask_get_max_depth__51__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_begin_elements__52__Vfuncout;
    __Vtask_get_begin_elements__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_end_elements__53__Vfuncout;
    __Vtask_get_end_elements__53__Vfuncout = 0;
    QData/*63:0*/ __Vtask_read__59__Vfuncout;
    __Vtask_read__59__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtask_read__60__Vfuncout;
    VL_ZERO_W(4096, __Vtask_read__60__Vfuncout);
    IData/*31:0*/ __Vtask_read__61__Vfuncout;
    __Vtask_read__61__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__62__Vfuncout;
    __Vtask_read__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__63__Vfuncout;
    __Vfunc_uvm_report_enabled__63__Vfuncout = 0;
    std::string __Vfunc_get_full_name__65__Vfuncout;
    std::string __Vtask_read__66__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__sz___05F;
    unnamedblk4__DOT__sz___05F = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__i;
    unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk6__DOT__i;
    unnamedblk4__DOT__unnamedblk6__DOT__i = 0;
    std::string unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk8__DOT__i;
    unnamedblk4__DOT__unnamedblk8__DOT__i = 0;
    std::string unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk10__DOT__i;
    unnamedblk4__DOT__unnamedblk10__DOT__i = 0;
    std::string unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F;
    IData/*31:0*/ unnamedblk12__DOT_____05Ftmp_max;
    unnamedblk12__DOT_____05Ftmp_max = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements;
    unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements;
    unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index;
    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr;
    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index;
    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz9> unnamedblk17__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz8> unnamedblk18__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_> unnamedblk19__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz10> unnamedblk20__DOT_____05Ftmp_rsrc___05F;
    std::string unnamedblk21__DOT__local_name___05F;
    std::string unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F;
    IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F;
    unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F = 0;
    IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F;
    unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F = 0;
    std::string unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource__Tz2> unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F;
    IData/*27:0*/ local_op_type___05F;
    local_op_type___05F = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> local_rhs___05F;
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
                    VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                               ->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __Vtask_get_rhs__5__Vfuncout);
                }(), __Vtask_get_rhs__5__Vfuncout), local_rhs___05F);
        if ((VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                              ->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __Vtask_get_rhs__6__Vfuncout);
                        }(), __Vtask_get_rhs__6__Vfuncout), local_rsrc___05F) 
             && (VlNull{} != local_rsrc___05F))) {
            VL_NULL_CHECK(local_rsrc___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__7__Vfuncout);
            local_rsrc_name___05F = __Vtask_get_name__7__Vfuncout;
        }
        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_op_type(vlProcess, vlSymsp, __Vtask_get_op_type__8__Vfuncout);
        local_op_type___05F = __Vtask_get_op_type__8__Vfuncout;
        if ((0x00000010U == local_op_type___05F)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__9__Vfuncout);
                                    }(), __Vtask_get_policy__9__Vfuncout), ___05Flocal_printer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if ((4U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__10__Vfuncout);
                                    }(), __Vtask_get_policy__10__Vfuncout), ___05Flocal_comparer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if ((0x00000040U == local_op_type___05F)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__11__Vfuncout);
                                    }(), __Vtask_get_policy__11__Vfuncout), ___05Flocal_recorder___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if (((0x00000100U == local_op_type___05F) 
                    || (0x00000400U == local_op_type___05F))) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__12__Vfuncout);
                                    }(), __Vtask_get_policy__12__Vfuncout), ___05Flocal_packer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if ((1U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__13__Vfuncout);
                                    }(), __Vtask_get_policy__13__Vfuncout), ___05Flocal_copier___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if ((0x00000800U == local_op_type___05F)) {
            if ((VlNull{} == local_rsrc___05F)) {
                goto __Vlabel0;
            }
        } else {
            goto __Vlabel0;
        }
        if ((1U == local_op_type___05F)) {
            this->__PVT__abstractions = VL_NULL_CHECK(local_rhs___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                ->__PVT__abstractions;
        } else if ((4U == local_op_type___05F)) {
            if (((1U & (~ (0U != ([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                  ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__14__Vfuncout);
                                    }(), __Vtask_get_threshold__14__Vfuncout)))) 
                 || (([&]() {
                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                      ->__VnoInFunc_get_result(vlSymsp, __Vtask_get_result__15__Vfuncout);
                            }(), __Vtask_get_result__15__Vfuncout) 
                     < ([&]() {
                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                        ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__16__Vfuncout);
                            }(), __Vtask_get_threshold__16__Vfuncout)))) {
                if ((this->__PVT__abstractions != VL_NULL_CHECK(local_rhs___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                     ->__PVT__abstractions)) {
                    if (((1U & (~ (0U != ([&]() {
                                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                          ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__17__Vfuncout);
                                            }(), __Vtask_get_threshold__17__Vfuncout)))) 
                         || (([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                              ->__VnoInFunc_get_result(vlSymsp, __Vtask_get_result__18__Vfuncout);
                                    }(), __Vtask_get_result__18__Vfuncout) 
                             < ([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__19__Vfuncout);
                                    }(), __Vtask_get_threshold__19__Vfuncout)))) {
                        if ((this->__PVT__abstractions.size() 
                             != VL_NULL_CHECK(local_rhs___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__PVT__abstractions.size())) {
                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_compare_field_int(vlProcess, vlSymsp, "abstractions.size()"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 
                                                                                VL_EXTENDS_QI(64,32, VL_NULL_CHECK(local_rhs___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                                                ->__PVT__abstractions.size()), 0x00000020U, 0x02000000U, __Vtask_compare_field_int__20__Vfuncout);
                        }
                    }
                    if (((1U & (~ (0U != ([&]() {
                                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                          ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__21__Vfuncout);
                                            }(), __Vtask_get_threshold__21__Vfuncout)))) 
                         || (([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                              ->__VnoInFunc_get_result(vlSymsp, __Vtask_get_result__22__Vfuncout);
                                    }(), __Vtask_get_result__22__Vfuncout) 
                             < ([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__23__Vfuncout);
                                    }(), __Vtask_get_threshold__23__Vfuncout)))) {
                        if ((this->__PVT__abstractions 
                             != VL_NULL_CHECK(local_rhs___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__PVT__abstractions)) {
                            unnamedblk1__DOT__i = 0U;
                            while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__abstractions.size())) {
                                if (((1U & (~ (0U != 
                                               ([&]() {
                                                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__24__Vfuncout);
                                                        }(), __Vtask_get_threshold__24__Vfuncout)))) 
                                     || (([&]() {
                                                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                          ->__VnoInFunc_get_result(vlSymsp, __Vtask_get_result__25__Vfuncout);
                                                }(), __Vtask_get_result__25__Vfuncout) 
                                         < ([&]() {
                                                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                            ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__26__Vfuncout);
                                                }(), __Vtask_get_threshold__26__Vfuncout)))) {
                                    if ((this->__PVT__abstractions.at(unnamedblk1__DOT__i) 
                                         != VL_NULL_CHECK(local_rhs___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                         ->__PVT__abstractions.at(unnamedblk1__DOT__i))) {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_compare_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                                                                32,
                                                                                unnamedblk1__DOT__i) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__i)), 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(local_rhs___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                                                ->__PVT__abstractions.at(unnamedblk1__DOT__i)), __Vtask_compare_string__27__Vfuncout);
                                    }
                                }
                                unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + unnamedblk1__DOT__i);
                            }
                        }
                    }
                }
            }
        } else if ((0x00000100U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_packer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_pack_field_int(vlSymsp, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 0x00000020U);
            unnamedblk2__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__abstractions.size())) {
                VL_NULL_CHECK(___05Flocal_packer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_pack_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk2__DOT__i)));
                unnamedblk2__DOT__i = ((IData)(1U) 
                                       + unnamedblk2__DOT__i);
            }
        } else if ((0x00000400U == local_op_type___05F)) {
            local_size___05F = (IData)(([&]() {
                        VL_NULL_CHECK(___05Flocal_packer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                        ->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000020U, __Vtask_unpack_field_int__30__Vfuncout);
                    }(), __Vtask_unpack_field_int__30__Vfuncout));
            if (VL_GTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                this->__PVT__abstractions = this->__PVT__abstractions.slice(0U, 
                                                                            (local_size___05F 
                                                                             - (IData)(1U)));
            } else {
                while (VL_LTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                    this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(local_size___05F));
                }
            }
            unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__abstractions.size())) {
                VL_NULL_CHECK(___05Flocal_packer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_unpack_string(vlProcess, vlSymsp, __Vtask_unpack_string__31__Vfuncout);
                this->__PVT__abstractions.atWriteAppend(unnamedblk3__DOT__i) 
                    = __Vtask_unpack_string__31__Vfuncout;
                unnamedblk3__DOT__i = ((IData)(1U) 
                                       + unnamedblk3__DOT__i);
            }
        } else if ((0x00000040U == local_op_type___05F)) {
            unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__i, this->__PVT__abstractions.size())) {
                unnamedblk4__DOT__sz___05F = unnamedblk4__DOT__unnamedblk5__DOT__i;
                unnamedblk4__DOT__unnamedblk5__DOT__i 
                    = ((IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__i);
            }
            if ((0U == unnamedblk4__DOT__sz___05F)) {
                if (((VlNull{} != ___05Flocal_recorder___05F) 
                     && ([&]() {
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                         ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__32__Vfuncout);
                            }(), (IData)(__Vtask_is_open__32__Vfuncout)))) {
                    if (([&]() {
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                         ->__VnoInFunc_use_record_attribute(vlSymsp, __Vtask_use_record_attribute__33__Vfuncout);
                            }(), (IData)(__Vtask_use_record_attribute__33__Vfuncout))) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "abstractions"s, "0"s, ""s);
                    } else {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "abstractions"s, 0ULL, 0x00000020U, 0x02000000U);
                    }
                }
            } else if (VL_GTS_III(32, 0x0000000aU, unnamedblk4__DOT__sz___05F)) {
                unnamedblk4__DOT__unnamedblk6__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk6__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk6__DOT__i) ;
                    if (((VlNull{} != ___05Flocal_recorder___05F) 
                         && ([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__36__Vfuncout);
                                }(), (IData)(__Vtask_is_open__36__Vfuncout)))) {
                        if (([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_use_record_attribute(vlSymsp, __Vtask_use_record_attribute__37__Vfuncout);
                                }(), (IData)(__Vtask_use_record_attribute__37__Vfuncout))) {
                            __Vtemp_1 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk6__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , ""s);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk6__DOT__i)));
                        }
                    }
                    unnamedblk4__DOT__unnamedblk6__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk6__DOT__i);
                }
            } else {
                unnamedblk4__DOT__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, unnamedblk4__DOT__unnamedblk8__DOT__i)) {
                    unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk8__DOT__i) ;
                    if (((VlNull{} != ___05Flocal_recorder___05F) 
                         && ([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__40__Vfuncout);
                                }(), (IData)(__Vtask_is_open__40__Vfuncout)))) {
                        if (([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_use_record_attribute(vlSymsp, __Vtask_use_record_attribute__41__Vfuncout);
                                }(), (IData)(__Vtask_use_record_attribute__41__Vfuncout))) {
                            __Vtemp_2 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk8__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , ""s);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk8__DOT__i)));
                        }
                    }
                    unnamedblk4__DOT__unnamedblk8__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk8__DOT__i);
                }
                unnamedblk4__DOT__unnamedblk10__DOT__i 
                    = (unnamedblk4__DOT__sz___05F - (IData)(5U));
                while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk10__DOT__i, unnamedblk4__DOT__sz___05F)) {
                    unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk10__DOT__i) ;
                    if (((VlNull{} != ___05Flocal_recorder___05F) 
                         && ([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__44__Vfuncout);
                                }(), (IData)(__Vtask_is_open__44__Vfuncout)))) {
                        if (([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_use_record_attribute(vlSymsp, __Vtask_use_record_attribute__45__Vfuncout);
                                }(), (IData)(__Vtask_use_record_attribute__45__Vfuncout))) {
                            __Vtemp_3 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk10__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_3)) , ""s);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk10__DOT__i)));
                        }
                    }
                    unnamedblk4__DOT__unnamedblk10__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk10__DOT__i);
                }
            }
        } else if ((0x00000010U == local_op_type___05F)) {
            unnamedblk12__DOT_____05Ftmp_max = ((IData)(1U) 
                                                + (this->__PVT__abstractions.size() 
                                                   - (IData)(1U)));
            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "abstractions"s, unnamedblk12__DOT_____05Ftmp_max, "queue(string)"s, 0x2eU);
            if (((0xffffffffU == ([&]() {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                  ->__VnoInFunc_get_max_depth(vlSymsp, __Vtask_get_max_depth__49__Vfuncout);
                            }(), __Vtask_get_max_depth__49__Vfuncout)) 
                 || (([&]() {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                      ->__VnoInFunc_get_active_object_depth(vlSymsp, __Vtask_get_active_object_depth__50__Vfuncout);
                            }(), __Vtask_get_active_object_depth__50__Vfuncout) 
                     < ((IData)(1U) + ([&]() {
                                    VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                       ->__VnoInFunc_get_max_depth(vlSymsp, __Vtask_get_max_depth__51__Vfuncout);
                                }(), __Vtask_get_max_depth__51__Vfuncout))))) {
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_begin_elements(vlSymsp, __Vtask_get_begin_elements__52__Vfuncout);
                unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements 
                    = __Vtask_get_begin_elements__52__Vfuncout;
                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_end_elements(vlSymsp, __Vtask_get_end_elements__53__Vfuncout);
                unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements 
                    = __Vtask_get_end_elements__53__Vfuncout;
                if (((0xffffffffU == unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements) 
                     | (0xffffffffU == unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements))) {
                    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index = 0U;
                    while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index, this->__PVT__abstractions.size())) {
                        VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index)), 0x2eU);
                        unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index 
                            = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index);
                    }
                } else {
                    {
                        unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index = 0U;
                        while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index, this->__PVT__abstractions.size())) {
                            if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements)) {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index)), 0x2eU);
                            } else {
                                goto __Vlabel1;
                            }
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr);
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index);
                        }
                        __Vlabel1: ;
                    }
                    if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT_____05Ftmp_max)) {
                        if (VL_GTS_III(32, (unnamedblk12__DOT_____05Ftmp_max 
                                            - unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements), unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr)) {
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = (unnamedblk12__DOT_____05Ftmp_max 
                                   - unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements);
                        }
                        if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements)) {
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements;
                        } else {
                            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_range(vlProcess, vlSymsp, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements, 
                                                                                (unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                                                                - (IData)(1U)));
                        }
                        while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT_____05Ftmp_max)) {
                            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr)), 0x2eU);
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr);
                        }
                    }
                }
            }
            VL_NULL_CHECK(___05Flocal_printer___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_footer(vlSymsp, unnamedblk12__DOT_____05Ftmp_max);
        } else if ((0x00000800U == local_op_type___05F)) {
            if (("abstractions"s == local_rsrc_name___05F)) {
                local_success___05F = (1U & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk17__DOT_____05Ftmp_rsrc___05F));
                if (local_success___05F) {
                    local_size___05F = (IData)(([&]() {
                                VL_NULL_CHECK(unnamedblk17__DOT_____05Ftmp_rsrc___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                   VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__59__Vfuncout);
                            }(), __Vtask_read__59__Vfuncout));
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    local_success___05F = (1U & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk18__DOT_____05Ftmp_rsrc___05F));
                    if (local_success___05F) {
                        local_size___05F = VL_SEL_IWII(4096, 
                                                       ([&]() {
                                    VL_NULL_CHECK(unnamedblk18__DOT_____05Ftmp_rsrc___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                           VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__60__Vfuncout);
                                }(), __Vtask_read__60__Vfuncout), 0U, 32);
                    }
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    local_success___05F = (1U & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk19__DOT_____05Ftmp_rsrc___05F));
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk19__DOT_____05Ftmp_rsrc___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__61__Vfuncout);
                        local_size___05F = __Vtask_read__61__Vfuncout;
                    }
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    local_success___05F = (1U & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk20__DOT_____05Ftmp_rsrc___05F));
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk20__DOT_____05Ftmp_rsrc___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__62__Vfuncout);
                        local_size___05F = __Vtask_read__62__Vfuncout;
                    }
                }
                if (local_success___05F) {
                    if (VL_GTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                        this->__PVT__abstractions = this->__PVT__abstractions.slice(0U, 
                                                                                (local_size___05F 
                                                                                - (IData)(1U)));
                    } else {
                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                            this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(local_size___05F));
                        }
                    }
                }
            } else {
                unnamedblk21__DOT__local_name___05F = "abstractions["s;
                if ((((0U != VL_LEN_IN(local_rsrc_name___05F)) 
                      & (0x5dU == VL_GETC_N(local_rsrc_name___05F,
                                            (VL_LEN_IN(local_rsrc_name___05F) 
                                             - (IData)(1U))))) 
                     & (VL_SUBSTR_N(local_rsrc_name___05F,0U,
                                    (VL_LEN_IN(unnamedblk21__DOT__local_name___05F) 
                                     - (IData)(1U))) 
                        == unnamedblk21__DOT__local_name___05F))) {
                    unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F 
                        = VL_SUBSTR_N(local_rsrc_name___05F,
                                      VL_LEN_IN(unnamedblk21__DOT__local_name___05F),
                                      (VL_LEN_IN(local_rsrc_name___05F) 
                                       - (IData)(2U)));
                    unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F 
                        = VL_SSCANF_INNX(64,unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F,"%#",0,
                                         32,&(unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)) ;
                    if (VL_LTS_III(32, 0U, unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F)) {
                        if (VL_GTS_III(32, 0U, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)) {
                            if ((0U != ([&]() {
                                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "UVM/FIELDS/QDA_IDX"s, __Vfunc_uvm_report_enabled__63__Vfuncout);
                                        }(), __Vfunc_uvm_report_enabled__63__Vfuncout))) {
                                __Vtemp_4 = ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__65__Vfuncout);
                                    }(), __Vfunc_get_full_name__65__Vfuncout);
                                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM/FIELDS/QDA_IDX"s, VL_SFORMATF_N_NX("Index '%0d' is not valid for field '%@.abstractions' of size '%0d'",0,
                                                                                32,
                                                                                unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                32,
                                                                                this->__PVT__abstractions.size()) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x0000003bU, ""s, 1U);
                            }
                        } else {
                            local_success___05F = (1U 
                                                   & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F));
                            if (local_success___05F) {
                                VL_NULL_CHECK(unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__66__Vfuncout);
                                unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F 
                                    = __Vtask_read__66__Vfuncout;
                            }
                            if (local_success___05F) {
                                if (VL_GTES_III(32, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F, this->__PVT__abstractions.size())) {
                                    if (VL_GTS_III(32, this->__PVT__abstractions.size(), 
                                                   ((IData)(1U) 
                                                    + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F))) {
                                        this->__PVT__abstractions 
                                            = this->__PVT__abstractions.slice(0U, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F);
                                    } else {
                                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), 
                                                          ((IData)(1U) 
                                                           + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F))) {
                                            this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)));
                                        }
                                    }
                                }
                                this->__PVT__abstractions.atWriteAppend(unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F) 
                                    = unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F;
                            }
                        }
                    }
                }
            }
        }
        __Vlabel0: ;
    }
}

Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__69__Vfuncout;
    __Vfunc_uvm_report_enabled__69__Vfuncout = 0;
    std::string __Vtask_get_full_name__71__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__74__Vfuncout;
    __Vfunc_uvm_report_enabled__74__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk25__DOT__i;
    unnamedblk25__DOT__i = 0;
    {
        if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model)) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, "Register model handle is null"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __Vfunc_uvm_report_enabled__69__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__69__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("checking HDL paths for all registers/memories in "s, 
                                                                                ([&]() {
                                VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 76)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__71__Vfuncout);
                            }(), __Vtask_get_full_name__71__Vfuncout))), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x0000004cU, ""s, 1U);
        }
        if ((0U == this->__PVT__abstractions.size())) {
            this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model, ""s);
        } else {
            unnamedblk25__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk25__DOT__i, this->__PVT__abstractions.size())) {
                this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::__PVT__model, 
                                           VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk25__DOT__i)));
                unnamedblk25__DOT__i = ((IData)(1U) 
                                        + unnamedblk25__DOT__i);
            }
        }
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __Vfunc_uvm_report_enabled__74__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__74__Vfuncout))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, "HDL path validation completed "s, 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000055U, ""s, 1U);
        }
        __Vlabel0: ;
    }
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__76__Vfuncout;
    __Vfunc_uvm_report_enabled__76__Vfuncout = 0;
    std::string __Vtask_get_full_name__78__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk26__DOT__i;
    unnamedblk26__DOT__i = 0;
    IData/*31:0*/ unnamedblk27__DOT__i;
    unnamedblk27__DOT__i = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_block>> unnamedblk28__DOT__blks;
    IData/*31:0*/ unnamedblk28__DOT__unnamedblk29__DOT__i;
    unnamedblk28__DOT__unnamedblk29__DOT__i = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem>> mems;
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "uvm_reg_mem_hdl_paths_seq"s, __Vfunc_uvm_report_enabled__76__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__76__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Validating HDL paths in "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 104)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__78__Vfuncout);
                                    }(), __Vtask_get_full_name__78__Vfuncout)), " for "s), 
                                                                                ((""s 
                                                                                == kind)
                                                                                 ? "default"s
                                                                                 : kind)), " design abstraction"s)), 0x000000c8U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000068U, ""s, 1U);
    }
    VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 107)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk26__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk26__DOT__i, regs.size())) {
        this->__VnoInFunc_check_reg(vlProcess, vlSymsp, regs.at(unnamedblk26__DOT__i), kind);
        unnamedblk26__DOT__i = ((IData)(1U) + unnamedblk26__DOT__i);
    }
    VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 111)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
    unnamedblk27__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk27__DOT__i, mems.size())) {
        this->__VnoInFunc_check_mem(vlProcess, vlSymsp, mems.at(unnamedblk27__DOT__i), kind);
        unnamedblk27__DOT__i = ((IData)(1U) + unnamedblk27__DOT__i);
    }
    VL_NULL_CHECK(blk, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 118)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk28__DOT__blks, 1U);
    unnamedblk28__DOT__unnamedblk29__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk28__DOT__unnamedblk29__DOT__i, unnamedblk28__DOT__blks.size())) {
        this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk28__DOT__blks.at(unnamedblk28__DOT__unnamedblk29__DOT__i), kind);
        unnamedblk28__DOT__unnamedblk29__DOT__i = ((IData)(1U) 
                                                   + unnamedblk28__DOT__unnamedblk29__DOT__i);
    }
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> r, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_hdl_path__85__Vfuncout;
    __Vtask_has_hdl_path__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_read__87__Vfuncout;
    __Vfunc_uvm_hdl_read__87__Vfuncout = 0;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__87__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__87__value);
    IData/*31:0*/ __Vfunc_uvm_report_enabled__89__Vfuncout;
    __Vfunc_uvm_report_enabled__89__Vfuncout = 0;
    std::string __Vtask_get_full_name__91__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_hdl_check_path__92__Vfuncout;
    __Vfunc_uvm_hdl_check_path__92__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__94__Vfuncout;
    __Vfunc_uvm_report_enabled__94__Vfuncout = 0;
    std::string __Vtask_get_full_name__96__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    IData/*31:0*/ unnamedblk30__DOT__p;
    unnamedblk30__DOT__p = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk30__DOT__unnamedblk31__DOT__path;
    IData/*31:0*/ unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j;
    unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j = 0;
    std::string unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_;
    QData/*63:0*/ unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__d;
    unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__d = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 131)
                      ->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vtask_has_hdl_path__85__Vfuncout);
                        }(), (IData)(__Vtask_has_hdl_path__85__Vfuncout))))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 134)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        }
        unnamedblk30__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk30__DOT__p, paths.size())) {
            unnamedblk30__DOT__unnamedblk31__DOT__path 
                = paths.at(unnamedblk30__DOT__p);
            unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j, VL_NULL_CHECK(unnamedblk30__DOT__unnamedblk31__DOT__path, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 139)
                              ->__PVT__slices.size())) {
                unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk30__DOT__unnamedblk31__DOT__path, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 140)
                    ->__PVT__slices.at(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j)
                    .__PVT__path;
                if ((1U & (~ (0U != ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_read__87__Vfuncout = 0U;
                                        unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__d 
                                            = (((QData)((IData)(
                                                                __Vfunc_uvm_hdl_read__87__value[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 __Vfunc_uvm_hdl_read__87__value[0U])));
                                    }(), __Vfunc_uvm_hdl_read__87__Vfuncout))))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __Vfunc_uvm_report_enabled__89__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__89__Vfuncout))) {
                        __Vtemp_1 = ([&]() {
                                VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 145)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__91__Vfuncout);
                            }(), __Vtask_get_full_name__91__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%@\" for register \"%@\" is not readable",0,
                                                                                -1,
                                                                                &(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_),
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000091U, ""s, 1U);
                    }
                }
                if ((1U & (~ (0U != ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_CHECK_PATH"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_check_path__92__Vfuncout = 0U;
                                    }(), __Vfunc_uvm_hdl_check_path__92__Vfuncout))))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __Vfunc_uvm_report_enabled__94__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__94__Vfuncout))) {
                        __Vtemp_2 = ([&]() {
                                VL_NULL_CHECK(r, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 149)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__96__Vfuncout);
                            }(), __Vtask_get_full_name__96__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%@\" for register \"%@\" is not accessible",0,
                                                                                -1,
                                                                                &(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_),
                                                                                -1,
                                                                                &(__Vtemp_2)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x00000095U, ""s, 1U);
                    }
                }
                unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j 
                    = ((IData)(1U) + unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j);
            }
            unnamedblk30__DOT__p = ((IData)(1U) + unnamedblk30__DOT__p);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem> m, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_hdl_path__97__Vfuncout;
    __Vtask_has_hdl_path__97__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_check_path__99__Vfuncout;
    __Vfunc_uvm_hdl_check_path__99__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__101__Vfuncout;
    __Vfunc_uvm_report_enabled__101__Vfuncout = 0;
    std::string __Vtask_get_full_name__103__Vfuncout;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ unnamedblk34__DOT__p;
    unnamedblk34__DOT__p = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk34__DOT__unnamedblk35__DOT__path;
    IData/*31:0*/ unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j;
    unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j = 0;
    std::string unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(m, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 160)
                      ->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vtask_has_hdl_path__97__Vfuncout);
                        }(), (IData)(__Vtask_has_hdl_path__97__Vfuncout))))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(m, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 163)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        }
        unnamedblk34__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk34__DOT__p, paths.size())) {
            unnamedblk34__DOT__unnamedblk35__DOT__path 
                = paths.at(unnamedblk34__DOT__p);
            unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j, VL_NULL_CHECK(unnamedblk34__DOT__unnamedblk35__DOT__path, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 168)
                              ->__PVT__slices.size())) {
                unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk34__DOT__unnamedblk35__DOT__path, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 170)
                    ->__PVT__slices.at(unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j)
                    .__PVT__path;
                if ((1U & (~ (0U != ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_CHECK_PATH"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_check_path__99__Vfuncout = 0U;
                                    }(), __Vfunc_uvm_hdl_check_path__99__Vfuncout))))) {
                    if ((0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "uvm_reg_mem_hdl_paths_seq"s, __Vfunc_uvm_report_enabled__101__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__101__Vfuncout))) {
                        __Vtemp_1 = ([&]() {
                                VL_NULL_CHECK(m, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 174)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__103__Vfuncout);
                            }(), __Vtask_get_full_name__103__Vfuncout);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s, VL_SFORMATF_N_NX("HDL path \"%@\" for memory \"%@\" is not accessible",0,
                                                                                -1,
                                                                                &(unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_),
                                                                                -1,
                                                                                &(__Vtemp_1)) , 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s, 0x000000aeU, ""s, 1U);
                    }
                }
                unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j 
                    = ((IData)(1U) + unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j);
            }
            unnamedblk34__DOT__p = ((IData)(1U) + unnamedblk34__DOT__p);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__105__Vfuncout;
    __Vfunc___VBasicRand__105__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__105__Vfuncout);
            }(), __Vfunc___VBasicRand__105__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::~Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "abstractions:" + VL_TO_STRING(__PVT__abstractions);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_reg_sequence__Tz307::to_string_middle();
    return (out);
}
