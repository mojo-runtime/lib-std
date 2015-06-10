#pragma once

namespace std {

#if defined(__GNUC__) // Assuming
typedef __builtin_va_list va_list;
#else
#  error
#endif

}
