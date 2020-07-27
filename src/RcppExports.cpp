// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// filterCells
int filterCells(std::string fragments, std::string outfile, std::vector<std::string> keep_cells, int buffer_length, bool verbose);
RcppExport SEXP _Signac_filterCells(SEXP fragmentsSEXP, SEXP outfileSEXP, SEXP keep_cellsSEXP, SEXP buffer_lengthSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fragments(fragmentsSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type keep_cells(keep_cellsSEXP);
    Rcpp::traits::input_parameter< int >::type buffer_length(buffer_lengthSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(filterCells(fragments, outfile, keep_cells, buffer_length, verbose));
    return rcpp_result_gen;
END_RCPP
}
// groupCommand
SEXP groupCommand(std::string fragments, Rcpp::Nullable<Rcpp::StringVector> some_whitelist_cells, std::size_t max_lines, bool verbose);
RcppExport SEXP _Signac_groupCommand(SEXP fragmentsSEXP, SEXP some_whitelist_cellsSEXP, SEXP max_linesSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fragments(fragmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type some_whitelist_cells(some_whitelist_cellsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type max_lines(max_linesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(groupCommand(fragments, some_whitelist_cells, max_lines, verbose));
    return rcpp_result_gen;
END_RCPP
}
// validateCells
bool validateCells(std::string fragments, std::vector<std::string> cells, std::size_t find_n, std::size_t max_lines, bool verbose);
RcppExport SEXP _Signac_validateCells(SEXP fragmentsSEXP, SEXP cellsSEXP, SEXP find_nSEXP, SEXP max_linesSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fragments(fragmentsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type cells(cellsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type find_n(find_nSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type max_lines(max_linesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(validateCells(fragments, cells, find_n, max_lines, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Signac_filterCells", (DL_FUNC) &_Signac_filterCells, 5},
    {"_Signac_groupCommand", (DL_FUNC) &_Signac_groupCommand, 4},
    {"_Signac_validateCells", (DL_FUNC) &_Signac_validateCells, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_Signac(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}