

# File seadNew.h



[**FileList**](files.md) **>** [**basis**](dir_0b39da2be11917cc67a96545368ebd76.md) **>** [**seadNew.h**](sead_new_8h.md)

[Go to the source code of this file](sead_new_8h_source.md)



* `#include <new>`
* `#include <basis/seadTypes.h>`
* `#include <stddef.h>`













## Namespaces

| Type | Name |
| ---: | :--- |
| namespace | [**sead**](namespacesead.md) <br> |
























## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**operator delete**](#function-operator-delete) (void \* ptr, [**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  void | [**operator delete**](#function-operator-delete) (void \* ptr, [**sead::Heap**](classsead_1_1_heap.md) \*, [**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  void | [**operator delete[]**](#function-operator-delete[]) (void \* ptr, [**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  void | [**operator delete[]**](#function-operator-delete[]) (void \* ptr, [**sead::Heap**](classsead_1_1_heap.md) \*, [**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  void \* | [**operator new**](#function-operator-new) (std::size\_t size, const std::nothrow\_t &) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) <br> |
|  void \* | [**operator new**](#function-operator-new) (size\_t size, [**sead::Heap**](classsead_1_1_heap.md) \* heap, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment=sizeof(void \*)) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (std::size\_t size, const std::nothrow\_t &) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) <br> |
|  void \* | [**operator new[]**](#function-operator-new[]) (size\_t size, [**sead::Heap**](classsead_1_1_heap.md) \* heap, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment=sizeof(void \*)) <br> |




























## Public Functions Documentation




### function operator delete 

```C++
void operator delete (
    void * ptr,
    s32
) 
```




<hr>



### function operator delete 

```C++
void operator delete (
    void * ptr,
    sead::Heap *,
    s32
) 
```




<hr>



### function operator delete[] 

```C++
void operator delete[] (
    void * ptr,
    s32
) 
```




<hr>



### function operator delete[] 

```C++
void operator delete[] (
    void * ptr,
    sead::Heap *,
    s32
) 
```




<hr>



### function operator new 

```C++
void * operator new (
    std::size_t size,
    const std::nothrow_t &
) 
```




<hr>



### function operator new 

```C++
void * operator new (
    size_t size,
    s32 alignment
) 
```




<hr>



### function operator new 

```C++
void * operator new (
    size_t size,
    sead::Heap * heap,
    s32 alignment=sizeof(void *)
) 
```




<hr>



### function operator new[] 

```C++
void * operator new[] (
    std::size_t size,
    const std::nothrow_t &
) 
```




<hr>



### function operator new[] 

```C++
void * operator new[] (
    size_t size,
    s32 alignment
) 
```




<hr>



### function operator new[] 

```C++
void * operator new[] (
    size_t size,
    sead::Heap * heap,
    s32 alignment=sizeof(void *)
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/basis/seadNew.h`

