#ifndef SYS_exit
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_exit 60
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
