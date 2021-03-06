% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/objects.R
\docType{class}
\name{ChromatinAssay-class}
\alias{ChromatinAssay-class}
\alias{ChromatinAssay}
\title{The ChromatinAssay class}
\description{
The ChramatinAssay object is an extended \code{\link[Seurat]{Assay}}
for the storage and analysis of single-cell chromatin data.
}
\section{Slots}{

\describe{
\item{\code{ranges}}{A \code{\link[GenomicRanges]{GRanges}} object describing the
genomic location of features in the object}

\item{\code{motifs}}{A \code{\link{Motif}} object}

\item{\code{fragments}}{A list of \code{\link{Fragment}} objects.}

\item{\code{seqinfo}}{A \code{\link[GenomeInfoDb]{Seqinfo}} object containing basic
information about the genome sequence used.}

\item{\code{annotation}}{A  \code{\link[GenomicRanges]{GRanges}} object containing
genomic annotations}

\item{\code{bias}}{A vector containing Tn5 integration bias information
(frequency of Tn5 integration at different kmers)}

\item{\code{positionEnrichment}}{A named list of matrices containing positional
enrichment scores for Tn5 integration (for example, enrichment at the TSS)}

\item{\code{links}}{A \code{\link[GenomicRanges]{GRanges}} object describing linked
genomic positions, such as co-accessible sites or enhancer-gene regulatory
relationships.}
}}

\concept{assay}
