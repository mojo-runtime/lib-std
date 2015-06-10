#pragma once

#include "is_arithmetic.hxx"

namespace std {

template <typename T, bool =   is_integral<T>()> struct _is_unsigned_2 : integral_constant<bool, T(0) < T(-1)> {};
template <typename T, bool = is_arithmetic<T>()> struct _is_unsigned_1 : _is_unsigned_2<T> {};

template <typename T> struct _is_unsigned_2<T, false> : false_type {}; // is_floating_point
template <typename T> struct _is_unsigned_1<T, false> : false_type {}; // is_integral, signed

template <typename T>
struct is_unsigned : _is_unsigned_1<T>
{
};

}
