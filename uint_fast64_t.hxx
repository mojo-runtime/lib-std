#pragma once

namespace std {

#if defined(__UINT_FAST64_TYPE__)
typedef __UINT_FAST64_TYPE__ uint_fast64_t;
#else
#  error
#endif

}
