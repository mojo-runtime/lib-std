#pragma once

#include "is_arithmetic.hxx"
#include "is_enum.hxx"
#include "is_member_pointer.hxx"
#include "is_null_pointer.hxx"
#include "is_pointer.hxx"
#include "is_same.hxx"

namespace std {

template <typename T>
struct is_scalar : integral_constant<bool,
                                     std::is_arithmetic<T>()     ||
                                     std::is_enum<T>()           ||
                                     std::is_member_pointer<T>() ||
                                     std::is_null_pointer<T>()   ||
                                     std::is_pointer<T>()>
{
};

}
