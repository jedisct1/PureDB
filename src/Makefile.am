
lib_LTLIBRARIES = libpuredb_read.la libpuredb_write.la

include_HEADERS = puredb_read.h puredb_write.h

bin_PROGRAMS = example_read example_write

noinst_PROGRAMS = regression

libpuredb_read_la_SOURCES = puredb_read.c puredb_read.h puredb_p.h

libpuredb_write_la_SOURCES = puredb_write.c puredb_write.h puredb_p.h

example_read_LDADD = libpuredb_read.la

example_write_LDADD = libpuredb_write.la

regression_LDADD = libpuredb_read.la libpuredb_write.la

example_read_SOURCES = example_read.c puredb_read.h

example_write_SOURCES = example_write.c puredb_write.h

regression_SOURCES = regression.c puredb_read.h puredb_write.h puredb_p.h



