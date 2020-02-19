Example C++ library and executable
==================================

This is an example for building a C++ library and executable using
Automake generated to answer this stackoverflow [question on C++ header, library, and executable building with Automake](https://stackoverflow.com/questions/60205338/how-a-c-program-cpp-work-with-header-h-and-libtool-la).

Some things this does well are:

  * Parallel builds due to avoiding recursive make.

  * Rebuilding library and/or executable when the respective sources
    have changed.

  * No special rules in src/ are required to make sure the library is
    rebuilt.

Some things not addressed here are:

  * Library soname, especially for cross-platform use.

  * Translation using gettext (this will require a po/ subdirectory
    with a recursive build, i.e. `Makefile.am` will need a `SUBDIRS`).
