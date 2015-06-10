#include "../is_union.hxx"

union Union
{
    int
    a;

    float
    b;
};

static_assert( std::is_union<Union>(), "");
static_assert(!std::is_union<int>(), "");
