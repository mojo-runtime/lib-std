#pragma once

namespace std {

#if defined(__INT16_TYPE__)
typedef __INT16_TYPE__ int16_t;
#else
#  error
#endif

}
