/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 or 0, depending on whether the compiler supports the gcc
   deprecated attribute. */
#define HAVE_ATTRIBUTE_DEPRECATED 1

/* Define to 1 or 0, depending on whether the compiler supports the
   format(printf) attribute. */
#define HAVE_ATTRIBUTE_FORMAT 1

/* Define to 1 or 0, depending on whether the compiler supports the gcc packed
   attribute. */
#define HAVE_ATTRIBUTE_PACKED 1

/* Define to 1 or 0, depending on whether the compiler supports the pure
   attribute. */
#define HAVE_ATTRIBUTE_PURE 1

/* Define to 1 or 0, depending on whether the compiler supports the gcc unused
   attribute. */
#define HAVE_ATTRIBUTE_UNUSED 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* "Compiled with http support" */
#define HAVE_HTTP 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* "Compiled with bzip2 support" */
#define HAVE_LIBBZ2 1

/* "Compiled with lzma support" */
#define HAVE_LIBLZMA 0

/* "Compiled with lzo2 support" */
#define HAVE_LIBLZO2 0

/* Set to 1 if pthreads are supported */
#define HAVE_LIBPTHREAD 1

/* "Compiled with zlib support" */
#define HAVE_LIBZ 1

/* "Compiled with zstd support" */
#define HAVE_LIBZSTD 0

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if your system has a GNU libc compatible `realloc' function,
   and to 0 otherwise. */
#define HAVE_REALLOC 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#define HAVE_VISIBILITY 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "wandio"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "contact@wand.net.nz"

/* Define to the full name of this package. */
#define PACKAGE_NAME "wandio"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "wandio 4.0.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "wandio"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.0.0"

/* The size of `long int', as computed by sizeof. */
#define SIZEOF_LONG_INT 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Version number of package */
#define VERSION "4.0.0"

/* wandio major version */
#define WANDIO_MAJOR ${WANDIO_MAJOR}

/* wandio mid version */
#define WANDIO_MID ${WANDIO_MID}

/* wandio minor version */
#define WANDIO_MINOR ${WANDIO_MINOR}

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to rpl_realloc if the replacement function should be used. */
/* #undef realloc */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
