#pragma once

#include "remove_reference_t.hxx"

namespace std {

template <typename X>
static constexpr
remove_reference_t<X>&&
move(X&& x) noexcept
{
    return static_cast<remove_reference_t<X>&&>(x);
}

}
