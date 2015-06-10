#pragma once

#include "remove_reference.hxx"

namespace std {

template <typename T>
using remove_reference_t = typename remove_reference<T>::type;

}
