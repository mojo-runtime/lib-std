#ifndef SYS_epoll_wait
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_epoll_wait 232
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
