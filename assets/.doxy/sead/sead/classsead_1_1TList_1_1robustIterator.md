

# Class sead::TList::robustIterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TList**](classsead_1_1TList.md) **>** [**robustIterator**](classsead_1_1TList_1_1robustIterator.md)



[More...](#detailed-description)

* `#include <seadTList.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; & | [**operator\***](#function-operator) () const<br> |
|  [**robustIterator**](classsead_1_1TList_1_1robustIterator.md) & | [**operator++**](#function-operator_1) () <br> |
|  [**robustIterator**](classsead_1_1TList_1_1robustIterator.md) | [**operator++**](#function-operator_2) (int) <br> |
|  [**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* | [**operator-&gt;**](#function-operator-) () const<br> |
|   | [**robustIterator**](#function-robustiterator) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* ptr) <br> |




























## Detailed Description


An iterator that is safe to use even if the list is mutated during iteration. Unlike the regular iterator class, this exposes ListNode&lt;T&gt; rather than T to make it easier to modify the list. 


    
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

