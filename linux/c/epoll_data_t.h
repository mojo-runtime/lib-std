#ifndef linux_epoll_data_t_h_
#define linux_epoll_data_t_h_

#include "c/uint32_t.h"
#include "c/uint64_t.h"

// This union is not defined in the linux source,
// which uses a uint64_t in its place.

typedef union
{
    void*
    ptr;

    int
    fd;

    uint32_t
    u32;

    uint64_t
    u64;
}
epoll_data_t;

#endif