#pragma once

#include "remove_const_t.hxx"
#include "remove_volatile_t.hxx"

namespace std {

template <typename T>
struct remove_cv
{
    using type = remove_volatile_t<remove_const_t<T>>;
};

}
