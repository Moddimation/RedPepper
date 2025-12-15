

# Class sead::FindContainHeapCache



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FindContainHeapCache**](classsead_1_1FindContainHeapCache.md)


























## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**Atomic**](structsead_1_1Atomic.md)&lt; uintptr\_t &gt; | [**mHeap**](#variable-mheap)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FindContainHeapCache**](#function-findcontainheapcache) () <br> |
|  bool | [**tryRemoveHeap**](#function-tryremoveheap) ([**Heap**](classsead_1_1Heap.md) \* heap) <br> |




























## Public Attributes Documentation




### variable mHeap 

```C++
Atomic<uintptr_t> sead::FindContainHeapCache::mHeap;
```




<hr>
## Public Functions Documentation




### function FindContainHeapCache 

```C++
sead::FindContainHeapCache::FindContainHeapCache () 
```




<hr>



### function tryRemoveHeap 

```C++
bool sead::FindContainHeapCache::tryRemoveHeap (
    Heap * heap
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/heap/seadHeapMgr.h`

