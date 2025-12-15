

# Class sead::PtrArrayImpl



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**PtrArrayImpl**](classsead_1_1PtrArrayImpl.md)










Inherited by the following classes: [sead::PtrArray](classsead_1_1PtrArray.md),  [sead::PtrArray](classsead_1_1PtrArray.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**PtrArrayImpl**](#function-ptrarrayimpl-12) () <br> |
|   | [**PtrArrayImpl**](#function-ptrarrayimpl-22) (s32 ptrNumMax, void \* buf) <br> |
|  void | [**allocBuffer**](#function-allocbuffer) (s32 ptrNumMax, [**Heap**](classsead_1_1Heap.md) \* heap, s32 alignment=sizeof(void \*)) <br> |
|  void | [**allocBufferInline**](#function-allocbufferinline) (s32 ptrNumMax) <br> |
|  s32 | [**capacity**](#function-capacity) () const<br> |
|  void | [**clear**](#function-clear) () <br> |
|  void | [**erase**](#function-erase-12) (s32 position) <br> |
|  void | [**erase**](#function-erase-22) (s32 position, s32 count) <br> |
|  void | [**freeBuffer**](#function-freebuffer) () <br> |
|  bool | [**isBufferReady**](#function-isbufferready) () const<br> |
|  bool | [**isEmpty**](#function-isempty) () const<br> |
|  bool | [**isFull**](#function-isfull) () const<br> |
|  void | [**resize**](#function-resize) (s32 size) <br> |
|  void | [**reverse**](#function-reverse) () <br> |
|  void | [**setBuffer**](#function-setbuffer) (s32 ptrNumMax, void \* buf) <br> |
|  void | [**shuffle**](#function-shuffle-12) () <br> |
|  void | [**shuffle**](#function-shuffle-22) ([**Random**](classsead_1_1Random.md) \* random) <br> |
|  s32 | [**size**](#function-size) () const<br> |
|  void | [**swap**](#function-swap) (s32 pos1, s32 pos2) <br> |
|  bool | [**tryAllocBuffer**](#function-tryallocbuffer) (s32 ptrNumMax, [**Heap**](classsead_1_1Heap.md) \* heap, s32 alignment=sizeof(void \*)) <br> |
|  void | [**unsafeResize**](#function-unsaferesize) (s32 size) <br> |




## Protected Types

| Type | Name |
| ---: | :--- |
| typedef int(\* | [**CompareCallbackImpl**](#typedef-comparecallbackimpl)  <br> |




## Protected Attributes

| Type | Name |
| ---: | :--- |
|  s32 | [**mPtrNum**](#variable-mptrnum)  <br> |
|  s32 | [**mPtrNumMax**](#variable-mptrnummax)  <br> |
|  void \*\* | [**mPtrs**](#variable-mptrs)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  void \* | [**at**](#function-at) (s32 idx) const<br> |
|  void \* | [**back**](#function-back) () const<br> |
|  s32 | [**binarySearch**](#function-binarysearch) (const void \* ptr, CompareCallbackImpl cmp) const<br> |
|  bool | [**checkInsert**](#function-checkinsert) (s32 idx, s32 num) <br> |
|  s32 | [**compare**](#function-compare) (const [**PtrArrayImpl**](classsead_1_1PtrArrayImpl.md) & other, CompareCallbackImpl cmp) const<br> |
|  void | [**createVacancy**](#function-createvacancy) (s32 pos, s32 count) <br> |
|  bool | [**equal**](#function-equal) (const [**PtrArrayImpl**](classsead_1_1PtrArrayImpl.md) & other, CompareCallbackImpl cmp) const<br> |
|  void \* | [**find**](#function-find) (const void \* ptr, CompareCallbackImpl cmp) const<br> |
|  void \* | [**front**](#function-front) () const<br> |
|  void | [**heapSort**](#function-heapsort) (CompareCallbackImpl cmp) <br> |
|  s32 | [**indexOf**](#function-indexof) (const void \* ptr) const<br> |
|  void | [**insert**](#function-insert) (s32 idx, void \* ptr) <br> |
|  void | [**insertArray**](#function-insertarray) (s32 idx, void \* array, s32 array\_length, s32 elem\_size) <br> |
|  void \* | [**popBack**](#function-popback) () <br> |
|  void \* | [**popFront**](#function-popfront) () <br> |
|  void | [**pushBack**](#function-pushback) (void \* ptr) <br> |
|  void | [**pushFront**](#function-pushfront) (void \* ptr) <br> |
|  void | [**replace**](#function-replace) (s32 idx, void \* ptr) <br> |
|  s32 | [**search**](#function-search) (const void \* ptr, CompareCallbackImpl cmp) const<br> |
|  void | [**uniq**](#function-uniq) (CompareCallbackImpl cmp) <br> |
|  void \* | [**unsafeAt**](#function-unsafeat) (s32 idx) const<br> |




## Public Functions Documentation




### function PtrArrayImpl [1/2]

```C++
inline sead::PtrArrayImpl::PtrArrayImpl () 
```




<hr>



### function PtrArrayImpl [2/2]

```C++
inline sead::PtrArrayImpl::PtrArrayImpl (
    s32 ptrNumMax,
    void * buf
) 
```




<hr>



### function allocBuffer 

```C++
void sead::PtrArrayImpl::allocBuffer (
    s32 ptrNumMax,
    Heap * heap,
    s32 alignment=sizeof(void *)
) 
```




<hr>



### function allocBufferInline 

```C++
inline void sead::PtrArrayImpl::allocBufferInline (
    s32 ptrNumMax
) 
```




<hr>



### function capacity 

```C++
inline s32 sead::PtrArrayImpl::capacity () const
```




<hr>



### function clear 

```C++
inline void sead::PtrArrayImpl::clear () 
```




<hr>



### function erase [1/2]

```C++
inline void sead::PtrArrayImpl::erase (
    s32 position
) 
```




<hr>



### function erase [2/2]

```C++
void sead::PtrArrayImpl::erase (
    s32 position,
    s32 count
) 
```




<hr>



### function freeBuffer 

```C++
void sead::PtrArrayImpl::freeBuffer () 
```




<hr>



### function isBufferReady 

```C++
inline bool sead::PtrArrayImpl::isBufferReady () const
```




<hr>



### function isEmpty 

```C++
inline bool sead::PtrArrayImpl::isEmpty () const
```




<hr>



### function isFull 

```C++
inline bool sead::PtrArrayImpl::isFull () const
```




<hr>



### function resize 

```C++
void sead::PtrArrayImpl::resize (
    s32 size
) 
```




<hr>



### function reverse 

```C++
void sead::PtrArrayImpl::reverse () 
```




<hr>



### function setBuffer 

```C++
void sead::PtrArrayImpl::setBuffer (
    s32 ptrNumMax,
    void * buf
) 
```




<hr>



### function shuffle [1/2]

```C++
inline void sead::PtrArrayImpl::shuffle () 
```




<hr>



### function shuffle [2/2]

```C++
void sead::PtrArrayImpl::shuffle (
    Random * random
) 
```




<hr>



### function size 

```C++
inline s32 sead::PtrArrayImpl::size () const
```




<hr>



### function swap 

```C++
inline void sead::PtrArrayImpl::swap (
    s32 pos1,
    s32 pos2
) 
```




<hr>



### function tryAllocBuffer 

```C++
bool sead::PtrArrayImpl::tryAllocBuffer (
    s32 ptrNumMax,
    Heap * heap,
    s32 alignment=sizeof(void *)
) 
```




<hr>



### function unsafeResize 

```C++
void sead::PtrArrayImpl::unsafeResize (
    s32 size
) 
```




<hr>
## Protected Types Documentation




### typedef CompareCallbackImpl 

```C++
typedef int(* sead::PtrArrayImpl::CompareCallbackImpl) (const void *a, const void *b);
```




<hr>
## Protected Attributes Documentation




### variable mPtrNum 

```C++
s32 sead::PtrArrayImpl::mPtrNum;
```




<hr>



### variable mPtrNumMax 

```C++
s32 sead::PtrArrayImpl::mPtrNumMax;
```




<hr>



### variable mPtrs 

```C++
void** sead::PtrArrayImpl::mPtrs;
```




<hr>
## Protected Functions Documentation




### function at 

```C++
inline void * sead::PtrArrayImpl::at (
    s32 idx
) const
```




<hr>



### function back 

```C++
inline void * sead::PtrArrayImpl::back () const
```




<hr>



### function binarySearch 

```C++
inline s32 sead::PtrArrayImpl::binarySearch (
    const void * ptr,
    CompareCallbackImpl cmp
) const
```




<hr>



### function checkInsert 

```C++
bool sead::PtrArrayImpl::checkInsert (
    s32 idx,
    s32 num
) 
```




<hr>



### function compare 

```C++
s32 sead::PtrArrayImpl::compare (
    const PtrArrayImpl & other,
    CompareCallbackImpl cmp
) const
```




<hr>



### function createVacancy 

```C++
inline void sead::PtrArrayImpl::createVacancy (
    s32 pos,
    s32 count
) 
```




<hr>



### function equal 

```C++
inline bool sead::PtrArrayImpl::equal (
    const PtrArrayImpl & other,
    CompareCallbackImpl cmp
) const
```




<hr>



### function find 

```C++
inline void * sead::PtrArrayImpl::find (
    const void * ptr,
    CompareCallbackImpl cmp
) const
```




<hr>



### function front 

```C++
inline void * sead::PtrArrayImpl::front () const
```




<hr>



### function heapSort 

```C++
void sead::PtrArrayImpl::heapSort (
    CompareCallbackImpl cmp
) 
```




<hr>



### function indexOf 

```C++
inline s32 sead::PtrArrayImpl::indexOf (
    const void * ptr
) const
```




<hr>



### function insert 

```C++
void sead::PtrArrayImpl::insert (
    s32 idx,
    void * ptr
) 
```




<hr>



### function insertArray 

```C++
void sead::PtrArrayImpl::insertArray (
    s32 idx,
    void * array,
    s32 array_length,
    s32 elem_size
) 
```




<hr>



### function popBack 

```C++
inline void * sead::PtrArrayImpl::popBack () 
```




<hr>



### function popFront 

```C++
inline void * sead::PtrArrayImpl::popFront () 
```




<hr>



### function pushBack 

```C++
inline void sead::PtrArrayImpl::pushBack (
    void * ptr
) 
```




<hr>



### function pushFront 

```C++
inline void sead::PtrArrayImpl::pushFront (
    void * ptr
) 
```




<hr>



### function replace 

```C++
inline void sead::PtrArrayImpl::replace (
    s32 idx,
    void * ptr
) 
```




<hr>



### function search 

```C++
inline s32 sead::PtrArrayImpl::search (
    const void * ptr,
    CompareCallbackImpl cmp
) const
```




<hr>



### function uniq 

```C++
void sead::PtrArrayImpl::uniq (
    CompareCallbackImpl cmp
) 
```




<hr>



### function unsafeAt 

```C++
inline void * sead::PtrArrayImpl::unsafeAt (
    s32 idx
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadPtrArray.h`

