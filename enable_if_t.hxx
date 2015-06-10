#pragma once

#include "enable_if.hxx"

namespace std {

template <bool x, typename T=void>
using enable_if_t = typename enable_if<x, T>::type;

}
