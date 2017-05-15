// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/pagoda2.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// non0LogColLmS
int non0LogColLmS(SEXP sY, const arma::mat& X, const arma::vec& ldepth, const int maxCells);
RcppExport SEXP pagoda2_non0LogColLmS(SEXP sYSEXP, SEXP XSEXP, SEXP ldepthSEXP, SEXP maxCellsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type ldepth(ldepthSEXP);
    Rcpp::traits::input_parameter< const int >::type maxCells(maxCellsSEXP);
    rcpp_result_gen = Rcpp::wrap(non0LogColLmS(sY, X, ldepth, maxCells));
    return rcpp_result_gen;
END_RCPP
}
// colMeanVarS
Rcpp::DataFrame colMeanVarS(SEXP sY, SEXP rowSel);
RcppExport SEXP pagoda2_colMeanVarS(SEXP sYSEXP, SEXP rowSelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rowSel(rowSelSEXP);
    rcpp_result_gen = Rcpp::wrap(colMeanVarS(sY, rowSel));
    return rcpp_result_gen;
END_RCPP
}
// colSumByFac
arma::mat colSumByFac(SEXP sY, SEXP rowSel);
RcppExport SEXP pagoda2_colSumByFac(SEXP sYSEXP, SEXP rowSelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rowSel(rowSelSEXP);
    rcpp_result_gen = Rcpp::wrap(colSumByFac(sY, rowSel));
    return rcpp_result_gen;
END_RCPP
}
// inplaceColMult
int inplaceColMult(SEXP sY, const arma::vec& mult, SEXP rowSel);
RcppExport SEXP pagoda2_inplaceColMult(SEXP sYSEXP, SEXP multSEXP, SEXP rowSelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mult(multSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rowSel(rowSelSEXP);
    rcpp_result_gen = Rcpp::wrap(inplaceColMult(sY, mult, rowSel));
    return rcpp_result_gen;
END_RCPP
}
// inplaceWinsorizeSparseCols
int inplaceWinsorizeSparseCols(SEXP sY, const int n);
RcppExport SEXP pagoda2_inplaceWinsorizeSparseCols(SEXP sYSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< const int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(inplaceWinsorizeSparseCols(sY, n));
    return rcpp_result_gen;
END_RCPP
}
// jsDist
arma::mat jsDist(const arma::mat& m);
RcppExport SEXP pagoda2_jsDist(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(jsDist(m));
    return rcpp_result_gen;
END_RCPP
}
// orderColumnRows
arma::ivec orderColumnRows(const arma::ivec& p, arma::ivec& i);
RcppExport SEXP pagoda2_orderColumnRows(SEXP pSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::ivec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(orderColumnRows(p, i));
    return rcpp_result_gen;
END_RCPP
}
// smatColVecCorr
arma::vec smatColVecCorr(SEXP sY, SEXP sv, bool parallel);
RcppExport SEXP pagoda2_smatColVecCorr(SEXP sYSEXP, SEXP svSEXP, SEXP parallelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sY(sYSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sv(svSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    rcpp_result_gen = Rcpp::wrap(smatColVecCorr(sY, sv, parallel));
    return rcpp_result_gen;
END_RCPP
}
// hnswKnn
vector<vector<int32_t> > hnswKnn(NumericMatrix m, int efConstruction, int indexThreadQty, int searchMethod);
RcppExport SEXP pagoda2_hnswKnn(SEXP mSEXP, SEXP efConstructionSEXP, SEXP indexThreadQtySEXP, SEXP searchMethodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type efConstruction(efConstructionSEXP);
    Rcpp::traits::input_parameter< int >::type indexThreadQty(indexThreadQtySEXP);
    Rcpp::traits::input_parameter< int >::type searchMethod(searchMethodSEXP);
    rcpp_result_gen = Rcpp::wrap(hnswKnn(m, efConstruction, indexThreadQty, searchMethod));
    return rcpp_result_gen;
END_RCPP
}
// hnswKnn2
DataFrame hnswKnn2(NumericMatrix m, int k, int nThreads, int efConstruction, int indexThreadQty, int searchMethod, int seed, bool verbose);
RcppExport SEXP pagoda2_hnswKnn2(SEXP mSEXP, SEXP kSEXP, SEXP nThreadsSEXP, SEXP efConstructionSEXP, SEXP indexThreadQtySEXP, SEXP searchMethodSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< int >::type efConstruction(efConstructionSEXP);
    Rcpp::traits::input_parameter< int >::type indexThreadQty(indexThreadQtySEXP);
    Rcpp::traits::input_parameter< int >::type searchMethod(searchMethodSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(hnswKnn2(m, k, nThreads, efConstruction, indexThreadQty, searchMethod, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// hnswKnnJS
DataFrame hnswKnnJS(NumericMatrix m, int k, int nThreads, int efConstruction, int indexThreadQty, int searchMethod, int seed);
RcppExport SEXP pagoda2_hnswKnnJS(SEXP mSEXP, SEXP kSEXP, SEXP nThreadsSEXP, SEXP efConstructionSEXP, SEXP indexThreadQtySEXP, SEXP searchMethodSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< int >::type efConstruction(efConstructionSEXP);
    Rcpp::traits::input_parameter< int >::type indexThreadQty(indexThreadQtySEXP);
    Rcpp::traits::input_parameter< int >::type searchMethod(searchMethodSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(hnswKnnJS(m, k, nThreads, efConstruction, indexThreadQty, searchMethod, seed));
    return rcpp_result_gen;
END_RCPP
}
// hnswKnnLp
DataFrame hnswKnnLp(NumericMatrix m, int k, int nThreads, float p, int efConstruction, int indexThreadQty, int searchMethod, int seed, bool verbose);
RcppExport SEXP pagoda2_hnswKnnLp(SEXP mSEXP, SEXP kSEXP, SEXP nThreadsSEXP, SEXP pSEXP, SEXP efConstructionSEXP, SEXP indexThreadQtySEXP, SEXP searchMethodSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< float >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type efConstruction(efConstructionSEXP);
    Rcpp::traits::input_parameter< int >::type indexThreadQty(indexThreadQtySEXP);
    Rcpp::traits::input_parameter< int >::type searchMethod(searchMethodSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(hnswKnnLp(m, k, nThreads, p, efConstruction, indexThreadQty, searchMethod, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// hnswKnn3test
DataFrame hnswKnn3test(NumericMatrix m, int k, int multiplex, int nqueries, int nThreads, int efConstruction, int indexThreadQty, int searchMethod, int seed, bool verbose);
RcppExport SEXP pagoda2_hnswKnn3test(SEXP mSEXP, SEXP kSEXP, SEXP multiplexSEXP, SEXP nqueriesSEXP, SEXP nThreadsSEXP, SEXP efConstructionSEXP, SEXP indexThreadQtySEXP, SEXP searchMethodSEXP, SEXP seedSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type multiplex(multiplexSEXP);
    Rcpp::traits::input_parameter< int >::type nqueries(nqueriesSEXP);
    Rcpp::traits::input_parameter< int >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< int >::type efConstruction(efConstructionSEXP);
    Rcpp::traits::input_parameter< int >::type indexThreadQty(indexThreadQtySEXP);
    Rcpp::traits::input_parameter< int >::type searchMethod(searchMethodSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(hnswKnn3test(m, k, multiplex, nqueries, nThreads, efConstruction, indexThreadQty, searchMethod, seed, verbose));
    return rcpp_result_gen;
END_RCPP
}
// winsorizeMatrix
SEXP winsorizeMatrix(SEXP Mat, SEXP Trim);
RcppExport SEXP pagoda2_winsorizeMatrix(SEXP MatSEXP, SEXP TrimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Mat(MatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Trim(TrimSEXP);
    rcpp_result_gen = Rcpp::wrap(winsorizeMatrix(Mat, Trim));
    return rcpp_result_gen;
END_RCPP
}
// avg_rank
Rcpp::NumericVector avg_rank(Rcpp::NumericVector x);
RcppExport SEXP pagoda2_avg_rank(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(avg_rank(x));
    return rcpp_result_gen;
END_RCPP
}
// sparse_matrix_column_ranks
S4 sparse_matrix_column_ranks(const SEXP sY);
RcppExport SEXP pagoda2_sparse_matrix_column_ranks(SEXP sYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type sY(sYSEXP);
    rcpp_result_gen = Rcpp::wrap(sparse_matrix_column_ranks(sY));
    return rcpp_result_gen;
END_RCPP
}
// nearbyPointsGreedyCluster
IntegerVector nearbyPointsGreedyCluster(NumericVector p, double windowSize);
RcppExport SEXP pagoda2_nearbyPointsGreedyCluster(SEXP pSEXP, SEXP windowSizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type windowSize(windowSizeSEXP);
    rcpp_result_gen = Rcpp::wrap(nearbyPointsGreedyCluster(p, windowSize));
    return rcpp_result_gen;
END_RCPP
}
// closestNPointsToSegments
List closestNPointsToSegments(NumericVector s, NumericVector e, NumericVector p, IntegerVector tss, int N);
RcppExport SEXP pagoda2_closestNPointsToSegments(SEXP sSEXP, SEXP eSEXP, SEXP pSEXP, SEXP tssSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type e(eSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type tss(tssSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(closestNPointsToSegments(s, e, p, tss, N));
    return rcpp_result_gen;
END_RCPP
}
// closestNSegmentsToPoints
List closestNSegmentsToPoints(NumericVector s, NumericVector e, NumericVector p, IntegerVector tss, int N);
RcppExport SEXP pagoda2_closestNSegmentsToPoints(SEXP sSEXP, SEXP eSEXP, SEXP pSEXP, SEXP tssSEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type s(sSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type e(eSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type tss(tssSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(closestNSegmentsToPoints(s, e, p, tss, N));
    return rcpp_result_gen;
END_RCPP
}
