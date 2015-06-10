#pragma once

#include "false_type.hxx"
#include "remove_cv_t.hxx"
#include "true_type.hxx"

namespace std {

template <typename> struct _is_integral                     : false_type {};
template <>         struct _is_integral<         bool>      :  true_type {};
template <>         struct _is_integral<         char>      :  true_type {};
template <>         struct _is_integral<  signed char>      :  true_type {};
template <>         struct _is_integral<unsigned char>      :  true_type {};
template <>         struct _is_integral<         char16_t>  :  true_type {};
template <>         struct _is_integral<         char32_t>  :  true_type {};
template <>         struct _is_integral<         int>       :  true_type {};
template <>         struct _is_integral<unsigned int>       :  true_type {};
template <>         struct _is_integral<         long>      :  true_type {};
template <>         struct _is_integral<unsigned long>      :  true_type {};
template <>         struct _is_integral<         long long> :  true_type {};
template <>         struct _is_integral<unsigned long long> :  true_type {};
template <>         struct _is_integral<         short>     :  true_type {};
template <>         struct _is_integral<unsigned short>     :  true_type {};
template <>         struct _is_integral<         wchar_t>   :  true_type {};

template <typename T>
struct is_integral : _is_integral<remove_cv_t<T>>
{
};

}
