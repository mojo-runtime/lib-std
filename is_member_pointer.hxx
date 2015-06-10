#pragma once

#include "false_type.hxx"
#include "remove_cv_t.hxx"
#include "true_type.hxx"

namespace std {

template <typename>               struct _is_member_pointer         : false_type {};
template <typename T, typename U> struct _is_member_pointer<T U::*> :  true_type {};

template <typename T>
struct is_member_pointer : _is_member_pointer<remove_cv_t<T>>
{
};

}
