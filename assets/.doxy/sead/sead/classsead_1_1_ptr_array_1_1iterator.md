

# Class sead::PtrArray::iterator



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**PtrArray**](classsead_1_1_ptr_array.md) **>** [**iterator**](classsead_1_1_ptr_array_1_1iterator.md)





* `#include <seadPtrArray.h>`





































## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**iterator**](#function-iterator) (T \*const \* pptr) <br> |
|  bool | [**operator!=**](#function-operator) (const [**iterator**](classsead_1_1_ptr_array_1_1iterator.md) & other) const<br> |
|  T & | [**operator\***](#function-operator_1) () const<br> |
|  [**iterator**](classsead_1_1_ptr_array_1_1iterator.md) & | [**operator++**](#function-operator_2) () <br> |
|  T \* | [**operator-&gt;**](#function-operator-) () const<br> |
|  bool | [**operator==**](#function-operator_3) (const [**iterator**](classsead_1_1_ptr_array_1_1iterator.md) & other) const<br> |




























## Public Functions Documentation




### function iterator 

```C++
inline sead::PtrArray::iterator::iterator (
    T *const * pptr
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::PtrArray::iterator::operator!= (
    const iterator & other
) const
```




<hr>



### function operator\* 

```C++
inline T & sead::PtrArray::iterator::operator* () const
```




<hr>



### function operator++ 

```C++
inline iterator & sead::PtrArray::iterator::operator++ () 
```




<hr>



### function operator-&gt; 

```C++
inline T * sead::PtrArray::iterator::operator-> () const
```




<hr>



### function operator== 

```C++
inline bool sead::PtrArray::iterator::operator== (
    const iterator & other
) const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadPtrArray.h`

