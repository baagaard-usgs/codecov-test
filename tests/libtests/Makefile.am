include $(top_srcdir)/check.am

TESTS = test_codecov

check_PROGRAMS = test_codecov

test_codecov_SOURCES = \
	TestSimple.cc \
	test_driver.cc

noinst_HEADERS =

test_codecov_LDFLAGS = $(AM_LDFLAGS)
test_codecov_LDADD = \
	-lcppunit -ldl \
	$(top_builddir)/libsrc/libcodecovtest.la


# End of file
