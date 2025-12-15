

# Class sead::SafeArray

**template &lt;typename T, s32 N&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**SafeArray**](classsead_1_1SafeArray.md)



_A lightweight std::array like wrapper for a C style array._ 

* `#include <seadSafeArray.h>`















## Classes

| Type | Name |
| ---: | :--- |
| class | [**constIterator**](classsead_1_1SafeArray_1_1constIterator.md) <br> |
| class | [**iterator**](classsead_1_1SafeArray_1_1iterator.md) <br> |






## Public Attributes

| Type | Name |
| ---: | :--- |
|  T | [**mBuffer**](#variable-mbuffer)  <br> |
















## Public Functions

| Type | Name |
| ---: | :--- |
|  T & | [**back**](#function-back-12) () <br> |
|  const T & | [**back**](#function-back-22) () const<br> |
|  [**iterator**](classsead_1_1SafeArray_1_1iterator.md) | [**begin**](#function-begin-12) () <br> |
|  [**constIterator**](classsead_1_1SafeArray_1_1constIterator.md) | [**begin**](#function-begin-22) () const<br> |
|  [**constIterator**](classsead_1_1SafeArray_1_1constIterator.md) | [**constBegin**](#function-constbegin) () const<br> |
|  [**constIterator**](classsead_1_1SafeArray_1_1constIterator.md) | [**constEnd**](#function-constend) () const<br> |
|  [**iterator**](classsead_1_1SafeArray_1_1iterator.md) | [**end**](#function-end-12) () <br> |
|  [**constIterator**](classsead_1_1SafeArray_1_1constIterator.md) | [**end**](#function-end-22) () const<br> |
|  void | [**fill**](#function-fill) (const T & value) <br> |
|  T & | [**front**](#function-front-12) () <br> |
|  const T & | [**front**](#function-front-22) () const<br> |
|  T \* | [**getBufferPtr**](#function-getbufferptr-12) () <br> |
|  const T \* | [**getBufferPtr**](#function-getbufferptr-22) () const<br> |
|  u32 | [**getByteSize**](#function-getbytesize) () const<br> |
|  T & | [**operator()**](#function-operator) (s32 idx) <br> |
|  const T & | [**operator()**](#function-operator_1) (s32 idx) const<br> |
|  T & | [**operator[]**](#function-operator_2) (s32 idx) <br> |
|  const T & | [**operator[]**](#function-operator_3) (s32 idx) const<br> |
|  int | [**size**](#function-size) () const<br> |




























## Public Attributes Documentation




### variable mBuffer 

```C++
T sead::SafeArray< T, N >::mBuffer[N];
```




<hr>
## Public Functions Documentation




### function back [1/2]

```C++
inline T & sead::SafeArray::back () 
```




<hr>



### function back [2/2]

```C++
inline const T & sead::SafeArray::back () const
```




<hr>



### function begin [1/2]

```C++
inline iterator sead::SafeArray::begin () 
```




<hr>



### function begin [2/2]

```C++
inline constIterator sead::SafeArray::begin () const
```




<hr>



### function constBegin 

```C++
inline constIterator sead::SafeArray::constBegin () const
```




<hr>



### function constEnd 

```C++
inline constIterator sead::SafeArray::constEnd () const
```




<hr>



### function end [1/2]

```C++
inline iterator sead::SafeArray::end () 
```




<hr>



### function end [2/2]

```C++
inline constIterator sead::SafeArray::end () const
```




<hr>



### function fill 

```C++
inline void sead::SafeArray::fill (
    const T & value
) 
```




<hr>



### function front [1/2]

```C++
inline T & sead::SafeArray::front () 
```




<hr>



### function front [2/2]

```C++
inline const T & sead::SafeArray::front () const
```




<hr>



### function getBufferPtr [1/2]

```C++
inline T * sead::SafeArray::getBufferPtr () 
```




<hr>



### function getBufferPtr [2/2]

```C++
inline const T * sead::SafeArray::getBufferPtr () const
```




<hr>



### function getByteSize 

```C++
inline u32 sead::SafeArray::getByteSize () const
```




<hr>



### function operator() 

```C++
inline T & sead::SafeArray::operator() (
    s32 idx
) 
```




<hr>



### function operator() 

```C++
inline const T & sead::SafeArray::operator() (
    s32 idx
) const
```




<hr>



### function operator[] 

```C++
inline T & sead::SafeArray::operator[] (
    s32 idx
) 
```




<hr>



### function operator[] 

```C++
inline const T & sead::SafeArray::operator[] (
    s32 idx
) const
```




<hr>



### function size 

```C++
inline int sead::SafeArray::size () const
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/container/seadSafeArray.h`

