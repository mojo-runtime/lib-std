#pragma once

namespace std {

#if defined(__UINT_LEAST16_TYPE__)
typedef __UINT_LEAST16_TYPE__ uint_least16_t;
#else
#  error
#endif

}
