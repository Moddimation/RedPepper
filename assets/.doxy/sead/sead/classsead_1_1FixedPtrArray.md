

# Class sead::FixedPtrArray

**template &lt;typename T, s32 N&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FixedPtrArray**](classsead_1_1FixedPtrArray.md)








Inherits the following classes: [sead::PtrArray](classsead_1_1PtrArray.md)
















## Public Types inherited from sead::PtrArray

See [sead::PtrArray](classsead_1_1PtrArray.md)

| Type | Name |
| ---: | :--- |
| typedef s32(\* | [**CompareCallback**](classsead_1_1PtrArray.md#typedef-comparecallback)  <br> |


























































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FixedPtrArray**](#function-fixedptrarray) () <br> |


## Public Functions inherited from sead::PtrArray

See [sead::PtrArray](classsead_1_1PtrArray.md)

| Type | Name |
| ---: | :--- |
|   | [**PtrArray**](classsead_1_1PtrArray.md#function-ptrarray-12) () <br> |
|   | [**PtrArray**](classsead_1_1PtrArray.md#function-ptrarray-22) (s32 ptrNumMax, T \*\* buf) <br> |
|  T \* | [**at**](classsead_1_1PtrArray.md#function-at) (s32 pos) const<br> |
|  T \* | [**back**](classsead_1_1PtrArray.md#function-back) () const<br> |
|  [**iterator**](classsead_1_1PtrArray_1_1iterator.md) | [**begin**](classsead_1_1PtrArray.md#function-begin) () const<br> |
|  s32 | [**binarySearch**](classsead_1_1PtrArray.md#function-binarysearch-12) (const T \* ptr) const<br> |
|  s32 | [**binarySearch**](classsead_1_1PtrArray.md#function-binarysearch-22) (const T \* ptr, CompareCallback cmp) const<br> |
|  s32 | [**compare**](classsead_1_1PtrArray.md#function-compare) (const [**PtrArray**](classsead_1_1PtrArray.md) & other, CompareCallback cmp) const<br> |
|  [**constIterator**](classsead_1_1PtrArray_1_1constIterator.md) | [**constBegin**](classsead_1_1PtrArray.md#function-constbegin) () const<br> |
|  [**constIterator**](classsead_1_1PtrArray_1_1constIterator.md) | [**constEnd**](classsead_1_1PtrArray.md#function-constend) () const<br> |
|  T \*\* | [**data**](classsead_1_1PtrArray.md#function-data) () const<br> |
|  T \*\* | [**dataBegin**](classsead_1_1PtrArray.md#function-databegin) () const<br> |
|  T \*\* | [**dataEnd**](classsead_1_1PtrArray.md#function-dataend) () const<br> |
|  [**iterator**](classsead_1_1PtrArray_1_1iterator.md) | [**end**](classsead_1_1PtrArray.md#function-end) () const<br> |
|  bool | [**equal**](classsead_1_1PtrArray.md#function-equal) (const [**PtrArray**](classsead_1_1PtrArray.md) & other, CompareCallback cmp) const<br> |
|  T \* | [**find**](classsead_1_1PtrArray.md#function-find) (const T \* ptr, CompareCallback cmp) const<br> |
|  T \* | [**front**](classsead_1_1PtrArray.md#function-front) () const<br> |
|  s32 | [**indexOf**](classsead_1_1PtrArray.md#function-indexof) (const T \* ptr) const<br> |
|  void | [**insert**](classsead_1_1PtrArray.md#function-insert-12) (s32 pos, T \* ptr) <br> |
|  void | [**insert**](classsead_1_1PtrArray.md#function-insert-22) (s32 pos, T \* array, s32 count) <br> |
|  bool | [**operator!=**](classsead_1_1PtrArray.md#function-operator) (const [**PtrArray**](classsead_1_1PtrArray.md) & other) const<br> |
|  T \* | [**operator()**](classsead_1_1PtrArray.md#function-operator_1) (s32 pos) const<br> |
|  bool | [**operator==**](classsead_1_1PtrArray.md#function-operator_2) (const [**PtrArray**](classsead_1_1PtrArray.md) & other) const<br> |
|  T \* | [**operator[]**](classsead_1_1PtrArray.md#function-operator_3) (s32 pos) const<br> |
|  T \* | [**popBack**](classsead_1_1PtrArray.md#function-popback) () <br> |
|  T \* | [**popFront**](classsead_1_1PtrArray.md#function-popfront) () <br> |
|  void | [**pushBack**](classsead_1_1PtrArray.md#function-pushback) (T \* ptr) <br> |
|  void | [**pushFront**](classsead_1_1PtrArray.md#function-pushfront) (T \* ptr) <br> |
|  void | [**replace**](classsead_1_1PtrArray.md#function-replace) (s32 pos, T \* ptr) <br> |
|  s32 | [**search**](classsead_1_1PtrArray.md#function-search) (const T \* ptr, CompareCallback cmp) const<br> |
|  void | [**uniq**](classsead_1_1PtrArray.md#function-uniq-12) () <br> |
|  void | [**uniq**](classsead_1_1PtrArray.md#function-uniq-22) (CompareCallback cmp) <br> |
|  T \* | [**unsafeAt**](classsead_1_1PtrArray.md#function-unsafeat) (s32 pos) const<br> |


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




## Protected Static Functions inherited from sead::PtrArray

See [sead::PtrArray](classsead_1_1PtrArray.md)

| Type | Name |
| ---: | :--- |
|  int | [**compareT**](classsead_1_1PtrArray.md#function-comparet) (const void \* a\_, const void \* b\_) <br> |




## Public Functions Documentation




### function FixedPtrArray 

```C++
inline sead::FixedPtrArray::FixedPtrArray () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadPtrArray.h`

