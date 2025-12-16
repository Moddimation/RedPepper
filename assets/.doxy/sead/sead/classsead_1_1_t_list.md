

# Class sead::TList

**template &lt;[**typename**](classsead_1_1_t_list.md#function-mergesort) [**T**](classsead_1_1_t_list.md#function-mergesort)&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TList**](classsead_1_1_t_list.md)





* `#include <seadTList.h>`



Inherits the following classes: [sead::ListImpl](classsead_1_1_list_impl.md)












## Classes

| Type | Name |
| ---: | :--- |
| struct | [**RobustRange**](structsead_1_1_t_list_1_1_robust_range.md) <br> |
| class | [**iterator**](classsead_1_1_t_list_1_1iterator.md) <br> |
| class | [**robustIterator**](classsead_1_1_t_list_1_1robust_iterator.md) <br>_An iterator that is safe to use even if the list is mutated during iteration._  |


## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**int**](classsead_1_1_t_list.md#function-mergesort)(\* | [**CompareCallback**](#typedef-comparecallback)  <br> |








































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**TList**](#function-tlist) () <br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**back**](#function-back) () const<br> |
|  [**iterator**](classsead_1_1_t_list_1_1iterator.md) | [**begin**](#function-begin) () const<br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**clear**](#function-clear) () <br> |
|  [**iterator**](classsead_1_1_t_list_1_1iterator.md) | [**end**](#function-end) () const<br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**erase**](#function-erase) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* item) <br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**find**](#function-find) ([**const**](classsead_1_1_t_list.md#function-mergesort) [**void**](classsead_1_1_t_list.md#function-mergesort) \* ptr, [**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**CompareCallback**](classsead_1_1_t_list.md#typedef-comparecallback) cmp) const<br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**front**](#function-front) () const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**indexOf**](#function-indexof) ([**const**](classsead_1_1_t_list.md#function-mergesort) [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* node) const<br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**insertAfter**](#function-insertafter) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* node, [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* node\_to\_insert) <br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**insertBefore**](#function-insertbefore) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* node, [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* node\_to\_insert) <br> |
|  void | [**mergeSort**](#function-mergesort) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**CompareCallback**](classsead_1_1_t_list.md#typedef-comparecallback) cmp) <br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**moveAfter**](#function-moveafter) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* basis, [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* n) <br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**moveBefore**](#function-movebefore) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* basis, [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* n) <br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**next**](#function-next) ([**const**](classsead_1_1_t_list.md#function-mergesort) [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* node) const<br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**nth**](#function-nth) ([**int**](classsead_1_1_t_list.md#function-mergesort) n) const<br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**popBack**](#function-popback) () <br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**popFront**](#function-popfront) () <br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**prev**](#function-prev) ([**const**](classsead_1_1_t_list.md#function-mergesort) [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* node) const<br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**pushBack**](#function-pushback) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* item) <br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**pushFront**](#function-pushfront) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* item) <br> |
|  [**robustIterator**](classsead_1_1_t_list_1_1robust_iterator.md) | [**robustBegin**](#function-robustbegin) () const<br> |
|  [**robustIterator**](classsead_1_1_t_list_1_1robust_iterator.md) | [**robustEnd**](#function-robustend) () const<br> |
|  [**RobustRange**](structsead_1_1_t_list_1_1_robust_range.md) | [**robustRange**](#function-robustrange) () const<br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**sort**](#function-sort) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**CompareCallback**](classsead_1_1_t_list.md#typedef-comparecallback) cmp) <br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**swap**](#function-swap) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* n1, [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* n2) <br> |
|  [**void**](classsead_1_1_t_list.md#function-mergesort) | [**uniq**](#function-uniq) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**CompareCallback**](classsead_1_1_t_list.md#typedef-comparecallback) cmp) <br> |


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








## Protected Attributes inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1_list_impl.md)

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mCount**](classsead_1_1_list_impl.md#variable-mcount)  <br> |
|  [**ListNode**](classsead_1_1_list_node.md) | [**mStartEnd**](classsead_1_1_list_impl.md#variable-mstartend)  <br> |
































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




## Protected Static Functions inherited from sead::ListImpl

See [sead::ListImpl](classsead_1_1_list_impl.md)

| Type | Name |
| ---: | :--- |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**mergeSortImpl\_**](classsead_1_1_list_impl.md#function-mergesortimpl_) ([**ListNode**](classsead_1_1_list_node.md) \* front, [**ListNode**](classsead_1_1_list_node.md) \* back, [**s32**](_l_m_s___types_8h.md#typedef-s32) num, [**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**const**](classsead_1_1_list_impl.md#function-mergesort) [**ComparePredicate**](classsead_1_1_list_impl.md#function-mergesort) & predicate) <br> |


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
    const  void * ptr,
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
    const  TListNode < T > * node
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
    const  TListNode < T > * node
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
    const  TListNode < T > * node
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

