

# File types.h



[**FileList**](files.md) **>** [**CTRSDK**](dir_1e016f672f65000d1caa1843da5325e4.md) **>** [**include**](dir_b105e27ad861a359b82da8d20daf787e.md) **>** [**nn**](dir_98edea970dce97b73b2af390faecf17b.md) **>** [**types.h**](types_8h.md)

[Go to the source code of this file](types_8h_source.md)



* `#include <stdint.h>`
* `#include <stddef.h>`
* `#include <stdarg.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef float | [**f32**](#typedef-f32)  <br> |
| typedef double | [**f64**](#typedef-f64)  <br> |
| typedef signed short | [**s16**](#typedef-s16)  <br> |
| typedef signed int | [**s32**](#typedef-s32)  <br> |
| typedef signed long long | [**s64**](#typedef-s64)  <br> |
| typedef signed char | [**s8**](#typedef-s8)  <br> |
| typedef unsigned short | [**u16**](#typedef-u16)  <br> |
| typedef unsigned int | [**u32**](#typedef-u32)  <br> |
| typedef unsigned long long | [**u64**](#typedef-u64)  <br> |
| typedef unsigned char | [**u8**](#typedef-u8)  <br> |















































## Macros

| Type | Name |
| ---: | :--- |
| define  | [**NULL**](types_8h.md#define-null)  `(void\*)0`<br> |
| define  | [**split**](types_8h.md#define-split) (S) `\_\_attribute\_\_( ( section( "i." #S ) ) ) S`<br> |
| define  | [**static\_assert**](types_8h.md#define-static_assert) (COND, MSG) `typedef int \_\_static\_assert\_balls[ ( COND ) ? 1 : -1 ]`<br> |

## Public Types Documentation




### typedef f32 

```C++
typedef float f32;
```




<hr>



### typedef f64 

```C++
typedef double f64;
```




<hr>



### typedef s16 

```C++
typedef signed short s16;
```




<hr>



### typedef s32 

```C++
typedef signed int s32;
```




<hr>



### typedef s64 

```C++
typedef signed long long s64;
```




<hr>



### typedef s8 

```C++
typedef signed char s8;
```




<hr>



### typedef u16 

```C++
typedef unsigned short u16;
```




<hr>



### typedef u32 

```C++
typedef unsigned int u32;
```




<hr>



### typedef u64 

```C++
typedef unsigned long long u64;
```




<hr>



### typedef u8 

```C++
typedef unsigned char u8;
```




<hr>
## Macro Definition Documentation





### define NULL 

```C++
#define NULL `(void*)0`
```




<hr>



### define split 

```C++
#define split (
    S
) `__attribute__( ( section( "i." #S ) ) ) S`
```




<hr>



### define static\_assert 

```C++
#define static_assert (
    COND,
    MSG
) `typedef int __static_assert_balls[ ( COND ) ? 1 : -1 ]`
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/CTRSDK/include/nn/types.h`

