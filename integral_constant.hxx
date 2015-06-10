#pragma once

namespace std {

template <typename X, X x>
struct integral_constant
{
    // Member types

    using type       = integral_constant;
    using value_type = X;

    // Member constants

    static constexpr
    value_type
    value = x;

    // Member functions

    constexpr
    operator
    X() const noexcept
    {
        return x;
    }

    constexpr
    X
    operator
    ()() const noexcept
    {
        return x;
    }
};

}
