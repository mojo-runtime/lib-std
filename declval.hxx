#pragma once

#include "add_rvalue_reference_t.hxx"

namespace std {

template <typename X>
add_rvalue_reference_t<X>
declval() noexcept;

}
