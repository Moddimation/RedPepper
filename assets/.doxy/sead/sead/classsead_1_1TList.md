

# Class sead::TList

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TList**](classsead_1_1TList.md)








Inherits the following classes: [sead::ListImpl](classsead_1_1ListImpl.md)












## Classes

| Type | Name |
| ---: | :--- |
| struct | [**RobustRange**](structsead_1_1TList_1_1RobustRange.md) <br> |
| class | [**iterator**](classsead_1_1TList_1_1iterator.md) <br> |
| class | [**robustIterator**](classsead_1_1TList_1_1robustIterator.md) <br> |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef int(\* | [**CompareCallback**](#typedef-comparecallback)  <br> |








































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TList**](#function-tlist) () <br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**back**](#function-back) () const<br> |
|  [**iterator**](classsead_1_1TList_1_1iterator.md) | [**begin**](#function-begin) () const<br> |
|  void | [**clear**](#function-clear) () <br> |
|  [**iterator**](classsead_1_1TList_1_1iterator.md) | [**end**](#function-end) () const<br> |
|  void | [**erase**](#function-erase) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* item) <br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**find**](#function-find) (const void \* ptr, s32 offset, CompareCallback cmp) const<br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**front**](#function-front) () const<br> |
|  s32 | [**indexOf**](#function-indexof) (const [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* node) const<br> |
|  void | [**insertAfter**](#function-insertafter) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* node, [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* node\_to\_insert) <br> |
|  void | [**insertBefore**](#function-insertbefore) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* node, [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* node\_to\_insert) <br> |
|  void | [**mergeSort**](#function-mergesort) (s32 offset, CompareCallback cmp) <br> |
|  void | [**moveAfter**](#function-moveafter) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* basis, [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* n) <br> |
|  void | [**moveBefore**](#function-movebefore) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* basis, [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* n) <br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**next**](#function-next) (const [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* node) const<br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**nth**](#function-nth) (int n) const<br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**popBack**](#function-popback) () <br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**popFront**](#function-popfront) () <br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**prev**](#function-prev) (const [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* node) const<br> |
|  void | [**pushBack**](#function-pushback) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* item) <br> |
|  void | [**pushFront**](#function-pushfront) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* item) <br> |
|  [**robustIterator**](classsead_1_1TList_1_1robustIterator.md) | [**robustBegin**](#function-robustbegin) () const<br> |
|  [**robustIterator**](classsead_1_1TList_1_1robustIterator.md) | [**robustEnd**](#function-robustend) () const<br> |
|  [**RobustRange**](structsead_1_1TList_1_1RobustRange.md) | [**robustRange**](#function-robustrange) () const<br> |
|  void | [**sort**](#function-sort) (s32 offset, CompareCallback cmp) <br> |
|  void | [**swap**](#function-swap) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* n1, [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* n2) <br> |
|  void | [**uniq**](#function-uniq) (s32 offset, CompareCallback cmp) <br> |


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








## Protected Attributes inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1ListImpl.md)

| Type | Name |
| ---: | :--- |
|  s32 | [**mCount**](classsead_1_1ListImpl.md#variable-mcount)  <br> |
|  [**ListNode**](classsead_1_1ListNode.md) | [**mStartEnd**](classsead_1_1ListImpl.md#variable-mstartend)  <br> |
































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




## Protected Static Functions inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1ListImpl.md)

| Type | Name |
| ---: | :--- |
|  void | [**mergeSortImpl\_**](classsead_1_1ListImpl.md#function-mergesortimpl_) ([**ListNode**](classsead_1_1ListNode.md) \* front, [**ListNode**](classsead_1_1ListNode.md) \* back, s32 num, s32 offset, const ComparePredicate & predicate) <br> |


## Public Types Documentation




### typedef CompareCallback 

```C++
typedef int(* sead::TList< T >::CompareCallback) (const T *, const T *);
```




<hr>
## Public Functions Documentation




### function TList 

```C++
inline sead::TList::TList () 
```




<hr>



### function back 

```C++
inline TListNode < T > * sead::TList::back () const
```




<hr>



### function begin 

```C++
inline iterator sead::TList::begin () const
```




<hr>



### function clear 

```C++
inline void sead::TList::clear () 
```




<hr>



### function end 

```C++
inline iterator sead::TList::end () const
```




<hr>



### function erase 

```C++
inline void sead::TList::erase (
    TListNode < T > * item
) 
```




<hr>



### function find 

```C++
inline TListNode < T > * sead::TList::find (
    const void * ptr,
    s32 offset,
    CompareCallback cmp
) const
```




<hr>



### function front 

```C++
inline TListNode < T > * sead::TList::front () const
```




<hr>



### function indexOf 

```C++
inline s32 sead::TList::indexOf (
    const TListNode < T > * node
) const
```




<hr>



### function insertAfter 

```C++
inline void sead::TList::insertAfter (
    TListNode < T > * node,
    TListNode < T > * node_to_insert
) 
```




<hr>



### function insertBefore 

```C++
inline void sead::TList::insertBefore (
    TListNode < T > * node,
    TListNode < T > * node_to_insert
) 
```




<hr>



### function mergeSort 

```C++
inline void sead::TList::mergeSort (
    s32 offset,
    CompareCallback cmp
) 
```




<hr>



### function moveAfter 

```C++
inline void sead::TList::moveAfter (
    TListNode < T > * basis,
    TListNode < T > * n
) 
```




<hr>



### function moveBefore 

```C++
inline void sead::TList::moveBefore (
    TListNode < T > * basis,
    TListNode < T > * n
) 
```




<hr>



### function next 

```C++
inline TListNode < T > * sead::TList::next (
    const TListNode < T > * node
) const
```




<hr>



### function nth 

```C++
inline TListNode < T > * sead::TList::nth (
    int n
) const
```




<hr>



### function popBack 

```C++
inline TListNode < T > * sead::TList::popBack () 
```




<hr>



### function popFront 

```C++
inline TListNode < T > * sead::TList::popFront () 
```




<hr>



### function prev 

```C++
inline TListNode < T > * sead::TList::prev (
    const TListNode < T > * node
) const
```




<hr>



### function pushBack 

```C++
inline void sead::TList::pushBack (
    TListNode < T > * item
) 
```




<hr>



### function pushFront 

```C++
inline void sead::TList::pushFront (
    TListNode < T > * item
) 
```




<hr>



### function robustBegin 

```C++
inline robustIterator sead::TList::robustBegin () const
```




<hr>



### function robustEnd 

```C++
inline robustIterator sead::TList::robustEnd () const
```




<hr>



### function robustRange 

```C++
inline RobustRange sead::TList::robustRange () const
```




<hr>



### function sort 

```C++
inline void sead::TList::sort (
    s32 offset,
    CompareCallback cmp
) 
```




<hr>



### function swap 

```C++
inline void sead::TList::swap (
    TListNode < T > * n1,
    TListNode < T > * n2
) 
```




<hr>



### function uniq 

```C++
inline void sead::TList::uniq (
    s32 offset,
    CompareCallback cmp
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadTList.h`

