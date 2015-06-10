#pragma once

namespace std {

#if defined(__INT64_TYPE__)
typedef __INT64_TYPE__ int64_t;
#else
#  error
#endif

}
