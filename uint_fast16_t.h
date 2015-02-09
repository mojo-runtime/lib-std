#ifndef c_uint_fast16_t_h_
#define c_uint_fast16_t_h_

#ifdef __cplusplus
inline namespace c {
#endif

typedef
#ifdef __UINT_FAST16_TYPE__
__UINT_FAST16_TYPE__
#else
#  error
#endif
uint_fast16_t;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
