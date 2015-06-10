#pragma once

namespace std {

#if defined(__INT_FAST8_TYPE__)
typedef __INT_FAST8_TYPE__ int_fast8_t;
#else
#  error
#endif

}
