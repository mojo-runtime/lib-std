#ifndef ENODEV

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENODEV 19
#else
#  error
#endif

#endif
