#pragma once

namespace std {

#if defined(__SIZE_TYPE__)
typedef __SIZE_TYPE__ size_t;
#else
#  error
#endif

}
