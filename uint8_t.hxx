#pragma once

namespace std {

#if defined(__UINT8_TYPE__)
typedef __UINT8_TYPE__ uint8_t;
#else
#  error
#endif

}
