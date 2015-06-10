#pragma once

namespace std {

#if defined(__UINT_FAST32_TYPE__)
typedef __UINT_FAST32_TYPE__ uint_fast32_t;
#else
#  error
#endif

}
