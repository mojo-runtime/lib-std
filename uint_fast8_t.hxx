#pragma once

namespace std {

#if defined(__UINT_FAST8_TYPE__)
typedef __UINT_FAST8_TYPE__ uint_fast8_t;
#else
#  error
#endif

}
