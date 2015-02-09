#ifndef c_O_NOFOLLOW_h_
#define c_O_NOFOLLOW_h_

#include "c/OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const OpenFlags
O_NOFOLLOW =
#ifdef __linux__
#  ifdef __x86_64__
 0400000 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
