// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi142> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi142> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi142__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_text_recorder"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi142> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi142__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder, vlProcess, vlSymsp, "unnamed-uvm_text_recorder"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_text_recorder"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_recorder(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_open(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> stream, QData/*63:0*/ open_time, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_open\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_db__4__Vfuncout;
    CData/*0:0*/ __Vtask_open_db__5__Vfuncout;
    __Vtask_open_db__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_handle__6__Vfuncout;
    __Vfunc_get_handle__6__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_handle__7__Vfuncout;
    __Vtask_get_handle__7__Vfuncout = 0;
    std::string __Vfunc_get_name__8__Vfuncout;
    std::string __Vtemp_1;
    // Body
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(stream, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 672)
                                         ->__VnoInFunc_get_db(vlProcess, vlSymsp, __Vtask_get_db__4__Vfuncout);
                            }(), __Vtask_get_db__4__Vfuncout), this->__PVT__m_text_db))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_recorder.svh:672: Assertion failed in %Nuvm_pkg.uvm_text_recorder.do_open: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 672, "");
    }
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 673)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__5__Vfuncout);
                    }(), (IData)(__Vtask_open_db__5__Vfuncout))))) {
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__8__Vfuncout);
            }(), __Vfunc_get_name__8__Vfuncout);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 674)
                      ->__PVT__m_file,"    OPEN_RECORDER @%0^ {TXH:%0d STREAM:%0d NAME:%@ TIME:%0t TYPE=\"%0@\"}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      ([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__6__Vfuncout);
                    }(), __Vfunc_get_handle__6__Vfuncout),
                      32,([&]() {
                        VL_NULL_CHECK(stream, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 678)
                          ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__7__Vfuncout);
                    }(), __Vtask_get_handle__7__Vfuncout),
                      -1,&(__Vtemp_1),64,open_time,
                      -12,-1,&(type_name));
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_close(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ close_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_close\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__9__Vfuncout;
    __Vtask_open_db__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_handle__10__Vfuncout;
    __Vfunc_get_handle__10__Vfuncout = 0;
    // Body
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 689)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__9__Vfuncout);
                    }(), (IData)(__Vtask_open_db__9__Vfuncout))))) {
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 690)
                      ->__PVT__m_file,"    CLOSE_RECORDER @%0^ {TXH:%0d TIME=%0t}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      ([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__10__Vfuncout);
                    }(), __Vfunc_get_handle__10__Vfuncout),
                      64,close_time,-12);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_free(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_free\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__11__Vfuncout;
    __Vtask_open_db__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_handle__12__Vfuncout;
    __Vfunc_get_handle__12__Vfuncout = 0;
    // Body
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 704)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__11__Vfuncout);
                    }(), (IData)(__Vtask_open_db__11__Vfuncout))))) {
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 705)
                      ->__PVT__m_file,"    FREE_RECORDER @%0^ {TXH:%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      ([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__12__Vfuncout);
                    }(), __Vfunc_get_handle__12__Vfuncout));
    }
    this->__PVT__m_text_db = VlNull{};
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field\n"); );
    // Locals
    std::string __Vfunc_m_current_context__14__Vfuncout;
    // Body
    if ((1U & (~ (0U != radix)))) {
        radix = Vrecorders_top_uvm_pkg__03a__03auvm_recorder::__PVT__default_radix;
    }
    this->__VnoInFunc_write_attribute(vlSymsp, VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                    this->__VnoInFunc_m_current_context(vlSymsp, name, __Vfunc_m_current_context__14__Vfuncout);
                }(), __Vfunc_m_current_context__14__Vfuncout)), value, radix, size);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_int(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_int\n"); );
    // Locals
    std::string __Vfunc_m_current_context__16__Vfuncout;
    // Body
    if ((1U & (~ (0U != radix)))) {
        radix = Vrecorders_top_uvm_pkg__03a__03auvm_recorder::__PVT__default_radix;
    }
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(
                                                             ([&]() {
                    this->__VnoInFunc_m_current_context(vlSymsp, name, __Vfunc_m_current_context__16__Vfuncout);
                }(), __Vfunc_m_current_context__16__Vfuncout)), value, radix, size);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_real(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, double value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_field_real\n"); );
    // Locals
    std::string __Vfunc_m_current_context__18__Vfuncout;
    // Body
    QData/*63:0*/ ival;
    ival = 0;
    ival = VL_CVT_Q_D(value);
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(
                                                             ([&]() {
                    this->__VnoInFunc_m_current_context(vlSymsp, name, __Vfunc_m_current_context__18__Vfuncout);
                }(), __Vfunc_m_current_context__18__Vfuncout)), ival, 0x0b000000U, 0x00000040U);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_current_context(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string &m_current_context__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_current_context\n"); );
    // Body
    std::string unnamedblk1__DOT__full_name;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__i;
    unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    if ((0U == this->__PVT__m_object_names.size())) {
        m_current_context__Vfuncrtn = name;
    } else if (((1U == this->__PVT__m_object_names.size()) 
                & (""s == name))) {
        m_current_context__Vfuncrtn = this->__PVT__m_object_names.at(0U);
    } else {
        unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__unnamedblk2__DOT__i, this->__PVT__m_object_names.size())) {
            unnamedblk1__DOT__full_name = ((unnamedblk1__DOT__unnamedblk2__DOT__i 
                                            == (this->__PVT__m_object_names.size() 
                                                - (IData)(1U)))
                                            ? VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i))
                                            : VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(unnamedblk1__DOT__full_name, this->__PVT__m_object_names.at(unnamedblk1__DOT__unnamedblk2__DOT__i)), "."s));
            unnamedblk1__DOT__unnamedblk2__DOT__i = 
                ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__i);
        }
        m_current_context__Vfuncrtn = ((""s != name)
                                        ? VL_CONCATN_NNN(
                                                         VL_CONCATN_NNN(unnamedblk1__DOT__full_name, "."s), name)
                                        : unnamedblk1__DOT__full_name);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_object(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_object\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_inst_id__19__Vfuncout;
    __Vtask_get_inst_id__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_active_object_depth__21__Vfuncout;
    __Vfunc_get_active_object_depth__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_active_object_depth__23__Vfuncout;
    __Vfunc_get_active_object_depth__23__Vfuncout = 0;
    // Body
    IData/*31:0*/ v;
    v = 0;
    std::string str;
    if (Vrecorders_top_uvm_pkg__03a__03auvm_recorder::__PVT__identifier) {
        if ((VlNull{} != value)) {
            VL_NULL_CHECK(value, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 803)->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__19__Vfuncout);
            v = __Vtask_get_inst_id__19__Vfuncout;
        }
        this->__VnoInFunc_write_attribute_int(vlSymsp, "inst_id"s, 
                                              VL_EXTENDS_QI(64,32, v), 0x02000000U, 0x00000020U);
    }
    if ((1U < ([&]() {
                    this->__VnoInFunc_get_active_object_depth(vlSymsp, __Vfunc_get_active_object_depth__21__Vfuncout);
                }(), __Vfunc_get_active_object_depth__21__Vfuncout))) {
        this->__PVT__m_object_names.push_back(name);
    }
    Vrecorders_top_uvm_pkg__03a__03auvm_recorder::__VnoInFunc_do_record_object(vlProcess, vlSymsp, name, value);
    if ((1U < ([&]() {
                    this->__VnoInFunc_get_active_object_depth(vlSymsp, __Vfunc_get_active_object_depth__23__Vfuncout);
                }(), __Vfunc_get_active_object_depth__23__Vfuncout))) {
        (void)this->__PVT__m_object_names.pop_back();
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_string(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_string\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__24__Vfuncout;
    __Vtask_open_db__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_handle__25__Vfuncout;
    __Vfunc_get_handle__25__Vfuncout = 0;
    std::string __Vfunc_m_current_context__26__Vfuncout;
    std::string __Vtemp_1;
    // Body
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 824)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__24__Vfuncout);
                    }(), (IData)(__Vtask_open_db__24__Vfuncout))))) {
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_m_current_context(vlSymsp, name, __Vfunc_m_current_context__26__Vfuncout);
            }(), __Vfunc_m_current_context__26__Vfuncout);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 825)
                      ->__PVT__m_file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@   RADIX:UVM_STRING BITS=%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      ([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__25__Vfuncout);
                    }(), __Vfunc_get_handle__25__Vfuncout),
                      -1,&(__Vtemp_1),-1,&(value),32,
                      ((IData)(8U) + VL_LEN_IN(value)));
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_time(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_time\n"); );
    // Locals
    std::string __Vfunc_m_current_context__28__Vfuncout;
    // Body
    this->__VnoInFunc_write_attribute_int(vlSymsp, 
                                          VL_CVT_PACK_STR_NN(
                                                             ([&]() {
                    this->__VnoInFunc_m_current_context(vlSymsp, name, __Vfunc_m_current_context__28__Vfuncout);
                }(), __Vfunc_m_current_context__28__Vfuncout)), value, 0x09000000U, 0x00000040U);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_generic(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string value, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_do_record_generic\n"); );
    // Locals
    std::string __Vfunc_m_current_context__30__Vfuncout;
    std::string __Vfunc_uvm_string_to_bits__31__str;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    // Body
    VL_SEL_WWII(4096, 115200, __Vtemp_1, ([&]() {
                __Vfunc_uvm_string_to_bits__31__str 
                    = value;
                VL_SFORMAT_NX(115200,this->__Vfunc_uvm_string_to_bits__31__Vfuncout
                              ,"%0@",0,-1,&(__Vfunc_uvm_string_to_bits__31__str));
            }(), this->__Vfunc_uvm_string_to_bits__31__Vfuncout), 0U, 4096);
    this->__VnoInFunc_write_attribute(vlSymsp, VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                    this->__VnoInFunc_m_current_context(vlSymsp, name, __Vfunc_m_current_context__30__Vfuncout);
                }(), __Vfunc_m_current_context__30__Vfuncout)), __Vtemp_1, 0x08000000U, 
                                      ((IData)(8U) 
                                       + VL_LEN_IN(value)));
}

