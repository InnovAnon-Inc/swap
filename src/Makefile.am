AM_CPPFLAGS = -D__STDC_INT64__

SUBDIRS = ../glitter
AM_CPPFLAGS += -I $(top_srcdir)/glitter/src

lib_LTLIBRARIES =
include_HEADERS =
bin_PROGRAMS    =

LIBSWAP_LIBADD =

lib_LTLIBRARIES += libswap.la
libswap_la_LIBADD = $(LIBSWAP_LIBADD)
include_HEADERS += swap.h
#bin_PROGRAMS += swap-test
#swap_test_LDADD = libswap.la
