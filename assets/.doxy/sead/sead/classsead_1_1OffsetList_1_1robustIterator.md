

# Class sead::OffsetList::robustIterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**OffsetList**](classsead_1_1OffsetList.md) **>** [**robustIterator**](classsead_1_1OffsetList_1_1robustIterator.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|  bool | [**operator!=**](#function-operator) (const [**robustIterator**](classsead_1_1OffsetList_1_1robustIterator.md) & other) const<br> |
|  T & | [**operator\***](#function-operator_1) () const<br> |
|  [**robustIterator**](classsead_1_1OffsetList_1_1robustIterator.md) & | [**operator++**](#function-operator_2) () <br> |
|  T \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  bool | [**operator==**](#function-operator_3) (const [**robustIterator**](classsead_1_1OffsetList_1_1robustIterator.md) & other) const<br> |
|   | [**robustIterator**](#function-robustiterator) (T \* ptr, s32 offset) <br> |




























## Public Functions Documentation




### function operator!= 

```C++
inline bool sead::OffsetList::robustIterator::operator!= (
    const robustIterator & other
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
    const robustIterator & other
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

