#pragma once

#include "integral_constant.hxx"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_extension)
#  define __has_is_union __has_extension(is_union)
#elif defined(__GNUC__)
#  define __has_is_union 1 // Version?
#else
#  error
#endif

#pragma clang diagnostic pop

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
