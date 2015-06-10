#pragma once

#include <feature/__has_is_base_of.h>
#include "integral_constant.hxx"

namespace std {

#if __has_is_base_of

template <typename Base, typename Derived>
struct is_base_of : integral_constant<bool, __is_base_of(Base, Derived)>
{
};

#else
#  error
#endif

}
