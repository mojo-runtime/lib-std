#pragma once

#include "remove_reference_t.hxx"

namespace std {

template <typename X>
static constexpr
X&&
forward(remove_reference_t<X>& x) noexcept
{
    return static_cast<X&&>(x);
}

template <typename X>
static constexpr
X&&
forward(remove_reference_t<X>&& x) noexcept
{
    return static_cast<X&&>(x);
}

}
