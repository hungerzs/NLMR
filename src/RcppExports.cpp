// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// core_2d
NumericVector core_2d(NumericVector H, NumericVector X, NumericVector Y, int n, int kx, int ky, NumericVector res);
RcppExport SEXP _NLMR_core_2d(SEXP HSEXP, SEXP XSEXP, SEXP YSEXP, SEXP nSEXP, SEXP kxSEXP, SEXP kySEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type H(HSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type kx(kxSEXP);
    Rcpp::traits::input_parameter< int >::type ky(kySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(core_2d(H, X, Y, n, kx, ky, res));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_NLMR_core_2d", (DL_FUNC) &_NLMR_core_2d, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_NLMR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}