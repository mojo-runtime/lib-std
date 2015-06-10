#pragma once

namespace std {

#if defined(__INT_LEAST16_TYPE__)
typedef __INT_LEAST16_TYPE__ int_least16_t;
#else
#  error
#endif

}
