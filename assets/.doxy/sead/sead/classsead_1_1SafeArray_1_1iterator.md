

# Class sead::SafeArray::iterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**SafeArray**](classsead_1_1SafeArray.md) **>** [**iterator**](classsead_1_1SafeArray_1_1iterator.md)










































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**iterator**](#function-iterator) (T \* buffer, s32 idx) <br> |
|  bool | [**operator!=**](#function-operator) (const [**iterator**](classsead_1_1SafeArray_1_1iterator.md) & rhs) const<br> |
|  T & | [**operator\***](#function-operator_1) () const<br> |
|  [**iterator**](classsead_1_1SafeArray_1_1iterator.md) & | [**operator++**](#function-operator_2) () <br> |
|  [**iterator**](classsead_1_1SafeArray_1_1iterator.md) & | [**operator--**](#function-operator-) () <br> |
|  T \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  bool | [**operator==**](#function-operator_3) (const [**iterator**](classsead_1_1SafeArray_1_1iterator.md) & rhs) const<br> |




























## Public Functions Documentation




### function iterator 

```C++
inline sead::SafeArray::iterator::iterator (
    T * buffer,
    s32 idx
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::SafeArray::iterator::operator!= (
    const iterator & rhs
) const
```




<hr>



### function operator\* 

```C++
inline T & sead::SafeArray::iterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline iterator & sead::SafeArray::iterator::operator++ () 
```




<hr>



### function operator-- 

```C++
inline iterator & sead::SafeArray::iterator::operator-- () 
```




<hr>



### function operator-&gt; 

```C++
inline T * sead::SafeArray::iterator::operator-> () const
```




<hr>



### function operator== 

```C++
inline bool sead::SafeArray::iterator::operator== (
    const iterator & rhs
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadSafeArray.h`

