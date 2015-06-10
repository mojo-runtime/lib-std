#pragma once

#include "is_arithmetic.hxx"

namespace std {

template <typename T, bool =   is_integral<T>()> struct _is_signed_2 : integral_constant<bool, T(-1) < T(0)> {};
template <typename T, bool = is_arithmetic<T>()> struct _is_signed_1 : _is_signed_2<T> {};

template <typename T> struct _is_signed_2<T, false> :  true_type {}; // is_floating_point
template <typename T> struct _is_signed_1<T, false> : false_type {}; // is_integral, unsigned

template <typename T>
struct is_signed : _is_signed_1<T>
{
};

}
