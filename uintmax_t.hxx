#pragma once

namespace std {

#if defined(__UINTMAX_TYPE__)
typedef __UINTMAX_TYPE__ uintmax_t;
#else
#  error
#endif

}
