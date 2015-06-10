#pragma once

namespace std {

#if defined(__UINT64_TYPE__)
typedef __UINT64_TYPE__ uint64_t;
#else
#  error
#endif

}
