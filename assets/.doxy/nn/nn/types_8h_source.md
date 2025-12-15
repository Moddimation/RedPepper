

# File types.h

[**File List**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**types.h**](types_8h.md)

[Go to the documentation of this file](types_8h.md)


```C++
#pragma once

#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>

#ifndef NULL
#define NULL (void*)0
#endif

typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

typedef signed char        s8;
typedef signed short       s16;
typedef signed int         s32;
typedef signed long long   s64;

typedef float              f32;
typedef double             f64;

#ifdef __cplusplus

#ifndef nullptr
#define nullptr NULL
#endif

typedef u32 uintptr_t;
typedef s32 intptr_t;

#endif

#ifndef static_assert
#define static_assert( COND, MSG ) typedef int __static_assert_balls[ ( COND ) ? 1 : -1 ]
#endif

#define split( S ) __attribute__( ( section( "i." #S ) ) ) S
```


