#pragma once

namespace std {

#if defined(__UINT_LEAST8_TYPE__)
typedef __UINT_LEAST8_TYPE__ uint_least8_t;
#else
#  error
#endif

}
