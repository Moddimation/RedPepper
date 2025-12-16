

# Class sead::CriticalSection



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**CriticalSection**](classsead_1_1_critical_section.md)





* `#include <seadCriticalSection.h>`



Inherits the following classes: [sead::IDisposer](classsead_1_1_i_disposer.md)
















## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption)  <br> |






































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**CriticalSection**](#function-criticalsection-13) () <br> |
|   | [**CriticalSection**](#function-criticalsection-23) ([**Heap**](classsead_1_1_heap.md) \* disposer\_heap) <br> |
|   | [**CriticalSection**](#function-criticalsection-33) ([**Heap**](classsead_1_1_heap.md) \* disposer\_heap, [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption) heap\_null\_option) <br> |
|  void | [**lock**](#function-lock) () <br> |
|  bool | [**tryLock**](#function-trylock) () <br> |
|  bool | [**try\_lock**](#function-try_lock) () <br> |
|  void | [**unlock**](#function-unlock) () <br> |
| virtual  | [**~CriticalSection**](#function-criticalsection) () <br> |


## Public Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](classsead_1_1_i_disposer.md#function-idisposer-12) () <br> |
|   | [**IDisposer**](classsead_1_1_i_disposer.md#function-idisposer-22) ([**Heap**](classsead_1_1_heap.md) \* disposer\_heap, [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption) option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](classsead_1_1_i_disposer.md#function-idisposer) () <br> |




## Public Static Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getListNodeOffset**](classsead_1_1_i_disposer.md#function-getlistnodeoffset) () <br> |












































## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getDisposerHeap\_**](classsead_1_1_i_disposer.md#function-getdisposerheap_) () const<br> |






## Public Functions Documentation




### function CriticalSection [1/3]

```C++
sead::CriticalSection::CriticalSection () 
```




<hr>



### function CriticalSection [2/3]

```C++
explicit sead::CriticalSection::CriticalSection (
    Heap * disposer_heap
) 
```




<hr>



### function CriticalSection [3/3]

```C++
sead::CriticalSection::CriticalSection (
    Heap * disposer_heap,
    HeapNullOption heap_null_option
) 
```




<hr>



### function lock 

```C++
void sead::CriticalSection::lock () 
```




<hr>



### function tryLock 

```C++
bool sead::CriticalSection::tryLock () 
```




<hr>



### function try\_lock 

```C++
inline bool sead::CriticalSection::try_lock () 
```




<hr>



### function unlock 

```C++
void sead::CriticalSection::unlock () 
```




<hr>



### function ~CriticalSection 

```C++
virtual sead::CriticalSection::~CriticalSection () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/thread/seadCriticalSection.h`

