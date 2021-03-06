% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/pagodaWebSelections.R
\name{readPagoda2SelectionFile}
\alias{readPagoda2SelectionFile}
\title{reads a pagoda2 web app exported cell selection file}
\usage{
readPagoda2SelectionFile(filepath)
}
\arguments{
\item{filepath}{the path of the file load}
}
\description{
reads a cell selection file exported by pagoda2 web interface as a list
of list objects that contain the name of the selection, the color (as a hex string) and the
identifiers of the individual cells
}
