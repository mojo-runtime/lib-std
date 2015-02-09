#ifndef c_POLLHUP_h_
#define c_POLLHUP_h_

#include "c/PollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const PollEvents
POLLHUP =
#ifdef __linux__
 0x10
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
