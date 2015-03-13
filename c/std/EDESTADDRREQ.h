#ifndef EDESTADDRREQ

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EDESTADDRREQ 89
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EDESTADDRREQ 39
#else
#  error
#endif

#endif