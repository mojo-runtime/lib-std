#ifndef c_ino_t_h_
#define c_ino_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __linux__
#  ifdef __x86_64__
unsigned long // uint64_t
#  else
#    error
#  endif
#else
#  error
#endif
ino_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
