#pragma once

namespace std {

#if defined(__UINT32_TYPE__)
typedef __UINT32_TYPE__ uint32_t;
#else
#  error
#endif

}
