## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	$(gtk_lookup_test_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = gtk_lookup_test

gtk_lookup_test_SOURCES = \
	callbacks.c \
	callbacks.h \
	main.c \
	interface.c \
	interface.h \
	support.c \
	support.h

gtk_lookup_test_LDFLAGS = \
	-Wl,--export-dynamic

gtk_lookup_test_LDADD = $(gtk_lookup_test_LIBS)
