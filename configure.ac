# ----------------------------------------------------------------------
#
#                           Brad T. Aagaard
#                        U.S. Geological Survey
#
# ----------------------------------------------------------------------

AC_PREREQ(2.59)
AC_INIT([codecov-test], [0.1.0], [baagaard@usgs.gov])
AC_CONFIG_HEADER([portinfo])
AC_CONFIG_AUX_DIR([./aux-config])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign subdir-objects tar-pax])

# ----------------------------------------------------------------------

AC_PROG_CXX
AC_PROG_CC
AC_PROG_LIBTOOL
AC_PROG_INSTALL

AC_PROG_LIBTOOL
if test "$allow_undefined_flag" = unsupported; then
    AM_LDFLAGS="-no-undefined $AM_LDFLAGS"
fi
AM_CONDITIONAL([NO_UNDEFINED], [test "$allow_undefined_flag" = unsupported])
AC_SUBST(AM_LDFLAGS)

# ----------------------------------------------------------------------
AC_REQUIRE_CPP
AC_LANG(C++)

AX_CXX_COMPILE_STDCXX(11)

CIT_CPPUNIT_HEADER
CIT_CPPUNIT_LIB

# ----------------------------------------------------------------------
AC_CONFIG_FILES([Makefile
	libsrc/Makefile
	tests/Makefile
	tests/libtests/Makefile
	])

AC_OUTPUT


# End of file
