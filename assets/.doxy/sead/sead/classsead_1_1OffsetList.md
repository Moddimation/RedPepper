

# Class sead::OffsetList

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**OffsetList**](classsead_1_1OffsetList.md)








Inherits the following classes: [sead::ListImpl](classsead_1_1ListImpl.md)












## Classes

| Type | Name |
| ---: | :--- |
| struct | [**RobustRange**](structsead_1_1OffsetList_1_1RobustRange.md) <br> |
| class | [**iterator**](classsead_1_1OffsetList_1_1iterator.md) <br> |
| class | [**robustIterator**](classsead_1_1OffsetList_1_1robustIterator.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef int(\* | [**CompareCallback**](#typedef-comparecallback)  <br> |








































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**OffsetList**](#function-offsetlist) () <br> |
|  T \* | [**back**](#function-back) () const<br> |
|  [**iterator**](classsead_1_1OffsetList_1_1iterator.md) | [**begin**](#function-begin-12) () const<br> |
|  [**iterator**](classsead_1_1OffsetList_1_1iterator.md) | [**begin**](#function-begin-22) (T \* ptr) const<br> |
|  void | [**clear**](#function-clear) () <br> |
|  [**iterator**](classsead_1_1OffsetList_1_1iterator.md) | [**end**](#function-end) () const<br> |
|  void | [**erase**](#function-erase) (T \* item) <br> |
|  T \* | [**find**](#function-find-12) (const T \* obj) const<br> |
|  T \* | [**find**](#function-find-22) (const T \* obj, CompareCallback cmp) const<br> |
|  T \* | [**front**](#function-front) () const<br> |
|  s32 | [**indexOf**](#function-indexof) (const T \* obj) const<br> |
|  void | [**initOffset**](#function-initoffset) (s32 offset) <br> |
|  void | [**insertAfter**](#function-insertafter) (const T \* obj, T \* obj\_to\_insert) <br> |
|  void | [**insertBefore**](#function-insertbefore) (const T \* obj, T \* obj\_to\_insert) <br> |
|  bool | [**isNodeLinked**](#function-isnodelinked) (const T \* obj) const<br> |
|  void | [**mergeSort**](#function-mergesort-12) () <br> |
|  void | [**mergeSort**](#function-mergesort-22) (CompareCallback cmp) <br> |
|  void | [**moveAfter**](#function-moveafter) (T \* basis, T \* obj) <br> |
|  void | [**moveBefore**](#function-movebefore) (T \* basis, T \* obj) <br> |
|  T \* | [**next**](#function-next) (const T \* obj) const<br> |
|  T \* | [**nth**](#function-nth) (s32 n) const<br> |
|  T \* | [**popBack**](#function-popback) () <br> |
|  T \* | [**popFront**](#function-popfront) () <br> |
|  T \* | [**prev**](#function-prev) (const T \* obj) const<br> |
|  void | [**pushBack**](#function-pushback) (T \* item) <br> |
|  void | [**pushFront**](#function-pushfront) (T \* item) <br> |
|  [**robustIterator**](classsead_1_1OffsetList_1_1robustIterator.md) | [**robustBegin**](#function-robustbegin-12) () const<br> |
|  [**robustIterator**](classsead_1_1OffsetList_1_1robustIterator.md) | [**robustBegin**](#function-robustbegin-22) (T \* ptr) const<br> |
|  [**robustIterator**](classsead_1_1OffsetList_1_1robustIterator.md) | [**robustEnd**](#function-robustend) () const<br> |
|  [**RobustRange**](structsead_1_1OffsetList_1_1RobustRange.md) | [**robustRange**](#function-robustrange) () const<br> |
|  void | [**sort**](#function-sort-12) () <br> |
|  void | [**sort**](#function-sort-22) (CompareCallback cmp) <br> |
|  void | [**swap**](#function-swap) (T \* obj1, T \* obj2) <br> |
|  void | [**uniq**](#function-uniq-12) () <br> |
|  void | [**uniq**](#function-uniq-22) (CompareCallback cmp) <br> |


## Public Functions inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1ListImpl.md)

| Type | Name |
| ---: | :--- |
|   | [**ListImpl**](classsead_1_1ListImpl.md#function-listimpl) () <br> |
|  bool | [**checkLinks**](classsead_1_1ListImpl.md#function-checklinks) () const<br> |
|  bool | [**isEmpty**](classsead_1_1ListImpl.md#function-isempty) () const<br> |
|  void | [**reverse**](classsead_1_1ListImpl.md#function-reverse) () <br> |
|  void | [**shuffle**](classsead_1_1ListImpl.md#function-shuffle-12) () <br> |
|  void | [**shuffle**](classsead_1_1ListImpl.md#function-shuffle-22) ([**Random**](classsead_1_1Random.md) \* random) <br> |
|  s32 | [**size**](classsead_1_1ListImpl.md#function-size) () const<br> |








## Protected Types inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1ListImpl.md)

| Type | Name |
| ---: | :--- |
| typedef int(\* | [**CompareCallbackImpl**](classsead_1_1ListImpl.md#typedef-comparecallbackimpl)  <br> |






## Protected Attributes

| Type | Name |
| ---: | :--- |
|  s32 | [**mOffset**](#variable-moffset)  <br> |


## Protected Attributes inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1ListImpl.md)

| Type | Name |
| ---: | :--- |
|  s32 | [**mCount**](classsead_1_1ListImpl.md#variable-mcount)  <br> |
|  [**ListNode**](classsead_1_1ListNode.md) | [**mStartEnd**](classsead_1_1ListImpl.md#variable-mstartend)  <br> |






























## Protected Functions

| Type | Name |
| ---: | :--- |
|  T \* | [**listNodeToObj**](#function-listnodetoobj-12) ([**ListNode**](classsead_1_1ListNode.md) \* node) const<br> |
|  const T \* | [**listNodeToObj**](#function-listnodetoobj-22) (const [**ListNode**](classsead_1_1ListNode.md) \* node) const<br> |
|  T \* | [**listNodeToObjWithNullCheck**](#function-listnodetoobjwithnullcheck-12) ([**ListNode**](classsead_1_1ListNode.md) \* node) const<br> |
|  const T \* | [**listNodeToObjWithNullCheck**](#function-listnodetoobjwithnullcheck-22) (const [**ListNode**](classsead_1_1ListNode.md) \* node) const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**objToListNode**](#function-objtolistnode-12) (T \* obj) const<br> |
|  const [**ListNode**](classsead_1_1ListNode.md) \* | [**objToListNode**](#function-objtolistnode-22) (const T \* obj) const<br> |


## Protected Functions inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1ListImpl.md)

| Type | Name |
| ---: | :--- |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**back**](classsead_1_1ListImpl.md#function-back) () const<br> |
|  void | [**clear**](classsead_1_1ListImpl.md#function-clear) () <br> |
|  void | [**erase**](classsead_1_1ListImpl.md#function-erase) ([**ListNode**](classsead_1_1ListNode.md) \* item) <br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**find**](classsead_1_1ListImpl.md#function-find) (const void \* ptr, s32 offset, CompareCallbackImpl cmp) const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**front**](classsead_1_1ListImpl.md#function-front) () const<br> |
|  s32 | [**indexOf**](classsead_1_1ListImpl.md#function-indexof) (const [**ListNode**](classsead_1_1ListNode.md) \* n) const<br> |
|  void | [**insertAfter**](classsead_1_1ListImpl.md#function-insertafter) ([**ListNode**](classsead_1_1ListNode.md) \* node, [**ListNode**](classsead_1_1ListNode.md) \* node\_to\_insert) <br> |
|  void | [**insertBefore**](classsead_1_1ListImpl.md#function-insertbefore) ([**ListNode**](classsead_1_1ListNode.md) \* node, [**ListNode**](classsead_1_1ListNode.md) \* node\_to\_insert) <br> |
|  void | [**mergeSort**](classsead_1_1ListImpl.md#function-mergesort) (s32 offset, const ComparePredicate & cmp) <br> |
|  void | [**moveAfter**](classsead_1_1ListImpl.md#function-moveafter) ([**ListNode**](classsead_1_1ListNode.md) \* basis, [**ListNode**](classsead_1_1ListNode.md) \* n) <br> |
|  void | [**moveBefore**](classsead_1_1ListImpl.md#function-movebefore) ([**ListNode**](classsead_1_1ListNode.md) \* basis, [**ListNode**](classsead_1_1ListNode.md) \* n) <br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**nth**](classsead_1_1ListImpl.md#function-nth) (int n) const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**popBack**](classsead_1_1ListImpl.md#function-popback) () <br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**popFront**](classsead_1_1ListImpl.md#function-popfront) () <br> |
|  void | [**pushBack**](classsead_1_1ListImpl.md#function-pushback) ([**ListNode**](classsead_1_1ListNode.md) \* item) <br> |
|  void | [**pushFront**](classsead_1_1ListImpl.md#function-pushfront) ([**ListNode**](classsead_1_1ListNode.md) \* item) <br> |
|  void | [**sort**](classsead_1_1ListImpl.md#function-sort) (s32 offset, const ComparePredicate & cmp) <br> |
|  void | [**swap**](classsead_1_1ListImpl.md#function-swap) ([**ListNode**](classsead_1_1ListNode.md) \* n1, [**ListNode**](classsead_1_1ListNode.md) \* n2) <br> |
|  void | [**uniq**](classsead_1_1ListImpl.md#function-uniq) (s32 offset, CompareCallbackImpl cmp) <br> |


## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  int | [**compareT**](#function-comparet) (const T \* lhs, const T \* rhs) <br> |


## Protected Static Functions inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1ListImpl.md)

| Type | Name |
| ---: | :--- |
|  void | [**mergeSortImpl\_**](classsead_1_1ListImpl.md#function-mergesortimpl_) ([**ListNode**](classsead_1_1ListNode.md) \* front, [**ListNode**](classsead_1_1ListNode.md) \* back, s32 num, s32 offset, const ComparePredicate & predicate) <br> |


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
    const T * obj
) const
```




<hr>



### function find [2/2]

```C++
inline T * sead::OffsetList::find (
    const T * obj,
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
    const T * obj
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
    const T * obj,
    T * obj_to_insert
) 
```




<hr>



### function insertBefore 

```C++
inline void sead::OffsetList::insertBefore (
    const T * obj,
    T * obj_to_insert
) 
```




<hr>



### function isNodeLinked 

```C++
inline bool sead::OffsetList::isNodeLinked (
    const T * obj
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
    const T * obj
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
    const T * obj
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
inline const T * sead::OffsetList::listNodeToObj (
    const ListNode * node
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
inline const T * sead::OffsetList::listNodeToObjWithNullCheck (
    const ListNode * node
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
inline const ListNode * sead::OffsetList::objToListNode (
    const T * obj
) const
```




<hr>
## Protected Static Functions Documentation




### function compareT 

```C++
static inline int sead::OffsetList::compareT (
    const T * lhs,
    const T * rhs
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadOffsetList.h`

