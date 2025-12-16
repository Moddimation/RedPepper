

# Class sead::PtrArray::constIterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**PtrArray**](classsead_1_1_ptr_array.md) **>** [**constIterator**](classsead_1_1_ptr_array_1_1const_iterator.md)





* `#include <seadPtrArray.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**constIterator**](#function-constiterator) (const T \*const \* pptr) <br> |
|  bool | [**operator!=**](#function-operator) (const [**constIterator**](classsead_1_1_ptr_array_1_1const_iterator.md) & other) const<br> |
|  const T & | [**operator\***](#function-operator_1) () const<br> |
|  [**constIterator**](classsead_1_1_ptr_array_1_1const_iterator.md) & | [**operator++**](#function-operator_2) () <br> |
|  const T \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  bool | [**operator==**](#function-operator_3) (const [**constIterator**](classsead_1_1_ptr_array_1_1const_iterator.md) & other) const<br> |




























## Public Functions Documentation




### function constIterator 

```C++
inline sead::PtrArray::constIterator::constIterator (
    const T *const * pptr
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::PtrArray::constIterator::operator!= (
    const constIterator & other
) const
```




<hr>



### function operator\* 

```C++
inline const T & sead::PtrArray::constIterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline constIterator & sead::PtrArray::constIterator::operator++ () 
```




<hr>



### function operator-&gt; 

```C++
inline const T * sead::PtrArray::constIterator::operator-> () const
```




<hr>



### function operator== 

```C++
inline bool sead::PtrArray::constIterator::operator== (
    const constIterator & other
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadPtrArray.h`

