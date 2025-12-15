

# Class sead::ListImpl



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**ListImpl**](classsead_1_1ListImpl.md)










Inherited by the following classes: [sead::OffsetList](classsead_1_1OffsetList.md),  [sead::OffsetList](classsead_1_1OffsetList.md),  [sead::OffsetList](classsead_1_1OffsetList.md),  [sead::OffsetList](classsead_1_1OffsetList.md),  [sead::OffsetList](classsead_1_1OffsetList.md),  [sead::OffsetList](classsead_1_1OffsetList.md),  [sead::TList](classsead_1_1TList.md),  [sead::TList](classsead_1_1TList.md),  [sead::OffsetList](classsead_1_1OffsetList.md),  [sead::TList](classsead_1_1TList.md)
































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**ListImpl**](#function-listimpl) () <br> |
|  bool | [**checkLinks**](#function-checklinks) () const<br> |
|  bool | [**isEmpty**](#function-isempty) () const<br> |
|  void | [**reverse**](#function-reverse) () <br> |
|  void | [**shuffle**](#function-shuffle-12) () <br> |
|  void | [**shuffle**](#function-shuffle-22) ([**Random**](classsead_1_1Random.md) \* random) <br> |
|  s32 | [**size**](#function-size) () const<br> |




## Protected Types

| Type | Name |
| ---: | :--- |
| typedef int(\* | [**CompareCallbackImpl**](#typedef-comparecallbackimpl)  <br> |




## Protected Attributes

| Type | Name |
| ---: | :--- |
|  s32 | [**mCount**](#variable-mcount)  <br> |
|  [**ListNode**](classsead_1_1ListNode.md) | [**mStartEnd**](#variable-mstartend)  <br> |
















## Protected Functions

| Type | Name |
| ---: | :--- |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**back**](#function-back) () const<br> |
|  void | [**clear**](#function-clear) () <br> |
|  void | [**erase**](#function-erase) ([**ListNode**](classsead_1_1ListNode.md) \* item) <br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**find**](#function-find) (const void \* ptr, s32 offset, CompareCallbackImpl cmp) const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**front**](#function-front) () const<br> |
|  s32 | [**indexOf**](#function-indexof) (const [**ListNode**](classsead_1_1ListNode.md) \* n) const<br> |
|  void | [**insertAfter**](#function-insertafter) ([**ListNode**](classsead_1_1ListNode.md) \* node, [**ListNode**](classsead_1_1ListNode.md) \* node\_to\_insert) <br> |
|  void | [**insertBefore**](#function-insertbefore) ([**ListNode**](classsead_1_1ListNode.md) \* node, [**ListNode**](classsead_1_1ListNode.md) \* node\_to\_insert) <br> |
|  void | [**mergeSort**](#function-mergesort) (s32 offset, const ComparePredicate & cmp) <br> |
|  void | [**moveAfter**](#function-moveafter) ([**ListNode**](classsead_1_1ListNode.md) \* basis, [**ListNode**](classsead_1_1ListNode.md) \* n) <br> |
|  void | [**moveBefore**](#function-movebefore) ([**ListNode**](classsead_1_1ListNode.md) \* basis, [**ListNode**](classsead_1_1ListNode.md) \* n) <br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**nth**](#function-nth) (int n) const<br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**popBack**](#function-popback) () <br> |
|  [**ListNode**](classsead_1_1ListNode.md) \* | [**popFront**](#function-popfront) () <br> |
|  void | [**pushBack**](#function-pushback) ([**ListNode**](classsead_1_1ListNode.md) \* item) <br> |
|  void | [**pushFront**](#function-pushfront) ([**ListNode**](classsead_1_1ListNode.md) \* item) <br> |
|  void | [**sort**](#function-sort) (s32 offset, const ComparePredicate & cmp) <br> |
|  void | [**swap**](#function-swap) ([**ListNode**](classsead_1_1ListNode.md) \* n1, [**ListNode**](classsead_1_1ListNode.md) \* n2) <br> |
|  void | [**uniq**](#function-uniq) (s32 offset, CompareCallbackImpl cmp) <br> |


## Protected Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**mergeSortImpl\_**](#function-mergesortimpl_) ([**ListNode**](classsead_1_1ListNode.md) \* front, [**ListNode**](classsead_1_1ListNode.md) \* back, s32 num, s32 offset, const ComparePredicate & predicate) <br> |


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
    const void * ptr,
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
    const ListNode * n
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
template<class T, class ComparePredicate>
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
template<class T, class ComparePredicate>
inline void sead::ListImpl::sort (
    s32 offset,
    const ComparePredicate & cmp
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
template<class T, class ComparePredicate>
static void sead::ListImpl::mergeSortImpl_ (
    ListNode * front,
    ListNode * back,
    s32 num,
    s32 offset,
    const ComparePredicate & predicate
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadListImpl.h`

