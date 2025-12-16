

# Class sead::Heap



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Heap**](classsead_1_1_heap.md)





* `#include <seadHeap.h>`



Inherits the following classes: [sead::IDisposer](classsead_1_1_i_disposer.md),  [sead::INamable](classsead_1_1_i_namable.md)


Inherited by the following classes: [sead::ExpHeap](classsead_1_1_exp_heap.md),  [sead::FrameHeap](classsead_1_1_frame_heap.md)












## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**OffsetList**](classsead_1_1_offset_list.md)&lt; [**IDisposer**](classsead_1_1_i_disposer.md) &gt; | [**DisposerList**](#typedef-disposerlist)  <br> |
| enum  | [**HeapDirection**](#enum-heapdirection)  <br> |
| typedef [**OffsetList**](classsead_1_1_offset_list.md)&lt; [**Heap**](classsead_1_1_heap.md) &gt; | [**HeapList**](#typedef-heaplist)  <br> |


## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1_i_disposer.md#enum-heapnulloption)  <br> |










## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**CriticalSection**](classsead_1_1_critical_section.md) | [**mCS**](#variable-mcs)  <br> |
|  [**HeapList**](classsead_1_1_heap.md#typedef-heaplist) | [**mChildren**](#variable-mchildren)  <br> |
|  [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) | [**mDirection**](#variable-mdirection)  <br> |
|  [**DisposerList**](classsead_1_1_heap.md#typedef-disposerlist) | [**mDisposerList**](#variable-mdisposerlist)  <br> |
|  [**BitFlag16**](namespacesead.md#typedef-bitflag16) | [**mFlag**](#variable-mflag)  <br> |
|  [**u16**](_l_m_s___types_8h.md#typedef-u16) | [**mHeapCheckTag**](#variable-mheapchecktag)  <br> |
|  [**ListNode**](classsead_1_1_list_node.md) | [**mListNode**](#variable-mlistnode)  <br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**mParent**](#variable-mparent)  <br> |
|  size\_t | [**mSize**](#variable-msize)  <br> |
|  void \* | [**mStart**](#variable-mstart)  <br> |
















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Heap**](#function-heap) (const [**SafeString**](namespacesead.md#typedef-safestring) & name, [**Heap**](classsead_1_1_heap.md) \* parent, void \* address, size\_t size, [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) direction, bool) <br> |
| virtual size\_t | [**adjust**](#function-adjust) () = 0<br> |
|  void \* | [**alloc**](#function-alloc) (size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment=sizeof(void \*)) <br> |
|  void | [**appendDisposer\_**](#function-appenddisposer_) ([**IDisposer**](classsead_1_1_i_disposer.md) \* disposer) <br> |
| virtual void | [**destroy**](#function-destroy) () = 0<br> |
| virtual void | [**dump**](#function-dump) () const<br> |
|  void | [**dumpTreeYAML**](#function-dumptreeyaml) (WriteStream & stream, int) const<br> |
| virtual void | [**dumpYAML**](#function-dumpyaml) (WriteStream & stream, int) const<br> |
|  [**Heap**](classsead_1_1_heap.md) \* | [**findContainHeap\_**](#function-findcontainheap_) (const void \* ptr) <br> |
| virtual void | [**free**](#function-free) (void \* ptr) = 0<br> |
| virtual void | [**freeAll**](#function-freeall) () = 0<br> |
| virtual void | [**genInformation\_**](#function-geninformation_) (hostio::Context \*) <br> |
|  [**sead::CriticalSection**](classsead_1_1_critical_section.md) & | [**getCriticalSection**](#function-getcriticalsection) () <br> |
| virtual uintptr\_t | [**getEndAddress**](#function-getendaddress) () const = 0<br> |
| virtual size\_t | [**getFreeSize**](#function-getfreesize) () const = 0<br> |
| virtual size\_t | [**getMaxAllocatableSize**](#function-getmaxallocatablesize) (int alignment) const = 0<br> |
| virtual size\_t | [**getSize**](#function-getsize) () const = 0<br> |
| virtual uintptr\_t | [**getStartAddress**](#function-getstartaddress) () const = 0<br> |
| virtual bool | [**isAdjustable**](#function-isadjustable) () const = 0<br> |
| virtual bool | [**isEmpty**](#function-isempty) () const = 0<br> |
| virtual bool | [**isFreeable**](#function-isfreeable) () const = 0<br> |
| virtual bool | [**isInclude**](#function-isinclude) (const void \*) const = 0<br> |
| virtual bool | [**isResizable**](#function-isresizable) () const = 0<br> |
| virtual void | [**makeMetaString\_**](#function-makemetastring_) ([**BufferedSafeString**](namespacesead.md#typedef-bufferedsafestring) \*) <br> |
| virtual void | [**pushBackChild\_**](#function-pushbackchild_) ([**Heap**](classsead_1_1_heap.md) \* child) <br> |
|  void | [**removeDisposer\_**](#function-removedisposer_) ([**IDisposer**](classsead_1_1_i_disposer.md) \* disposer) <br> |
| virtual void \* | [**resizeFront**](#function-resizefront) (void \*, size\_t) = 0<br> |
| virtual void \* | [**tryAlloc**](#function-tryalloc) (size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) = 0<br> |
| virtual void \* | [**tryRealloc**](#function-tryrealloc) (void \* ptr, size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) <br> |
| virtual  | [**~Heap**](#function-heap) () <br> |


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










## Public Types Documentation




### typedef DisposerList 

```C++
typedef OffsetList<IDisposer> sead::Heap::DisposerList;
```




<hr>



### enum HeapDirection 

```C++
enum sead::Heap::HeapDirection {
    cHeapDirection_Forward = 1,
    cHeapDirection_Reverse = -1
};
```




<hr>



### typedef HeapList 

```C++
typedef OffsetList<Heap> sead::Heap::HeapList;
```




<hr>
## Public Attributes Documentation




### variable mCS 

```C++
CriticalSection sead::Heap::mCS;
```




<hr>



### variable mChildren 

```C++
HeapList sead::Heap::mChildren;
```




<hr>



### variable mDirection 

```C++
HeapDirection sead::Heap::mDirection;
```




<hr>



### variable mDisposerList 

```C++
DisposerList sead::Heap::mDisposerList;
```




<hr>



### variable mFlag 

```C++
BitFlag16 sead::Heap::mFlag;
```




<hr>



### variable mHeapCheckTag 

```C++
u16 sead::Heap::mHeapCheckTag;
```




<hr>



### variable mListNode 

```C++
ListNode sead::Heap::mListNode;
```




<hr>



### variable mParent 

```C++
Heap* sead::Heap::mParent;
```




<hr>



### variable mSize 

```C++
size_t sead::Heap::mSize;
```




<hr>



### variable mStart 

```C++
void* sead::Heap::mStart;
```




<hr>
## Public Functions Documentation




### function Heap 

```C++
sead::Heap::Heap (
    const SafeString & name,
    Heap * parent,
    void * address,
    size_t size,
    HeapDirection direction,
    bool
) 
```




<hr>



### function adjust 

```C++
virtual size_t sead::Heap::adjust () = 0
```




<hr>



### function alloc 

```C++
inline void * sead::Heap::alloc (
    size_t size,
    s32 alignment=sizeof(void *)
) 
```




<hr>



### function appendDisposer\_ 

```C++
void sead::Heap::appendDisposer_ (
    IDisposer * disposer
) 
```




<hr>



### function destroy 

```C++
virtual void sead::Heap::destroy () = 0
```




<hr>



### function dump 

```C++
inline virtual void sead::Heap::dump () const
```




<hr>



### function dumpTreeYAML 

```C++
void sead::Heap::dumpTreeYAML (
    WriteStream & stream,
    int
) const
```




<hr>



### function dumpYAML 

```C++
virtual void sead::Heap::dumpYAML (
    WriteStream & stream,
    int
) const
```




<hr>



### function findContainHeap\_ 

```C++
Heap * sead::Heap::findContainHeap_ (
    const void * ptr
) 
```




<hr>



### function free 

```C++
virtual void sead::Heap::free (
    void * ptr
) = 0
```




<hr>



### function freeAll 

```C++
virtual void sead::Heap::freeAll () = 0
```




<hr>



### function genInformation\_ 

```C++
virtual void sead::Heap::genInformation_ (
    hostio::Context *
) 
```




<hr>



### function getCriticalSection 

```C++
inline sead::CriticalSection & sead::Heap::getCriticalSection () 
```




<hr>



### function getEndAddress 

```C++
virtual uintptr_t sead::Heap::getEndAddress () const = 0
```




<hr>



### function getFreeSize 

```C++
virtual size_t sead::Heap::getFreeSize () const = 0
```




<hr>



### function getMaxAllocatableSize 

```C++
virtual size_t sead::Heap::getMaxAllocatableSize (
    int alignment
) const = 0
```




<hr>



### function getSize 

```C++
virtual size_t sead::Heap::getSize () const = 0
```




<hr>



### function getStartAddress 

```C++
virtual uintptr_t sead::Heap::getStartAddress () const = 0
```




<hr>



### function isAdjustable 

```C++
virtual bool sead::Heap::isAdjustable () const = 0
```




<hr>



### function isEmpty 

```C++
virtual bool sead::Heap::isEmpty () const = 0
```




<hr>



### function isFreeable 

```C++
virtual bool sead::Heap::isFreeable () const = 0
```




<hr>



### function isInclude 

```C++
virtual bool sead::Heap::isInclude (
    const void *
) const = 0
```




<hr>



### function isResizable 

```C++
virtual bool sead::Heap::isResizable () const = 0
```




<hr>



### function makeMetaString\_ 

```C++
virtual void sead::Heap::makeMetaString_ (
    BufferedSafeString *
) 
```




<hr>



### function pushBackChild\_ 

```C++
virtual void sead::Heap::pushBackChild_ (
    Heap * child
) 
```




<hr>



### function removeDisposer\_ 

```C++
void sead::Heap::removeDisposer_ (
    IDisposer * disposer
) 
```




<hr>



### function resizeFront 

```C++
virtual void * sead::Heap::resizeFront (
    void *,
    size_t
) = 0
```




<hr>



### function tryAlloc 

```C++
virtual void * sead::Heap::tryAlloc (
    size_t size,
    s32 alignment
) = 0
```




<hr>



### function tryRealloc 

```C++
inline virtual void * sead::Heap::tryRealloc (
    void * ptr,
    size_t size,
    s32 alignment
) 
```




<hr>



### function ~Heap 

```C++
virtual sead::Heap::~Heap () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/heap/seadHeap.h`

