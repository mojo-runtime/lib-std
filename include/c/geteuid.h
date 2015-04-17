#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "SYS_geteuid.h"
#  include "uid_t.h"
#  include "abi/__syscall_0_no_error.h"
#  include "compat/__static_cast.h"

static inline
uid_t
geteuid() __noexcept
{
    return __static_cast(uid_t, __syscall_0_no_error(SYS_geteuid));
}

#else
#  error
#endif