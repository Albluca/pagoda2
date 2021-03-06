% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/pagodaWebSelections.R
\name{getCellsInSelections}
\alias{getCellsInSelections}
\title{Returns all the cells that are in the designated selections}
\usage{
getCellsInSelections(p2selections, selectionNames)
}
\arguments{
\item{p2selections}{a p2 selections object}

\item{selectionNames}{the names of some selections in th p2 object}
}
\value{
a character vector of cell names
}
\description{
Given a pagoda2 selections object and the names of some selections
in it returns the names of the cells that are in these selections removed any duplicates
}
