#ifdef __linux__
#  ifdef __x86_64__
#    include "_linux/_x86_64/siginfo_t.h"
#  else
#    error
#  endif
#else
#  error todo
#endif
