#pragma once

namespace std {

#if defined(__INT_FAST32_TYPE__)
typedef __INT_FAST32_TYPE__ int_fast32_t;
#else
#  error
#endif

}
