#ifndef MAP_PRIVATE

#if defined(__linux__) || defined(__FreeBSD__)
#  define MAP_PRIVATE 0x2
#else
#  error
#endif

#endif