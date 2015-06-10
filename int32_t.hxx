#pragma once

namespace std {

#if defined(__INT32_TYPE__)
typedef __INT32_TYPE__ int32_t;
#else
#  error
#endif

}
