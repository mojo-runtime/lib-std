#pragma once

#include "remove_cv.hxx"

namespace std {

template <typename T>
using remove_cv_t = typename remove_cv<T>::type;

}
