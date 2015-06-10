#pragma once

#include "remove_const.hxx"

namespace std {

template <typename T>
using remove_const_t = typename remove_const<T>::type;

}