extern const VlWide<128>/*4095:0*/ Vrecorders_top__ConstPool__CONST_h1958c06c_0;

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute(Vrecorders_top__Syms* __restrict vlSymsp, std::string nm, VlWide<128>/*4095:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__32__Vfuncout;
    __Vtask_open_db__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_handle__33__Vfuncout;
    __Vfunc_get_handle__33__Vfuncout = 0;
    std::string __Vfunc_uvm_bitstream_to_string__34__Vfuncout;
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__34__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__34__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__34__size;
    __Vfunc_uvm_bitstream_to_string__34__size = 0;
    IData/*27:0*/ __Vfunc_uvm_bitstream_to_string__34__radix;
    __Vfunc_uvm_bitstream_to_string__34__radix = 0;
    std::string __Vfunc_uvm_bitstream_to_string__34__radix_str;
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__34__unnamedblk3__DOT__unnamedblk4__DOT__idx;
    __Vfunc_uvm_bitstream_to_string__34__unnamedblk3__DOT__unnamedblk4__DOT__idx = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 877)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__32__Vfuncout);
                    }(), (IData)(__Vtask_open_db__32__Vfuncout))))) {
        __Vtemp_4 = ([&]() {
                __Vfunc_uvm_bitstream_to_string__34__radix_str = ""s;
                __Vfunc_uvm_bitstream_to_string__34__radix 
                    = radix;
                __Vfunc_uvm_bitstream_to_string__34__size 
                    = numbits;
                __Vfunc_uvm_bitstream_to_string__34__value[0U] 
                    = value[0U];
                __Vfunc_uvm_bitstream_to_string__34__value[1U] 
                    = value[1U];
                __Vfunc_uvm_bitstream_to_string__34__value[2U] 
                    = value[2U];
                __Vfunc_uvm_bitstream_to_string__34__value[3U] 
                    = value[3U];
                __Vfunc_uvm_bitstream_to_string__34__value[4U] 
                    = value[4U];
                __Vfunc_uvm_bitstream_to_string__34__value[5U] 
                    = value[5U];
                __Vfunc_uvm_bitstream_to_string__34__value[6U] 
                    = value[6U];
                __Vfunc_uvm_bitstream_to_string__34__value[7U] 
                    = value[7U];
                __Vfunc_uvm_bitstream_to_string__34__value[8U] 
                    = value[8U];
                __Vfunc_uvm_bitstream_to_string__34__value[9U] 
                    = value[9U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000000aU] 
                    = value[0x0000000aU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000000bU] 
                    = value[0x0000000bU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000000cU] 
                    = value[0x0000000cU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000000dU] 
                    = value[0x0000000dU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000000eU] 
                    = value[0x0000000eU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000000fU] 
                    = value[0x0000000fU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000010U] 
                    = value[0x00000010U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000011U] 
                    = value[0x00000011U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000012U] 
                    = value[0x00000012U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000013U] 
                    = value[0x00000013U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000014U] 
                    = value[0x00000014U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000015U] 
                    = value[0x00000015U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000016U] 
                    = value[0x00000016U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000017U] 
                    = value[0x00000017U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000018U] 
                    = value[0x00000018U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000019U] 
                    = value[0x00000019U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000001aU] 
                    = value[0x0000001aU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000001bU] 
                    = value[0x0000001bU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000001cU] 
                    = value[0x0000001cU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000001dU] 
                    = value[0x0000001dU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000001eU] 
                    = value[0x0000001eU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000001fU] 
                    = value[0x0000001fU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000020U] 
                    = value[0x00000020U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000021U] 
                    = value[0x00000021U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000022U] 
                    = value[0x00000022U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000023U] 
                    = value[0x00000023U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000024U] 
                    = value[0x00000024U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000025U] 
                    = value[0x00000025U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000026U] 
                    = value[0x00000026U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000027U] 
                    = value[0x00000027U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000028U] 
                    = value[0x00000028U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000029U] 
                    = value[0x00000029U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000002aU] 
                    = value[0x0000002aU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000002bU] 
                    = value[0x0000002bU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000002cU] 
                    = value[0x0000002cU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000002dU] 
                    = value[0x0000002dU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000002eU] 
                    = value[0x0000002eU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000002fU] 
                    = value[0x0000002fU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000030U] 
                    = value[0x00000030U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000031U] 
                    = value[0x00000031U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000032U] 
                    = value[0x00000032U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000033U] 
                    = value[0x00000033U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000034U] 
                    = value[0x00000034U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000035U] 
                    = value[0x00000035U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000036U] 
                    = value[0x00000036U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000037U] 
                    = value[0x00000037U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000038U] 
                    = value[0x00000038U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000039U] 
                    = value[0x00000039U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000003aU] 
                    = value[0x0000003aU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000003bU] 
                    = value[0x0000003bU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000003cU] 
                    = value[0x0000003cU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000003dU] 
                    = value[0x0000003dU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000003eU] 
                    = value[0x0000003eU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000003fU] 
                    = value[0x0000003fU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000040U] 
                    = value[0x00000040U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000041U] 
                    = value[0x00000041U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000042U] 
                    = value[0x00000042U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000043U] 
                    = value[0x00000043U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000044U] 
                    = value[0x00000044U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000045U] 
                    = value[0x00000045U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000046U] 
                    = value[0x00000046U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000047U] 
                    = value[0x00000047U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000048U] 
                    = value[0x00000048U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000049U] 
                    = value[0x00000049U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000004aU] 
                    = value[0x0000004aU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000004bU] 
                    = value[0x0000004bU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000004cU] 
                    = value[0x0000004cU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000004dU] 
                    = value[0x0000004dU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000004eU] 
                    = value[0x0000004eU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000004fU] 
                    = value[0x0000004fU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000050U] 
                    = value[0x00000050U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000051U] 
                    = value[0x00000051U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000052U] 
                    = value[0x00000052U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000053U] 
                    = value[0x00000053U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000054U] 
                    = value[0x00000054U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000055U] 
                    = value[0x00000055U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000056U] 
                    = value[0x00000056U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000057U] 
                    = value[0x00000057U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000058U] 
                    = value[0x00000058U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000059U] 
                    = value[0x00000059U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000005aU] 
                    = value[0x0000005aU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000005bU] 
                    = value[0x0000005bU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000005cU] 
                    = value[0x0000005cU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000005dU] 
                    = value[0x0000005dU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000005eU] 
                    = value[0x0000005eU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000005fU] 
                    = value[0x0000005fU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000060U] 
                    = value[0x00000060U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000061U] 
                    = value[0x00000061U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000062U] 
                    = value[0x00000062U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000063U] 
                    = value[0x00000063U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000064U] 
                    = value[0x00000064U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000065U] 
                    = value[0x00000065U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000066U] 
                    = value[0x00000066U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000067U] 
                    = value[0x00000067U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000068U] 
                    = value[0x00000068U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000069U] 
                    = value[0x00000069U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000006aU] 
                    = value[0x0000006aU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000006bU] 
                    = value[0x0000006bU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000006cU] 
                    = value[0x0000006cU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000006dU] 
                    = value[0x0000006dU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000006eU] 
                    = value[0x0000006eU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000006fU] 
                    = value[0x0000006fU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000070U] 
                    = value[0x00000070U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000071U] 
                    = value[0x00000071U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000072U] 
                    = value[0x00000072U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000073U] 
                    = value[0x00000073U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000074U] 
                    = value[0x00000074U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000075U] 
                    = value[0x00000075U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000076U] 
                    = value[0x00000076U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000077U] 
                    = value[0x00000077U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000078U] 
                    = value[0x00000078U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x00000079U] 
                    = value[0x00000079U];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000007aU] 
                    = value[0x0000007aU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000007bU] 
                    = value[0x0000007bU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000007cU] 
                    = value[0x0000007cU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000007dU] 
                    = value[0x0000007dU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000007eU] 
                    = value[0x0000007eU];
                __Vfunc_uvm_bitstream_to_string__34__value[0x0000007fU] 
                    = value[0x0000007fU];
                __Vfunc_uvm_bitstream_to_string__34__unnamedblk3__DOT__unnamedblk4__DOT__idx = 0;
                {
                    if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__34__radix) 
                         & (__Vfunc_uvm_bitstream_to_string__34__value[
                            (0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__34__size 
                                             - (IData)(1U)) 
                                            >> 5U))] 
                            >> (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__34__size 
                                               - (IData)(1U)))))) {
                        __Vfunc_uvm_bitstream_to_string__34__Vfuncout 
                            = VL_SFORMATF_N_NX("%0d",0,
                                               4096,
                                               __Vfunc_uvm_bitstream_to_string__34__value.data()) ;
                        goto __Vlabel0;
                    }
                    VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, Vrecorders_top__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__34__size);
                    VL_SUB_W(128, __Vtemp_3, __Vtemp_2, Vrecorders_top__ConstPool__CONST_h1958c06c_0);
                    __Vtemp_1[1U] = (__Vfunc_uvm_bitstream_to_string__34__value[1U] 
                                     & __Vtemp_3[1U]);
                    __Vtemp_1[2U] = (__Vfunc_uvm_bitstream_to_string__34__value[2U] 
                                     & __Vtemp_3[2U]);
                    __Vtemp_1[3U] = (__Vfunc_uvm_bitstream_to_string__34__value[3U] 
                                     & __Vtemp_3[3U]);
                    __Vtemp_1[4U] = (__Vfunc_uvm_bitstream_to_string__34__value[4U] 
                                     & __Vtemp_3[4U]);
                    __Vtemp_1[5U] = (__Vfunc_uvm_bitstream_to_string__34__value[5U] 
                                     & __Vtemp_3[5U]);
                    __Vtemp_1[6U] = (__Vfunc_uvm_bitstream_to_string__34__value[6U] 
                                     & __Vtemp_3[6U]);
                    __Vtemp_1[7U] = (__Vfunc_uvm_bitstream_to_string__34__value[7U] 
                                     & __Vtemp_3[7U]);
                    __Vtemp_1[8U] = (__Vfunc_uvm_bitstream_to_string__34__value[8U] 
                                     & __Vtemp_3[8U]);
                    __Vtemp_1[9U] = (__Vfunc_uvm_bitstream_to_string__34__value[9U] 
                                     & __Vtemp_3[9U]);
                    __Vtemp_1[0x0000000aU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000000aU] 
                                              & __Vtemp_3[0x0000000aU]);
                    __Vtemp_1[0x0000000bU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000000bU] 
                                              & __Vtemp_3[0x0000000bU]);
                    __Vtemp_1[0x0000000cU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000000cU] 
                                              & __Vtemp_3[0x0000000cU]);
                    __Vtemp_1[0x0000000dU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000000dU] 
                                              & __Vtemp_3[0x0000000dU]);
                    __Vtemp_1[0x0000000eU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000000eU] 
                                              & __Vtemp_3[0x0000000eU]);
                    __Vtemp_1[0x0000000fU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000000fU] 
                                              & __Vtemp_3[0x0000000fU]);
                    __Vtemp_1[0x00000010U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000010U] 
                                              & __Vtemp_3[0x00000010U]);
                    __Vtemp_1[0x00000011U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000011U] 
                                              & __Vtemp_3[0x00000011U]);
                    __Vtemp_1[0x00000012U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000012U] 
                                              & __Vtemp_3[0x00000012U]);
                    __Vtemp_1[0x00000013U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000013U] 
                                              & __Vtemp_3[0x00000013U]);
                    __Vtemp_1[0x00000014U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000014U] 
                                              & __Vtemp_3[0x00000014U]);
                    __Vtemp_1[0x00000015U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000015U] 
                                              & __Vtemp_3[0x00000015U]);
                    __Vtemp_1[0x00000016U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000016U] 
                                              & __Vtemp_3[0x00000016U]);
                    __Vtemp_1[0x00000017U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000017U] 
                                              & __Vtemp_3[0x00000017U]);
                    __Vtemp_1[0x00000018U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000018U] 
                                              & __Vtemp_3[0x00000018U]);
                    __Vtemp_1[0x00000019U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000019U] 
                                              & __Vtemp_3[0x00000019U]);
                    __Vtemp_1[0x0000001aU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000001aU] 
                                              & __Vtemp_3[0x0000001aU]);
                    __Vtemp_1[0x0000001bU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000001bU] 
                                              & __Vtemp_3[0x0000001bU]);
                    __Vtemp_1[0x0000001cU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000001cU] 
                                              & __Vtemp_3[0x0000001cU]);
                    __Vtemp_1[0x0000001dU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000001dU] 
                                              & __Vtemp_3[0x0000001dU]);
                    __Vtemp_1[0x0000001eU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000001eU] 
                                              & __Vtemp_3[0x0000001eU]);
                    __Vtemp_1[0x0000001fU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000001fU] 
                                              & __Vtemp_3[0x0000001fU]);
                    __Vtemp_1[0x00000020U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000020U] 
                                              & __Vtemp_3[0x00000020U]);
                    __Vtemp_1[0x00000021U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000021U] 
                                              & __Vtemp_3[0x00000021U]);
                    __Vtemp_1[0x00000022U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000022U] 
                                              & __Vtemp_3[0x00000022U]);
                    __Vtemp_1[0x00000023U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000023U] 
                                              & __Vtemp_3[0x00000023U]);
                    __Vtemp_1[0x00000024U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000024U] 
                                              & __Vtemp_3[0x00000024U]);
                    __Vtemp_1[0x00000025U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000025U] 
                                              & __Vtemp_3[0x00000025U]);
                    __Vtemp_1[0x00000026U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000026U] 
                                              & __Vtemp_3[0x00000026U]);
                    __Vtemp_1[0x00000027U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000027U] 
                                              & __Vtemp_3[0x00000027U]);
                    __Vtemp_1[0x00000028U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000028U] 
                                              & __Vtemp_3[0x00000028U]);
                    __Vtemp_1[0x00000029U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000029U] 
                                              & __Vtemp_3[0x00000029U]);
                    __Vtemp_1[0x0000002aU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000002aU] 
                                              & __Vtemp_3[0x0000002aU]);
                    __Vtemp_1[0x0000002bU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000002bU] 
                                              & __Vtemp_3[0x0000002bU]);
                    __Vtemp_1[0x0000002cU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000002cU] 
                                              & __Vtemp_3[0x0000002cU]);
                    __Vtemp_1[0x0000002dU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000002dU] 
                                              & __Vtemp_3[0x0000002dU]);
                    __Vtemp_1[0x0000002eU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000002eU] 
                                              & __Vtemp_3[0x0000002eU]);
                    __Vtemp_1[0x0000002fU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000002fU] 
                                              & __Vtemp_3[0x0000002fU]);
                    __Vtemp_1[0x00000030U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000030U] 
                                              & __Vtemp_3[0x00000030U]);
                    __Vtemp_1[0x00000031U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000031U] 
                                              & __Vtemp_3[0x00000031U]);
                    __Vtemp_1[0x00000032U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000032U] 
                                              & __Vtemp_3[0x00000032U]);
                    __Vtemp_1[0x00000033U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000033U] 
                                              & __Vtemp_3[0x00000033U]);
                    __Vtemp_1[0x00000034U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000034U] 
                                              & __Vtemp_3[0x00000034U]);
                    __Vtemp_1[0x00000035U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000035U] 
                                              & __Vtemp_3[0x00000035U]);
                    __Vtemp_1[0x00000036U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000036U] 
                                              & __Vtemp_3[0x00000036U]);
                    __Vtemp_1[0x00000037U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000037U] 
                                              & __Vtemp_3[0x00000037U]);
                    __Vtemp_1[0x00000038U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000038U] 
                                              & __Vtemp_3[0x00000038U]);
                    __Vtemp_1[0x00000039U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000039U] 
                                              & __Vtemp_3[0x00000039U]);
                    __Vtemp_1[0x0000003aU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000003aU] 
                                              & __Vtemp_3[0x0000003aU]);
                    __Vtemp_1[0x0000003bU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000003bU] 
                                              & __Vtemp_3[0x0000003bU]);
                    __Vtemp_1[0x0000003cU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000003cU] 
                                              & __Vtemp_3[0x0000003cU]);
                    __Vtemp_1[0x0000003dU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000003dU] 
                                              & __Vtemp_3[0x0000003dU]);
                    __Vtemp_1[0x0000003eU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000003eU] 
                                              & __Vtemp_3[0x0000003eU]);
                    __Vtemp_1[0x0000003fU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000003fU] 
                                              & __Vtemp_3[0x0000003fU]);
                    __Vtemp_1[0x00000040U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000040U] 
                                              & __Vtemp_3[0x00000040U]);
                    __Vtemp_1[0x00000041U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000041U] 
                                              & __Vtemp_3[0x00000041U]);
                    __Vtemp_1[0x00000042U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000042U] 
                                              & __Vtemp_3[0x00000042U]);
                    __Vtemp_1[0x00000043U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000043U] 
                                              & __Vtemp_3[0x00000043U]);
                    __Vtemp_1[0x00000044U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000044U] 
                                              & __Vtemp_3[0x00000044U]);
                    __Vtemp_1[0x00000045U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000045U] 
                                              & __Vtemp_3[0x00000045U]);
                    __Vtemp_1[0x00000046U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000046U] 
                                              & __Vtemp_3[0x00000046U]);
                    __Vtemp_1[0x00000047U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000047U] 
                                              & __Vtemp_3[0x00000047U]);
                    __Vtemp_1[0x00000048U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000048U] 
                                              & __Vtemp_3[0x00000048U]);
                    __Vtemp_1[0x00000049U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000049U] 
                                              & __Vtemp_3[0x00000049U]);
                    __Vtemp_1[0x0000004aU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000004aU] 
                                              & __Vtemp_3[0x0000004aU]);
                    __Vtemp_1[0x0000004bU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000004bU] 
                                              & __Vtemp_3[0x0000004bU]);
                    __Vtemp_1[0x0000004cU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000004cU] 
                                              & __Vtemp_3[0x0000004cU]);
                    __Vtemp_1[0x0000004dU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000004dU] 
                                              & __Vtemp_3[0x0000004dU]);
                    __Vtemp_1[0x0000004eU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000004eU] 
                                              & __Vtemp_3[0x0000004eU]);
                    __Vtemp_1[0x0000004fU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000004fU] 
                                              & __Vtemp_3[0x0000004fU]);
                    __Vtemp_1[0x00000050U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000050U] 
                                              & __Vtemp_3[0x00000050U]);
                    __Vtemp_1[0x00000051U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000051U] 
                                              & __Vtemp_3[0x00000051U]);
                    __Vtemp_1[0x00000052U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000052U] 
                                              & __Vtemp_3[0x00000052U]);
                    __Vtemp_1[0x00000053U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000053U] 
                                              & __Vtemp_3[0x00000053U]);
                    __Vtemp_1[0x00000054U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000054U] 
                                              & __Vtemp_3[0x00000054U]);
                    __Vtemp_1[0x00000055U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000055U] 
                                              & __Vtemp_3[0x00000055U]);
                    __Vtemp_1[0x00000056U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000056U] 
                                              & __Vtemp_3[0x00000056U]);
                    __Vtemp_1[0x00000057U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000057U] 
                                              & __Vtemp_3[0x00000057U]);
                    __Vtemp_1[0x00000058U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000058U] 
                                              & __Vtemp_3[0x00000058U]);
                    __Vtemp_1[0x00000059U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000059U] 
                                              & __Vtemp_3[0x00000059U]);
                    __Vtemp_1[0x0000005aU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000005aU] 
                                              & __Vtemp_3[0x0000005aU]);
                    __Vtemp_1[0x0000005bU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000005bU] 
                                              & __Vtemp_3[0x0000005bU]);
                    __Vtemp_1[0x0000005cU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000005cU] 
                                              & __Vtemp_3[0x0000005cU]);
                    __Vtemp_1[0x0000005dU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000005dU] 
                                              & __Vtemp_3[0x0000005dU]);
                    __Vtemp_1[0x0000005eU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000005eU] 
                                              & __Vtemp_3[0x0000005eU]);
                    __Vtemp_1[0x0000005fU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000005fU] 
                                              & __Vtemp_3[0x0000005fU]);
                    __Vtemp_1[0x00000060U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000060U] 
                                              & __Vtemp_3[0x00000060U]);
                    __Vtemp_1[0x00000061U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000061U] 
                                              & __Vtemp_3[0x00000061U]);
                    __Vtemp_1[0x00000062U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000062U] 
                                              & __Vtemp_3[0x00000062U]);
                    __Vtemp_1[0x00000063U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000063U] 
                                              & __Vtemp_3[0x00000063U]);
                    __Vtemp_1[0x00000064U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000064U] 
                                              & __Vtemp_3[0x00000064U]);
                    __Vtemp_1[0x00000065U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000065U] 
                                              & __Vtemp_3[0x00000065U]);
                    __Vtemp_1[0x00000066U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000066U] 
                                              & __Vtemp_3[0x00000066U]);
                    __Vtemp_1[0x00000067U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000067U] 
                                              & __Vtemp_3[0x00000067U]);
                    __Vtemp_1[0x00000068U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000068U] 
                                              & __Vtemp_3[0x00000068U]);
                    __Vtemp_1[0x00000069U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000069U] 
                                              & __Vtemp_3[0x00000069U]);
                    __Vtemp_1[0x0000006aU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000006aU] 
                                              & __Vtemp_3[0x0000006aU]);
                    __Vtemp_1[0x0000006bU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000006bU] 
                                              & __Vtemp_3[0x0000006bU]);
                    __Vtemp_1[0x0000006cU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000006cU] 
                                              & __Vtemp_3[0x0000006cU]);
                    __Vtemp_1[0x0000006dU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000006dU] 
                                              & __Vtemp_3[0x0000006dU]);
                    __Vtemp_1[0x0000006eU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000006eU] 
                                              & __Vtemp_3[0x0000006eU]);
                    __Vtemp_1[0x0000006fU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000006fU] 
                                              & __Vtemp_3[0x0000006fU]);
                    __Vtemp_1[0x00000070U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000070U] 
                                              & __Vtemp_3[0x00000070U]);
                    __Vtemp_1[0x00000071U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000071U] 
                                              & __Vtemp_3[0x00000071U]);
                    __Vtemp_1[0x00000072U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000072U] 
                                              & __Vtemp_3[0x00000072U]);
                    __Vtemp_1[0x00000073U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000073U] 
                                              & __Vtemp_3[0x00000073U]);
                    __Vtemp_1[0x00000074U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000074U] 
                                              & __Vtemp_3[0x00000074U]);
                    __Vtemp_1[0x00000075U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000075U] 
                                              & __Vtemp_3[0x00000075U]);
                    __Vtemp_1[0x00000076U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000076U] 
                                              & __Vtemp_3[0x00000076U]);
                    __Vtemp_1[0x00000077U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000077U] 
                                              & __Vtemp_3[0x00000077U]);
                    __Vtemp_1[0x00000078U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000078U] 
                                              & __Vtemp_3[0x00000078U]);
                    __Vtemp_1[0x00000079U] = (__Vfunc_uvm_bitstream_to_string__34__value[0x00000079U] 
                                              & __Vtemp_3[0x00000079U]);
                    __Vtemp_1[0x0000007aU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000007aU] 
                                              & __Vtemp_3[0x0000007aU]);
                    __Vtemp_1[0x0000007bU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000007bU] 
                                              & __Vtemp_3[0x0000007bU]);
                    __Vtemp_1[0x0000007cU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000007cU] 
                                              & __Vtemp_3[0x0000007cU]);
                    __Vtemp_1[0x0000007dU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000007dU] 
                                              & __Vtemp_3[0x0000007dU]);
                    __Vtemp_1[0x0000007eU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000007eU] 
                                              & __Vtemp_3[0x0000007eU]);
                    __Vtemp_1[0x0000007fU] = (__Vfunc_uvm_bitstream_to_string__34__value[0x0000007fU] 
                                              & __Vtemp_3[0x0000007fU]);
                    __Vfunc_uvm_bitstream_to_string__34__value[0U] 
                        = (__Vfunc_uvm_bitstream_to_string__34__value[0U] 
                           & __Vtemp_3[0U]);
                    __Vfunc_uvm_bitstream_to_string__34__value[1U] 
                        = __Vtemp_1[1U];
                    __Vfunc_uvm_bitstream_to_string__34__value[2U] 
                        = __Vtemp_1[2U];
                    __Vfunc_uvm_bitstream_to_string__34__value[3U] 
                        = __Vtemp_1[3U];
                    __Vfunc_uvm_bitstream_to_string__34__value[4U] 
                        = __Vtemp_1[4U];
                    __Vfunc_uvm_bitstream_to_string__34__value[5U] 
                        = __Vtemp_1[5U];
                    __Vfunc_uvm_bitstream_to_string__34__value[6U] 
                        = __Vtemp_1[6U];
                    __Vfunc_uvm_bitstream_to_string__34__value[7U] 
                        = __Vtemp_1[7U];
                    __Vfunc_uvm_bitstream_to_string__34__value[8U] 
                        = __Vtemp_1[8U];
                    __Vfunc_uvm_bitstream_to_string__34__value[9U] 
                        = __Vtemp_1[9U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000000aU] 
                        = __Vtemp_1[0x0000000aU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000000bU] 
                        = __Vtemp_1[0x0000000bU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000000cU] 
                        = __Vtemp_1[0x0000000cU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000000dU] 
                        = __Vtemp_1[0x0000000dU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000000eU] 
                        = __Vtemp_1[0x0000000eU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000000fU] 
                        = __Vtemp_1[0x0000000fU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000010U] 
                        = __Vtemp_1[0x00000010U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000011U] 
                        = __Vtemp_1[0x00000011U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000012U] 
                        = __Vtemp_1[0x00000012U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000013U] 
                        = __Vtemp_1[0x00000013U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000014U] 
                        = __Vtemp_1[0x00000014U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000015U] 
                        = __Vtemp_1[0x00000015U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000016U] 
                        = __Vtemp_1[0x00000016U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000017U] 
                        = __Vtemp_1[0x00000017U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000018U] 
                        = __Vtemp_1[0x00000018U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000019U] 
                        = __Vtemp_1[0x00000019U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000001aU] 
                        = __Vtemp_1[0x0000001aU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000001bU] 
                        = __Vtemp_1[0x0000001bU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000001cU] 
                        = __Vtemp_1[0x0000001cU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000001dU] 
                        = __Vtemp_1[0x0000001dU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000001eU] 
                        = __Vtemp_1[0x0000001eU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000001fU] 
                        = __Vtemp_1[0x0000001fU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000020U] 
                        = __Vtemp_1[0x00000020U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000021U] 
                        = __Vtemp_1[0x00000021U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000022U] 
                        = __Vtemp_1[0x00000022U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000023U] 
                        = __Vtemp_1[0x00000023U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000024U] 
                        = __Vtemp_1[0x00000024U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000025U] 
                        = __Vtemp_1[0x00000025U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000026U] 
                        = __Vtemp_1[0x00000026U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000027U] 
                        = __Vtemp_1[0x00000027U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000028U] 
                        = __Vtemp_1[0x00000028U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000029U] 
                        = __Vtemp_1[0x00000029U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000002aU] 
                        = __Vtemp_1[0x0000002aU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000002bU] 
                        = __Vtemp_1[0x0000002bU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000002cU] 
                        = __Vtemp_1[0x0000002cU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000002dU] 
                        = __Vtemp_1[0x0000002dU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000002eU] 
                        = __Vtemp_1[0x0000002eU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000002fU] 
                        = __Vtemp_1[0x0000002fU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000030U] 
                        = __Vtemp_1[0x00000030U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000031U] 
                        = __Vtemp_1[0x00000031U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000032U] 
                        = __Vtemp_1[0x00000032U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000033U] 
                        = __Vtemp_1[0x00000033U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000034U] 
                        = __Vtemp_1[0x00000034U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000035U] 
                        = __Vtemp_1[0x00000035U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000036U] 
                        = __Vtemp_1[0x00000036U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000037U] 
                        = __Vtemp_1[0x00000037U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000038U] 
                        = __Vtemp_1[0x00000038U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000039U] 
                        = __Vtemp_1[0x00000039U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000003aU] 
                        = __Vtemp_1[0x0000003aU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000003bU] 
                        = __Vtemp_1[0x0000003bU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000003cU] 
                        = __Vtemp_1[0x0000003cU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000003dU] 
                        = __Vtemp_1[0x0000003dU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000003eU] 
                        = __Vtemp_1[0x0000003eU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000003fU] 
                        = __Vtemp_1[0x0000003fU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000040U] 
                        = __Vtemp_1[0x00000040U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000041U] 
                        = __Vtemp_1[0x00000041U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000042U] 
                        = __Vtemp_1[0x00000042U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000043U] 
                        = __Vtemp_1[0x00000043U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000044U] 
                        = __Vtemp_1[0x00000044U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000045U] 
                        = __Vtemp_1[0x00000045U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000046U] 
                        = __Vtemp_1[0x00000046U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000047U] 
                        = __Vtemp_1[0x00000047U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000048U] 
                        = __Vtemp_1[0x00000048U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000049U] 
                        = __Vtemp_1[0x00000049U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000004aU] 
                        = __Vtemp_1[0x0000004aU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000004bU] 
                        = __Vtemp_1[0x0000004bU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000004cU] 
                        = __Vtemp_1[0x0000004cU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000004dU] 
                        = __Vtemp_1[0x0000004dU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000004eU] 
                        = __Vtemp_1[0x0000004eU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000004fU] 
                        = __Vtemp_1[0x0000004fU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000050U] 
                        = __Vtemp_1[0x00000050U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000051U] 
                        = __Vtemp_1[0x00000051U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000052U] 
                        = __Vtemp_1[0x00000052U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000053U] 
                        = __Vtemp_1[0x00000053U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000054U] 
                        = __Vtemp_1[0x00000054U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000055U] 
                        = __Vtemp_1[0x00000055U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000056U] 
                        = __Vtemp_1[0x00000056U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000057U] 
                        = __Vtemp_1[0x00000057U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000058U] 
                        = __Vtemp_1[0x00000058U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000059U] 
                        = __Vtemp_1[0x00000059U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000005aU] 
                        = __Vtemp_1[0x0000005aU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000005bU] 
                        = __Vtemp_1[0x0000005bU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000005cU] 
                        = __Vtemp_1[0x0000005cU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000005dU] 
                        = __Vtemp_1[0x0000005dU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000005eU] 
                        = __Vtemp_1[0x0000005eU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000005fU] 
                        = __Vtemp_1[0x0000005fU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000060U] 
                        = __Vtemp_1[0x00000060U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000061U] 
                        = __Vtemp_1[0x00000061U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000062U] 
                        = __Vtemp_1[0x00000062U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000063U] 
                        = __Vtemp_1[0x00000063U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000064U] 
                        = __Vtemp_1[0x00000064U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000065U] 
                        = __Vtemp_1[0x00000065U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000066U] 
                        = __Vtemp_1[0x00000066U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000067U] 
                        = __Vtemp_1[0x00000067U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000068U] 
                        = __Vtemp_1[0x00000068U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000069U] 
                        = __Vtemp_1[0x00000069U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000006aU] 
                        = __Vtemp_1[0x0000006aU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000006bU] 
                        = __Vtemp_1[0x0000006bU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000006cU] 
                        = __Vtemp_1[0x0000006cU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000006dU] 
                        = __Vtemp_1[0x0000006dU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000006eU] 
                        = __Vtemp_1[0x0000006eU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000006fU] 
                        = __Vtemp_1[0x0000006fU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000070U] 
                        = __Vtemp_1[0x00000070U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000071U] 
                        = __Vtemp_1[0x00000071U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000072U] 
                        = __Vtemp_1[0x00000072U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000073U] 
                        = __Vtemp_1[0x00000073U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000074U] 
                        = __Vtemp_1[0x00000074U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000075U] 
                        = __Vtemp_1[0x00000075U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000076U] 
                        = __Vtemp_1[0x00000076U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000077U] 
                        = __Vtemp_1[0x00000077U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000078U] 
                        = __Vtemp_1[0x00000078U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x00000079U] 
                        = __Vtemp_1[0x00000079U];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000007aU] 
                        = __Vtemp_1[0x0000007aU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000007bU] 
                        = __Vtemp_1[0x0000007bU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000007cU] 
                        = __Vtemp_1[0x0000007cU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000007dU] 
                        = __Vtemp_1[0x0000007dU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000007eU] 
                        = __Vtemp_1[0x0000007eU];
                    __Vfunc_uvm_bitstream_to_string__34__value[0x0000007fU] 
                        = __Vtemp_1[0x0000007fU];
                    __Vfunc_uvm_bitstream_to_string__34__Vfuncout 
                        = ((0x01000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                            ? VL_SFORMATF_N_NX("%0@%0b",0,
                                               -1,&(__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                               4096,
                                               __Vfunc_uvm_bitstream_to_string__34__value.data()) 
                            : ((0x06000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                                ? VL_SFORMATF_N_NX("%0@%0o",0,
                                                   -1,
                                                   &(__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                   4096,
                                                   __Vfunc_uvm_bitstream_to_string__34__value.data()) 
                                : ((0x03000000U == __Vfunc_uvm_bitstream_to_string__34__radix)
                                    ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                       -1,
                                                       &(__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                       4096,
                                                       __Vfunc_uvm_bitstream_to_string__34__value.data()) 
                                    : ((0x08000000U 
                                        == __Vfunc_uvm_bitstream_to_string__34__radix)
                                        ? VL_SFORMATF_N_NX("%0@%0s",0,
                                                           -1,
                                                           &(__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                           4096,
                                                           __Vfunc_uvm_bitstream_to_string__34__value.data()) 
                                        : ((0x09000000U 
                                            == __Vfunc_uvm_bitstream_to_string__34__radix)
                                            ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                               -1,
                                                               &(__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                               4096,
                                                               __Vfunc_uvm_bitstream_to_string__34__value.data(),
                                                               -12) 
                                            : ((0x02000000U 
                                                == __Vfunc_uvm_bitstream_to_string__34__radix)
                                                ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                                   -1,
                                                                   &(__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                                   4096,
                                                                   __Vfunc_uvm_bitstream_to_string__34__value.data()) 
                                                : VL_SFORMATF_N_NX("%0@%0x",0,
                                                                   -1,
                                                                   &(__Vfunc_uvm_bitstream_to_string__34__radix_str),
                                                                   4096,
                                                                   __Vfunc_uvm_bitstream_to_string__34__value.data()) ))))));
                    __Vlabel0: ;
                }
            }(), __Vfunc_uvm_bitstream_to_string__34__Vfuncout);
        __Vtemp_5 = Vrecorders_top___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 878)
                      ->__PVT__m_file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@   RADIX:%@ BITS=%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      ([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__33__Vfuncout);
                    }(), __Vfunc_get_handle__33__Vfuncout),
                      -1,&(nm),-1,&(__Vtemp_4),-1,&(__Vtemp_5),
                      32,numbits);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute_int(Vrecorders_top__Syms* __restrict vlSymsp, std::string nm, QData/*63:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_write_attribute_int\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__35__Vfuncout;
    __Vtask_open_db__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_handle__36__Vfuncout;
    __Vfunc_get_handle__36__Vfuncout = 0;
    std::string __Vfunc_uvm_integral_to_string__37__Vfuncout;
    QData/*63:0*/ __Vfunc_uvm_integral_to_string__37__value;
    __Vfunc_uvm_integral_to_string__37__value = 0;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__37__size;
    __Vfunc_uvm_integral_to_string__37__size = 0;
    IData/*27:0*/ __Vfunc_uvm_integral_to_string__37__radix;
    __Vfunc_uvm_integral_to_string__37__radix = 0;
    std::string __Vfunc_uvm_integral_to_string__37__radix_str;
    IData/*31:0*/ __Vfunc_uvm_integral_to_string__37__unnamedblk5__DOT__unnamedblk6__DOT__idx;
    __Vfunc_uvm_integral_to_string__37__unnamedblk5__DOT__unnamedblk6__DOT__idx = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if (VL_UNLIKELY((([&]() {
                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 903)
                      ->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__35__Vfuncout);
                    }(), (IData)(__Vtask_open_db__35__Vfuncout))))) {
        __Vtemp_1 = ([&]() {
                __Vfunc_uvm_integral_to_string__37__radix_str = ""s;
                __Vfunc_uvm_integral_to_string__37__radix 
                    = radix;
                __Vfunc_uvm_integral_to_string__37__size 
                    = numbits;
                __Vfunc_uvm_integral_to_string__37__value 
                    = value;
                __Vfunc_uvm_integral_to_string__37__unnamedblk5__DOT__unnamedblk6__DOT__idx = 0;
                {
                    if (((0x02000000U == __Vfunc_uvm_integral_to_string__37__radix) 
                         & (IData)((__Vfunc_uvm_integral_to_string__37__value 
                                    >> (0x0000003fU 
                                        & (__Vfunc_uvm_integral_to_string__37__size 
                                           - (IData)(1U))))))) {
                        __Vfunc_uvm_integral_to_string__37__Vfuncout 
                            = VL_SFORMATF_N_NX("%0d",0,
                                               64,__Vfunc_uvm_integral_to_string__37__value) ;
                        goto __Vlabel0;
                    }
                    __Vfunc_uvm_integral_to_string__37__value 
                        = (__Vfunc_uvm_integral_to_string__37__value 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, __Vfunc_uvm_integral_to_string__37__size) 
                              - 1ULL));
                    __Vfunc_uvm_integral_to_string__37__Vfuncout 
                        = ((0x01000000U == __Vfunc_uvm_integral_to_string__37__radix)
                            ? VL_SFORMATF_N_NX("%0@%0b",0,
                                               -1,&(__Vfunc_uvm_integral_to_string__37__radix_str),
                                               64,__Vfunc_uvm_integral_to_string__37__value) 
                            : ((0x06000000U == __Vfunc_uvm_integral_to_string__37__radix)
                                ? VL_SFORMATF_N_NX("%0@%0o",0,
                                                   -1,
                                                   &(__Vfunc_uvm_integral_to_string__37__radix_str),
                                                   64,
                                                   __Vfunc_uvm_integral_to_string__37__value) 
                                : ((0x03000000U == __Vfunc_uvm_integral_to_string__37__radix)
                                    ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                       -1,
                                                       &(__Vfunc_uvm_integral_to_string__37__radix_str),
                                                       64,
                                                       __Vfunc_uvm_integral_to_string__37__value) 
                                    : ((0x08000000U 
                                        == __Vfunc_uvm_integral_to_string__37__radix)
                                        ? VL_SFORMATF_N_NX("%0@%0s",0,
                                                           -1,
                                                           &(__Vfunc_uvm_integral_to_string__37__radix_str),
                                                           64,
                                                           __Vfunc_uvm_integral_to_string__37__value) 
                                        : ((0x09000000U 
                                            == __Vfunc_uvm_integral_to_string__37__radix)
                                            ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                               -1,
                                                               &(__Vfunc_uvm_integral_to_string__37__radix_str),
                                                               64,
                                                               __Vfunc_uvm_integral_to_string__37__value,
                                                               -12) 
                                            : ((0x02000000U 
                                                == __Vfunc_uvm_integral_to_string__37__radix)
                                                ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                                   -1,
                                                                   &(__Vfunc_uvm_integral_to_string__37__radix_str),
                                                                   64,
                                                                   __Vfunc_uvm_integral_to_string__37__value) 
                                                : VL_SFORMATF_N_NX("%0@%0x",0,
                                                                   -1,
                                                                   &(__Vfunc_uvm_integral_to_string__37__radix_str),
                                                                   64,
                                                                   __Vfunc_uvm_integral_to_string__37__value) ))))));
                    __Vlabel0: ;
                }
            }(), __Vfunc_uvm_integral_to_string__37__Vfuncout);
        __Vtemp_2 = Vrecorders_top___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 904)
                      ->__PVT__m_file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@   RADIX:%@ BITS=%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      ([&]() {
                        this->__VnoInFunc_get_handle(vlSymsp, __Vfunc_get_handle__36__Vfuncout);
                    }(), __Vfunc_get_handle__36__Vfuncout),
                      -1,&(nm),-1,&(__Vtemp_1),-1,&(__Vtemp_2),
                      32,numbits);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_open_file(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &open_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_open_file\n"); );
    // Locals
    CData/*0:0*/ __Vtask_open_db__39__Vfuncout;
    __Vtask_open_db__39__Vfuncout = 0;
    // Body
    if ((1U & (~ (IData)(this->__PVT__filename_set)))) {
        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 936)->__VnoInFunc_set_file_name(vlSymsp, this->__PVT__filename);
    }
    VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 938)->__VnoInFunc_open_db(vlSymsp, __Vtask_open_db__39__Vfuncout);
    open_file__Vfuncrtn = __Vtask_open_db__39__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create_stream(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, std::string t, std::string scope, IData/*31:0*/ &create_stream__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_create_stream\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_open_file__40__Vfuncout;
    __Vfunc_open_file__40__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> __Vtask_open_stream__41__Vfuncout;
    IData/*31:0*/ __Vtask_get_handle__42__Vfuncout;
    __Vtask_get_handle__42__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_text_tr_stream> stream;
    {
        if (([&]() {
                    this->__VnoInFunc_open_file(vlSymsp, __Vfunc_open_file__40__Vfuncout);
                }(), (IData)(__Vfunc_open_file__40__Vfuncout))) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 950)
                                                 ->__VnoInFunc_open_stream(vlProcess, vlSymsp, name, scope, t, __Vtask_open_stream__41__Vfuncout);
                                    }(), __Vtask_open_stream__41__Vfuncout), stream))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_recorder.svh:950: Assertion failed in %Nuvm_pkg.uvm_text_recorder.create_stream: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 950, "");
            }
            VL_NULL_CHECK(stream, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 951)->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__42__Vfuncout);
            create_stream__Vfuncrtn = __Vtask_get_handle__42__Vfuncout;
            goto __Vlabel0;
        }
        create_stream__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_set_attribute(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, std::string value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_m_set_attribute\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_open_file__43__Vfuncout;
    __Vfunc_open_file__43__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk3__DOT__file;
    unnamedblk3__DOT__file = 0;
    if (VL_UNLIKELY((([&]() {
                        this->__VnoInFunc_open_file(vlSymsp, __Vfunc_open_file__43__Vfuncout);
                    }(), (IData)(__Vfunc_open_file__43__Vfuncout))))) {
        unnamedblk3__DOT__file = VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 964)
            ->__PVT__m_file;
        VL_FWRITEF_NX(unnamedblk3__DOT__file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      txh,-1,&(nm),-1,&(value));
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_set_attribute(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ txh, std::string nm, VlWide<32>/*1023:0*/ value, IData/*27:0*/ radix, IData/*31:0*/ numbits) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_set_attribute\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_open_file__44__Vfuncout;
    __Vfunc_open_file__44__Vfuncout = 0;
    std::string __Vfunc_uvm_bitstream_to_string__45__Vfuncout;
    VlWide<128>/*4095:0*/ __Vfunc_uvm_bitstream_to_string__45__value;
    VL_ZERO_W(4096, __Vfunc_uvm_bitstream_to_string__45__value);
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__45__size;
    __Vfunc_uvm_bitstream_to_string__45__size = 0;
    IData/*27:0*/ __Vfunc_uvm_bitstream_to_string__45__radix;
    __Vfunc_uvm_bitstream_to_string__45__radix = 0;
    std::string __Vfunc_uvm_bitstream_to_string__45__radix_str;
    IData/*31:0*/ __Vfunc_uvm_bitstream_to_string__45__unnamedblk3__DOT__unnamedblk4__DOT__idx;
    __Vfunc_uvm_bitstream_to_string__45__unnamedblk3__DOT__unnamedblk4__DOT__idx = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    IData/*31:0*/ unnamedblk4__DOT__file;
    unnamedblk4__DOT__file = 0;
    if (VL_UNLIKELY((([&]() {
                        this->__VnoInFunc_open_file(vlSymsp, __Vfunc_open_file__44__Vfuncout);
                    }(), (IData)(__Vfunc_open_file__44__Vfuncout))))) {
        unnamedblk4__DOT__file = VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 979)
            ->__PVT__m_file;
        __Vtemp_4 = ([&]() {
                __Vfunc_uvm_bitstream_to_string__45__radix_str = ""s;
                __Vfunc_uvm_bitstream_to_string__45__radix 
                    = radix;
                __Vfunc_uvm_bitstream_to_string__45__size 
                    = numbits;
                __Vfunc_uvm_bitstream_to_string__45__value[0U] 
                    = value[0U];
                __Vfunc_uvm_bitstream_to_string__45__value[1U] 
                    = value[1U];
                __Vfunc_uvm_bitstream_to_string__45__value[2U] 
                    = value[2U];
                __Vfunc_uvm_bitstream_to_string__45__value[3U] 
                    = value[3U];
                __Vfunc_uvm_bitstream_to_string__45__value[4U] 
                    = value[4U];
                __Vfunc_uvm_bitstream_to_string__45__value[5U] 
                    = value[5U];
                __Vfunc_uvm_bitstream_to_string__45__value[6U] 
                    = value[6U];
                __Vfunc_uvm_bitstream_to_string__45__value[7U] 
                    = value[7U];
                __Vfunc_uvm_bitstream_to_string__45__value[8U] 
                    = value[8U];
                __Vfunc_uvm_bitstream_to_string__45__value[9U] 
                    = value[9U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000000aU] 
                    = value[0x0000000aU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000000bU] 
                    = value[0x0000000bU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000000cU] 
                    = value[0x0000000cU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000000dU] 
                    = value[0x0000000dU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000000eU] 
                    = value[0x0000000eU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000000fU] 
                    = value[0x0000000fU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000010U] 
                    = value[0x00000010U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000011U] 
                    = value[0x00000011U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000012U] 
                    = value[0x00000012U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000013U] 
                    = value[0x00000013U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000014U] 
                    = value[0x00000014U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000015U] 
                    = value[0x00000015U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000016U] 
                    = value[0x00000016U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000017U] 
                    = value[0x00000017U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000018U] 
                    = value[0x00000018U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000019U] 
                    = value[0x00000019U];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000001aU] 
                    = value[0x0000001aU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000001bU] 
                    = value[0x0000001bU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000001cU] 
                    = value[0x0000001cU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000001dU] 
                    = value[0x0000001dU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000001eU] 
                    = value[0x0000001eU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000001fU] 
                    = value[0x0000001fU];
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000020U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000021U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000022U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000023U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000024U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000025U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000026U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000027U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000028U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000029U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000002aU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000002bU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000002cU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000002dU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000002eU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000002fU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000030U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000031U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000032U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000033U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000034U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000035U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000036U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000037U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000038U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000039U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000003aU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000003bU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000003cU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000003dU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000003eU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000003fU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000040U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000041U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000042U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000043U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000044U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000045U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000046U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000047U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000048U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000049U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000004aU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000004bU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000004cU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000004dU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000004eU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000004fU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000050U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000051U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000052U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000053U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000054U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000055U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000056U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000057U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000058U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000059U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000005aU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000005bU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000005cU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000005dU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000005eU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000005fU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000060U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000061U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000062U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000063U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000064U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000065U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000066U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000067U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000068U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000069U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000006aU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000006bU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000006cU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000006dU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000006eU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000006fU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000070U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000071U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000072U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000073U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000074U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000075U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000076U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000077U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000078U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x00000079U] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000007aU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000007bU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000007cU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000007dU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000007eU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__value[0x0000007fU] = 0U;
                __Vfunc_uvm_bitstream_to_string__45__unnamedblk3__DOT__unnamedblk4__DOT__idx = 0;
                {
                    if (((0x02000000U == __Vfunc_uvm_bitstream_to_string__45__radix) 
                         & (__Vfunc_uvm_bitstream_to_string__45__value[
                            (0x0000007fU & ((__Vfunc_uvm_bitstream_to_string__45__size 
                                             - (IData)(1U)) 
                                            >> 5U))] 
                            >> (0x0000001fU & (__Vfunc_uvm_bitstream_to_string__45__size 
                                               - (IData)(1U)))))) {
                        __Vfunc_uvm_bitstream_to_string__45__Vfuncout 
                            = VL_SFORMATF_N_NX("%0d",0,
                                               4096,
                                               __Vfunc_uvm_bitstream_to_string__45__value.data()) ;
                        goto __Vlabel0;
                    }
                    VL_SHIFTL_WWI(4096,4096,32, __Vtemp_2, Vrecorders_top__ConstPool__CONST_h1958c06c_0, __Vfunc_uvm_bitstream_to_string__45__size);
                    VL_SUB_W(128, __Vtemp_3, __Vtemp_2, Vrecorders_top__ConstPool__CONST_h1958c06c_0);
                    __Vtemp_1[1U] = (__Vfunc_uvm_bitstream_to_string__45__value[1U] 
                                     & __Vtemp_3[1U]);
                    __Vtemp_1[2U] = (__Vfunc_uvm_bitstream_to_string__45__value[2U] 
                                     & __Vtemp_3[2U]);
                    __Vtemp_1[3U] = (__Vfunc_uvm_bitstream_to_string__45__value[3U] 
                                     & __Vtemp_3[3U]);
                    __Vtemp_1[4U] = (__Vfunc_uvm_bitstream_to_string__45__value[4U] 
                                     & __Vtemp_3[4U]);
                    __Vtemp_1[5U] = (__Vfunc_uvm_bitstream_to_string__45__value[5U] 
                                     & __Vtemp_3[5U]);
                    __Vtemp_1[6U] = (__Vfunc_uvm_bitstream_to_string__45__value[6U] 
                                     & __Vtemp_3[6U]);
                    __Vtemp_1[7U] = (__Vfunc_uvm_bitstream_to_string__45__value[7U] 
                                     & __Vtemp_3[7U]);
                    __Vtemp_1[8U] = (__Vfunc_uvm_bitstream_to_string__45__value[8U] 
                                     & __Vtemp_3[8U]);
                    __Vtemp_1[9U] = (__Vfunc_uvm_bitstream_to_string__45__value[9U] 
                                     & __Vtemp_3[9U]);
                    __Vtemp_1[0x0000000aU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000000aU] 
                                              & __Vtemp_3[0x0000000aU]);
                    __Vtemp_1[0x0000000bU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000000bU] 
                                              & __Vtemp_3[0x0000000bU]);
                    __Vtemp_1[0x0000000cU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000000cU] 
                                              & __Vtemp_3[0x0000000cU]);
                    __Vtemp_1[0x0000000dU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000000dU] 
                                              & __Vtemp_3[0x0000000dU]);
                    __Vtemp_1[0x0000000eU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000000eU] 
                                              & __Vtemp_3[0x0000000eU]);
                    __Vtemp_1[0x0000000fU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000000fU] 
                                              & __Vtemp_3[0x0000000fU]);
                    __Vtemp_1[0x00000010U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000010U] 
                                              & __Vtemp_3[0x00000010U]);
                    __Vtemp_1[0x00000011U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000011U] 
                                              & __Vtemp_3[0x00000011U]);
                    __Vtemp_1[0x00000012U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000012U] 
                                              & __Vtemp_3[0x00000012U]);
                    __Vtemp_1[0x00000013U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000013U] 
                                              & __Vtemp_3[0x00000013U]);
                    __Vtemp_1[0x00000014U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000014U] 
                                              & __Vtemp_3[0x00000014U]);
                    __Vtemp_1[0x00000015U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000015U] 
                                              & __Vtemp_3[0x00000015U]);
                    __Vtemp_1[0x00000016U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000016U] 
                                              & __Vtemp_3[0x00000016U]);
                    __Vtemp_1[0x00000017U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000017U] 
                                              & __Vtemp_3[0x00000017U]);
                    __Vtemp_1[0x00000018U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000018U] 
                                              & __Vtemp_3[0x00000018U]);
                    __Vtemp_1[0x00000019U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000019U] 
                                              & __Vtemp_3[0x00000019U]);
                    __Vtemp_1[0x0000001aU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000001aU] 
                                              & __Vtemp_3[0x0000001aU]);
                    __Vtemp_1[0x0000001bU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000001bU] 
                                              & __Vtemp_3[0x0000001bU]);
                    __Vtemp_1[0x0000001cU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000001cU] 
                                              & __Vtemp_3[0x0000001cU]);
                    __Vtemp_1[0x0000001dU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000001dU] 
                                              & __Vtemp_3[0x0000001dU]);
                    __Vtemp_1[0x0000001eU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000001eU] 
                                              & __Vtemp_3[0x0000001eU]);
                    __Vtemp_1[0x0000001fU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000001fU] 
                                              & __Vtemp_3[0x0000001fU]);
                    __Vtemp_1[0x00000020U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000020U] 
                                              & __Vtemp_3[0x00000020U]);
                    __Vtemp_1[0x00000021U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000021U] 
                                              & __Vtemp_3[0x00000021U]);
                    __Vtemp_1[0x00000022U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000022U] 
                                              & __Vtemp_3[0x00000022U]);
                    __Vtemp_1[0x00000023U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000023U] 
                                              & __Vtemp_3[0x00000023U]);
                    __Vtemp_1[0x00000024U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000024U] 
                                              & __Vtemp_3[0x00000024U]);
                    __Vtemp_1[0x00000025U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000025U] 
                                              & __Vtemp_3[0x00000025U]);
                    __Vtemp_1[0x00000026U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000026U] 
                                              & __Vtemp_3[0x00000026U]);
                    __Vtemp_1[0x00000027U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000027U] 
                                              & __Vtemp_3[0x00000027U]);
                    __Vtemp_1[0x00000028U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000028U] 
                                              & __Vtemp_3[0x00000028U]);
                    __Vtemp_1[0x00000029U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000029U] 
                                              & __Vtemp_3[0x00000029U]);
                    __Vtemp_1[0x0000002aU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000002aU] 
                                              & __Vtemp_3[0x0000002aU]);
                    __Vtemp_1[0x0000002bU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000002bU] 
                                              & __Vtemp_3[0x0000002bU]);
                    __Vtemp_1[0x0000002cU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000002cU] 
                                              & __Vtemp_3[0x0000002cU]);
                    __Vtemp_1[0x0000002dU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000002dU] 
                                              & __Vtemp_3[0x0000002dU]);
                    __Vtemp_1[0x0000002eU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000002eU] 
                                              & __Vtemp_3[0x0000002eU]);
                    __Vtemp_1[0x0000002fU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000002fU] 
                                              & __Vtemp_3[0x0000002fU]);
                    __Vtemp_1[0x00000030U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000030U] 
                                              & __Vtemp_3[0x00000030U]);
                    __Vtemp_1[0x00000031U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000031U] 
                                              & __Vtemp_3[0x00000031U]);
                    __Vtemp_1[0x00000032U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000032U] 
                                              & __Vtemp_3[0x00000032U]);
                    __Vtemp_1[0x00000033U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000033U] 
                                              & __Vtemp_3[0x00000033U]);
                    __Vtemp_1[0x00000034U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000034U] 
                                              & __Vtemp_3[0x00000034U]);
                    __Vtemp_1[0x00000035U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000035U] 
                                              & __Vtemp_3[0x00000035U]);
                    __Vtemp_1[0x00000036U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000036U] 
                                              & __Vtemp_3[0x00000036U]);
                    __Vtemp_1[0x00000037U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000037U] 
                                              & __Vtemp_3[0x00000037U]);
                    __Vtemp_1[0x00000038U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000038U] 
                                              & __Vtemp_3[0x00000038U]);
                    __Vtemp_1[0x00000039U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000039U] 
                                              & __Vtemp_3[0x00000039U]);
                    __Vtemp_1[0x0000003aU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000003aU] 
                                              & __Vtemp_3[0x0000003aU]);
                    __Vtemp_1[0x0000003bU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000003bU] 
                                              & __Vtemp_3[0x0000003bU]);
                    __Vtemp_1[0x0000003cU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000003cU] 
                                              & __Vtemp_3[0x0000003cU]);
                    __Vtemp_1[0x0000003dU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000003dU] 
                                              & __Vtemp_3[0x0000003dU]);
                    __Vtemp_1[0x0000003eU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000003eU] 
                                              & __Vtemp_3[0x0000003eU]);
                    __Vtemp_1[0x0000003fU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000003fU] 
                                              & __Vtemp_3[0x0000003fU]);
                    __Vtemp_1[0x00000040U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000040U] 
                                              & __Vtemp_3[0x00000040U]);
                    __Vtemp_1[0x00000041U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000041U] 
                                              & __Vtemp_3[0x00000041U]);
                    __Vtemp_1[0x00000042U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000042U] 
                                              & __Vtemp_3[0x00000042U]);
                    __Vtemp_1[0x00000043U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000043U] 
                                              & __Vtemp_3[0x00000043U]);
                    __Vtemp_1[0x00000044U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000044U] 
                                              & __Vtemp_3[0x00000044U]);
                    __Vtemp_1[0x00000045U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000045U] 
                                              & __Vtemp_3[0x00000045U]);
                    __Vtemp_1[0x00000046U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000046U] 
                                              & __Vtemp_3[0x00000046U]);
                    __Vtemp_1[0x00000047U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000047U] 
                                              & __Vtemp_3[0x00000047U]);
                    __Vtemp_1[0x00000048U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000048U] 
                                              & __Vtemp_3[0x00000048U]);
                    __Vtemp_1[0x00000049U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000049U] 
                                              & __Vtemp_3[0x00000049U]);
                    __Vtemp_1[0x0000004aU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000004aU] 
                                              & __Vtemp_3[0x0000004aU]);
                    __Vtemp_1[0x0000004bU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000004bU] 
                                              & __Vtemp_3[0x0000004bU]);
                    __Vtemp_1[0x0000004cU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000004cU] 
                                              & __Vtemp_3[0x0000004cU]);
                    __Vtemp_1[0x0000004dU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000004dU] 
                                              & __Vtemp_3[0x0000004dU]);
                    __Vtemp_1[0x0000004eU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000004eU] 
                                              & __Vtemp_3[0x0000004eU]);
                    __Vtemp_1[0x0000004fU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000004fU] 
                                              & __Vtemp_3[0x0000004fU]);
                    __Vtemp_1[0x00000050U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000050U] 
                                              & __Vtemp_3[0x00000050U]);
                    __Vtemp_1[0x00000051U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000051U] 
                                              & __Vtemp_3[0x00000051U]);
                    __Vtemp_1[0x00000052U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000052U] 
                                              & __Vtemp_3[0x00000052U]);
                    __Vtemp_1[0x00000053U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000053U] 
                                              & __Vtemp_3[0x00000053U]);
                    __Vtemp_1[0x00000054U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000054U] 
                                              & __Vtemp_3[0x00000054U]);
                    __Vtemp_1[0x00000055U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000055U] 
                                              & __Vtemp_3[0x00000055U]);
                    __Vtemp_1[0x00000056U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000056U] 
                                              & __Vtemp_3[0x00000056U]);
                    __Vtemp_1[0x00000057U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000057U] 
                                              & __Vtemp_3[0x00000057U]);
                    __Vtemp_1[0x00000058U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000058U] 
                                              & __Vtemp_3[0x00000058U]);
                    __Vtemp_1[0x00000059U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000059U] 
                                              & __Vtemp_3[0x00000059U]);
                    __Vtemp_1[0x0000005aU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000005aU] 
                                              & __Vtemp_3[0x0000005aU]);
                    __Vtemp_1[0x0000005bU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000005bU] 
                                              & __Vtemp_3[0x0000005bU]);
                    __Vtemp_1[0x0000005cU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000005cU] 
                                              & __Vtemp_3[0x0000005cU]);
                    __Vtemp_1[0x0000005dU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000005dU] 
                                              & __Vtemp_3[0x0000005dU]);
                    __Vtemp_1[0x0000005eU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000005eU] 
                                              & __Vtemp_3[0x0000005eU]);
                    __Vtemp_1[0x0000005fU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000005fU] 
                                              & __Vtemp_3[0x0000005fU]);
                    __Vtemp_1[0x00000060U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000060U] 
                                              & __Vtemp_3[0x00000060U]);
                    __Vtemp_1[0x00000061U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000061U] 
                                              & __Vtemp_3[0x00000061U]);
                    __Vtemp_1[0x00000062U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000062U] 
                                              & __Vtemp_3[0x00000062U]);
                    __Vtemp_1[0x00000063U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000063U] 
                                              & __Vtemp_3[0x00000063U]);
                    __Vtemp_1[0x00000064U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000064U] 
                                              & __Vtemp_3[0x00000064U]);
                    __Vtemp_1[0x00000065U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000065U] 
                                              & __Vtemp_3[0x00000065U]);
                    __Vtemp_1[0x00000066U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000066U] 
                                              & __Vtemp_3[0x00000066U]);
                    __Vtemp_1[0x00000067U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000067U] 
                                              & __Vtemp_3[0x00000067U]);
                    __Vtemp_1[0x00000068U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000068U] 
                                              & __Vtemp_3[0x00000068U]);
                    __Vtemp_1[0x00000069U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000069U] 
                                              & __Vtemp_3[0x00000069U]);
                    __Vtemp_1[0x0000006aU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000006aU] 
                                              & __Vtemp_3[0x0000006aU]);
                    __Vtemp_1[0x0000006bU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000006bU] 
                                              & __Vtemp_3[0x0000006bU]);
                    __Vtemp_1[0x0000006cU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000006cU] 
                                              & __Vtemp_3[0x0000006cU]);
                    __Vtemp_1[0x0000006dU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000006dU] 
                                              & __Vtemp_3[0x0000006dU]);
                    __Vtemp_1[0x0000006eU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000006eU] 
                                              & __Vtemp_3[0x0000006eU]);
                    __Vtemp_1[0x0000006fU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000006fU] 
                                              & __Vtemp_3[0x0000006fU]);
                    __Vtemp_1[0x00000070U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000070U] 
                                              & __Vtemp_3[0x00000070U]);
                    __Vtemp_1[0x00000071U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000071U] 
                                              & __Vtemp_3[0x00000071U]);
                    __Vtemp_1[0x00000072U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000072U] 
                                              & __Vtemp_3[0x00000072U]);
                    __Vtemp_1[0x00000073U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000073U] 
                                              & __Vtemp_3[0x00000073U]);
                    __Vtemp_1[0x00000074U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000074U] 
                                              & __Vtemp_3[0x00000074U]);
                    __Vtemp_1[0x00000075U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000075U] 
                                              & __Vtemp_3[0x00000075U]);
                    __Vtemp_1[0x00000076U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000076U] 
                                              & __Vtemp_3[0x00000076U]);
                    __Vtemp_1[0x00000077U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000077U] 
                                              & __Vtemp_3[0x00000077U]);
                    __Vtemp_1[0x00000078U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000078U] 
                                              & __Vtemp_3[0x00000078U]);
                    __Vtemp_1[0x00000079U] = (__Vfunc_uvm_bitstream_to_string__45__value[0x00000079U] 
                                              & __Vtemp_3[0x00000079U]);
                    __Vtemp_1[0x0000007aU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000007aU] 
                                              & __Vtemp_3[0x0000007aU]);
                    __Vtemp_1[0x0000007bU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000007bU] 
                                              & __Vtemp_3[0x0000007bU]);
                    __Vtemp_1[0x0000007cU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000007cU] 
                                              & __Vtemp_3[0x0000007cU]);
                    __Vtemp_1[0x0000007dU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000007dU] 
                                              & __Vtemp_3[0x0000007dU]);
                    __Vtemp_1[0x0000007eU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000007eU] 
                                              & __Vtemp_3[0x0000007eU]);
                    __Vtemp_1[0x0000007fU] = (__Vfunc_uvm_bitstream_to_string__45__value[0x0000007fU] 
                                              & __Vtemp_3[0x0000007fU]);
                    __Vfunc_uvm_bitstream_to_string__45__value[0U] 
                        = (__Vfunc_uvm_bitstream_to_string__45__value[0U] 
                           & __Vtemp_3[0U]);
                    __Vfunc_uvm_bitstream_to_string__45__value[1U] 
                        = __Vtemp_1[1U];
                    __Vfunc_uvm_bitstream_to_string__45__value[2U] 
                        = __Vtemp_1[2U];
                    __Vfunc_uvm_bitstream_to_string__45__value[3U] 
                        = __Vtemp_1[3U];
                    __Vfunc_uvm_bitstream_to_string__45__value[4U] 
                        = __Vtemp_1[4U];
                    __Vfunc_uvm_bitstream_to_string__45__value[5U] 
                        = __Vtemp_1[5U];
                    __Vfunc_uvm_bitstream_to_string__45__value[6U] 
                        = __Vtemp_1[6U];
                    __Vfunc_uvm_bitstream_to_string__45__value[7U] 
                        = __Vtemp_1[7U];
                    __Vfunc_uvm_bitstream_to_string__45__value[8U] 
                        = __Vtemp_1[8U];
                    __Vfunc_uvm_bitstream_to_string__45__value[9U] 
                        = __Vtemp_1[9U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000000aU] 
                        = __Vtemp_1[0x0000000aU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000000bU] 
                        = __Vtemp_1[0x0000000bU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000000cU] 
                        = __Vtemp_1[0x0000000cU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000000dU] 
                        = __Vtemp_1[0x0000000dU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000000eU] 
                        = __Vtemp_1[0x0000000eU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000000fU] 
                        = __Vtemp_1[0x0000000fU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000010U] 
                        = __Vtemp_1[0x00000010U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000011U] 
                        = __Vtemp_1[0x00000011U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000012U] 
                        = __Vtemp_1[0x00000012U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000013U] 
                        = __Vtemp_1[0x00000013U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000014U] 
                        = __Vtemp_1[0x00000014U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000015U] 
                        = __Vtemp_1[0x00000015U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000016U] 
                        = __Vtemp_1[0x00000016U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000017U] 
                        = __Vtemp_1[0x00000017U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000018U] 
                        = __Vtemp_1[0x00000018U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000019U] 
                        = __Vtemp_1[0x00000019U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000001aU] 
                        = __Vtemp_1[0x0000001aU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000001bU] 
                        = __Vtemp_1[0x0000001bU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000001cU] 
                        = __Vtemp_1[0x0000001cU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000001dU] 
                        = __Vtemp_1[0x0000001dU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000001eU] 
                        = __Vtemp_1[0x0000001eU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000001fU] 
                        = __Vtemp_1[0x0000001fU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000020U] 
                        = __Vtemp_1[0x00000020U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000021U] 
                        = __Vtemp_1[0x00000021U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000022U] 
                        = __Vtemp_1[0x00000022U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000023U] 
                        = __Vtemp_1[0x00000023U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000024U] 
                        = __Vtemp_1[0x00000024U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000025U] 
                        = __Vtemp_1[0x00000025U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000026U] 
                        = __Vtemp_1[0x00000026U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000027U] 
                        = __Vtemp_1[0x00000027U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000028U] 
                        = __Vtemp_1[0x00000028U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000029U] 
                        = __Vtemp_1[0x00000029U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000002aU] 
                        = __Vtemp_1[0x0000002aU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000002bU] 
                        = __Vtemp_1[0x0000002bU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000002cU] 
                        = __Vtemp_1[0x0000002cU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000002dU] 
                        = __Vtemp_1[0x0000002dU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000002eU] 
                        = __Vtemp_1[0x0000002eU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000002fU] 
                        = __Vtemp_1[0x0000002fU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000030U] 
                        = __Vtemp_1[0x00000030U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000031U] 
                        = __Vtemp_1[0x00000031U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000032U] 
                        = __Vtemp_1[0x00000032U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000033U] 
                        = __Vtemp_1[0x00000033U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000034U] 
                        = __Vtemp_1[0x00000034U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000035U] 
                        = __Vtemp_1[0x00000035U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000036U] 
                        = __Vtemp_1[0x00000036U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000037U] 
                        = __Vtemp_1[0x00000037U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000038U] 
                        = __Vtemp_1[0x00000038U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000039U] 
                        = __Vtemp_1[0x00000039U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000003aU] 
                        = __Vtemp_1[0x0000003aU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000003bU] 
                        = __Vtemp_1[0x0000003bU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000003cU] 
                        = __Vtemp_1[0x0000003cU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000003dU] 
                        = __Vtemp_1[0x0000003dU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000003eU] 
                        = __Vtemp_1[0x0000003eU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000003fU] 
                        = __Vtemp_1[0x0000003fU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000040U] 
                        = __Vtemp_1[0x00000040U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000041U] 
                        = __Vtemp_1[0x00000041U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000042U] 
                        = __Vtemp_1[0x00000042U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000043U] 
                        = __Vtemp_1[0x00000043U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000044U] 
                        = __Vtemp_1[0x00000044U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000045U] 
                        = __Vtemp_1[0x00000045U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000046U] 
                        = __Vtemp_1[0x00000046U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000047U] 
                        = __Vtemp_1[0x00000047U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000048U] 
                        = __Vtemp_1[0x00000048U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000049U] 
                        = __Vtemp_1[0x00000049U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000004aU] 
                        = __Vtemp_1[0x0000004aU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000004bU] 
                        = __Vtemp_1[0x0000004bU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000004cU] 
                        = __Vtemp_1[0x0000004cU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000004dU] 
                        = __Vtemp_1[0x0000004dU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000004eU] 
                        = __Vtemp_1[0x0000004eU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000004fU] 
                        = __Vtemp_1[0x0000004fU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000050U] 
                        = __Vtemp_1[0x00000050U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000051U] 
                        = __Vtemp_1[0x00000051U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000052U] 
                        = __Vtemp_1[0x00000052U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000053U] 
                        = __Vtemp_1[0x00000053U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000054U] 
                        = __Vtemp_1[0x00000054U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000055U] 
                        = __Vtemp_1[0x00000055U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000056U] 
                        = __Vtemp_1[0x00000056U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000057U] 
                        = __Vtemp_1[0x00000057U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000058U] 
                        = __Vtemp_1[0x00000058U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000059U] 
                        = __Vtemp_1[0x00000059U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000005aU] 
                        = __Vtemp_1[0x0000005aU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000005bU] 
                        = __Vtemp_1[0x0000005bU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000005cU] 
                        = __Vtemp_1[0x0000005cU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000005dU] 
                        = __Vtemp_1[0x0000005dU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000005eU] 
                        = __Vtemp_1[0x0000005eU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000005fU] 
                        = __Vtemp_1[0x0000005fU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000060U] 
                        = __Vtemp_1[0x00000060U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000061U] 
                        = __Vtemp_1[0x00000061U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000062U] 
                        = __Vtemp_1[0x00000062U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000063U] 
                        = __Vtemp_1[0x00000063U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000064U] 
                        = __Vtemp_1[0x00000064U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000065U] 
                        = __Vtemp_1[0x00000065U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000066U] 
                        = __Vtemp_1[0x00000066U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000067U] 
                        = __Vtemp_1[0x00000067U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000068U] 
                        = __Vtemp_1[0x00000068U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000069U] 
                        = __Vtemp_1[0x00000069U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000006aU] 
                        = __Vtemp_1[0x0000006aU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000006bU] 
                        = __Vtemp_1[0x0000006bU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000006cU] 
                        = __Vtemp_1[0x0000006cU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000006dU] 
                        = __Vtemp_1[0x0000006dU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000006eU] 
                        = __Vtemp_1[0x0000006eU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000006fU] 
                        = __Vtemp_1[0x0000006fU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000070U] 
                        = __Vtemp_1[0x00000070U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000071U] 
                        = __Vtemp_1[0x00000071U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000072U] 
                        = __Vtemp_1[0x00000072U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000073U] 
                        = __Vtemp_1[0x00000073U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000074U] 
                        = __Vtemp_1[0x00000074U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000075U] 
                        = __Vtemp_1[0x00000075U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000076U] 
                        = __Vtemp_1[0x00000076U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000077U] 
                        = __Vtemp_1[0x00000077U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000078U] 
                        = __Vtemp_1[0x00000078U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x00000079U] 
                        = __Vtemp_1[0x00000079U];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000007aU] 
                        = __Vtemp_1[0x0000007aU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000007bU] 
                        = __Vtemp_1[0x0000007bU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000007cU] 
                        = __Vtemp_1[0x0000007cU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000007dU] 
                        = __Vtemp_1[0x0000007dU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000007eU] 
                        = __Vtemp_1[0x0000007eU];
                    __Vfunc_uvm_bitstream_to_string__45__value[0x0000007fU] 
                        = __Vtemp_1[0x0000007fU];
                    __Vfunc_uvm_bitstream_to_string__45__Vfuncout 
                        = ((0x01000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                            ? VL_SFORMATF_N_NX("%0@%0b",0,
                                               -1,&(__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                               4096,
                                               __Vfunc_uvm_bitstream_to_string__45__value.data()) 
                            : ((0x06000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                                ? VL_SFORMATF_N_NX("%0@%0o",0,
                                                   -1,
                                                   &(__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                   4096,
                                                   __Vfunc_uvm_bitstream_to_string__45__value.data()) 
                                : ((0x03000000U == __Vfunc_uvm_bitstream_to_string__45__radix)
                                    ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                       -1,
                                                       &(__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                       4096,
                                                       __Vfunc_uvm_bitstream_to_string__45__value.data()) 
                                    : ((0x08000000U 
                                        == __Vfunc_uvm_bitstream_to_string__45__radix)
                                        ? VL_SFORMATF_N_NX("%0@%0s",0,
                                                           -1,
                                                           &(__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                           4096,
                                                           __Vfunc_uvm_bitstream_to_string__45__value.data()) 
                                        : ((0x09000000U 
                                            == __Vfunc_uvm_bitstream_to_string__45__radix)
                                            ? VL_SFORMATF_N_NX("%0@%0t",0,
                                                               -1,
                                                               &(__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                               4096,
                                                               __Vfunc_uvm_bitstream_to_string__45__value.data(),
                                                               -12) 
                                            : ((0x02000000U 
                                                == __Vfunc_uvm_bitstream_to_string__45__radix)
                                                ? VL_SFORMATF_N_NX("%0@%0d",0,
                                                                   -1,
                                                                   &(__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                                   4096,
                                                                   __Vfunc_uvm_bitstream_to_string__45__value.data()) 
                                                : VL_SFORMATF_N_NX("%0@%0x",0,
                                                                   -1,
                                                                   &(__Vfunc_uvm_bitstream_to_string__45__radix_str),
                                                                   4096,
                                                                   __Vfunc_uvm_bitstream_to_string__45__value.data()) ))))));
                    __Vlabel0: ;
                }
            }(), __Vfunc_uvm_bitstream_to_string__45__Vfuncout);
        __Vtemp_5 = Vrecorders_top___024unit::__Venumtab_enum_name15
            .at(radix);
        VL_FWRITEF_NX(unnamedblk4__DOT__file,"      SET_ATTR @%0^ {TXH:%0d NAME:%@ VALUE:%@   RADIX:%@ BITS=%0d}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      txh,-1,&(nm),-1,&(__Vtemp_4),
                      -1,&(__Vtemp_5),32,numbits);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_check_handle_kind(Vrecorders_top__Syms* __restrict vlSymsp, std::string htype, IData/*31:0*/ handle, IData/*31:0*/ &check_handle_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_check_handle_kind\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> __Vfunc_get_recorder_from_handle__46__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream_from_handle__47__Vfuncout;
    // Body
    check_handle_kind__Vfuncrtn = VL_EXTEND_II(32,1, 
                                               ((VlNull{} 
                                                 != 
                                                 ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, __Vfunc_get_recorder_from_handle__46__Vfuncout);
                    }(), __Vfunc_get_recorder_from_handle__46__Vfuncout)) 
                                                || (VlNull{} 
                                                    != 
                                                    ([&]() {
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_get_stream_from_handle(vlSymsp, handle, __Vfunc_get_stream_from_handle__47__Vfuncout);
                    }(), __Vfunc_get_stream_from_handle__47__Vfuncout))));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_begin_tr(Vrecorders_top__Syms* __restrict vlSymsp, std::string txtype, IData/*31:0*/ stream, std::string nm, std::string label, std::string desc, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_begin_tr\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_open_file__48__Vfuncout;
    __Vfunc_open_file__48__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> __Vfunc_get_stream_from_handle__49__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> __Vtask_open_recorder__50__Vfuncout;
    IData/*31:0*/ __Vtask_get_handle__51__Vfuncout;
    __Vtask_get_handle__51__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> unnamedblk5__DOT__stream_obj;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> unnamedblk5__DOT__recorder;
    {
        if (([&]() {
                    this->__VnoInFunc_open_file(vlSymsp, __Vfunc_open_file__48__Vfuncout);
                }(), (IData)(__Vfunc_open_file__48__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_tr_stream__Vclpkg.__VnoInFunc_get_stream_from_handle(vlSymsp, stream, __Vfunc_get_stream_from_handle__49__Vfuncout);
            unnamedblk5__DOT__stream_obj = __Vfunc_get_stream_from_handle__49__Vfuncout;
            if ((VlNull{} == unnamedblk5__DOT__stream_obj)) {
                begin_tr__Vfuncrtn = 0xffffffffU;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(unnamedblk5__DOT__stream_obj, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1018)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, nm, begin_time, txtype, __Vtask_open_recorder__50__Vfuncout);
            unnamedblk5__DOT__recorder = __Vtask_open_recorder__50__Vfuncout;
            VL_NULL_CHECK(unnamedblk5__DOT__recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1020)->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__51__Vfuncout);
            begin_tr__Vfuncrtn = __Vtask_get_handle__51__Vfuncout;
            goto __Vlabel0;
        }
        begin_tr__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_end_tr(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ handle, QData/*63:0*/ end_time) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_end_tr\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_open_file__52__Vfuncout;
    __Vfunc_open_file__52__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> __Vfunc_get_recorder_from_handle__53__Vfuncout;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> unnamedblk6__DOT__record;
    if (([&]() {
                this->__VnoInFunc_open_file(vlSymsp, __Vfunc_open_file__52__Vfuncout);
            }(), (IData)(__Vfunc_open_file__52__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, __Vfunc_get_recorder_from_handle__53__Vfuncout);
        unnamedblk6__DOT__record = __Vfunc_get_recorder_from_handle__53__Vfuncout;
        if ((VlNull{} != unnamedblk6__DOT__record)) {
            VL_NULL_CHECK(unnamedblk6__DOT__record, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1033)->__VnoInFunc_close(vlSymsp, end_time);
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_link_tr(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ h1, IData/*31:0*/ h2, std::string relation) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_link_tr\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_open_file__55__Vfuncout;
    __Vfunc_open_file__55__Vfuncout = 0;
    // Body
    if (VL_UNLIKELY((([&]() {
                        this->__VnoInFunc_open_file(vlSymsp, __Vfunc_open_file__55__Vfuncout);
                    }(), (IData)(__Vfunc_open_file__55__Vfuncout))))) {
        VL_FWRITEF_NX(VL_NULL_CHECK(this->__PVT__m_text_db, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1046)
                      ->__PVT__m_file,"  LINK @%0^ {TXH1:%0d TXH2:%0d RELATION=%0@}\n",0,
                      64,VL_TIME_UNITED_D(1),-12,32,
                      h1,32,h2,-1,&(relation));
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_free_tr(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ handle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_free_tr\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_open_file__56__Vfuncout;
    __Vfunc_open_file__56__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> __Vfunc_get_recorder_from_handle__57__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_recorder> unnamedblk7__DOT__record;
    if (([&]() {
                this->__VnoInFunc_open_file(vlSymsp, __Vfunc_open_file__56__Vfuncout);
            }(), (IData)(__Vfunc_open_file__56__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, handle, __Vfunc_get_recorder_from_handle__57__Vfuncout);
        unnamedblk7__DOT__record = __Vfunc_get_recorder_from_handle__57__Vfuncout;
        if ((VlNull{} != unnamedblk7__DOT__record)) {
            VL_NULL_CHECK(unnamedblk7__DOT__record, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_recorder.svh", 1058)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__60__Vfuncout;
    __Vfunc___VBasicRand__60__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__60__Vfuncout);
            }(), __Vfunc___VBasicRand__60__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__filename_set = 0;
    VL_ZERO_RESET_W(115200, __Vfunc_uvm_string_to_bits__31__Vfuncout);
}

Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::~Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_text_recorder::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_text_db:" + VL_TO_STRING(__PVT__m_text_db);
    out += ", m_object_names:" + VL_TO_STRING(__PVT__m_object_names);
    out += ", filename:" + VL_TO_STRING(__PVT__filename);
    out += ", filename_set:" + VL_TO_STRING(__PVT__filename_set);
    out += ", __Vfunc_uvm_string_to_bits__31__Vfuncout:" + VL_TO_STRING_W(3600, __Vfunc_uvm_string_to_bits__31__Vfuncout);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_recorder::to_string_middle();
    return (out);
}
