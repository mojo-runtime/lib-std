#pragma once

namespace std {

#if defined(__UINT_LEAST64_TYPE__)
typedef __UINT_LEAST64_TYPE__ uint_least64_t;
#else
#  error
#endif

}
