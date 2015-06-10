#pragma once

namespace std {

#if defined(__INT_FAST64_TYPE__)
typedef __INT_FAST64_TYPE__ int_fast64_t;
#else
#  error
#endif

}
