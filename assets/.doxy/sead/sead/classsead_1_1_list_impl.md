

# Class sead::ListImpl



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**ListImpl**](classsead_1_1_list_impl.md)





* `#include <seadListImpl.h>`





Inherited by the following classes: [sead::OffsetList](classsead_1_1_offset_list.md),  [sead::OffsetList](classsead_1_1_offset_list.md),  [sead::OffsetList](classsead_1_1_offset_list.md),  [sead::OffsetList](classsead_1_1_offset_list.md),  [sead::OffsetList](classsead_1_1_offset_list.md),  [sead::OffsetList](classsead_1_1_offset_list.md),  [sead::TList](classsead_1_1_t_list.md),  [sead::TList](classsead_1_1_t_list.md),  [sead::OffsetList](classsead_1_1_offset_list.md),  [sead::TList](classsead_1_1_t_list.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ListImpl**](#function-listimpl) () <br> |
|  [**bool**](classsead_1_1_list_impl.md#function-mergesort) | [**checkLinks**](#function-checklinks) () const<br> |
|  [**bool**](classsead_1_1_list_impl.md#function-mergesort) | [**isEmpty**](#function-isempty) () const<br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**reverse**](#function-reverse) () <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**shuffle**](#function-shuffle-12) () <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**shuffle**](#function-shuffle-22) ([**Random**](classsead_1_1_random.md) \* random) <br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**size**](#function-size) () const<br> |




## Protected Types

| Type | Name |
| ---: | :--- |
| typedef [**int**](classsead_1_1_list_impl.md#function-mergesort)(\* | [**CompareCallbackImpl**](#typedef-comparecallbackimpl)  <br> |




## Protected Attributes

| Type | Name |
| ---: | :--- |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**mCount**](#variable-mcount)  <br> |
|  [**ListNode**](classsead_1_1_list_node.md) | [**mStartEnd**](#variable-mstartend)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**back**](#function-back) () const<br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**clear**](#function-clear) () <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**erase**](#function-erase) ([**ListNode**](classsead_1_1_list_node.md) \* item) <br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**find**](#function-find) ([**const**](classsead_1_1_list_impl.md#function-mergesort) [**void**](classsead_1_1_list_impl.md#function-mergesort) \* ptr, [**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**CompareCallbackImpl**](classsead_1_1_list_impl.md#typedef-comparecallbackimpl) cmp) const<br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**front**](#function-front) () const<br> |
|  [**s32**](_l_m_s___types_8h.md#typedef-s32) | [**indexOf**](#function-indexof) ([**const**](classsead_1_1_list_impl.md#function-mergesort) [**ListNode**](classsead_1_1_list_node.md) \* n) const<br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**insertAfter**](#function-insertafter) ([**ListNode**](classsead_1_1_list_node.md) \* node, [**ListNode**](classsead_1_1_list_node.md) \* node\_to\_insert) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**insertBefore**](#function-insertbefore) ([**ListNode**](classsead_1_1_list_node.md) \* node, [**ListNode**](classsead_1_1_list_node.md) \* node\_to\_insert) <br> |
|  void | [**mergeSort**](#function-mergesort) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, const ComparePredicate & cmp) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**moveAfter**](#function-moveafter) ([**ListNode**](classsead_1_1_list_node.md) \* basis, [**ListNode**](classsead_1_1_list_node.md) \* n) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**moveBefore**](#function-movebefore) ([**ListNode**](classsead_1_1_list_node.md) \* basis, [**ListNode**](classsead_1_1_list_node.md) \* n) <br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**nth**](#function-nth) ([**int**](classsead_1_1_list_impl.md#function-mergesort) n) const<br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**popBack**](#function-popback) () <br> |
|  [**ListNode**](classsead_1_1_list_node.md) \* | [**popFront**](#function-popfront) () <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**pushBack**](#function-pushback) ([**ListNode**](classsead_1_1_list_node.md) \* item) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**pushFront**](#function-pushfront) ([**ListNode**](classsead_1_1_list_node.md) \* item) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**sort**](#function-sort) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**const**](classsead_1_1_list_impl.md#function-mergesort) [**ComparePredicate**](classsead_1_1_list_impl.md#function-mergesort) & cmp) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**swap**](#function-swap) ([**ListNode**](classsead_1_1_list_node.md) \* n1, [**ListNode**](classsead_1_1_list_node.md) \* n2) <br> |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**uniq**](#function-uniq) ([**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**CompareCallbackImpl**](classsead_1_1_list_impl.md#typedef-comparecallbackimpl) cmp) <br> |


## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  [**void**](classsead_1_1_list_impl.md#function-mergesort) | [**mergeSortImpl\_**](#function-mergesortimpl_) ([**ListNode**](classsead_1_1_list_node.md) \* front, [**ListNode**](classsead_1_1_list_node.md) \* back, [**s32**](_l_m_s___types_8h.md#typedef-s32) num, [**s32**](_l_m_s___types_8h.md#typedef-s32) offset, [**const**](classsead_1_1_list_impl.md#function-mergesort) [**ComparePredicate**](classsead_1_1_list_impl.md#function-mergesort) & predicate) <br> |


## Public Functions Documentation




### function ListImpl 

```C++
inline sead::ListImpl::ListImpl () 
```




<hr>



### function checkLinks 

```C++
bool sead::ListImpl::checkLinks () const
```




<hr>



### function isEmpty 

```C++
inline bool sead::ListImpl::isEmpty () const
```




<hr>



### function reverse 

```C++
void sead::ListImpl::reverse () 
```




<hr>



### function shuffle [1/2]

```C++
void sead::ListImpl::shuffle () 
```




<hr>



### function shuffle [2/2]

```C++
void sead::ListImpl::shuffle (
    Random * random
) 
```




<hr>



### function size 

```C++
inline s32 sead::ListImpl::size () const
```




<hr>
## Protected Types Documentation




### typedef CompareCallbackImpl 

```C++
typedef int(* sead::ListImpl::CompareCallbackImpl) (const void *, const void *);
```




<hr>
## Protected Attributes Documentation




### variable mCount 

```C++
s32 sead::ListImpl::mCount;
```




<hr>



### variable mStartEnd 

```C++
ListNode sead::ListImpl::mStartEnd;
```




<hr>
## Protected Functions Documentation




### function back 

```C++
inline ListNode * sead::ListImpl::back () const
```




<hr>



### function clear 

```C++
void sead::ListImpl::clear () 
```




<hr>



### function erase 

```C++
inline void sead::ListImpl::erase (
    ListNode * item
) 
```




<hr>



### function find 

```C++
ListNode * sead::ListImpl::find (
    const  void * ptr,
    s32 offset,
    CompareCallbackImpl cmp
) const
```




<hr>



### function front 

```C++
inline ListNode * sead::ListImpl::front () const
```




<hr>



### function indexOf 

```C++
s32 sead::ListImpl::indexOf (
    const  ListNode * n
) const
```




<hr>



### function insertAfter 

```C++
inline void sead::ListImpl::insertAfter (
    ListNode * node,
    ListNode * node_to_insert
) 
```




<hr>



### function insertBefore 

```C++
inline void sead::ListImpl::insertBefore (
    ListNode * node,
    ListNode * node_to_insert
) 
```




<hr>



### function mergeSort 

```C++
template<class  T, class  ComparePredicate>
inline void sead::ListImpl::mergeSort (
    s32 offset,
    const ComparePredicate & cmp
) 
```




<hr>



### function moveAfter 

```C++
void sead::ListImpl::moveAfter (
    ListNode * basis,
    ListNode * n
) 
```




<hr>



### function moveBefore 

```C++
void sead::ListImpl::moveBefore (
    ListNode * basis,
    ListNode * n
) 
```




<hr>



### function nth 

```C++
ListNode * sead::ListImpl::nth (
    int n
) const
```




<hr>



### function popBack 

```C++
ListNode * sead::ListImpl::popBack () 
```




<hr>



### function popFront 

```C++
ListNode * sead::ListImpl::popFront () 
```




<hr>



### function pushBack 

```C++
inline void sead::ListImpl::pushBack (
    ListNode * item
) 
```




<hr>



### function pushFront 

```C++
inline void sead::ListImpl::pushFront (
    ListNode * item
) 
```




<hr>



### function sort 

```C++
template<class  T, class  ComparePredicate>
inline void sead::ListImpl::sort (
    s32 offset,
    const  ComparePredicate & cmp
) 
```




<hr>



### function swap 

```C++
void sead::ListImpl::swap (
    ListNode * n1,
    ListNode * n2
) 
```




<hr>



### function uniq 

```C++
void sead::ListImpl::uniq (
    s32 offset,
    CompareCallbackImpl cmp
) 
```




<hr>
## Protected Static Functions Documentation




### function mergeSortImpl\_ 

```C++
template<class  T, class  ComparePredicate>
static void sead::ListImpl::mergeSortImpl_ (
    ListNode * front,
    ListNode * back,
    s32 num,
    s32 offset,
    const  ComparePredicate & predicate
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadListImpl.h`

