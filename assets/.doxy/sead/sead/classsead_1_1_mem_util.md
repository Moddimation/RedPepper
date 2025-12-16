

# Class sead::MemUtil



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**MemUtil**](classsead_1_1_mem_util.md)





* `#include <seadMemUtil.h>`







































## Public Static Functions

| Type | Name |
| ---: | :--- |
|  bool | [**checkFillType**](#function-checkfilltype) (const void \* ptr, size\_t size) <br>_Checks whether a region of memory is filled with 0._  |
|  int | [**compare**](#function-compare) (const void \* ptr1, const void \* ptr2, size\_t size) <br> |
|  void \* | [**copy**](#function-copy) (void \* dest, const void \* src, size\_t size) <br> |
|  void \* | [**copyAlign32**](#function-copyalign32) (void \* dest, const void \* src, size\_t size) <br> |
|  void \* | [**copyOverlap**](#function-copyoverlap) (void \* dest, const void \* src, size\_t size) <br> |
|  void | [**dumpMemoryBinary**](#function-dumpmemorybinary) (const void \* ptr, [**u32**](_l_m_s___types_8h.md#typedef-u32) size\_front, [**u32**](_l_m_s___types_8h.md#typedef-u32) size\_back, bool is\_align) <br> |
|  void \* | [**fill**](#function-fill) (void \* ptr, [**u8**](_l_m_s___types_8h.md#typedef-u8) c, size\_t size) <br> |
|  void \* | [**fillZero**](#function-fillzero) (void \* ptr, size\_t size) <br> |
|  bool | [**isHeap**](#function-isheap) (const void \* addr) <br> |
|  bool | [**isStack**](#function-isstack) (const void \* addr) <br> |


























## Public Static Functions Documentation




### function checkFillType 

_Checks whether a region of memory is filled with 0._ 
```C++
static bool sead::MemUtil::checkFillType (
    const void * ptr,
    size_t size
) 
```




<hr>



### function compare 

```C++
static int sead::MemUtil::compare (
    const void * ptr1,
    const void * ptr2,
    size_t size
) 
```




<hr>



### function copy 

```C++
static void * sead::MemUtil::copy (
    void * dest,
    const void * src,
    size_t size
) 
```




<hr>



### function copyAlign32 

```C++
static void * sead::MemUtil::copyAlign32 (
    void * dest,
    const void * src,
    size_t size
) 
```




<hr>



### function copyOverlap 

```C++
static void * sead::MemUtil::copyOverlap (
    void * dest,
    const void * src,
    size_t size
) 
```




<hr>



### function dumpMemoryBinary 

```C++
static void sead::MemUtil::dumpMemoryBinary (
    const void * ptr,
    u32 size_front,
    u32 size_back,
    bool is_align
) 
```




<hr>



### function fill 

```C++
static void * sead::MemUtil::fill (
    void * ptr,
    u8 c,
    size_t size
) 
```




<hr>



### function fillZero 

```C++
static void * sead::MemUtil::fillZero (
    void * ptr,
    size_t size
) 
```




<hr>



### function isHeap 

```C++
static bool sead::MemUtil::isHeap (
    const void * addr
) 
```




<hr>



### function isStack 

```C++
static bool sead::MemUtil::isStack (
    const void * addr
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/prim/seadMemUtil.h`

