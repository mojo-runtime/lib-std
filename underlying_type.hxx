#pragma once

#include <feature/__has_underlying_type.h>

namespace std {

#if __has_underlying_type

template <typename T>
struct underlying_type
{
    using type = __underlying_type(T);
};

#else
#  error
#endif

}
