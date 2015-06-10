#include "../is_enum.hxx"

enum class Color
{
    red,
    green,
    blue,
};

static_assert(std::is_enum<Color>(), "");
