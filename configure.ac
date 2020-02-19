AC_INIT([helloworld],
        [0.1],
        [https://stackoverflow.com/questions/60205338/how-a-c-program-cpp-work-with-header-h-and-libtool-la],
        [helloworld],
        [https://stackoverflow.com/questions/60205338/how-a-c-program-cpp-work-with-header-h-and-libtool-la])
AC_CONFIG_SRCDIR([lib/helloworld.cpp])
AC_CONFIG_HEADERS([helloworld-config.h])
AC_CONFIG_MACRO_DIR([auto-m4])
AC_CONFIG_AUX_DIR([auto-aux])
AM_INIT_AUTOMAKE([
-Wall
-Werror
foreign
subdir-objects
])

AC_PROG_CXX
AM_PROG_AR
LT_INIT([disable-static])

AC_LANG([C++])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
