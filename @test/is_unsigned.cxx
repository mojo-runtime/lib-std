#include "../is_unsigned.hxx"

struct Struct
{
};

static_assert(!std::is_unsigned<Struct>(), "");
static_assert(!std::is_unsigned<float>(), "");
static_assert(!std::is_unsigned<int>(), "");
static_assert( std::is_unsigned<unsigned int>(), "");
