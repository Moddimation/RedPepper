

# Class sead::SafeArray::constIterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**SafeArray**](classsead_1_1_safe_array.md) **>** [**constIterator**](classsead_1_1_safe_array_1_1const_iterator.md)





* `#include <seadSafeArray.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**constIterator**](#function-constiterator) (const T \* buffer, [**s32**](_l_m_s___types_8h.md#typedef-s32) idx) <br> |
|  bool | [**operator!=**](#function-operator) (const [**constIterator**](classsead_1_1_safe_array_1_1const_iterator.md) & rhs) const<br> |
|  const T & | [**operator\***](#function-operator_1) () const<br> |
|  [**constIterator**](classsead_1_1_safe_array_1_1const_iterator.md) & | [**operator++**](#function-operator_2) () <br> |
|  [**constIterator**](classsead_1_1_safe_array_1_1const_iterator.md) & | [**operator--**](#function-operator-) () <br> |
|  const T \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  bool | [**operator==**](#function-operator_3) (const [**constIterator**](classsead_1_1_safe_array_1_1const_iterator.md) & rhs) const<br> |




























## Public Functions Documentation




### function constIterator 

```C++
inline sead::SafeArray::constIterator::constIterator (
    const T * buffer,
    s32 idx
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::SafeArray::constIterator::operator!= (
    const constIterator & rhs
) const
```




<hr>



### function operator\* 

```C++
inline const T & sead::SafeArray::constIterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline constIterator & sead::SafeArray::constIterator::operator++ () 
```




<hr>



### function operator-- 

```C++
inline constIterator & sead::SafeArray::constIterator::operator-- () 
```




<hr>



### function operator-&gt; 

```C++
inline const T * sead::SafeArray::constIterator::operator-> () const
```




<hr>



### function operator== 

```C++
inline bool sead::SafeArray::constIterator::operator== (
    const constIterator & rhs
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadSafeArray.h`

