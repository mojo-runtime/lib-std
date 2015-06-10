#pragma once

#include "false_type.hxx"
#include "remove_cv_t.hxx"
#include "true_type.hxx"

namespace std {

template <typename> struct _is_void       : false_type {};
template <>         struct _is_void<void> :  true_type {};

template <typename T>
struct is_void : _is_void<remove_cv_t<T>>
{
};

}
