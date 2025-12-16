

# Class sead::HeapArray



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**HeapArray**](classsead_1_1_heap_array.md)





* `#include <seadHeapPolicies.h>`





















## Public Attributes

| Type | Name |
| ---: | :--- |
|  bool | [**mAdjusted**](#variable-madjusted)  <br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**mHeaps**](#variable-mheaps)  <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mPrimaryIndex**](#variable-mprimaryindex)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getHeap**](#function-getheap) ([**s32**](_l_m_s___types_8h.md#typedef-s32) index) const<br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getPrimaryHeap**](#function-getprimaryheap) () const<br> |




























## Public Attributes Documentation




### variable mAdjusted 

```C++
bool sead::HeapArray::mAdjusted[4];
```




<hr>



### variable mHeaps 

```C++
Heap* sead::HeapArray::mHeaps[4];
```




<hr>



### variable mPrimaryIndex 

```C++
s32 sead::HeapArray::mPrimaryIndex;
```




<hr>
## Public Functions Documentation




### function getHeap 

```C++
inline Heap * sead::HeapArray::getHeap (
    s32 index
) const
```




<hr>



### function getPrimaryHeap 

```C++
inline Heap * sead::HeapArray::getPrimaryHeap () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/framework/seadHeapPolicies.h`

