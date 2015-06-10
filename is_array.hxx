#pragma once

#include "false_type.hxx"
#include "true_type.hxx"

namespace std {

template <typename T>
struct is_array : false_type
{
};

template <typename T, decltype(sizeof(int)) n>
struct is_array<T[n]> : true_type
{
};

}
