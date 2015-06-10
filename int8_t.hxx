#pragma once

namespace std {

#if defined(__INT8_TYPE__)
typedef __INT8_TYPE__ int8_t;
#else
#  error
#endif

}
