

# Class sead::TList::iterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**TList**](classsead_1_1TList.md) **>** [**iterator**](classsead_1_1TList_1_1iterator.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**iterator**](#function-iterator) ([**TListNode**](classsead_1_1TListNode.md)&lt; T &gt; \* ptr) <br> |
|  T & | [**operator\***](#function-operator) () const<br> |
|  [**iterator**](classsead_1_1TList_1_1iterator.md) & | [**operator++**](#function-operator_1) () <br> |
|  [**iterator**](classsead_1_1TList_1_1iterator.md) & | [**operator--**](#function-operator-) () <br> |
|  T \* | [**operator-&gt;**](#function-operator-) () const<br> |




























## Public Functions Documentation




### function iterator 

```C++
inline sead::TList::iterator::iterator (
    TListNode < T > * ptr
) 
```




<hr>



### function operator\* 

```C++
inline T & sead::TList::iterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline iterator & sead::TList::iterator::operator++ () 
```




<hr>



### function operator-- 

```C++
inline iterator & sead::TList::iterator::operator-- () 
```




<hr>



### function operator-&gt; 

```C++
inline T * sead::TList::iterator::operator-> () const
```




<hr>## Friends Documentation





### friend operator!= 

```C++
inline bool sead::TList::iterator::operator!= (
    iterator it1,
    iterator it2
) 
```




<hr>



### friend operator== 

```C++
inline bool sead::TList::iterator::operator== (
    iterator it1,
    iterator it2
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadTList.h`

