

# Class sead::ExpHeap



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**ExpHeap**](classsead_1_1_exp_heap.md)





* `#include <seadExpHeap.h>`



Inherits the following classes: [sead::Heap](classsead_1_1_heap.md)














## Public Types

| Type | Name |
| ---: | :--- |
| enum  | [**AllocMode**](#enum-allocmode)  <br> |
| enum  | [**FindFreeBlockMode**](#enum-findfreeblockmode)  <br> |
| enum  | [**FindMode**](#enum-findmode)  <br> |


## Public Types inherited from sead::Heap

See [sead::Heap](classsead_1_1_heap.md)

| Type | Name |
| ---: | :--- |
| typedef [**OffsetList**](classsead_1_1_offset_list.md)&lt; [**IDisposer**](classsead_1_1_i_disposer.md) &gt; | [**DisposerList**](classsead_1_1_heap.md#typedef-disposerlist)  <br> |
| enum  | [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection)  <br> |
| typedef [**OffsetList**](classsead_1_1_offset_list.md)&lt; [**Heap**](classsead_1_1_heap.md) &gt; | [**HeapList**](classsead_1_1_heap.md#typedef-heaplist)  <br> |


## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption)  <br> |














## Public Attributes inherited from sead::Heap

See [sead::Heap](classsead_1_1_heap.md)

| Type | Name |
| ---: | :--- |
|  [**CriticalSection**](classsead_1_1_critical_section.md) | [**mCS**](classsead_1_1_heap.md#variable-mcs)  <br> |
|  [**HeapList**](classsead_1_1_heap.md#typedef-heaplist) | [**mChildren**](classsead_1_1_heap.md#variable-mchildren)  <br> |
|  [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) | [**mDirection**](classsead_1_1_heap.md#variable-mdirection)  <br> |
|  [**DisposerList**](classsead_1_1_heap.md#typedef-disposerlist) | [**mDisposerList**](classsead_1_1_heap.md#variable-mdisposerlist)  <br> |
|  [**BitFlag16**](namespacesead.md#typedef-bitflag16) | [**mFlag**](classsead_1_1_heap.md#variable-mflag)  <br> |
|  [**u16**](_l_m_s___types_8h.md#typedef-u16) | [**mHeapCheckTag**](classsead_1_1_heap.md#variable-mheapchecktag)  <br> |
|  [**ListNode**](classsead_1_1_list_node.md) | [**mListNode**](classsead_1_1_heap.md#variable-mlistnode)  <br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**mParent**](classsead_1_1_heap.md#variable-mparent)  <br> |
|  size\_t | [**mSize**](classsead_1_1_heap.md#variable-msize)  <br> |
|  void \* | [**mStart**](classsead_1_1_heap.md#variable-mstart)  <br> |






























































## Public Functions

| Type | Name |
| ---: | :--- |
| virtual size\_t | [**adjust**](#function-adjust) () <br> |
|  void | [**checkFreeList**](#function-checkfreelist) () const<br> |
|  void | [**checkUseList**](#function-checkuselist) () const<br> |
| virtual void | [**destroy**](#function-destroy) () <br> |
| virtual [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**destroyAndGetAllocatableSize**](#function-destroyandgetallocatablesize) ([**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
| virtual void | [**dump**](#function-dump) () const<br> |
|  void | [**dumpFreeList**](#function-dumpfreelist) () const<br> |
|  void | [**dumpUseList**](#function-dumpuselist) () const<br> |
| virtual void | [**dumpYAML**](#function-dumpyaml) (WriteStream & stream, int i) const<br> |
| virtual void | [**free**](#function-free) (void \* ptr) <br> |
| virtual void | [**freeAll**](#function-freeall) () <br> |
| virtual void | [**genInformation\_**](#function-geninformation_) (hostio::Context \* context) <br> |
|  [**u8**](_l_m_s___types_8h.md#typedef-u8) | [**getAllocMode**](#function-getallocmode) () const<br> |
|  size\_t | [**getAllocatedSize**](#function-getallocatedsize) (void \* object) <br> |
| virtual uintptr\_t | [**getEndAddress**](#function-getendaddress) () const<br> |
| virtual size\_t | [**getFreeSize**](#function-getfreesize) () const<br> |
| virtual size\_t | [**getMaxAllocatableSize**](#function-getmaxallocatablesize) (int alignment) const<br> |
| virtual size\_t | [**getSize**](#function-getsize) () const<br> |
| virtual uintptr\_t | [**getStartAddress**](#function-getstartaddress) () const<br> |
| virtual bool | [**isAdjustable**](#function-isadjustable) () const<br> |
| virtual bool | [**isEmpty**](#function-isempty) () const<br> |
| virtual bool | [**isFreeable**](#function-isfreeable) () const<br> |
| virtual bool | [**isInclude**](#function-isinclude) (const void \* p\_void) const<br> |
| virtual bool | [**isResizable**](#function-isresizable) () const<br> |
| virtual void \* | [**resizeBack**](#function-resizeback) (void \* p\_void, size\_t size) <br> |
| virtual void \* | [**resizeFront**](#function-resizefront) (void \* p\_void, size\_t size) <br> |
|  void | [**setAllocMode**](#function-setallocmode) ([**u8**](_l_m_s___types_8h.md#typedef-u8) mode) <br> |
| virtual void | [**setFindFreeBlockMode**](#function-setfindfreeblockmode) ([**FindFreeBlockMode**](classsead_1_1_exp_heap.md#enum-findfreeblockmode) mode) <br> |
| virtual void \* | [**tryAlloc**](#function-tryalloc) (size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) <br> |
|  bool | [**tryCheckFreeList**](#function-trycheckfreelist) () const<br> |
|  bool | [**tryCheckUseList**](#function-trycheckuselist) () const<br> |
| virtual void \* | [**tryRealloc**](#function-tryrealloc) (void \* ptr, size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) <br> |


## Public Functions inherited from sead::Heap

See [sead::Heap](classsead_1_1_heap.md)

| Type | Name |
| ---: | :--- |
|   | [**Heap**](classsead_1_1_heap.md#function-heap) (const [**SafeString**](namespacesead.md#typedef-safestring) & name, [**Heap**](classsead_1_1_heap.md) \* parent, void \* address, size\_t size, [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) direction, bool) <br> |
| virtual size\_t | [**adjust**](classsead_1_1_heap.md#function-adjust) () = 0<br> |
|  void \* | [**alloc**](classsead_1_1_heap.md#function-alloc) (size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment=sizeof(void \*)) <br> |
|  void | [**appendDisposer\_**](classsead_1_1_heap.md#function-appenddisposer_) ([**IDisposer**](classsead_1_1_i_disposer.md) \* disposer) <br> |
| virtual void | [**destroy**](classsead_1_1_heap.md#function-destroy) () = 0<br> |
| virtual void | [**dump**](classsead_1_1_heap.md#function-dump) () const<br> |
|  void | [**dumpTreeYAML**](classsead_1_1_heap.md#function-dumptreeyaml) (WriteStream & stream, int) const<br> |
| virtual void | [**dumpYAML**](classsead_1_1_heap.md#function-dumpyaml) (WriteStream & stream, int) const<br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**findContainHeap\_**](classsead_1_1_heap.md#function-findcontainheap_) (const void \* ptr) <br> |
| virtual void | [**free**](classsead_1_1_heap.md#function-free) (void \* ptr) = 0<br> |
| virtual void | [**freeAll**](classsead_1_1_heap.md#function-freeall) () = 0<br> |
| virtual void | [**genInformation\_**](classsead_1_1_heap.md#function-geninformation_) (hostio::Context \*) <br> |
|  [**sead::CriticalSection**](classsead_1_1_critical_section.md) & | [**getCriticalSection**](classsead_1_1_heap.md#function-getcriticalsection) () <br> |
| virtual uintptr\_t | [**getEndAddress**](classsead_1_1_heap.md#function-getendaddress) () const = 0<br> |
| virtual size\_t | [**getFreeSize**](classsead_1_1_heap.md#function-getfreesize) () const = 0<br> |
| virtual size\_t | [**getMaxAllocatableSize**](classsead_1_1_heap.md#function-getmaxallocatablesize) (int alignment) const = 0<br> |
| virtual size\_t | [**getSize**](classsead_1_1_heap.md#function-getsize) () const = 0<br> |
| virtual uintptr\_t | [**getStartAddress**](classsead_1_1_heap.md#function-getstartaddress) () const = 0<br> |
| virtual bool | [**isAdjustable**](classsead_1_1_heap.md#function-isadjustable) () const = 0<br> |
| virtual bool | [**isEmpty**](classsead_1_1_heap.md#function-isempty) () const = 0<br> |
| virtual bool | [**isFreeable**](classsead_1_1_heap.md#function-isfreeable) () const = 0<br> |
| virtual bool | [**isInclude**](classsead_1_1_heap.md#function-isinclude) (const void \*) const = 0<br> |
| virtual bool | [**isResizable**](classsead_1_1_heap.md#function-isresizable) () const = 0<br> |
| virtual void | [**makeMetaString\_**](classsead_1_1_heap.md#function-makemetastring_) ([**BufferedSafeString**](namespacesead.md#typedef-bufferedsafestring) \*) <br> |
| virtual void | [**pushBackChild\_**](classsead_1_1_heap.md#function-pushbackchild_) ([**Heap**](classsead_1_1_heap.md) \* child) <br> |
|  void | [**removeDisposer\_**](classsead_1_1_heap.md#function-removedisposer_) ([**IDisposer**](classsead_1_1_i_disposer.md) \* disposer) <br> |
| virtual void \* | [**resizeFront**](classsead_1_1_heap.md#function-resizefront) (void \*, size\_t) = 0<br> |
| virtual void \* | [**tryAlloc**](classsead_1_1_heap.md#function-tryalloc) (size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) = 0<br> |
| virtual void \* | [**tryRealloc**](classsead_1_1_heap.md#function-tryrealloc) (void \* ptr, size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) <br> |
| virtual  | [**~Heap**](classsead_1_1_heap.md#function-heap) () <br> |


## Public Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](classsead_1_1_i_disposer.md#function-idisposer-12) () <br> |
|   | [**IDisposer**](classsead_1_1_i_disposer.md#function-idisposer-22) ([**Heap**](classsead_1_1_heap.md) \* disposer\_heap, [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption) option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](classsead_1_1_i_disposer.md#function-idisposer) () <br> |


## Public Functions inherited from sead::INamable

See [sead::INamable](classsead_1_1_i_namable.md)

| Type | Name |
| ---: | :--- |
|   | [**INamable**](classsead_1_1_i_namable.md#function-inamable-12) () <br> |
|   | [**INamable**](classsead_1_1_i_namable.md#function-inamable-22) (const [**SafeString**](namespacesead.md#typedef-safestring) & name) <br> |
|  const [**SafeString**](namespacesead.md#typedef-safestring) & | [**getName**](classsead_1_1_i_namable.md#function-getname) () const<br> |
|  void | [**setName**](classsead_1_1_i_namable.md#function-setname) (const [**SafeString**](namespacesead.md#typedef-safestring) & name) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  [**ExpHeap**](classsead_1_1_exp_heap.md) \* | [**create**](#function-create-12) (size\_t size, const [**SafeString**](namespacesead.md#typedef-safestring) & name, [**Heap**](classsead_1_1_heap.md) \* parent, [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) direction, bool) <br> |
|  [**ExpHeap**](classsead_1_1_exp_heap.md) \* | [**create**](#function-create-22) (void \* address, size\_t size, const [**SafeString**](namespacesead.md#typedef-safestring) & name, bool) <br> |
|  size\_t | [**getManagementAreaSize**](#function-getmanagementareasize) ([**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  [**ExpHeap**](classsead_1_1_exp_heap.md) \* | [**tryCreate**](#function-trycreate-12) (size\_t size, const [**SafeString**](namespacesead.md#typedef-safestring) & name, [**Heap**](classsead_1_1_heap.md) \* parent, [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) direction, bool) <br> |
|  [**ExpHeap**](classsead_1_1_exp_heap.md) \* | [**tryCreate**](#function-trycreate-22) (void \* address, size\_t size, const [**SafeString**](namespacesead.md#typedef-safestring) & name, bool) <br> |




## Public Static Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getListNodeOffset**](classsead_1_1_i_disposer.md#function-getlistnodeoffset) () <br> |




















## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**u8**](_l_m_s___types_8h.md#typedef-u8) | [**mAllocMode**](#variable-mallocmode)  <br> |
|  [**u8**](_l_m_s___types_8h.md#typedef-u8) | [**mFindFreeBlockMode**](#variable-mfindfreeblockmode)  <br> |
|  [**MemBlockList**](namespacesead.md#typedef-memblocklist) | [**mFreeList**](#variable-mfreelist)  <br> |
|  [**MemBlockList**](namespacesead.md#typedef-memblocklist) | [**mUseList**](#variable-muselist)  <br> |
































































## Protected Functions

| Type | Name |
| ---: | :--- |
|   | [**ExpHeap**](#function-expheap) (const [**SafeString**](namespacesead.md#typedef-safestring) & name, [**Heap**](classsead_1_1_heap.md) \* parent, void \* address, size\_t size, [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) direction, bool) <br> |
|  size\_t | [**adjustBack\_**](#function-adjustback_) () <br> |
|  size\_t | [**adjustFront\_**](#function-adjustfront_) () <br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**allocFromHead\_**](#function-allocfromhead_-12) (size\_t) <br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**allocFromHead\_**](#function-allocfromhead_-22) (size\_t, [**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**allocFromTail\_**](#function-allocfromtail_-12) (size\_t) <br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**allocFromTail\_**](#function-allocfromtail_-22) (size\_t, [**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**findFirstMemBlockIfFree\_**](#function-findfirstmemblockiffree_) () <br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**findFreeMemBlockFromHead\_**](#function-findfreememblockfromhead_-12) (size\_t, [**FindMode**](classsead_1_1_exp_heap.md#enum-findmode)) const<br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**findFreeMemBlockFromHead\_**](#function-findfreememblockfromhead_-22) (size\_t, [**s32**](_l_m_s___types_8h.md#typedef-s32), [**FindMode**](classsead_1_1_exp_heap.md#enum-findmode)) const<br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**findFreeMemBlockFromTail\_**](#function-findfreememblockfromtail_-12) (size\_t, [**FindMode**](classsead_1_1_exp_heap.md#enum-findmode)) const<br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**findFreeMemBlockFromTail\_**](#function-findfreememblockfromtail_-22) (size\_t, [**s32**](_l_m_s___types_8h.md#typedef-s32), [**FindMode**](classsead_1_1_exp_heap.md#enum-findmode)) const<br> |
|  [**MemBlock**](classsead_1_1_mem_block.md) \* | [**findLastMemBlockIfFree\_**](#function-findlastmemblockiffree_) () <br> |
|  void | [**pushToFreeList\_**](#function-pushtofreelist_) ([**MemBlock**](classsead_1_1_mem_block.md) \*) <br> |
|  void | [**pushToUseList\_**](#function-pushtouselist_) ([**MemBlock**](classsead_1_1_mem_block.md) \*) <br> |
| virtual  | [**~ExpHeap**](#function-expheap) () <br> |




## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getDisposerHeap\_**](classsead_1_1_i_disposer.md#function-getdisposerheap_) () const<br> |




## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**compareMemBlockAddr\_**](#function-comparememblockaddr_) (const [**MemBlock**](classsead_1_1_mem_block.md) \*, const [**MemBlock**](classsead_1_1_mem_block.md) \*) <br> |
|  void | [**createMaxSizeFreeMemBlock\_**](#function-createmaxsizefreememblock_) ([**ExpHeap**](classsead_1_1_exp_heap.md) \*) <br> |
|  void | [**doCreate**](#function-docreate) ([**ExpHeap**](classsead_1_1_exp_heap.md) \*, [**Heap**](classsead_1_1_heap.md) \*) <br> |








## Public Types Documentation




### enum AllocMode 

```C++
enum sead::ExpHeap::AllocMode {
    AllocMode_FirstFit = 0,
    AllocMode_BestFit = 1
};
```




<hr>



### enum FindFreeBlockMode 

```C++
enum sead::ExpHeap::FindFreeBlockMode {
    FindFreeBlockMode_Auto = 0,
    FindFreeBlockMode_FromFreeList = 1,
    FindFreeBlockMode_ByIteratingMemBlock = 2
};
```




<hr>



### enum FindMode 

```C++
enum sead::ExpHeap::FindMode;
```




<hr>
## Public Functions Documentation




### function adjust 

```C++
virtual size_t sead::ExpHeap::adjust () 
```



Implements [*sead::Heap::adjust*](classsead_1_1_heap.md#function-adjust)


<hr>



### function checkFreeList 

```C++
void sead::ExpHeap::checkFreeList () const
```




<hr>



### function checkUseList 

```C++
void sead::ExpHeap::checkUseList () const
```




<hr>



### function destroy 

```C++
virtual void sead::ExpHeap::destroy () 
```



Implements [*sead::Heap::destroy*](classsead_1_1_heap.md#function-destroy)


<hr>



### function destroyAndGetAllocatableSize 

```C++
virtual s32 sead::ExpHeap::destroyAndGetAllocatableSize (
    s32
) 
```




<hr>



### function dump 

```C++
virtual void sead::ExpHeap::dump () const
```



Implements [*sead::Heap::dump*](classsead_1_1_heap.md#function-dump)


<hr>



### function dumpFreeList 

```C++
void sead::ExpHeap::dumpFreeList () const
```




<hr>



### function dumpUseList 

```C++
void sead::ExpHeap::dumpUseList () const
```




<hr>



### function dumpYAML 

```C++
virtual void sead::ExpHeap::dumpYAML (
    WriteStream & stream,
    int i
) const
```



Implements [*sead::Heap::dumpYAML*](classsead_1_1_heap.md#function-dumpyaml)


<hr>



### function free 

```C++
virtual void sead::ExpHeap::free (
    void * ptr
) 
```



Implements [*sead::Heap::free*](classsead_1_1_heap.md#function-free)


<hr>



### function freeAll 

```C++
virtual void sead::ExpHeap::freeAll () 
```



Implements [*sead::Heap::freeAll*](classsead_1_1_heap.md#function-freeall)


<hr>



### function genInformation\_ 

```C++
virtual void sead::ExpHeap::genInformation_ (
    hostio::Context * context
) 
```



Implements [*sead::Heap::genInformation\_*](classsead_1_1_heap.md#function-geninformation_)


<hr>



### function getAllocMode 

```C++
inline u8 sead::ExpHeap::getAllocMode () const
```




<hr>



### function getAllocatedSize 

```C++
size_t sead::ExpHeap::getAllocatedSize (
    void * object
) 
```




<hr>



### function getEndAddress 

```C++
virtual uintptr_t sead::ExpHeap::getEndAddress () const
```



Implements [*sead::Heap::getEndAddress*](classsead_1_1_heap.md#function-getendaddress)


<hr>



### function getFreeSize 

```C++
virtual size_t sead::ExpHeap::getFreeSize () const
```



Implements [*sead::Heap::getFreeSize*](classsead_1_1_heap.md#function-getfreesize)


<hr>



### function getMaxAllocatableSize 

```C++
virtual size_t sead::ExpHeap::getMaxAllocatableSize (
    int alignment
) const
```



Implements [*sead::Heap::getMaxAllocatableSize*](classsead_1_1_heap.md#function-getmaxallocatablesize)


<hr>



### function getSize 

```C++
virtual size_t sead::ExpHeap::getSize () const
```



Implements [*sead::Heap::getSize*](classsead_1_1_heap.md#function-getsize)


<hr>



### function getStartAddress 

```C++
virtual uintptr_t sead::ExpHeap::getStartAddress () const
```



Implements [*sead::Heap::getStartAddress*](classsead_1_1_heap.md#function-getstartaddress)


<hr>



### function isAdjustable 

```C++
virtual bool sead::ExpHeap::isAdjustable () const
```



Implements [*sead::Heap::isAdjustable*](classsead_1_1_heap.md#function-isadjustable)


<hr>



### function isEmpty 

```C++
virtual bool sead::ExpHeap::isEmpty () const
```



Implements [*sead::Heap::isEmpty*](classsead_1_1_heap.md#function-isempty)


<hr>



### function isFreeable 

```C++
virtual bool sead::ExpHeap::isFreeable () const
```



Implements [*sead::Heap::isFreeable*](classsead_1_1_heap.md#function-isfreeable)


<hr>



### function isInclude 

```C++
virtual bool sead::ExpHeap::isInclude (
    const void * p_void
) const
```



Implements [*sead::Heap::isInclude*](classsead_1_1_heap.md#function-isinclude)


<hr>



### function isResizable 

```C++
virtual bool sead::ExpHeap::isResizable () const
```



Implements [*sead::Heap::isResizable*](classsead_1_1_heap.md#function-isresizable)


<hr>



### function resizeBack 

```C++
virtual void * sead::ExpHeap::resizeBack (
    void * p_void,
    size_t size
) 
```




<hr>



### function resizeFront 

```C++
virtual void * sead::ExpHeap::resizeFront (
    void * p_void,
    size_t size
) 
```



Implements [*sead::Heap::resizeFront*](classsead_1_1_heap.md#function-resizefront)


<hr>



### function setAllocMode 

```C++
inline void sead::ExpHeap::setAllocMode (
    u8 mode
) 
```




<hr>



### function setFindFreeBlockMode 

```C++
virtual void sead::ExpHeap::setFindFreeBlockMode (
    FindFreeBlockMode mode
) 
```




<hr>



### function tryAlloc 

```C++
virtual void * sead::ExpHeap::tryAlloc (
    size_t size,
    s32 alignment
) 
```



Implements [*sead::Heap::tryAlloc*](classsead_1_1_heap.md#function-tryalloc)


<hr>



### function tryCheckFreeList 

```C++
bool sead::ExpHeap::tryCheckFreeList () const
```




<hr>



### function tryCheckUseList 

```C++
bool sead::ExpHeap::tryCheckUseList () const
```




<hr>



### function tryRealloc 

```C++
virtual void * sead::ExpHeap::tryRealloc (
    void * ptr,
    size_t size,
    s32 alignment
) 
```



Implements [*sead::Heap::tryRealloc*](classsead_1_1_heap.md#function-tryrealloc)


<hr>
## Public Static Functions Documentation




### function create [1/2]

```C++
static ExpHeap * sead::ExpHeap::create (
    size_t size,
    const SafeString & name,
    Heap * parent,
    HeapDirection direction,
    bool
) 
```




<hr>



### function create [2/2]

```C++
static ExpHeap * sead::ExpHeap::create (
    void * address,
    size_t size,
    const SafeString & name,
    bool
) 
```




<hr>



### function getManagementAreaSize 

```C++
static size_t sead::ExpHeap::getManagementAreaSize (
    s32
) 
```




<hr>



### function tryCreate [1/2]

```C++
static ExpHeap * sead::ExpHeap::tryCreate (
    size_t size,
    const SafeString & name,
    Heap * parent,
    HeapDirection direction,
    bool
) 
```




<hr>



### function tryCreate [2/2]

```C++
static ExpHeap * sead::ExpHeap::tryCreate (
    void * address,
    size_t size,
    const SafeString & name,
    bool
) 
```




<hr>
## Protected Attributes Documentation




### variable mAllocMode 

```C++
u8 sead::ExpHeap::mAllocMode;
```




<hr>



### variable mFindFreeBlockMode 

```C++
u8 sead::ExpHeap::mFindFreeBlockMode;
```




<hr>



### variable mFreeList 

```C++
MemBlockList sead::ExpHeap::mFreeList;
```




<hr>



### variable mUseList 

```C++
MemBlockList sead::ExpHeap::mUseList;
```




<hr>
## Protected Functions Documentation




### function ExpHeap 

```C++
sead::ExpHeap::ExpHeap (
    const SafeString & name,
    Heap * parent,
    void * address,
    size_t size,
    HeapDirection direction,
    bool
) 
```




<hr>



### function adjustBack\_ 

```C++
size_t sead::ExpHeap::adjustBack_ () 
```




<hr>



### function adjustFront\_ 

```C++
size_t sead::ExpHeap::adjustFront_ () 
```




<hr>



### function allocFromHead\_ [1/2]

```C++
MemBlock * sead::ExpHeap::allocFromHead_ (
    size_t
) 
```




<hr>



### function allocFromHead\_ [2/2]

```C++
MemBlock * sead::ExpHeap::allocFromHead_ (
    size_t,
    s32
) 
```




<hr>



### function allocFromTail\_ [1/2]

```C++
MemBlock * sead::ExpHeap::allocFromTail_ (
    size_t
) 
```




<hr>



### function allocFromTail\_ [2/2]

```C++
MemBlock * sead::ExpHeap::allocFromTail_ (
    size_t,
    s32
) 
```




<hr>



### function findFirstMemBlockIfFree\_ 

```C++
MemBlock * sead::ExpHeap::findFirstMemBlockIfFree_ () 
```




<hr>



### function findFreeMemBlockFromHead\_ [1/2]

```C++
MemBlock * sead::ExpHeap::findFreeMemBlockFromHead_ (
    size_t,
    FindMode
) const
```




<hr>



### function findFreeMemBlockFromHead\_ [2/2]

```C++
MemBlock * sead::ExpHeap::findFreeMemBlockFromHead_ (
    size_t,
    s32,
    FindMode
) const
```




<hr>



### function findFreeMemBlockFromTail\_ [1/2]

```C++
MemBlock * sead::ExpHeap::findFreeMemBlockFromTail_ (
    size_t,
    FindMode
) const
```




<hr>



### function findFreeMemBlockFromTail\_ [2/2]

```C++
MemBlock * sead::ExpHeap::findFreeMemBlockFromTail_ (
    size_t,
    s32,
    FindMode
) const
```




<hr>



### function findLastMemBlockIfFree\_ 

```C++
MemBlock * sead::ExpHeap::findLastMemBlockIfFree_ () 
```




<hr>



### function pushToFreeList\_ 

```C++
void sead::ExpHeap::pushToFreeList_ (
    MemBlock *
) 
```




<hr>



### function pushToUseList\_ 

```C++
void sead::ExpHeap::pushToUseList_ (
    MemBlock *
) 
```




<hr>



### function ~ExpHeap 

```C++
virtual sead::ExpHeap::~ExpHeap () 
```




<hr>
## Protected Static Functions Documentation




### function compareMemBlockAddr\_ 

```C++
static s32 sead::ExpHeap::compareMemBlockAddr_ (
    const MemBlock *,
    const MemBlock *
) 
```




<hr>



### function createMaxSizeFreeMemBlock\_ 

```C++
static void sead::ExpHeap::createMaxSizeFreeMemBlock_ (
    ExpHeap *
) 
```




<hr>



### function doCreate 

```C++
static void sead::ExpHeap::doCreate (
    ExpHeap *,
    Heap *
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/heap/seadExpHeap.h`

