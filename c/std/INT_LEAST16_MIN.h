#ifndef INT_LEAST16_MIN

#include "../__SIGNED_INTEGER_REPRESENTATION.h"

#if __SIGNED_INTEGER_REPRESENTATION == __SIGNED_INTEGER_REPRESENTATION_TWOS_COMPLEMENT
#  include "INT_LEAST16_MAX.h"
#  define INT_LEAST16_MIN (-INT_LEAST16_MAX - 1)
#else
#  error
#endif

#endif
