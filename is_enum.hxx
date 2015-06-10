#pragma once

#include <feature/__has_is_enum.h>
#include "integral_constant.hxx"

namespace std {

#if __has_is_enum

template <typename T>
struct is_enum : integral_constant<bool, __is_enum(T)>
{
};

#else
#  error
#endif

}
