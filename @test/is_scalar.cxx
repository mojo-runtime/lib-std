#include "../is_scalar.hxx"

struct Struct
{
};

static_assert( std::is_scalar<int>(), "");
static_assert( std::is_scalar<const char*>(), "");
static_assert(!std::is_scalar<Struct>(), "");
