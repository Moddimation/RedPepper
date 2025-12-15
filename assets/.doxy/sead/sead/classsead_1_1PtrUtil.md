

# Class sead::PtrUtil



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**PtrUtil**](classsead_1_1PtrUtil.md)












































## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**addOffset**](#function-addoffset) (const void \* ptr, intptr\_t offset) <br> |
|  intptr\_t | [**diff**](#function-diff) (const void \* ptr1, const void \* ptr2) <br> |
|  bool | [**isAligned**](#function-isaligned) (const void \* ptr, s32 alignment) <br> |
|  bool | [**isAlignedN**](#function-isalignedn) (const void \* ptr, s32 n) <br> |
|  bool | [**isAlignedPow2**](#function-isalignedpow2) (const void \* ptr, u32 n) <br> |
|  bool | [**isInclude**](#function-isinclude) (const void \* ptr, const void \* begin, const void \* end) <br> |
|  void \* | [**roundDownN**](#function-rounddownn) (const void \* ptr, u32 n) <br> |
|  void \* | [**roundDownPow2**](#function-rounddownpow2) (const void \* ptr, u32 n) <br> |
|  void \* | [**roundUpN**](#function-roundupn) (const void \* ptr, u32 n) <br> |
|  void \* | [**roundUpPow2**](#function-rounduppow2) (const void \* ptr, u32 n) <br> |


























## Public Static Functions Documentation




### function addOffset 

```C++
static inline void * sead::PtrUtil::addOffset (
    const void * ptr,
    intptr_t offset
) 
```




<hr>



### function diff 

```C++
static inline intptr_t sead::PtrUtil::diff (
    const void * ptr1,
    const void * ptr2
) 
```




<hr>



### function isAligned 

```C++
static inline bool sead::PtrUtil::isAligned (
    const void * ptr,
    s32 alignment
) 
```




<hr>



### function isAlignedN 

```C++
static inline bool sead::PtrUtil::isAlignedN (
    const void * ptr,
    s32 n
) 
```




<hr>



### function isAlignedPow2 

```C++
static inline bool sead::PtrUtil::isAlignedPow2 (
    const void * ptr,
    u32 n
) 
```




<hr>



### function isInclude 

```C++
static inline bool sead::PtrUtil::isInclude (
    const void * ptr,
    const void * begin,
    const void * end
) 
```




<hr>



### function roundDownN 

```C++
static inline void * sead::PtrUtil::roundDownN (
    const void * ptr,
    u32 n
) 
```




<hr>



### function roundDownPow2 

```C++
static inline void * sead::PtrUtil::roundDownPow2 (
    const void * ptr,
    u32 n
) 
```




<hr>



### function roundUpN 

```C++
static inline void * sead::PtrUtil::roundUpN (
    const void * ptr,
    u32 n
) 
```




<hr>



### function roundUpPow2 

```C++
static inline void * sead::PtrUtil::roundUpPow2 (
    const void * ptr,
    u32 n
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadPtrUtil.h`

