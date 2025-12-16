

# Class sead::OffsetList::iterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**OffsetList**](classsead_1_1_offset_list.md) **>** [**iterator**](classsead_1_1_offset_list_1_1iterator.md)





* `#include <seadOffsetList.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**iterator**](#function-iterator) ([**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* ptr, [**s32**](_l_m_s___types_8h.md#typedef-s32) offset) <br> |
|  [**bool**](classsead_1_1_offset_list.md#function-mergesort-12) | [**operator!=**](#function-operator) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**iterator**](classsead_1_1_offset_list_1_1iterator.md) & other) const<br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) & | [**operator\***](#function-operator_1) () const<br> |
|  [**iterator**](classsead_1_1_offset_list_1_1iterator.md) & | [**operator++**](#function-operator_2) () <br> |
|  [**T**](classsead_1_1_offset_list.md#function-mergesort-12) \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  [**bool**](classsead_1_1_offset_list.md#function-mergesort-12) | [**operator==**](#function-operator_3) ([**const**](classsead_1_1_offset_list.md#function-mergesort-12) [**iterator**](classsead_1_1_offset_list_1_1iterator.md) & other) const<br> |




























## Public Functions Documentation




### function iterator 

```C++
inline sead::OffsetList::iterator::iterator (
    T * ptr,
    s32 offset
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::OffsetList::iterator::operator!= (
    const  iterator & other
) const
```




<hr>



### function operator\* 

```C++
inline T & sead::OffsetList::iterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline iterator & sead::OffsetList::iterator::operator++ () 
```




<hr>



### function operator-&gt; 

```C++
inline T * sead::OffsetList::iterator::operator-> () const
```




<hr>



### function operator== 

```C++
inline bool sead::OffsetList::iterator::operator== (
    const  iterator & other
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadOffsetList.h`

