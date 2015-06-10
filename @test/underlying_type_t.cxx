#include "../is_same.hxx"
#include "../underlying_type_t.hxx"

enum class Char : char {};
enum class Int  : int  {};
enum class Long : long {};

static_assert(std::is_same<std::underlying_type_t<Char>, char>(), "");
static_assert(std::is_same<std::underlying_type_t<Int >, int >(), "");
static_assert(std::is_same<std::underlying_type_t<Long>, long>(), "");
