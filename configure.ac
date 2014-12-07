AC_PREREQ([2.65])
AC_INIT([pure-db], [2.1],
  [https://github.com/jedisct1/PureDB/issues],
  [pure-db],
  [https://github.com/jedisct1/PureDB])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR(src/puredb_read.c)
AM_CONFIG_HEADER(config.h)
AM_INIT_AUTOMAKE([1.11 dist-bzip2 tar-ustar foreign subdir-objects])
AM_MAINTAINER_MODE
AM_DEP_TRACK

AC_SUBST(VERSION)
ISODATE=`date +%Y-%m-%d`
AC_SUBST(ISODATE)

dnl Checks for programs.
AC_PROG_INSTALL
AC_PROG_CC
AC_AIX
AC_ISC_POSIX
AC_PROG_CC_STDC
AM_PROG_LIBTOOL
CFLAGS="$CFLAGS -D_GNU_SOURCE=1"

AC_HEADER_STDC
AC_HEADER_STAT
AC_CHECK_HEADERS([unistd.h sys/param.h ioctl.h sys/ioctl.h string.h strings.h])
AC_CHECK_HEADERS([netinet/in_systm.h netinet/in.h])
AC_CHECK_HEADERS([fcntl.h sys/fcntl.h])
AC_CHECK_HEADERS([windows.h io.h])

AC_SUBST([MAINT])

dnl Checks
AC_PROG_CC
AC_USE_SYSTEM_EXTENSIONS

dnl Checks for types
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_TYPE_OFF_T
AC_TYPE_MODE_T

dnl Checks for library functions.
AC_FUNC_ALLOCA
AC_FUNC_MMAP
AC_CHECK_FUNCS([memset munmap strdup fileno mapviewoffile])

dnl Options
AC_ARG_WITH(minimal,
[AC_HELP_STRING([--with-minimal],[Optimize for size, not for speed])],
[ if test "x$withval" = "xyes" ; then
    AC_DEFINE(MINIMAL,,[with minimal])
  fi ])

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
