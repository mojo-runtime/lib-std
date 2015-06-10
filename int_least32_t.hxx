#pragma once

namespace std {

#if defined(__INT_LEAST32_TYPE__)
typedef __INT_LEAST32_TYPE__ int_least32_t;
#else
#  error
#endif

}
