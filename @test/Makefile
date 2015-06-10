include ${dir ${lastword ${MAKEFILE_LIST}}}../../../Makefile

__tests__ += ${foreach x,${Configuration.all},${foreach y,\
\
declval\
is_arithmetic\
is_base_of\
is_enum\
is_fundamental\
is_integral\
is_null_pointer\
is_pointer\
is_same\
is_scalar\
is_signed\
is_union\
is_unsigned\
remove_cv_t\
underlying_type_t\
\
,${call $x.compile,$y.cxx}}}
