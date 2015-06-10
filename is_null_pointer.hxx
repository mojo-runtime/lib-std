#pragma once

#include "false_type.hxx"
#include "nullptr_t.hxx"
#include "remove_cv_t.hxx"
#include "true_type.hxx"

namespace std {

template <typename> struct _is_null_pointer            : false_type {};
template <>         struct _is_null_pointer<nullptr_t> :  true_type {};

template <typename T>
struct is_null_pointer : _is_null_pointer<remove_cv_t<T>>
{
};

}
