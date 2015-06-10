#pragma once

namespace std {

#if defined(__UINT_LEAST32_TYPE__)
typedef __UINT_LEAST32_TYPE__ uint_least32_t;
#else
#  error
#endif

}
