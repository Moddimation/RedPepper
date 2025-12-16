

# Class sead::Matrix22

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix22**](classsead_1_1_matrix22.md)





* `#include <seadMatrix.h>`



Inherits the following classes: [sead::BaseMtx22](structsead_1_1_base_mtx22.md)
























## Public Attributes inherited from sead::BaseMtx22

See [sead::BaseMtx22](structsead_1_1_base_mtx22.md)

| Type | Name |
| ---: | :--- |
|  T | [**m**](structsead_1_1_base_mtx22.md#variable-m)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Matrix22**](classsead_1_1_matrix22.md) | [**ident**](#variable-ident-14)  <br> |
|  const [**Matrix22**](classsead_1_1_matrix22.md) | [**zero**](#variable-zero-14)  <br> |




























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Matrix22**](#function-matrix22-13) () <br> |
|   | [**Matrix22**](#function-matrix22-23) (const [**Self**](classsead_1_1_matrix22.md#typedef-self) & n) <br> |
|   | [**Matrix22**](#function-matrix22-33) (T a00, T a01, T a10, T a11) <br> |
|  const [**Matrix22**](classsead_1_1_matrix22.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**ident**](#function-ident-24) () <br> |
|  const [**Matrix22**](classsead_1_1_matrix22.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ident**](#function-ident-34) (1. 0f, 0. 0f, 0. 0f, 1. 0f) <br> |
|  const [**Matrix22**](classsead_1_1_matrix22.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**ident**](#function-ident-44) (1, 0, 0, 1) <br> |
|  void | [**makeIdentity**](#function-makeidentity) () <br> |
|  void | [**makeZero**](#function-makezero) () <br> |
|  T | [**operator()**](#function-operator) ([**s32**](_l_m_s___types_8h.md#typedef-s32) i, [**s32**](_l_m_s___types_8h.md#typedef-s32) j) const<br> |
|  T & | [**operator()**](#function-operator_1) ([**s32**](_l_m_s___types_8h.md#typedef-s32) i, [**s32**](_l_m_s___types_8h.md#typedef-s32) j) <br> |
|  [**Self**](classsead_1_1_matrix22.md#typedef-self) & | [**operator=**](#function-operator_2) (const [**Self**](classsead_1_1_matrix22.md#typedef-self) & n) <br> |
|  void | [**setInverse**](#function-setinverse) (const [**Self**](classsead_1_1_matrix22.md#typedef-self) & n) <br> |
|  void | [**setInverseTranspose**](#function-setinversetranspose) (const [**Self**](classsead_1_1_matrix22.md#typedef-self) & n) <br> |
|  void | [**setMul**](#function-setmul) (const [**Self**](classsead_1_1_matrix22.md#typedef-self) & a, const [**Self**](classsead_1_1_matrix22.md#typedef-self) & b) <br> |
|  void | [**setTranspose**](#function-settranspose) (const [**Self**](classsead_1_1_matrix22.md#typedef-self) & n) <br> |
|  void | [**transpose**](#function-transpose) () <br> |
|  const [**Matrix22**](classsead_1_1_matrix22.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**zero**](#function-zero-24) () <br> |
|  const [**Matrix22**](classsead_1_1_matrix22.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**zero**](#function-zero-34) (0. 0f, 0. 0f, 0. 0f, 0. 0f) <br> |
|  const [**Matrix22**](classsead_1_1_matrix22.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**zero**](#function-zero-44) (0, 0, 0, 0) <br> |
























































## Public Static Attributes Documentation




### variable ident [1/4]

```C++
const Matrix22f sead::Matrix22f::ident;
```




<hr>



### variable zero [1/4]

```C++
const Matrix22f sead::Matrix22f::zero;
```




<hr>
## Public Functions Documentation




### function Matrix22 [1/3]

```C++
inline sead::Matrix22::Matrix22 () 
```




<hr>



### function Matrix22 [2/3]

```C++
inline sead::Matrix22::Matrix22 (
    const Self & n
) 
```




<hr>



### function Matrix22 [3/3]

```C++
inline sead::Matrix22::Matrix22 (
    T a00,
    T a01,
    T a10,
    T a11
) 
```




<hr>



### function ident [2/4]

```C++
const Matrix22 < f64 > sead::Matrix22::ident () 
```




<hr>



### function ident [3/4]

```C++
const Matrix22 < f32 > sead::Matrix22::ident (
    1. 0f,
    0. 0f,
    0. 0f,
    1. 0f
) 
```




<hr>



### function ident [4/4]

```C++
const Matrix22 < f64 > sead::Matrix22::ident (
    1,
    0,
    0,
    1
) 
```




<hr>



### function makeIdentity 

```C++
inline void sead::Matrix22::makeIdentity () 
```




<hr>



### function makeZero 

```C++
inline void sead::Matrix22::makeZero () 
```




<hr>



### function operator() 

```C++
inline T sead::Matrix22::operator() (
    s32 i,
    s32 j
) const
```




<hr>



### function operator() 

```C++
inline T & sead::Matrix22::operator() (
    s32 i,
    s32 j
) 
```




<hr>



### function operator= 

```C++
inline Self & sead::Matrix22::operator= (
    const Self & n
) 
```




<hr>



### function setInverse 

```C++
inline void sead::Matrix22::setInverse (
    const Self & n
) 
```




<hr>



### function setInverseTranspose 

```C++
inline void sead::Matrix22::setInverseTranspose (
    const Self & n
) 
```




<hr>



### function setMul 

```C++
inline void sead::Matrix22::setMul (
    const Self & a,
    const Self & b
) 
```




<hr>



### function setTranspose 

```C++
inline void sead::Matrix22::setTranspose (
    const Self & n
) 
```




<hr>



### function transpose 

```C++
inline void sead::Matrix22::transpose () 
```




<hr>



### function zero [2/4]

```C++
const Matrix22 < f64 > sead::Matrix22::zero () 
```




<hr>



### function zero [3/4]

```C++
const Matrix22 < f32 > sead::Matrix22::zero (
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f
) 
```




<hr>



### function zero [4/4]

```C++
const Matrix22 < f64 > sead::Matrix22::zero (
    0,
    0,
    0,
    0
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadMatrix.h`

