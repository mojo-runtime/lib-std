#ifndef ENOTDIR

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENOTDIR 20
#else
#  error
#endif

#endif
