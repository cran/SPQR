// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_init_stepsize_diag
double rcpp_init_stepsize_diag(const arma::vec& theta0, const arma::vec& Minv, const arma::vec& Misqrt, const arma::mat& X, const arma::mat& B, const Rcpp::List& param);
RcppExport SEXP _SPQR_rcpp_init_stepsize_diag(SEXP theta0SEXP, SEXP MinvSEXP, SEXP MisqrtSEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Minv(MinvSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Misqrt(MisqrtSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_init_stepsize_diag(theta0, Minv, Misqrt, X, B, param));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_init_stepsize_dense
double rcpp_init_stepsize_dense(const arma::vec& theta0, const arma::mat& Minv, const arma::mat& Misqrt, const arma::mat& X, const arma::mat& B, const Rcpp::List& param);
RcppExport SEXP _SPQR_rcpp_init_stepsize_dense(SEXP theta0SEXP, SEXP MinvSEXP, SEXP MisqrtSEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Minv(MinvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Misqrt(MisqrtSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_init_stepsize_dense(theta0, Minv, Misqrt, X, B, param));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_nuts_diag
Rcpp::List rcpp_nuts_diag(const arma::vec& q0, const arma::mat& X, const arma::mat& B, const Rcpp::List& param, const double& epsilon, const arma::vec& Minv, const arma::vec& Misqrt, const int& max_tree_depth, Rcpp::List& info);
RcppExport SEXP _SPQR_rcpp_nuts_diag(SEXP q0SEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP, SEXP epsilonSEXP, SEXP MinvSEXP, SEXP MisqrtSEXP, SEXP max_tree_depthSEXP, SEXP infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type q0(q0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Minv(MinvSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Misqrt(MisqrtSEXP);
    Rcpp::traits::input_parameter< const int& >::type max_tree_depth(max_tree_depthSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type info(infoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_nuts_diag(q0, X, B, param, epsilon, Minv, Misqrt, max_tree_depth, info));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_nuts_dense
Rcpp::List rcpp_nuts_dense(const arma::vec& q0, const arma::mat& X, const arma::mat& B, const Rcpp::List& param, const double& epsilon, const arma::mat& Minv, const arma::mat& Misqrt, const int& max_tree_depth, Rcpp::List& info);
RcppExport SEXP _SPQR_rcpp_nuts_dense(SEXP q0SEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP, SEXP epsilonSEXP, SEXP MinvSEXP, SEXP MisqrtSEXP, SEXP max_tree_depthSEXP, SEXP infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type q0(q0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Minv(MinvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Misqrt(MisqrtSEXP);
    Rcpp::traits::input_parameter< const int& >::type max_tree_depth(max_tree_depthSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type info(infoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_nuts_dense(q0, X, B, param, epsilon, Minv, Misqrt, max_tree_depth, info));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hmc_diag
Rcpp::List rcpp_hmc_diag(const arma::vec& q0, const arma::mat& X, const arma::mat& B, const Rcpp::List& param, const double& epsilon, const arma::vec& Minv, const arma::vec& Misqrt, const double& int_time, Rcpp::List& info);
RcppExport SEXP _SPQR_rcpp_hmc_diag(SEXP q0SEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP, SEXP epsilonSEXP, SEXP MinvSEXP, SEXP MisqrtSEXP, SEXP int_timeSEXP, SEXP infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type q0(q0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Minv(MinvSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Misqrt(MisqrtSEXP);
    Rcpp::traits::input_parameter< const double& >::type int_time(int_timeSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type info(infoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_hmc_diag(q0, X, B, param, epsilon, Minv, Misqrt, int_time, info));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hmc_dense
Rcpp::List rcpp_hmc_dense(const arma::vec& q0, const arma::mat& X, const arma::mat& B, const Rcpp::List& param, const double& epsilon, const arma::mat& Minv, const arma::mat& Misqrt, const double& int_time, Rcpp::List& info);
RcppExport SEXP _SPQR_rcpp_hmc_dense(SEXP q0SEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP, SEXP epsilonSEXP, SEXP MinvSEXP, SEXP MisqrtSEXP, SEXP int_timeSEXP, SEXP infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type q0(q0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Minv(MinvSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Misqrt(MisqrtSEXP);
    Rcpp::traits::input_parameter< const double& >::type int_time(int_timeSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type info(infoSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_hmc_dense(q0, X, B, param, epsilon, Minv, Misqrt, int_time, info));
    return rcpp_result_gen;
END_RCPP
}
// loglik_vec
Rcpp::NumericVector loglik_vec(const arma::vec& theta, const arma::mat& X, const arma::mat& B, const Rcpp::List& param);
RcppExport SEXP _SPQR_loglik_vec(SEXP thetaSEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_vec(theta, X, B, param));
    return rcpp_result_gen;
END_RCPP
}
// logprob
double logprob(const arma::vec& theta, const arma::mat& X, const arma::mat& B, const Rcpp::List& param);
RcppExport SEXP _SPQR_logprob(SEXP thetaSEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    rcpp_result_gen = Rcpp::wrap(logprob(theta, X, B, param));
    return rcpp_result_gen;
END_RCPP
}
// glogprob
arma::vec glogprob(const arma::vec& theta, const arma::mat& X, const arma::mat& B, const Rcpp::List& param);
RcppExport SEXP _SPQR_glogprob(SEXP thetaSEXP, SEXP XSEXP, SEXP BSEXP, SEXP paramSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type param(paramSEXP);
    rcpp_result_gen = Rcpp::wrap(glogprob(theta, X, B, param));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SPQR_rcpp_init_stepsize_diag", (DL_FUNC) &_SPQR_rcpp_init_stepsize_diag, 6},
    {"_SPQR_rcpp_init_stepsize_dense", (DL_FUNC) &_SPQR_rcpp_init_stepsize_dense, 6},
    {"_SPQR_rcpp_nuts_diag", (DL_FUNC) &_SPQR_rcpp_nuts_diag, 9},
    {"_SPQR_rcpp_nuts_dense", (DL_FUNC) &_SPQR_rcpp_nuts_dense, 9},
    {"_SPQR_rcpp_hmc_diag", (DL_FUNC) &_SPQR_rcpp_hmc_diag, 9},
    {"_SPQR_rcpp_hmc_dense", (DL_FUNC) &_SPQR_rcpp_hmc_dense, 9},
    {"_SPQR_loglik_vec", (DL_FUNC) &_SPQR_loglik_vec, 4},
    {"_SPQR_logprob", (DL_FUNC) &_SPQR_logprob, 4},
    {"_SPQR_glogprob", (DL_FUNC) &_SPQR_glogprob, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_SPQR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
