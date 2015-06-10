#pragma once

#include "is_arithmetic.hxx"
#include "is_null_pointer.hxx"
#include "is_same.hxx"
#include "is_void.hxx"

namespace std {

template <typename T>
struct is_fundamental : integral_constant<bool,
                                          is_arithmetic<T>()   ||
                                          is_null_pointer<T>() ||
                                          is_void<T>()>
{
};

}
