/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */

#include <bits/wordsize.h>

#if !defined __LP64__ && defined __riscv_float_abi_soft
# include <gnu/stubs-ilp32.h>
#endif
#if !defined __LP64__ && defined __riscv_float_abi_double
# include <gnu/stubs-ilp32d.h>
#endif
#if defined __LP64__ && defined __riscv_float_abi_soft
# include <gnu/stubs-lp64.h>
#endif
#if defined __LP64__ && defined __riscv_float_abi_double
# include <gnu/stubs-lp64d.h>
#endif
