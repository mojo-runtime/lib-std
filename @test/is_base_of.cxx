#include "../is_base_of.hxx"

struct A
{
};

struct B : A
{
};

struct C
{
};

static_assert( std::is_base_of<A, B>(), "");
static_assert(!std::is_base_of<B, A>(), "");
static_assert(!std::is_base_of<C, B>(), "");
static_assert( std::is_base_of<C, C>(), "");
