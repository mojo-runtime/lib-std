#pragma once

namespace std {

#if defined(__UINTPTR_TYPE__)
typedef __UINTPTR_TYPE__ uintptr_t;
#else
#  error
#endif

}
