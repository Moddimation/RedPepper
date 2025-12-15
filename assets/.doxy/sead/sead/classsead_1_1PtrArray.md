

# Class sead::PtrArray

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**PtrArray**](classsead_1_1PtrArray.md)








Inherits the following classes: [sead::PtrArrayImpl](classsead_1_1PtrArrayImpl.md)


Inherited by the following classes: [sead::FixedPtrArray](classsead_1_1FixedPtrArray.md)










## Classes

| Type | Name |
| ---: | :--- |
| class | [**constIterator**](classsead_1_1PtrArray_1_1constIterator.md) <br> |
| class | [**iterator**](classsead_1_1PtrArray_1_1iterator.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef s32(\* | [**CompareCallback**](#typedef-comparecallback)  <br> |








































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**PtrArray**](#function-ptrarray-12) () <br> |
|   | [**PtrArray**](#function-ptrarray-22) (s32 ptrNumMax, T \*\* buf) <br> |
|  T \* | [**at**](#function-at) (s32 pos) const<br> |
|  T \* | [**back**](#function-back) () const<br> |
|  [**iterator**](classsead_1_1PtrArray_1_1iterator.md) | [**begin**](#function-begin) () const<br> |
|  s32 | [**binarySearch**](#function-binarysearch-12) (const T \* ptr) const<br> |
|  s32 | [**binarySearch**](#function-binarysearch-22) (const T \* ptr, CompareCallback cmp) const<br> |
|  s32 | [**compare**](#function-compare) (const [**PtrArray**](classsead_1_1PtrArray.md) & other, CompareCallback cmp) const<br> |
|  [**constIterator**](classsead_1_1PtrArray_1_1constIterator.md) | [**constBegin**](#function-constbegin) () const<br> |
|  [**constIterator**](classsead_1_1PtrArray_1_1constIterator.md) | [**constEnd**](#function-constend) () const<br> |
|  T \*\* | [**data**](#function-data) () const<br> |
|  T \*\* | [**dataBegin**](#function-databegin) () const<br> |
|  T \*\* | [**dataEnd**](#function-dataend) () const<br> |
|  [**iterator**](classsead_1_1PtrArray_1_1iterator.md) | [**end**](#function-end) () const<br> |
|  bool | [**equal**](#function-equal) (const [**PtrArray**](classsead_1_1PtrArray.md) & other, CompareCallback cmp) const<br> |
|  T \* | [**find**](#function-find) (const T \* ptr, CompareCallback cmp) const<br> |
|  T \* | [**front**](#function-front) () const<br> |
|  s32 | [**indexOf**](#function-indexof) (const T \* ptr) const<br> |
|  void | [**insert**](#function-insert-12) (s32 pos, T \* ptr) <br> |
|  void | [**insert**](#function-insert-22) (s32 pos, T \* array, s32 count) <br> |
|  bool | [**operator!=**](#function-operator) (const [**PtrArray**](classsead_1_1PtrArray.md) & other) const<br> |
|  T \* | [**operator()**](#function-operator_1) (s32 pos) const<br> |
|  bool | [**operator==**](#function-operator_2) (const [**PtrArray**](classsead_1_1PtrArray.md) & other) const<br> |
|  T \* | [**operator[]**](#function-operator_3) (s32 pos) const<br> |
|  T \* | [**popBack**](#function-popback) () <br> |
|  T \* | [**popFront**](#function-popfront) () <br> |
|  void | [**pushBack**](#function-pushback) (T \* ptr) <br> |
|  void | [**pushFront**](#function-pushfront) (T \* ptr) <br> |
|  void | [**replace**](#function-replace) (s32 pos, T \* ptr) <br> |
|  s32 | [**search**](#function-search) (const T \* ptr, CompareCallback cmp) const<br> |
|  void | [**uniq**](#function-uniq-12) () <br> |
|  void | [**uniq**](#function-uniq-22) (CompareCallback cmp) <br> |
|  T \* | [**unsafeAt**](#function-unsafeat) (s32 pos) const<br> |


## Public Functions inherited from sead::PtrArrayImpl

See [sead::PtrArrayImpl](classsead_1_1PtrArrayImpl.md)

| Type | Name |
| ---: | :--- |
|   | [**PtrArrayImpl**](classsead_1_1PtrArrayImpl.md#function-ptrarrayimpl-12) () <br> |
|   | [**PtrArrayImpl**](classsead_1_1PtrArrayImpl.md#function-ptrarrayimpl-22) (s32 ptrNumMax, void \* buf) <br> |
|  void | [**allocBuffer**](classsead_1_1PtrArrayImpl.md#function-allocbuffer) (s32 ptrNumMax, [**Heap**](classsead_1_1Heap.md) \* heap, s32 alignment=sizeof(void \*)) <br> |
|  void | [**allocBufferInline**](classsead_1_1PtrArrayImpl.md#function-allocbufferinline) (s32 ptrNumMax) <br> |
|  s32 | [**capacity**](classsead_1_1PtrArrayImpl.md#function-capacity) () const<br> |
|  void | [**clear**](classsead_1_1PtrArrayImpl.md#function-clear) () <br> |
|  void | [**erase**](classsead_1_1PtrArrayImpl.md#function-erase-12) (s32 position) <br> |
|  void | [**erase**](classsead_1_1PtrArrayImpl.md#function-erase-22) (s32 position, s32 count) <br> |
|  void | [**freeBuffer**](classsead_1_1PtrArrayImpl.md#function-freebuffer) () <br> |
|  bool | [**isBufferReady**](classsead_1_1PtrArrayImpl.md#function-isbufferready) () const<br> |
|  bool | [**isEmpty**](classsead_1_1PtrArrayImpl.md#function-isempty) () const<br> |
|  bool | [**isFull**](classsead_1_1PtrArrayImpl.md#function-isfull) () const<br> |
|  void | [**resize**](classsead_1_1PtrArrayImpl.md#function-resize) (s32 size) <br> |
|  void | [**reverse**](classsead_1_1PtrArrayImpl.md#function-reverse) () <br> |
|  void | [**setBuffer**](classsead_1_1PtrArrayImpl.md#function-setbuffer) (s32 ptrNumMax, void \* buf) <br> |
|  void | [**shuffle**](classsead_1_1PtrArrayImpl.md#function-shuffle-12) () <br> |
|  void | [**shuffle**](classsead_1_1PtrArrayImpl.md#function-shuffle-22) ([**Random**](classsead_1_1Random.md) \* random) <br> |
|  s32 | [**size**](classsead_1_1PtrArrayImpl.md#function-size) () const<br> |
|  void | [**swap**](classsead_1_1PtrArrayImpl.md#function-swap) (s32 pos1, s32 pos2) <br> |
|  bool | [**tryAllocBuffer**](classsead_1_1PtrArrayImpl.md#function-tryallocbuffer) (s32 ptrNumMax, [**Heap**](classsead_1_1Heap.md) \* heap, s32 alignment=sizeof(void \*)) <br> |
|  void | [**unsafeResize**](classsead_1_1PtrArrayImpl.md#function-unsaferesize) (s32 size) <br> |








## Protected Types inherited from sead::PtrArrayImpl

See [sead::PtrArrayImpl](classsead_1_1PtrArrayImpl.md)

| Type | Name |
| ---: | :--- |
| typedef int(\* | [**CompareCallbackImpl**](classsead_1_1PtrArrayImpl.md#typedef-comparecallbackimpl)  <br> |








## Protected Attributes inherited from sead::PtrArrayImpl

See [sead::PtrArrayImpl](classsead_1_1PtrArrayImpl.md)

| Type | Name |
| ---: | :--- |
|  s32 | [**mPtrNum**](classsead_1_1PtrArrayImpl.md#variable-mptrnum)  <br> |
|  s32 | [**mPtrNumMax**](classsead_1_1PtrArrayImpl.md#variable-mptrnummax)  <br> |
|  void \*\* | [**mPtrs**](classsead_1_1PtrArrayImpl.md#variable-mptrs)  <br> |
































## Protected Functions inherited from sead::PtrArrayImpl

See [sead::PtrArrayImpl](classsead_1_1PtrArrayImpl.md)

| Type | Name |
| ---: | :--- |
|  void \* | [**at**](classsead_1_1PtrArrayImpl.md#function-at) (s32 idx) const<br> |
|  void \* | [**back**](classsead_1_1PtrArrayImpl.md#function-back) () const<br> |
|  s32 | [**binarySearch**](classsead_1_1PtrArrayImpl.md#function-binarysearch) (const void \* ptr, CompareCallbackImpl cmp) const<br> |
|  bool | [**checkInsert**](classsead_1_1PtrArrayImpl.md#function-checkinsert) (s32 idx, s32 num) <br> |
|  s32 | [**compare**](classsead_1_1PtrArrayImpl.md#function-compare) (const [**PtrArrayImpl**](classsead_1_1PtrArrayImpl.md) & other, CompareCallbackImpl cmp) const<br> |
|  void | [**createVacancy**](classsead_1_1PtrArrayImpl.md#function-createvacancy) (s32 pos, s32 count) <br> |
|  bool | [**equal**](classsead_1_1PtrArrayImpl.md#function-equal) (const [**PtrArrayImpl**](classsead_1_1PtrArrayImpl.md) & other, CompareCallbackImpl cmp) const<br> |
|  void \* | [**find**](classsead_1_1PtrArrayImpl.md#function-find) (const void \* ptr, CompareCallbackImpl cmp) const<br> |
|  void \* | [**front**](classsead_1_1PtrArrayImpl.md#function-front) () const<br> |
|  void | [**heapSort**](classsead_1_1PtrArrayImpl.md#function-heapsort) (CompareCallbackImpl cmp) <br> |
|  s32 | [**indexOf**](classsead_1_1PtrArrayImpl.md#function-indexof) (const void \* ptr) const<br> |
|  void | [**insert**](classsead_1_1PtrArrayImpl.md#function-insert) (s32 idx, void \* ptr) <br> |
|  void | [**insertArray**](classsead_1_1PtrArrayImpl.md#function-insertarray) (s32 idx, void \* array, s32 array\_length, s32 elem\_size) <br> |
|  void \* | [**popBack**](classsead_1_1PtrArrayImpl.md#function-popback) () <br> |
|  void \* | [**popFront**](classsead_1_1PtrArrayImpl.md#function-popfront) () <br> |
|  void | [**pushBack**](classsead_1_1PtrArrayImpl.md#function-pushback) (void \* ptr) <br> |
|  void | [**pushFront**](classsead_1_1PtrArrayImpl.md#function-pushfront) (void \* ptr) <br> |
|  void | [**replace**](classsead_1_1PtrArrayImpl.md#function-replace) (s32 idx, void \* ptr) <br> |
|  s32 | [**search**](classsead_1_1PtrArrayImpl.md#function-search) (const void \* ptr, CompareCallbackImpl cmp) const<br> |
|  void | [**uniq**](classsead_1_1PtrArrayImpl.md#function-uniq) (CompareCallbackImpl cmp) <br> |
|  void \* | [**unsafeAt**](classsead_1_1PtrArrayImpl.md#function-unsafeat) (s32 idx) const<br> |


## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  int | [**compareT**](#function-comparet) (const void \* a\_, const void \* b\_) <br> |




## Public Types Documentation




### typedef CompareCallback 

```C++
typedef s32(* sead::PtrArray< T >::CompareCallback) (const T *, const T *);
```




<hr>
## Public Functions Documentation




### function PtrArray [1/2]

```C++
inline sead::PtrArray::PtrArray () 
```




<hr>



### function PtrArray [2/2]

```C++
inline sead::PtrArray::PtrArray (
    s32 ptrNumMax,
    T ** buf
) 
```




<hr>



### function at 

```C++
inline T * sead::PtrArray::at (
    s32 pos
) const
```




<hr>



### function back 

```C++
inline T * sead::PtrArray::back () const
```




<hr>



### function begin 

```C++
inline iterator sead::PtrArray::begin () const
```




<hr>



### function binarySearch [1/2]

```C++
inline s32 sead::PtrArray::binarySearch (
    const T * ptr
) const
```




<hr>



### function binarySearch [2/2]

```C++
inline s32 sead::PtrArray::binarySearch (
    const T * ptr,
    CompareCallback cmp
) const
```




<hr>



### function compare 

```C++
inline s32 sead::PtrArray::compare (
    const PtrArray & other,
    CompareCallback cmp
) const
```




<hr>



### function constBegin 

```C++
inline constIterator sead::PtrArray::constBegin () const
```




<hr>



### function constEnd 

```C++
inline constIterator sead::PtrArray::constEnd () const
```




<hr>



### function data 

```C++
inline T ** sead::PtrArray::data () const
```




<hr>



### function dataBegin 

```C++
inline T ** sead::PtrArray::dataBegin () const
```




<hr>



### function dataEnd 

```C++
inline T ** sead::PtrArray::dataEnd () const
```




<hr>



### function end 

```C++
inline iterator sead::PtrArray::end () const
```




<hr>



### function equal 

```C++
inline bool sead::PtrArray::equal (
    const PtrArray & other,
    CompareCallback cmp
) const
```




<hr>



### function find 

```C++
inline T * sead::PtrArray::find (
    const T * ptr,
    CompareCallback cmp
) const
```




<hr>



### function front 

```C++
inline T * sead::PtrArray::front () const
```




<hr>



### function indexOf 

```C++
inline s32 sead::PtrArray::indexOf (
    const T * ptr
) const
```




<hr>



### function insert [1/2]

```C++
inline void sead::PtrArray::insert (
    s32 pos,
    T * ptr
) 
```




<hr>



### function insert [2/2]

```C++
inline void sead::PtrArray::insert (
    s32 pos,
    T * array,
    s32 count
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::PtrArray::operator!= (
    const PtrArray & other
) const
```




<hr>



### function operator() 

```C++
inline T * sead::PtrArray::operator() (
    s32 pos
) const
```




<hr>



### function operator== 

```C++
inline bool sead::PtrArray::operator== (
    const PtrArray & other
) const
```




<hr>



### function operator[] 

```C++
inline T * sead::PtrArray::operator[] (
    s32 pos
) const
```




<hr>



### function popBack 

```C++
inline T * sead::PtrArray::popBack () 
```




<hr>



### function popFront 

```C++
inline T * sead::PtrArray::popFront () 
```




<hr>



### function pushBack 

```C++
inline void sead::PtrArray::pushBack (
    T * ptr
) 
```




<hr>



### function pushFront 

```C++
inline void sead::PtrArray::pushFront (
    T * ptr
) 
```




<hr>



### function replace 

```C++
inline void sead::PtrArray::replace (
    s32 pos,
    T * ptr
) 
```




<hr>



### function search 

```C++
inline s32 sead::PtrArray::search (
    const T * ptr,
    CompareCallback cmp
) const
```




<hr>



### function uniq [1/2]

```C++
inline void sead::PtrArray::uniq () 
```




<hr>



### function uniq [2/2]

```C++
inline void sead::PtrArray::uniq (
    CompareCallback cmp
) 
```




<hr>



### function unsafeAt 

```C++
inline T * sead::PtrArray::unsafeAt (
    s32 pos
) const
```




<hr>
## Protected Static Functions Documentation




### function compareT 

```C++
static inline int sead::PtrArray::compareT (
    const void * a_,
    const void * b_
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadPtrArray.h`

