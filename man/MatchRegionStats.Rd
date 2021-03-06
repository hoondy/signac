% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utilities.R
\name{MatchRegionStats}
\alias{MatchRegionStats}
\title{Match DNA sequence characteristics}
\usage{
MatchRegionStats(
  meta.feature,
  regions,
  features.match = c("GC.percent"),
  n = 10000,
  verbose = TRUE,
  ...
)
}
\arguments{
\item{meta.feature}{A dataframe containing DNA sequence information}

\item{regions}{Set of query regions. Must be present in rownames.}

\item{features.match}{Which features of the query to match when selecting a
set of regions. A vector of column names present in the feature metadata can
be supplied to match multiple characteristics at once. Default is GC content.}

\item{n}{Number of regions to select, with characteristics matching the query}

\item{verbose}{Display messages}

\item{...}{Arguments passed to other functions}
}
\value{
Returns a character vector
}
\description{
Return a vector if genomic regions that match the distribution of a set of
query regions for any given set of characteristics, specified in the input
\code{meta.feature} dataframe.
}
\examples{
metafeatures <- Seurat::GetAssayData(
  object = atac_small[['peaks']], slot = 'meta.features'
)
MatchRegionStats(
  meta.feature = metafeatures,
  regions = head(rownames(metafeatures), 10),
  features.match = "percentile",
  n = 10
)
}
\concept{motifs}
\concept{utilities}
