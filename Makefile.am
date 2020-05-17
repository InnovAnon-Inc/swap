# Install the pkg-config file.
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = src/swap.pc

DISTCLEANFILES = $(pkgconfig_DATA)
EXTRA_DIST = src/swap.pc.in

#SUBDIRS = glitter src
SUBDIRS = src
dist_doc_DATA = README.md
ACLOCAL_AMFLAGS = -I m4

