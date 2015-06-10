#pragma once

namespace std {

template <bool x, typename T=void>
struct enable_if
{
};

template <typename T>
struct enable_if<true, T>
{
    using type = T;
};

}
