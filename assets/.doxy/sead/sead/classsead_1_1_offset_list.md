

# Class sead::OffsetList

**template &lt;[**typename**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12)&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**OffsetList**](classsead_1_1_offset_list.md)





* `#include <seadOffsetList.h>`



Inherits the following classes: [sead::ListImpl](classsead_1_1_list_impl.md)












## Classes

| Type | Name |
| ---: | :--- |
| struct | [**RobustRange**](structsead_1_1_offset_list_1_1_robust_range.md) <br> |
| class | [**iterator**](classsead_1_1_offset_list_1_1iterator.md) <br> |
| class | [**robustIterator**](classsead_1_1_offset_list_1_1robust_iterator.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**int**](classsead_1_1_offset_list.md#function-mergesort-12)(\* | [**CompareCallback**](#typedef-comparecallback)  <br> |








































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**OffsetList**](#function-offsetlist) () <br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**back**](#function-back) () const<br> |
|  [**iterator**](classsead_1_1_offset_list_1_1iterator.md) | [**begin**](#function-begin-12) () const<br> |
|  [**iterator**](classsead_1_1_offset_list_1_1iterator.md) | [**begin**](#function-begin-22) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* ptr) const<br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**clear**](#function-clear) () <br> |
|  [**iterator**](classsead_1_1_offset_list_1_1iterator.md) | [**end**](#function-end) () const<br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**erase**](#function-erase) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* item) <br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**find**](#function-find-12) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) const<br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**find**](#function-find-22) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj, [**CompareCallback**](classsead_1_1_offset_list.md#typedef-comparecallback) cmp) const<br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**front**](#function-front) () const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**indexOf**](#function-indexof) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) const<br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**initOffset**](#function-initoffset) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset) <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**insertAfter**](#function-insertafter) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj, [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj\_to\_insert) <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**insertBefore**](#function-insertbefore) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj, [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj\_to\_insert) <br> |
|  [**bool**](classsead_1_1_offset_list.md#function-mergesort-12) | [**isNodeLinked**](#function-isnodelinked) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) const<br> |
|  void | [**mergeSort**](#function-mergesort-12) () <br> |
|  void | [**mergeSort**](#function-mergesort-22) ([**CompareCallback**](classsead_1_1_offset_list.md#typedef-comparecallback) cmp) <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**moveAfter**](#function-moveafter) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* basis, [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**moveBefore**](#function-movebefore) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* basis, [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) <br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**next**](#function-next) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) const<br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**nth**](#function-nth) ([**s32**](_l_m_s___types_8h.md#typedef-s32) n) const<br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**popBack**](#function-popback) () <br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**popFront**](#function-popfront) () <br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**prev**](#function-prev) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) const<br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**pushBack**](#function-pushback) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* item) <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**pushFront**](#function-pushfront) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* item) <br> |
|  [**robustIterator**](classsead_1_1_offset_list_1_1robust_iterator.md) | [**robustBegin**](#function-robustbegin-12) () const<br> |
|  [**robustIterator**](classsead_1_1_offset_list_1_1robust_iterator.md) | [**robustBegin**](#function-robustbegin-22) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* ptr) const<br> |
|  [**robustIterator**](classsead_1_1_offset_list_1_1robust_iterator.md) | [**robustEnd**](#function-robustend) () const<br> |
|  [**RobustRange**](structsead_1_1_offset_list_1_1_robust_range.md) | [**robustRange**](#function-robustrange) () const<br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**sort**](#function-sort-12) () <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**sort**](#function-sort-22) ([**CompareCallback**](classsead_1_1_offset_list.md#typedef-comparecallback) cmp) <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**swap**](#function-swap) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj1, [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj2) <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**uniq**](#function-uniq-12) () <br> |
|  [**void**](classsead_1_1_offset_list.md#function-mergesort-12) | [**uniq**](#function-uniq-22) ([**CompareCallback**](classsead_1_1_offset_list.md#typedef-comparecallback) cmp) <br> |


## Public Functions inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1_list_impl.md)

| Type | Name |
| ---: | :--- |
|   | [**ListImpl**](classsead_1_1_list_impl.md#function-listimpl) () <br> |
|  [**bool**](classsead_1_1_list_impl.md#function-mergesort) | [**checkLinks**](classsead_1_1_list_impl.md#function-checklinks) () const<br> |
|  [**bool**](classsead_1_1_list_impl.md#function-mergesort) | [**isEmpty**](classsead_1_1_list_impl.md#function-isempty) () const<br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**reverse**](classsead_1_1_list_impl.md#function-reverse) () <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**shuffle**](classsead_1_1_list_impl.md#function-shuffle-12) () <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**shuffle**](classsead_1_1_list_impl.md#function-shuffle-22) ([**Random**](classsead_1_1_random.md) \* random) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**size**](classsead_1_1_list_impl.md#function-size) () const<br> |








## Protected Types inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1_list_impl.md)

| Type | Name |
| ---: | :--- |
| typedef [**int**](classsead_1_1_list_impl.md#function-mergesort)(\* | [**CompareCallbackImpl**](classsead_1_1_list_impl.md#typedef-comparecallbackimpl)  <br> |






## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mOffset**](#variable-moffset)  <br> |


## Protected Attributes inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1_list_impl.md)

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mCount**](classsead_1_1_list_impl.md#variable-mcount)  <br> |
|  [**ListNode**](classsead_1_1_list_node.md) | [**mStartEnd**](classsead_1_1_list_impl.md#variable-mstartend)  <br> |






























## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**listNodeToObj**](#function-listnodetoobj-12) ([**ListNode**](classsead_1_1_list_node.md) \* node) const<br> |
|  [**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**listNodeToObj**](#function-listnodetoobj-22) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**ListNode**](classsead_1_1_list_node.md) \* node) const<br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**listNodeToObjWithNullCheck**](#function-listnodetoobjwithnullcheck-12) ([**ListNode**](classsead_1_1_list_node.md) \* node) const<br> |
|  [**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**listNodeToObjWithNullCheck**](#function-listnodetoobjwithnullcheck-22) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**ListNode**](classsead_1_1_list_node.md) \* node) const<br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**objToListNode**](#function-objtolistnode-12) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) const<br> |
|  [**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**ListNode**](classsead_1_1_list_node.md) \* | [**objToListNode**](#function-objtolistnode-22) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* obj) const<br> |


## Protected Functions inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1_list_impl.md)

| Type | Name |
| ---: | :--- |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**back**](classsead_1_1_list_impl.md#function-back) () const<br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**clear**](classsead_1_1_list_impl.md#function-clear) () <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**erase**](classsead_1_1_list_impl.md#function-erase) ([**ListNode**](classsead_1_1_list_node.md) \* item) <br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**find**](classsead_1_1_list_impl.md#function-find) ([**const**](classsead_1_1_list_impl.md#function-mergesort) [**void**](classsead_1_1_list_impl.md#function-mergesort) \* ptr, [**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**CompareCallbackImpl**](classsead_1_1_list_impl.md#typedef-comparecallbackimpl) cmp) const<br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**front**](classsead_1_1_list_impl.md#function-front) () const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**indexOf**](classsead_1_1_list_impl.md#function-indexof) ([**const**](classsead_1_1_list_impl.md#function-mergesort) [**ListNode**](classsead_1_1_list_node.md) \* n) const<br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**insertAfter**](classsead_1_1_list_impl.md#function-insertafter) ([**ListNode**](classsead_1_1_list_node.md) \* node, [**ListNode**](classsead_1_1_list_node.md) \* node\_to\_insert) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**insertBefore**](classsead_1_1_list_impl.md#function-insertbefore) ([**ListNode**](classsead_1_1_list_node.md) \* node, [**ListNode**](classsead_1_1_list_node.md) \* node\_to\_insert) <br> |
|  void | [**mergeSort**](classsead_1_1_list_impl.md#function-mergesort) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, const ComparePredicate & cmp) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**moveAfter**](classsead_1_1_list_impl.md#function-moveafter) ([**ListNode**](classsead_1_1_list_node.md) \* basis, [**ListNode**](classsead_1_1_list_node.md) \* n) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**moveBefore**](classsead_1_1_list_impl.md#function-movebefore) ([**ListNode**](classsead_1_1_list_node.md) \* basis, [**ListNode**](classsead_1_1_list_node.md) \* n) <br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**nth**](classsead_1_1_list_impl.md#function-nth) ([**int**](classsead_1_1_list_impl.md#function-mergesort) n) const<br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**popBack**](classsead_1_1_list_impl.md#function-popback) () <br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**popFront**](classsead_1_1_list_impl.md#function-popfront) () <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**pushBack**](classsead_1_1_list_impl.md#function-pushback) ([**ListNode**](classsead_1_1_list_node.md) \* item) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**pushFront**](classsead_1_1_list_impl.md#function-pushfront) ([**ListNode**](classsead_1_1_list_node.md) \* item) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**sort**](classsead_1_1_list_impl.md#function-sort) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**const**](classsead_1_1_list_impl.md#function-mergesort) [**ComparePredicate**](classsead_1_1_list_impl.md#function-mergesort) & cmp) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**swap**](classsead_1_1_list_impl.md#function-swap) ([**ListNode**](classsead_1_1_list_node.md) \* n1, [**ListNode**](classsead_1_1_list_node.md) \* n2) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**uniq**](classsead_1_1_list_impl.md#function-uniq) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**CompareCallbackImpl**](classsead_1_1_list_impl.md#typedef-comparecallbackimpl) cmp) <br> |


## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  [**int**](classsead_1_1_offset_list.md#function-mergesort-12) | [**compareT**](#function-comparet) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* lhs, [**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* rhs) <br> |


## Protected Static Functions inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1_list_impl.md)

| Type | Name |
| ---: | :--- |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**mergeSortImpl\_**](classsead_1_1_list_impl.md#function-mergesortimpl_) ([**ListNode**](classsead_1_1_list_node.md) \* front, [**ListNode**](classsead_1_1_list_node.md) \* back, [**s32**](_l_m_s___types_8h.md#typedef-s32) num, [**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**const**](classsead_1_1_list_impl.md#function-mergesort) [**ComparePredicate**](classsead_1_1_list_impl.md#function-mergesort) & predicate) <br> |


## Public Types Documentation




### typedef CompareCallback 

```C++
typedef int(* sead::OffsetList< T >::CompareCallback) (const T *, const T *);
```




<hr>
## Public Functions Documentation




### function OffsetList 

```C++
inline sead::OffsetList::OffsetList () 
```




<hr>



### function back 

```C++
inline T * sead::OffsetList::back () const
```




<hr>



### function begin [1/2]

```C++
inline iterator sead::OffsetList::begin () const
```




<hr>



### function begin [2/2]

```C++
inline iterator sead::OffsetList::begin (
    T * ptr
) const
```




<hr>



### function clear 

```C++
inline void sead::OffsetList::clear () 
```




<hr>



### function end 

```C++
inline iterator sead::OffsetList::end () const
```




<hr>



### function erase 

```C++
inline void sead::OffsetList::erase (
    T * item
) 
```




<hr>



### function find [1/2]

```C++
inline T * sead::OffsetList::find (
    const  T * obj
) const
```




<hr>



### function find [2/2]

```C++
inline T * sead::OffsetList::find (
    const  T * obj,
    CompareCallback cmp
) const
```




<hr>



### function front 

```C++
inline T * sead::OffsetList::front () const
```




<hr>



### function indexOf 

```C++
inline s32 sead::OffsetList::indexOf (
    const  T * obj
) const
```




<hr>



### function initOffset 

```C++
inline void sead::OffsetList::initOffset (
    s32 offset
) 
```




<hr>



### function insertAfter 

```C++
inline void sead::OffsetList::insertAfter (
    const  T * obj,
    T * obj_to_insert
) 
```




<hr>



### function insertBefore 

```C++
inline void sead::OffsetList::insertBefore (
    const  T * obj,
    T * obj_to_insert
) 
```




<hr>



### function isNodeLinked 

```C++
inline bool sead::OffsetList::isNodeLinked (
    const  T * obj
) const
```




<hr>



### function mergeSort [1/2]

```C++
inline void sead::OffsetList::mergeSort () 
```




<hr>



### function mergeSort [2/2]

```C++
inline void sead::OffsetList::mergeSort (
    CompareCallback cmp
) 
```




<hr>



### function moveAfter 

```C++
inline void sead::OffsetList::moveAfter (
    T * basis,
    T * obj
) 
```




<hr>



### function moveBefore 

```C++
inline void sead::OffsetList::moveBefore (
    T * basis,
    T * obj
) 
```




<hr>



### function next 

```C++
inline T * sead::OffsetList::next (
    const  T * obj
) const
```




<hr>



### function nth 

```C++
inline T * sead::OffsetList::nth (
    s32 n
) const
```




<hr>



### function popBack 

```C++
inline T * sead::OffsetList::popBack () 
```




<hr>



### function popFront 

```C++
inline T * sead::OffsetList::popFront () 
```




<hr>



### function prev 

```C++
inline T * sead::OffsetList::prev (
    const  T * obj
) const
```




<hr>



### function pushBack 

```C++
inline void sead::OffsetList::pushBack (
    T * item
) 
```




<hr>



### function pushFront 

```C++
inline void sead::OffsetList::pushFront (
    T * item
) 
```




<hr>



### function robustBegin [1/2]

```C++
inline robustIterator sead::OffsetList::robustBegin () const
```




<hr>



### function robustBegin [2/2]

```C++
inline robustIterator sead::OffsetList::robustBegin (
    T * ptr
) const
```




<hr>



### function robustEnd 

```C++
inline robustIterator sead::OffsetList::robustEnd () const
```




<hr>



### function robustRange 

```C++
inline RobustRange sead::OffsetList::robustRange () const
```




<hr>



### function sort [1/2]

```C++
inline void sead::OffsetList::sort () 
```




<hr>



### function sort [2/2]

```C++
inline void sead::OffsetList::sort (
    CompareCallback cmp
) 
```




<hr>



### function swap 

```C++
inline void sead::OffsetList::swap (
    T * obj1,
    T * obj2
) 
```




<hr>



### function uniq [1/2]

```C++
inline void sead::OffsetList::uniq () 
```




<hr>



### function uniq [2/2]

```C++
inline void sead::OffsetList::uniq (
    CompareCallback cmp
) 
```




<hr>
## Protected Attributes Documentation




### variable mOffset 

```C++
s32 sead::OffsetList< T >::mOffset;
```




<hr>
## Protected Functions Documentation




### function listNodeToObj [1/2]

```C++
inline T * sead::OffsetList::listNodeToObj (
    ListNode * node
) const
```




<hr>



### function listNodeToObj [2/2]

```C++
inline const  T * sead::OffsetList::listNodeToObj (
    const  ListNode * node
) const
```




<hr>



### function listNodeToObjWithNullCheck [1/2]

```C++
inline T * sead::OffsetList::listNodeToObjWithNullCheck (
    ListNode * node
) const
```




<hr>



### function listNodeToObjWithNullCheck [2/2]

```C++
inline const  T * sead::OffsetList::listNodeToObjWithNullCheck (
    const  ListNode * node
) const
```




<hr>



### function objToListNode [1/2]

```C++
inline ListNode * sead::OffsetList::objToListNode (
    T * obj
) const
```




<hr>



### function objToListNode [2/2]

```C++
inline const  ListNode * sead::OffsetList::objToListNode (
    const  T * obj
) const
```




<hr>
## Protected Static Functions Documentation




### function compareT 

```C++
static inline int sead::OffsetList::compareT (
    const  T * lhs,
    const  T * rhs
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadOffsetList.h`

