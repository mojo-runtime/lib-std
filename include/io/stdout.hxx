#pragma once

#if defined(__unix__)
#  include "_posix/stdout.hxx"
#else
#  error
#endif