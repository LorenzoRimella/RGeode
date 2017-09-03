// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Cexptr
NumericVector Cexptr(int n, double lambda, NumericVector range);
RcppExport SEXP RGeode_Cexptr(SEXP nSEXP, SEXP lambdaSEXP, SEXP rangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type range(rangeSEXP);
    rcpp_result_gen = Rcpp::wrap(Cexptr(n, lambda, range));
    return rcpp_result_gen;
END_RCPP
}
// Cgammatr
NumericVector Cgammatr(int n, double A, double B, NumericVector range);
RcppExport SEXP RGeode_Cgammatr(SEXP nSEXP, SEXP ASEXP, SEXP BSEXP, SEXP rangeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type range(rangeSEXP);
    rcpp_result_gen = Rcpp::wrap(Cgammatr(n, A, B, range));
    return rcpp_result_gen;
END_RCPP
}
// CgenerateTau_root
NumericVector CgenerateTau_root(NumericVector U, NumericVector t, double a, int d);
RcppExport SEXP RGeode_CgenerateTau_root(SEXP USEXP, SEXP tSEXP, SEXP aSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type U(USEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(CgenerateTau_root(U, t, a, d));
    return rcpp_result_gen;
END_RCPP
}
// CgenerateU_root
NumericVector CgenerateU_root(NumericVector prodTau, int N, double SIGMAS, NumericMatrix Z);
RcppExport SEXP RGeode_CgenerateU_root(SEXP prodTauSEXP, SEXP NSEXP, SEXP SIGMASSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prodTau(prodTauSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< double >::type SIGMAS(SIGMASSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(CgenerateU_root(prodTau, N, SIGMAS, Z));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"RGeode_Cexptr", (DL_FUNC) &RGeode_Cexptr, 3},
    {"RGeode_Cgammatr", (DL_FUNC) &RGeode_Cgammatr, 4},
    {"RGeode_CgenerateTau_root", (DL_FUNC) &RGeode_CgenerateTau_root, 4},
    {"RGeode_CgenerateU_root", (DL_FUNC) &RGeode_CgenerateU_root, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_RGeode(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
