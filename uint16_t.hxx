#pragma once

namespace std {

#if defined(__UINT16_TYPE__)
typedef __UINT16_TYPE__ uint16_t;
#else
#  error
#endif

}
