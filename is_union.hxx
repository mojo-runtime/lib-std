#pragma once

#include <feature/__has_is_union.h>
#include "integral_constant.hxx"

namespace std {

#if __has_is_union

template <typename T>
struct is_union : integral_constant<bool, __is_union(T)>
{
};

#else
#  error
#endif

}
