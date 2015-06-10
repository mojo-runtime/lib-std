#pragma once

namespace std {

#if defined(__INT_FAST16_TYPE__)
typedef __INT_FAST16_TYPE__ int_fast16_t;
#else
#  error
#endif

}
