#pragma once

namespace std {

#if defined(__PTRDIFF_TYPE__)
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#else
#  error
#endif

}
