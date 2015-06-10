#include "../is_fundamental.hxx"

static_assert( std::is_fundamental<int>(), "");
static_assert(!std::is_fundamental<int&>(), "");
