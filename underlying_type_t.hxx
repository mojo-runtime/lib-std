#pragma once

#include "underlying_type.hxx"

namespace std {

template <typename T>
using underlying_type_t = typename underlying_type<T>::type;

}
