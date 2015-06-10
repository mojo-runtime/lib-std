#pragma once

namespace std {

#if defined(__INT_LEAST8_TYPE__)
typedef __INT_LEAST8_TYPE__ int_least8_t;
#else
#  error
#endif

}
