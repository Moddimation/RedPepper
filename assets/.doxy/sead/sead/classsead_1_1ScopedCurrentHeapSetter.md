

# Class sead::ScopedCurrentHeapSetter



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**ScopedCurrentHeapSetter**](classsead_1_1ScopedCurrentHeapSetter.md)



[More...](#detailed-description)

* `#include <seadHeapMgr.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ScopedCurrentHeapSetter**](#function-scopedcurrentheapsetter) ([**sead::Heap**](classsead_1_1Heap.md) \* heap) <br> |
|   | [**~ScopedCurrentHeapSetter**](#function-scopedcurrentheapsetter) () <br> |








## Protected Attributes

| Type | Name |
| ---: | :--- |
|  uintptr\_t | [**mPreviousHeap**](#variable-mpreviousheap)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1Heap.md) \* | [**getPreviousHeap\_**](#function-getpreviousheap_) () const<br> |
|  bool | [**hasPreviousHeap\_**](#function-haspreviousheap_) () const<br> |
|  void | [**setPreviousHeapToNone\_**](#function-setpreviousheaptonone_) () <br> |
|  void | [**setPreviousHeap\_**](#function-setpreviousheap_) ([**Heap**](classsead_1_1Heap.md) \* heap) <br> |




## Detailed Description


Sets the "current heap" to the specified heap and restores the previous "current heap" when this goes out of scope. 


    
## Public Functions Documentation




### function ScopedCurrentHeapSetter 

```C++
inline explicit sead::ScopedCurrentHeapSetter::ScopedCurrentHeapSetter (
    sead::Heap * heap
) 
```




<hr>



### function ~ScopedCurrentHeapSetter 

```C++
inline sead::ScopedCurrentHeapSetter::~ScopedCurrentHeapSetter () 
```




<hr>
## Protected Attributes Documentation




### variable mPreviousHeap 

```C++
uintptr_t sead::ScopedCurrentHeapSetter::mPreviousHeap;
```




<hr>
## Protected Functions Documentation




### function getPreviousHeap\_ 

```C++
inline Heap * sead::ScopedCurrentHeapSetter::getPreviousHeap_ () const
```





**Warning:**

Only call this if hasPreviousHeap returns true. 





        

<hr>



### function hasPreviousHeap\_ 

```C++
inline bool sead::ScopedCurrentHeapSetter::hasPreviousHeap_ () const
```




<hr>



### function setPreviousHeapToNone\_ 

```C++
inline void sead::ScopedCurrentHeapSetter::setPreviousHeapToNone_ () 
```




<hr>



### function setPreviousHeap\_ 

```C++
inline void sead::ScopedCurrentHeapSetter::setPreviousHeap_ (
    Heap * heap
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/heap/seadHeapMgr.h`

