#pragma once

#include "EBADF.h"
#include "EINVAL.h"

namespace linux::inotify_rm_watch {

enum Error
{
#define _(name) _##name = name
    _(EBADF),
    _(EINVAL),
#undef _
};

}