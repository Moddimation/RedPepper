

# Class sead::Heap



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Heap**](classsead_1_1Heap.md)








Inherits the following classes: [sead::IDisposer](classsead_1_1IDisposer.md),  [sead::INamable](classsead_1_1INamable.md)


Inherited by the following classes: [sead::ExpHeap](classsead_1_1ExpHeap.md),  [sead::FrameHeap](classsead_1_1FrameHeap.md)












## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**OffsetList**](classsead_1_1OffsetList.md)&lt; [**IDisposer**](classsead_1_1IDisposer.md) &gt; | [**DisposerList**](#typedef-disposerlist)  <br> |
| enum  | [**HeapDirection**](#enum-heapdirection)  <br> |
| typedef [**OffsetList**](classsead_1_1OffsetList.md)&lt; [**Heap**](classsead_1_1Heap.md) &gt; | [**HeapList**](#typedef-heaplist)  <br> |


## Public Types inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
| enum  | [**HeapNullOption**](classsead_1_1IDisposer.md#enum-heapnulloption)  <br> |










## Public Attributes

| Type | Name |
| ---: | :--- |
|  [**CriticalSection**](classsead_1_1CriticalSection.md) | [**mCS**](#variable-mcs)  <br> |
|  [**HeapList**](classsead_1_1OffsetList.md) | [**mChildren**](#variable-mchildren)  <br> |
|  HeapDirection | [**mDirection**](#variable-mdirection)  <br> |
|  [**DisposerList**](classsead_1_1OffsetList.md) | [**mDisposerList**](#variable-mdisposerlist)  <br> |
|  [**BitFlag16**](classsead_1_1BitFlag.md) | [**mFlag**](#variable-mflag)  <br> |
|  u16 | [**mHeapCheckTag**](#variable-mheapchecktag)  <br> |
|  [**ListNode**](classsead_1_1ListNode.md) | [**mListNode**](#variable-mlistnode)  <br> |
|  [**Heap**](classsead_1_1Heap.md) \* | [**mParent**](#variable-mparent)  <br> |
|  size\_t | [**mSize**](#variable-msize)  <br> |
|  void \* | [**mStart**](#variable-mstart)  <br> |
















































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Heap**](#function-heap) (const [**SafeString**](classsead_1_1SafeStringBase.md) & name, [**Heap**](classsead_1_1Heap.md) \* parent, void \* address, size\_t size, HeapDirection direction, bool) <br> |
| virtual size\_t | [**adjust**](#function-adjust) () = 0<br> |
|  void \* | [**alloc**](#function-alloc) (size\_t size, s32 alignment=sizeof(void \*)) <br> |
|  void | [**appendDisposer\_**](#function-appenddisposer_) ([**IDisposer**](classsead_1_1IDisposer.md) \* disposer) <br> |
| virtual void | [**destroy**](#function-destroy) () = 0<br> |
| virtual void | [**dump**](#function-dump) () const<br> |
|  void | [**dumpTreeYAML**](#function-dumptreeyaml) (WriteStream & stream, int) const<br> |
| virtual void | [**dumpYAML**](#function-dumpyaml) (WriteStream & stream, int) const<br> |
|  [**Heap**](classsead_1_1Heap.md) \* | [**findContainHeap\_**](#function-findcontainheap_) (const void \* ptr) <br> |
| virtual void | [**free**](#function-free) (void \* ptr) = 0<br> |
| virtual void | [**freeAll**](#function-freeall) () = 0<br> |
| virtual void | [**genInformation\_**](#function-geninformation_) (hostio::Context \*) <br> |
|  [**sead::CriticalSection**](classsead_1_1CriticalSection.md) & | [**getCriticalSection**](#function-getcriticalsection) () <br> |
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
| virtual void | [**makeMetaString\_**](#function-makemetastring_) ([**BufferedSafeString**](classsead_1_1BufferedSafeStringBase.md) \*) <br> |
| virtual void | [**pushBackChild\_**](#function-pushbackchild_) ([**Heap**](classsead_1_1Heap.md) \* child) <br> |
|  void | [**removeDisposer\_**](#function-removedisposer_) ([**IDisposer**](classsead_1_1IDisposer.md) \* disposer) <br> |
| virtual void \* | [**resizeFront**](#function-resizefront) (void \*, size\_t) = 0<br> |
| virtual void \* | [**tryAlloc**](#function-tryalloc) (size\_t size, s32 alignment) = 0<br> |
| virtual void \* | [**tryRealloc**](#function-tryrealloc) (void \* ptr, size\_t size, s32 alignment) <br> |
| virtual  | [**~Heap**](#function-heap) () <br> |


## Public Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|   | [**IDisposer**](classsead_1_1IDisposer.md#function-idisposer-12) () <br> |
|   | [**IDisposer**](classsead_1_1IDisposer.md#function-idisposer-22) ([**Heap**](classsead_1_1Heap.md) \* disposer\_heap, HeapNullOption option=HeapNullOption\_UseSpecifiedOrCurrentHeap) <br> |
| virtual  | [**~IDisposer**](classsead_1_1IDisposer.md#function-idisposer) () <br> |


## Public Functions inherited from sead::INamable

See [sead::INamable](classsead_1_1INamable.md)

| Type | Name |
| ---: | :--- |
|   | [**INamable**](classsead_1_1INamable.md#function-inamable-12) () <br> |
|   | [**INamable**](classsead_1_1INamable.md#function-inamable-22) (const [**SafeString**](classsead_1_1SafeStringBase.md) & name) <br> |
|  const [**SafeString**](classsead_1_1SafeStringBase.md) & | [**getName**](classsead_1_1INamable.md#function-getname) () const<br> |
|  void | [**setName**](classsead_1_1INamable.md#function-setname) (const [**SafeString**](classsead_1_1SafeStringBase.md) & name) <br> |




## Public Static Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|  u32 | [**getListNodeOffset**](classsead_1_1IDisposer.md#function-getlistnodeoffset) () <br> |


































































## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1IDisposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1Heap.md) \* | [**getDisposerHeap\_**](classsead_1_1IDisposer.md#function-getdisposerheap_) () const<br> |










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

