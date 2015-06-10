#pragma once

namespace std {

#if defined(__INTPTR_TYPE__)
typedef __INTPTR_TYPE__ intptr_t;
#else
#  error
#endif

}
