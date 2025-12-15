

# Class sead::OffsetList::iterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**OffsetList**](classsead_1_1OffsetList.md) **>** [**iterator**](classsead_1_1OffsetList_1_1iterator.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**iterator**](#function-iterator) (T \* ptr, s32 offset) <br> |
|  bool | [**operator!=**](#function-operator) (const [**iterator**](classsead_1_1OffsetList_1_1iterator.md) & other) const<br> |
|  T & | [**operator\***](#function-operator_1) () const<br> |
|  [**iterator**](classsead_1_1OffsetList_1_1iterator.md) & | [**operator++**](#function-operator_2) () <br> |
|  T \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  bool | [**operator==**](#function-operator_3) (const [**iterator**](classsead_1_1OffsetList_1_1iterator.md) & other) const<br> |




























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
    const iterator & other
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
    const iterator & other
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadOffsetList.h`

