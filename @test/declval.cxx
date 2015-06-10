#include "../declval.hxx"

struct Default
{
    constexpr
    Default()
    {
    }

    constexpr
    int
    foo() const
    {
        return 1;
    }
};

struct NonDefault
{
    constexpr
    NonDefault()
    {
    }

    constexpr
    NonDefault(const NonDefault&)
    {
    }

    constexpr
    int
    foo() const
    {
        return 1;
    }
};

constexpr
decltype(Default().foo())
n1 = 1;

constexpr
decltype(std::declval<NonDefault>().foo())
n2 = n1;

static_assert(n2 == 1, "");
