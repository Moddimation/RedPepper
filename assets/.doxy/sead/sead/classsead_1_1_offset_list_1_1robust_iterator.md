

# Class sead::OffsetList::robustIterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**OffsetList**](classsead_1_1_offset_list.md) **>** [**robustIterator**](classsead_1_1_offset_list_1_1robust_iterator.md)





* `#include <seadOffsetList.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|  [**bool**](classsead_1_1_offset_list.md#function-mergesort-12) | [**operator!=**](#function-operator) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**robustIterator**](classsead_1_1_offset_list_1_1robust_iterator.md) & other) const<br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) & | [**operator\***](#function-operator_1) () const<br> |
|  [**robustIterator**](classsead_1_1_offset_list_1_1robust_iterator.md) & | [**operator++**](#function-operator_2) () <br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  [**bool**](classsead_1_1_offset_list.md#function-mergesort-12) | [**operator==**](#function-operator_3) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**robustIterator**](classsead_1_1_offset_list_1_1robust_iterator.md) & other) const<br> |
|   | [**robustIterator**](#function-robustiterator) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* ptr, [**s32**](_l_m_s___types_8h.md#typedef-s32) offset) <br> |




























## Public Functions Documentation




### function operator!= 

```C++
inline bool sead::OffsetList::robustIterator::operator!= (
    const  robustIterator & other
) const
```




<hr>



### function operator\* 

```C++
inline T & sead::OffsetList::robustIterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline robustIterator & sead::OffsetList::robustIterator::operator++ () 
```




<hr>



### function operator-&gt; 

```C++
inline T * sead::OffsetList::robustIterator::operator-> () const
```




<hr>



### function operator== 

```C++
inline bool sead::OffsetList::robustIterator::operator== (
    const  robustIterator & other
) const
```




<hr>



### function robustIterator 

```C++
inline sead::OffsetList::robustIterator::robustIterator (
    T * ptr,
    s32 offset
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadOffsetList.h`

