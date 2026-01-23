// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Verror_handling_example__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Verror_handling_example::Verror_handling_example(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Verror_handling_example__Syms(contextp(), _vcname__, this)}
    , __PVT__error_handling_pkg{vlSymsp->TOP.__PVT__error_handling_pkg}
    , error_handling_pkg__03a__03aVerificationException__Vclpkg{vlSymsp->TOP.error_handling_pkg__03a__03aVerificationException__Vclpkg}
    , error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg{vlSymsp->TOP.error_handling_pkg__03a__03aErrorHandlingComponent__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Verror_handling_example::Verror_handling_example(const char* _vcname__)
    : Verror_handling_example(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Verror_handling_example::~Verror_handling_example() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Verror_handling_example___024root___eval_debug_assertions(Verror_handling_example___024root* vlSelf);
#endif  // VL_DEBUG
void Verror_handling_example___024root___eval_static(Verror_handling_example___024root* vlSelf);
void Verror_handling_example___024root___eval_initial(Verror_handling_example___024root* vlSelf);
void Verror_handling_example___024root___eval_settle(Verror_handling_example___024root* vlSelf);
void Verror_handling_example___024root___eval(Verror_handling_example___024root* vlSelf);

void Verror_handling_example::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Verror_handling_example::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Verror_handling_example___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Verror_handling_example___024root___eval_static(&(vlSymsp->TOP));
        Verror_handling_example___024root___eval_initial(&(vlSymsp->TOP));
        Verror_handling_example___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Verror_handling_example___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Verror_handling_example::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Verror_handling_example::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Verror_handling_example::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Verror_handling_example___024root___eval_final(Verror_handling_example___024root* vlSelf);

VL_ATTR_COLD void Verror_handling_example::final() {
    Verror_handling_example___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Verror_handling_example::hierName() const { return vlSymsp->name(); }
const char* Verror_handling_example::modelName() const { return "Verror_handling_example"; }
unsigned Verror_handling_example::threads() const { return 1; }
void Verror_handling_example::prepareClone() const { contextp()->prepareClone(); }
void Verror_handling_example::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Verror_handling_example::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Verror_handling_example___024root__trace_decl_types(VerilatedVcd* tracep);

void Verror_handling_example___024root__trace_init_top(Verror_handling_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Verror_handling_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Verror_handling_example___024root*>(voidSelf);
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Verror_handling_example___024root__trace_decl_types(tracep);
    Verror_handling_example___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Verror_handling_example___024root__trace_register(Verror_handling_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Verror_handling_example::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Verror_handling_example::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Verror_handling_example___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
