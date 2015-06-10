#include "../is_same.hxx"

static_assert(!std::is_same<int, float>(), "");
static_assert( std::is_same<int, int>(), "");
