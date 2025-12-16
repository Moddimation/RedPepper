

# Class sead::FrameHeap



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FrameHeap**](classsead_1_1_frame_heap.md)





* `#include <seadFrameHeap.h>`



Inherits the following classes: [sead::Heap](classsead_1_1_heap.md)












## Classes

| Type | Name |
| ---: | :--- |
| struct | [**State**](structsead_1_1_frame_heap_1_1_state.md) <br> |




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
| virtual void | [**destroy**](#function-destroy) () <br> |
| virtual void | [**dump**](#function-dump) () const<br> |
| virtual void | [**dumpYAML**](#function-dumpyaml) (WriteStream & stream, int i) const<br> |
| virtual void | [**free**](#function-free) (void \* ptr) <br> |
| virtual void | [**freeAll**](#function-freeall) () <br> |
|  void | [**freeHead**](#function-freehead) () <br> |
|  void | [**freeTail**](#function-freetail) () <br> |
| virtual void | [**genInformation\_**](#function-geninformation_) (hostio::Context \* context) <br> |
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
|  void | [**restoreState**](#function-restorestate) (const [**State**](structsead_1_1_frame_heap_1_1_state.md) & state) <br> |
| virtual void \* | [**tryAlloc**](#function-tryalloc) (size\_t size, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment) <br> |


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
|  [**FrameHeap**](classsead_1_1_frame_heap.md) \* | [**create**](#function-create) (size\_t size, const [**SafeString**](namespacesead.md#typedef-safestring) & name, [**Heap**](classsead_1_1_heap.md) \* parent, [**s32**](_l_m_s___types_8h.md#typedef-s32), [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) direction, bool) <br> |
|  size\_t | [**getManagementAreaSize**](#function-getmanagementareasize) ([**s32**](_l_m_s___types_8h.md#typedef-s32)) <br> |
|  [**FrameHeap**](classsead_1_1_frame_heap.md) \* | [**tryCreate**](#function-trycreate) (size\_t size, const [**SafeString**](namespacesead.md#typedef-safestring) & name, [**Heap**](classsead_1_1_heap.md) \* parent, [**s32**](_l_m_s___types_8h.md#typedef-s32), [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) direction, bool) <br> |




## Public Static Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**u32**](_l_m_s___types_8h.md#typedef-u32) | [**getListNodeOffset**](classsead_1_1_i_disposer.md#function-getlistnodeoffset) () <br> |




















## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**State**](structsead_1_1_frame_heap_1_1_state.md) | [**mState**](#variable-mstate)  <br> |
































































## Protected Functions

| Type | Name |
| ---: | :--- |
|   | [**FrameHeap**](#function-frameheap) (const [**SafeString**](namespacesead.md#typedef-safestring) & name, [**Heap**](classsead_1_1_heap.md) \* parent, void \* address, size\_t size, [**HeapDirection**](classsead_1_1_heap.md#enum-heapdirection) direction, bool) <br> |
|  void \* | [**getAreaEnd\_**](#function-getareaend_) () const<br> |
|  void \* | [**getAreaStart\_**](#function-getareastart_) () const<br> |
|  void | [**initialize\_**](#function-initialize_) () <br> |
| virtual  | [**~FrameHeap**](#function-frameheap) () <br> |




## Protected Functions inherited from sead::IDisposer

See [sead::IDisposer](classsead_1_1_i_disposer.md)

| Type | Name |
| ---: | :--- |
|  [**Heap**](classsead_1_1_heap.md) \* | [**getDisposerHeap\_**](classsead_1_1_i_disposer.md#function-getdisposerheap_) () const<br> |












## Public Functions Documentation




### function adjust 

```C++
virtual size_t sead::FrameHeap::adjust () 
```



Implements [*sead::Heap::adjust*](classsead_1_1_heap.md#function-adjust)


<hr>



### function destroy 

```C++
virtual void sead::FrameHeap::destroy () 
```



Implements [*sead::Heap::destroy*](classsead_1_1_heap.md#function-destroy)


<hr>



### function dump 

```C++
virtual void sead::FrameHeap::dump () const
```



Implements [*sead::Heap::dump*](classsead_1_1_heap.md#function-dump)


<hr>



### function dumpYAML 

```C++
virtual void sead::FrameHeap::dumpYAML (
    WriteStream & stream,
    int i
) const
```



Implements [*sead::Heap::dumpYAML*](classsead_1_1_heap.md#function-dumpyaml)


<hr>



### function free 

```C++
virtual void sead::FrameHeap::free (
    void * ptr
) 
```



Implements [*sead::Heap::free*](classsead_1_1_heap.md#function-free)


<hr>



### function freeAll 

```C++
virtual void sead::FrameHeap::freeAll () 
```



Implements [*sead::Heap::freeAll*](classsead_1_1_heap.md#function-freeall)


<hr>



### function freeHead 

```C++
void sead::FrameHeap::freeHead () 
```




<hr>



### function freeTail 

```C++
void sead::FrameHeap::freeTail () 
```




<hr>



### function genInformation\_ 

```C++
virtual void sead::FrameHeap::genInformation_ (
    hostio::Context * context
) 
```



Implements [*sead::Heap::genInformation\_*](classsead_1_1_heap.md#function-geninformation_)


<hr>



### function getEndAddress 

```C++
virtual uintptr_t sead::FrameHeap::getEndAddress () const
```



Implements [*sead::Heap::getEndAddress*](classsead_1_1_heap.md#function-getendaddress)


<hr>



### function getFreeSize 

```C++
virtual size_t sead::FrameHeap::getFreeSize () const
```



Implements [*sead::Heap::getFreeSize*](classsead_1_1_heap.md#function-getfreesize)


<hr>



### function getMaxAllocatableSize 

```C++
virtual size_t sead::FrameHeap::getMaxAllocatableSize (
    int alignment
) const
```



Implements [*sead::Heap::getMaxAllocatableSize*](classsead_1_1_heap.md#function-getmaxallocatablesize)


<hr>



### function getSize 

```C++
virtual size_t sead::FrameHeap::getSize () const
```



Implements [*sead::Heap::getSize*](classsead_1_1_heap.md#function-getsize)


<hr>



### function getStartAddress 

```C++
virtual uintptr_t sead::FrameHeap::getStartAddress () const
```



Implements [*sead::Heap::getStartAddress*](classsead_1_1_heap.md#function-getstartaddress)


<hr>



### function isAdjustable 

```C++
virtual bool sead::FrameHeap::isAdjustable () const
```



Implements [*sead::Heap::isAdjustable*](classsead_1_1_heap.md#function-isadjustable)


<hr>



### function isEmpty 

```C++
virtual bool sead::FrameHeap::isEmpty () const
```



Implements [*sead::Heap::isEmpty*](classsead_1_1_heap.md#function-isempty)


<hr>



### function isFreeable 

```C++
virtual bool sead::FrameHeap::isFreeable () const
```



Implements [*sead::Heap::isFreeable*](classsead_1_1_heap.md#function-isfreeable)


<hr>



### function isInclude 

```C++
virtual bool sead::FrameHeap::isInclude (
    const void * p_void
) const
```



Implements [*sead::Heap::isInclude*](classsead_1_1_heap.md#function-isinclude)


<hr>



### function isResizable 

```C++
virtual bool sead::FrameHeap::isResizable () const
```



Implements [*sead::Heap::isResizable*](classsead_1_1_heap.md#function-isresizable)


<hr>



### function resizeBack 

```C++
virtual void * sead::FrameHeap::resizeBack (
    void * p_void,
    size_t size
) 
```




<hr>



### function resizeFront 

```C++
virtual void * sead::FrameHeap::resizeFront (
    void * p_void,
    size_t size
) 
```



Implements [*sead::Heap::resizeFront*](classsead_1_1_heap.md#function-resizefront)


<hr>



### function restoreState 

```C++
void sead::FrameHeap::restoreState (
    const State & state
) 
```




<hr>



### function tryAlloc 

```C++
virtual void * sead::FrameHeap::tryAlloc (
    size_t size,
    s32 alignment
) 
```



Implements [*sead::Heap::tryAlloc*](classsead_1_1_heap.md#function-tryalloc)


<hr>
## Public Static Functions Documentation




### function create 

```C++
static FrameHeap * sead::FrameHeap::create (
    size_t size,
    const SafeString & name,
    Heap * parent,
    s32,
    HeapDirection direction,
    bool
) 
```




<hr>



### function getManagementAreaSize 

```C++
static size_t sead::FrameHeap::getManagementAreaSize (
    s32
) 
```




<hr>



### function tryCreate 

```C++
static FrameHeap * sead::FrameHeap::tryCreate (
    size_t size,
    const SafeString & name,
    Heap * parent,
    s32,
    HeapDirection direction,
    bool
) 
```




<hr>
## Protected Attributes Documentation




### variable mState 

```C++
State sead::FrameHeap::mState;
```




<hr>
## Protected Functions Documentation




### function FrameHeap 

```C++
sead::FrameHeap::FrameHeap (
    const SafeString & name,
    Heap * parent,
    void * address,
    size_t size,
    HeapDirection direction,
    bool
) 
```




<hr>



### function getAreaEnd\_ 

```C++
void * sead::FrameHeap::getAreaEnd_ () const
```




<hr>



### function getAreaStart\_ 

```C++
void * sead::FrameHeap::getAreaStart_ () const
```




<hr>



### function initialize\_ 

```C++
void sead::FrameHeap::initialize_ () 
```




<hr>



### function ~FrameHeap 

```C++
virtual sead::FrameHeap::~FrameHeap () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/heap/seadFrameHeap.h`

