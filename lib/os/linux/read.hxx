#pragma once

#include <c/size_t.h>

#include "c/EAGAIN.h"
#include "c/EBADF.h"
#include "c/EFAULT.h"
#include "c/EINTR.h"
#include "c/EINVAL.h"
#include "c/EIO.h"
#include "c/EISDIR.h"
#include "syscall/SYS_read.h"
#include "Result.hxx"

namespace os { inline namespace linux {

static inline
auto
read(int fd, void* buffer, size_t length) noexcept
{
    enum Error
    {
        _E(AGAIN),
        _E(BADF),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(IO),
        _E(ISDIR),
    };

    return Result<size_t, Error>(SYS_read, fd, buffer, length);
}

}}
