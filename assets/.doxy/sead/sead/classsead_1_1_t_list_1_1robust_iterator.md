

# Class sead::TList::robustIterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TList**](classsead_1_1_t_list.md) **>** [**robustIterator**](classsead_1_1_t_list_1_1robust_iterator.md)



_An iterator that is safe to use even if the list is mutated during iteration._ [More...](#detailed-description)

* `#include <seadTList.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; & | [**operator\***](#function-operator) () const<br> |
|  [**robustIterator**](classsead_1_1_t_list_1_1robust_iterator.md) & | [**operator++**](#function-operator_1) () <br> |
|  [**robustIterator**](classsead_1_1_t_list_1_1robust_iterator.md) | [**operator++**](#function-operator_2) ([**int**](classsead_1_1_t_list.md#function-mergesort)) <br> |
|  [**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* | [**operator-&gt;**](#function-operator-) () const<br> |
|   | [**robustIterator**](#function-robustiterator) ([**TListNode**](classsead_1_1_t_list_node.md)&lt; [**T**](classsead_1_1_t_list.md#function-mergesort) &gt; \* ptr) <br> |




























## Detailed Description


Unlike the regular iterator class, this exposes ListNode&lt;T&gt; rather than T to make it easier to modify the list. 


    
## Public Functions Documentation




### function operator\* 

```C++
inline TListNode < T > & sead::TList::robustIterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline robustIterator & sead::TList::robustIterator::operator++ () 
```




<hr>



### function operator++ 

```C++
inline robustIterator sead::TList::robustIterator::operator++ (
    int
) 
```




<hr>



### function operator-&gt; 

```C++
inline TListNode < T > * sead::TList::robustIterator::operator-> () const
```




<hr>



### function robustIterator 

```C++
inline explicit sead::TList::robustIterator::robustIterator (
    TListNode < T > * ptr
) 
```




<hr>## Friends Documentation





### friend operator!= 

```C++
inline bool sead::TList::robustIterator::operator!= (
    robustIterator it1,
    robustIterator it2
) 
```




<hr>



### friend operator== 

```C++
inline bool sead::TList::robustIterator::operator== (
    robustIterator it1,
    robustIterator it2
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadTList.h`

