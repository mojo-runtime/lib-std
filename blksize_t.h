#ifndef c_blksize_t_h_
#define c_blksize_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

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
blksize_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
