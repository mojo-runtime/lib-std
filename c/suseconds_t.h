#ifndef c_suseconds_t_h_
#define c_suseconds_t_h_

typedef
#ifdef __linux__
#  ifdef __x86_64__
long // int64_t
#  else
#    error
#  endif
#else
#  error
#endif
suseconds_t;

#endif