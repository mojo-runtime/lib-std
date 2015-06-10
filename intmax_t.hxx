#pragma once

namespace std {

#if defined(__INTMAX_TYPE__)
typedef __INTMAX_TYPE__ intmax_t;
#else
#  error
#endif

}
