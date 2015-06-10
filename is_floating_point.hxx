#pragma once

#include "false_type.hxx"
#include "remove_cv_t.hxx"
#include "true_type.hxx"

namespace std {

template <typename> struct _is_floating_point              : false_type {};
template <>         struct _is_floating_point<float>       :  true_type {};
template <>         struct _is_floating_point<double>      :  true_type {};
template <>         struct _is_floating_point<long double> :  true_type {};

template <typename T>
struct is_floating_point : _is_floating_point<remove_cv_t<T>>
{
};

}
