

# Class sead::Random



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Random**](classsead_1_1_random.md)



_A fast non-cryptographically secure pseudorandom number generator based on Xorshift128._ 

* `#include <seadRandom.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Random**](#function-random-13) () <br> |
|   | [**Random**](#function-random-23) ([**u32**](_l_m_s___types_8h.md#typedef-u32) seed) <br> |
|   | [**Random**](#function-random-33) ([**u32**](_l_m_s___types_8h.md#typedef-u32) seed\_x, [**u32**](_l_m_s___types_8h.md#typedef-u32) seed\_y, [**u32**](_l_m_s___types_8h.md#typedef-u32) seed\_z, [**u32**](_l_m_s___types_8h.md#typedef-u32) seed\_w) <br> |
|  bool | [**getBool**](#function-getbool) () <br>_Generate a random boolean._  |
|  void | [**getContext**](#function-getcontext) ([**u32**](_l_m_s___types_8h.md#typedef-u32) \* x, [**u32**](_l_m_s___types_8h.md#typedef-u32) \* y, [**u32**](_l_m_s___types_8h.md#typedef-u32) \* z, [**u32**](_l_m_s___types_8h.md#typedef-u32) \* w) const<br> |
|  [**f32**](_l_m_s___types_8h.md#typedef-f32) | [**getF32**](#function-getf32) () <br>_Generate a random f32 in [0, 1)._  |
|  [**f32**](_l_m_s___types_8h.md#typedef-f32) | [**getF32Range**](#function-getf32range) ([**f32**](_l_m_s___types_8h.md#typedef-f32) a, [**f32**](_l_m_s___types_8h.md#typedef-f32) b) <br>_Generate a random f32 in [a, b)._  |
|  [**f64**](_l_m_s___types_8h.md#typedef-f64) | [**getF64**](#function-getf64) () <br>_Generate a random f64 in [0, 1)._  |
|  [**f64**](_l_m_s___types_8h.md#typedef-f64) | [**getF64Range**](#function-getf64range) ([**f64**](_l_m_s___types_8h.md#typedef-f64) a, [**f64**](_l_m_s___types_8h.md#typedef-f64) b) <br>_Generate a random f64 in [a, b)._  |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**getS32Range**](#function-gets32range) ([**s32**](_l_m_s___types_8h.md#typedef-s32) a, [**s32**](_l_m_s___types_8h.md#typedef-s32) b) <br>_Generate a random s32 in [a ._  |
|  [**s64**](_l_m_s___types_8h.md#typedef-s64) | [**getS64Range**](#function-gets64range) ([**s64**](_l_m_s___types_8h.md#typedef-s64) a, [**s64**](_l_m_s___types_8h.md#typedef-s64) b) <br>_Generate a random s64 in [a ._  |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getU32**](#function-getu32-12) () <br>_Generate a random u32._  |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getU32**](#function-getu32-22) ([**u32**](_l_m_s___types_8h.md#typedef-u32) max) <br>_Generate a random u32 in [0 .. max)._  |
|  [**u64**](_l_m_s___types_8h.md#typedef-u64) | [**getU64**](#function-getu64) () <br>_Generate a random u64._  |
|  void | [**init**](#function-init-13) () <br>_Reset and seed the engine with the current system tick count._  |
|  void | [**init**](#function-init-23) ([**u32**](_l_m_s___types_8h.md#typedef-u32) seed) <br>_Reset and seed the engine with the specified value._  |
|  void | [**init**](#function-init-33) ([**u32**](_l_m_s___types_8h.md#typedef-u32) seed\_x, [**u32**](_l_m_s___types_8h.md#typedef-u32) seed\_y, [**u32**](_l_m_s___types_8h.md#typedef-u32) seed\_z, [**u32**](_l_m_s___types_8h.md#typedef-u32) seed\_w) <br> |




























## Public Functions Documentation




### function Random [1/3]

```C++
inline sead::Random::Random () 
```




<hr>



### function Random [2/3]

```C++
inline sead::Random::Random (
    u32 seed
) 
```




<hr>



### function Random [3/3]

```C++
inline sead::Random::Random (
    u32 seed_x,
    u32 seed_y,
    u32 seed_z,
    u32 seed_w
) 
```





**Warning:**

Parameters have to be chosen carefully to get a long period. Using this is not recommended. 





        

<hr>



### function getBool 

_Generate a random boolean._ 
```C++
bool sead::Random::getBool () 
```




<hr>



### function getContext 

```C++
void sead::Random::getContext (
    u32 * x,
    u32 * y,
    u32 * z,
    u32 * w
) const
```




<hr>



### function getF32 

_Generate a random f32 in [0, 1)._ 
```C++
inline f32 sead::Random::getF32 () 
```




<hr>



### function getF32Range 

_Generate a random f32 in [a, b)._ 
```C++
inline f32 sead::Random::getF32Range (
    f32 a,
    f32 b
) 
```




<hr>



### function getF64 

_Generate a random f64 in [0, 1)._ 
```C++
f64 sead::Random::getF64 () 
```




<hr>



### function getF64Range 

_Generate a random f64 in [a, b)._ 
```C++
f64 sead::Random::getF64Range (
    f64 a,
    f64 b
) 
```




<hr>



### function getS32Range 

_Generate a random s32 in [a ._ 
```C++
inline s32 sead::Random::getS32Range (
    s32 a,
    s32 b
) 
```



. b). Note that this does not provide a uniform distribution. 


        

<hr>



### function getS64Range 

_Generate a random s64 in [a ._ 
```C++
inline s64 sead::Random::getS64Range (
    s64 a,
    s64 b
) 
```



. b). Note that this does not provide a uniform distribution. 


        

<hr>



### function getU32 [1/2]

_Generate a random u32._ 
```C++
u32 sead::Random::getU32 () 
```




<hr>



### function getU32 [2/2]

_Generate a random u32 in [0 .. max)._ 
```C++
inline u32 sead::Random::getU32 (
    u32 max
) 
```




<hr>



### function getU64 

_Generate a random u64._ 
```C++
u64 sead::Random::getU64 () 
```




<hr>



### function init [1/3]

_Reset and seed the engine with the current system tick count._ 
```C++
void sead::Random::init () 
```




<hr>



### function init [2/3]

_Reset and seed the engine with the specified value._ 
```C++
void sead::Random::init (
    u32 seed
) 
```




<hr>



### function init [3/3]

```C++
void sead::Random::init (
    u32 seed_x,
    u32 seed_y,
    u32 seed_z,
    u32 seed_w
) 
```





**Warning:**

Parameters have to be chosen carefully to get a long period. Using this is not recommended. 





        

<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/random/seadRandom.h`

