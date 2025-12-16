

# Class sead::FixedPtrArray

**template &lt;typename T, [**s32**](_l_m_s___types_8h.md#typedef-s32) N&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**FixedPtrArray**](classsead_1_1_fixed_ptr_array.md)





* `#include <seadPtrArray.h>`



Inherits the following classes: [sead::PtrArray](classsead_1_1_ptr_array.md)
















## Public Types inherited from sead::PtrArray

See [sead::PtrArray](classsead_1_1_ptr_array.md)

| Type | Name |
| ---: | :--- |
| typedef [**s32**](_l_m_s___types_8h.md#typedef-s32)(\* | [**CompareCallback**](classsead_1_1_ptr_array.md#typedef-comparecallback)  <br> |


























































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**FixedPtrArray**](#function-fixedptrarray) () <br> |


## Public Functions inherited from sead::PtrArray

See [sead::PtrArray](classsead_1_1_ptr_array.md)

| Type | Name |
| ---: | :--- |
|   | [**PtrArray**](classsead_1_1_ptr_array.md#function-ptrarray-12) () <br> |
|   | [**PtrArray**](classsead_1_1_ptr_array.md#function-ptrarray-22) ([**s32**](_l_m_s___types_8h.md#typedef-s32) ptrNumMax, T \*\* buf) <br> |
|  T \* | [**at**](classsead_1_1_ptr_array.md#function-at) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos) const<br> |
|  T \* | [**back**](classsead_1_1_ptr_array.md#function-back) () const<br> |
|  [**iterator**](classsead_1_1_ptr_array_1_1iterator.md) | [**begin**](classsead_1_1_ptr_array.md#function-begin) () const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**binarySearch**](classsead_1_1_ptr_array.md#function-binarysearch-12) (const T \* ptr) const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**binarySearch**](classsead_1_1_ptr_array.md#function-binarysearch-22) (const T \* ptr, [**CompareCallback**](classsead_1_1_ptr_array.md#typedef-comparecallback) cmp) const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**compare**](classsead_1_1_ptr_array.md#function-compare) (const [**PtrArray**](classsead_1_1_ptr_array.md) & other, [**CompareCallback**](classsead_1_1_ptr_array.md#typedef-comparecallback) cmp) const<br> |
|  [**constIterator**](classsead_1_1_ptr_array_1_1const_iterator.md) | [**constBegin**](classsead_1_1_ptr_array.md#function-constbegin) () const<br> |
|  [**constIterator**](classsead_1_1_ptr_array_1_1const_iterator.md) | [**constEnd**](classsead_1_1_ptr_array.md#function-constend) () const<br> |
|  T \*\* | [**data**](classsead_1_1_ptr_array.md#function-data) () const<br> |
|  T \*\* | [**dataBegin**](classsead_1_1_ptr_array.md#function-databegin) () const<br> |
|  T \*\* | [**dataEnd**](classsead_1_1_ptr_array.md#function-dataend) () const<br> |
|  [**iterator**](classsead_1_1_ptr_array_1_1iterator.md) | [**end**](classsead_1_1_ptr_array.md#function-end) () const<br> |
|  bool | [**equal**](classsead_1_1_ptr_array.md#function-equal) (const [**PtrArray**](classsead_1_1_ptr_array.md) & other, [**CompareCallback**](classsead_1_1_ptr_array.md#typedef-comparecallback) cmp) const<br> |
|  T \* | [**find**](classsead_1_1_ptr_array.md#function-find) (const T \* ptr, [**CompareCallback**](classsead_1_1_ptr_array.md#typedef-comparecallback) cmp) const<br> |
|  T \* | [**front**](classsead_1_1_ptr_array.md#function-front) () const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**indexOf**](classsead_1_1_ptr_array.md#function-indexof) (const T \* ptr) const<br> |
|  void | [**insert**](classsead_1_1_ptr_array.md#function-insert-12) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos, T \* ptr) <br> |
|  void | [**insert**](classsead_1_1_ptr_array.md#function-insert-22) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos, T \* array, [**s32**](_l_m_s___types_8h.md#typedef-s32) count) <br> |
|  bool | [**operator!=**](classsead_1_1_ptr_array.md#function-operator) (const [**PtrArray**](classsead_1_1_ptr_array.md) & other) const<br> |
|  T \* | [**operator()**](classsead_1_1_ptr_array.md#function-operator_1) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos) const<br> |
|  bool | [**operator==**](classsead_1_1_ptr_array.md#function-operator_2) (const [**PtrArray**](classsead_1_1_ptr_array.md) & other) const<br> |
|  T \* | [**operator[]**](classsead_1_1_ptr_array.md#function-operator_3) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos) const<br> |
|  T \* | [**popBack**](classsead_1_1_ptr_array.md#function-popback) () <br> |
|  T \* | [**popFront**](classsead_1_1_ptr_array.md#function-popfront) () <br> |
|  void | [**pushBack**](classsead_1_1_ptr_array.md#function-pushback) (T \* ptr) <br> |
|  void | [**pushFront**](classsead_1_1_ptr_array.md#function-pushfront) (T \* ptr) <br> |
|  void | [**replace**](classsead_1_1_ptr_array.md#function-replace) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos, T \* ptr) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**search**](classsead_1_1_ptr_array.md#function-search) (const T \* ptr, [**CompareCallback**](classsead_1_1_ptr_array.md#typedef-comparecallback) cmp) const<br> |
|  void | [**uniq**](classsead_1_1_ptr_array.md#function-uniq-12) () <br> |
|  void | [**uniq**](classsead_1_1_ptr_array.md#function-uniq-22) ([**CompareCallback**](classsead_1_1_ptr_array.md#typedef-comparecallback) cmp) <br> |
|  T \* | [**unsafeAt**](classsead_1_1_ptr_array.md#function-unsafeat) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos) const<br> |


## Public Functions inherited from sead::PtrArrayImpl

See [sead::PtrArrayImpl](classsead_1_1_ptr_array_impl.md)

| Type | Name |
| ---: | :--- |
|   | [**PtrArrayImpl**](classsead_1_1_ptr_array_impl.md#function-ptrarrayimpl-12) () <br> |
|   | [**PtrArrayImpl**](classsead_1_1_ptr_array_impl.md#function-ptrarrayimpl-22) ([**s32**](_l_m_s___types_8h.md#typedef-s32) ptrNumMax, void \* buf) <br> |
|  void | [**allocBuffer**](classsead_1_1_ptr_array_impl.md#function-allocbuffer) ([**s32**](_l_m_s___types_8h.md#typedef-s32) ptrNumMax, [**Heap**](classsead_1_1_heap.md) \* heap, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment=sizeof(void \*)) <br> |
|  void | [**allocBufferInline**](classsead_1_1_ptr_array_impl.md#function-allocbufferinline) ([**s32**](_l_m_s___types_8h.md#typedef-s32) ptrNumMax) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**capacity**](classsead_1_1_ptr_array_impl.md#function-capacity) () const<br> |
|  void | [**clear**](classsead_1_1_ptr_array_impl.md#function-clear) () <br> |
|  void | [**erase**](classsead_1_1_ptr_array_impl.md#function-erase-12) ([**s32**](_l_m_s___types_8h.md#typedef-s32) position) <br> |
|  void | [**erase**](classsead_1_1_ptr_array_impl.md#function-erase-22) ([**s32**](_l_m_s___types_8h.md#typedef-s32) position, [**s32**](_l_m_s___types_8h.md#typedef-s32) count) <br> |
|  void | [**freeBuffer**](classsead_1_1_ptr_array_impl.md#function-freebuffer) () <br> |
|  bool | [**isBufferReady**](classsead_1_1_ptr_array_impl.md#function-isbufferready) () const<br> |
|  bool | [**isEmpty**](classsead_1_1_ptr_array_impl.md#function-isempty) () const<br> |
|  bool | [**isFull**](classsead_1_1_ptr_array_impl.md#function-isfull) () const<br> |
|  void | [**resize**](classsead_1_1_ptr_array_impl.md#function-resize) ([**s32**](_l_m_s___types_8h.md#typedef-s32) size) <br> |
|  void | [**reverse**](classsead_1_1_ptr_array_impl.md#function-reverse) () <br> |
|  void | [**setBuffer**](classsead_1_1_ptr_array_impl.md#function-setbuffer) ([**s32**](_l_m_s___types_8h.md#typedef-s32) ptrNumMax, void \* buf) <br> |
|  void | [**shuffle**](classsead_1_1_ptr_array_impl.md#function-shuffle-12) () <br> |
|  void | [**shuffle**](classsead_1_1_ptr_array_impl.md#function-shuffle-22) ([**Random**](classsead_1_1_random.md) \* random) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**size**](classsead_1_1_ptr_array_impl.md#function-size) () const<br> |
|  void | [**swap**](classsead_1_1_ptr_array_impl.md#function-swap) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos1, [**s32**](_l_m_s___types_8h.md#typedef-s32) pos2) <br> |
|  bool | [**tryAllocBuffer**](classsead_1_1_ptr_array_impl.md#function-tryallocbuffer) ([**s32**](_l_m_s___types_8h.md#typedef-s32) ptrNumMax, [**Heap**](classsead_1_1_heap.md) \* heap, [**s32**](_l_m_s___types_8h.md#typedef-s32) alignment=sizeof(void \*)) <br> |
|  void | [**unsafeResize**](classsead_1_1_ptr_array_impl.md#function-unsaferesize) ([**s32**](_l_m_s___types_8h.md#typedef-s32) size) <br> |












## Protected Types inherited from sead::PtrArrayImpl

See [sead::PtrArrayImpl](classsead_1_1_ptr_array_impl.md)

| Type | Name |
| ---: | :--- |
| typedef int(\* | [**CompareCallbackImpl**](classsead_1_1_ptr_array_impl.md#typedef-comparecallbackimpl)  <br> |












## Protected Attributes inherited from sead::PtrArrayImpl

See [sead::PtrArrayImpl](classsead_1_1_ptr_array_impl.md)

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mPtrNum**](classsead_1_1_ptr_array_impl.md#variable-mptrnum)  <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mPtrNumMax**](classsead_1_1_ptr_array_impl.md#variable-mptrnummax)  <br> |
|  void \*\* | [**mPtrs**](classsead_1_1_ptr_array_impl.md#variable-mptrs)  <br> |
















































## Protected Functions inherited from sead::PtrArrayImpl

See [sead::PtrArrayImpl](classsead_1_1_ptr_array_impl.md)

| Type | Name |
| ---: | :--- |
|  void \* | [**at**](classsead_1_1_ptr_array_impl.md#function-at) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx) const<br> |
|  void \* | [**back**](classsead_1_1_ptr_array_impl.md#function-back) () const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**binarySearch**](classsead_1_1_ptr_array_impl.md#function-binarysearch) (const void \* ptr, [**CompareCallbackImpl**](classsead_1_1_ptr_array_impl.md#typedef-comparecallbackimpl) cmp) const<br> |
|  bool | [**checkInsert**](classsead_1_1_ptr_array_impl.md#function-checkinsert) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx, [**s32**](_l_m_s___types_8h.md#typedef-s32) num) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**compare**](classsead_1_1_ptr_array_impl.md#function-compare) (const [**PtrArrayImpl**](classsead_1_1_ptr_array_impl.md) & other, [**CompareCallbackImpl**](classsead_1_1_ptr_array_impl.md#typedef-comparecallbackimpl) cmp) const<br> |
|  void | [**createVacancy**](classsead_1_1_ptr_array_impl.md#function-createvacancy) ([**s32**](_l_m_s___types_8h.md#typedef-s32) pos, [**s32**](_l_m_s___types_8h.md#typedef-s32) count) <br> |
|  bool | [**equal**](classsead_1_1_ptr_array_impl.md#function-equal) (const [**PtrArrayImpl**](classsead_1_1_ptr_array_impl.md) & other, [**CompareCallbackImpl**](classsead_1_1_ptr_array_impl.md#typedef-comparecallbackimpl) cmp) const<br> |
|  void \* | [**find**](classsead_1_1_ptr_array_impl.md#function-find) (const void \* ptr, [**CompareCallbackImpl**](classsead_1_1_ptr_array_impl.md#typedef-comparecallbackimpl) cmp) const<br> |
|  void \* | [**front**](classsead_1_1_ptr_array_impl.md#function-front) () const<br> |
|  void | [**heapSort**](classsead_1_1_ptr_array_impl.md#function-heapsort) ([**CompareCallbackImpl**](classsead_1_1_ptr_array_impl.md#typedef-comparecallbackimpl) cmp) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**indexOf**](classsead_1_1_ptr_array_impl.md#function-indexof) (const void \* ptr) const<br> |
|  void | [**insert**](classsead_1_1_ptr_array_impl.md#function-insert) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx, void \* ptr) <br> |
|  void | [**insertArray**](classsead_1_1_ptr_array_impl.md#function-insertarray) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx, void \* array, [**s32**](_l_m_s___types_8h.md#typedef-s32) array\_length, [**s32**](_l_m_s___types_8h.md#typedef-s32) elem\_size) <br> |
|  void \* | [**popBack**](classsead_1_1_ptr_array_impl.md#function-popback) () <br> |
|  void \* | [**popFront**](classsead_1_1_ptr_array_impl.md#function-popfront) () <br> |
|  void | [**pushBack**](classsead_1_1_ptr_array_impl.md#function-pushback) (void \* ptr) <br> |
|  void | [**pushFront**](classsead_1_1_ptr_array_impl.md#function-pushfront) (void \* ptr) <br> |
|  void | [**replace**](classsead_1_1_ptr_array_impl.md#function-replace) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx, void \* ptr) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**search**](classsead_1_1_ptr_array_impl.md#function-search) (const void \* ptr, [**CompareCallbackImpl**](classsead_1_1_ptr_array_impl.md#typedef-comparecallbackimpl) cmp) const<br> |
|  void | [**uniq**](classsead_1_1_ptr_array_impl.md#function-uniq) ([**CompareCallbackImpl**](classsead_1_1_ptr_array_impl.md#typedef-comparecallbackimpl) cmp) <br> |
|  void \* | [**unsafeAt**](classsead_1_1_ptr_array_impl.md#function-unsafeat) ([**s32**](_l_m_s___types_8h.md#typedef-s32) idx) const<br> |




## Protected Static Functions inherited from sead::PtrArray

See [sead::PtrArray](classsead_1_1_ptr_array.md)

| Type | Name |
| ---: | :--- |
|  int | [**compareT**](classsead_1_1_ptr_array.md#function-comparet) (const void \* a\_, const void \* b\_) <br> |




## Public Functions Documentation




### function FixedPtrArray 

```C++
inline sead::FixedPtrArray::FixedPtrArray () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadPtrArray.h`

