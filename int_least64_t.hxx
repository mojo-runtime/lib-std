#pragma once

namespace std {

#if defined(__INT_LEAST64_TYPE__)
typedef __INT_LEAST64_TYPE__ int_least64_t;
#else
#  error
#endif

}
