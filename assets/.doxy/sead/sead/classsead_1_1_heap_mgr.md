

# Class sead::HeapMgr



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**HeapMgr**](classsead_1_1_heap_mgr.md)





* `#include <seadHeapMgr.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**FixedPtrArray**](classsead_1_1_fixed_ptr_array.md)&lt; [**Heap**](classsead_1_1_heap.md), 4 &gt; | [**IndependentHeaps**](#typedef-independentheaps)  <br> |
| typedef [**FixedPtrArray**](classsead_1_1_fixed_ptr_array.md)&lt; [**Heap**](classsead_1_1_heap.md), 4 &gt; | [**RootHeaps**](#typedef-rootheaps)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  [**HeapMgr**](classsead_1_1_heap_mgr.md) | [**sInstance**](#variable-sinstance)  <br> |
|  [**HeapMgr**](classsead_1_1_heap_mgr.md) \* | [**sInstancePtr**](#variable-sinstanceptr)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**HeapMgr**](#function-heapmgr) () <br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**findContainHeap**](#function-findcontainheap) (const void \* ptr) const<br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getCurrentHeap**](#function-getcurrentheap) () <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getRootHeap**](#function-getrootheap) (int index) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**getRootHeapNum**](#function-getrootheapnum) () <br> |
|  [**HeapMgr**](classsead_1_1_heap_mgr.md) \* | [**instance**](#function-instance) () <br> |
|  bool | [**isContainedInAnyHeap**](#function-iscontainedinanyheap) (const void \* ptr) <br> |


























## Public Types Documentation




### typedef IndependentHeaps 

```C++
typedef FixedPtrArray<Heap, 4> sead::HeapMgr::IndependentHeaps;
```




<hr>



### typedef RootHeaps 

```C++
typedef FixedPtrArray<Heap, 4> sead::HeapMgr::RootHeaps;
```




<hr>
## Public Static Attributes Documentation




### variable sInstance 

```C++
HeapMgr sead::HeapMgr::sInstance;
```




<hr>



### variable sInstancePtr 

```C++
HeapMgr* sead::HeapMgr::sInstancePtr;
```




<hr>
## Public Functions Documentation




### function HeapMgr 

```C++
sead::HeapMgr::HeapMgr () 
```




<hr>



### function findContainHeap 

```C++
Heap * sead::HeapMgr::findContainHeap (
    const void * ptr
) const
```




<hr>



### function getCurrentHeap 

```C++
Heap * sead::HeapMgr::getCurrentHeap () 
```




<hr>
## Public Static Functions Documentation




### function getRootHeap 

```C++
static inline Heap * sead::HeapMgr::getRootHeap (
    int index
) 
```




<hr>



### function getRootHeapNum 

```C++
static inline s32 sead::HeapMgr::getRootHeapNum () 
```




<hr>



### function instance 

```C++
static inline HeapMgr * sead::HeapMgr::instance () 
```




<hr>



### function isContainedInAnyHeap 

```C++
static bool sead::HeapMgr::isContainedInAnyHeap (
    const void * ptr
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/heap/seadHeapMgr.h`

