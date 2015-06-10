#pragma once

namespace std {

#if defined(__UINT_FAST16_TYPE__)
typedef __UINT_FAST16_TYPE__ uint_fast16_t;
#else
#  error
#endif

}
