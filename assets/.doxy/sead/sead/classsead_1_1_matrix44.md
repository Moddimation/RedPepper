

# Class sead::Matrix44

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix44**](classsead_1_1_matrix44.md)





* `#include <seadMatrix.h>`



Inherits the following classes: [sead::BaseMtx44](structsead_1_1_base_mtx44.md)
























## Public Attributes inherited from sead::BaseMtx44

See [sead::BaseMtx44](structsead_1_1_base_mtx44.md)

| Type | Name |
| ---: | :--- |
|  T | [**m**](structsead_1_1_base_mtx44.md#variable-m)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Matrix44**](classsead_1_1_matrix44.md) | [**ident**](#variable-ident-14)  <br> |
|  const [**Matrix44**](classsead_1_1_matrix44.md) | [**zero**](#variable-zero-14)  <br> |




























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Matrix44**](#function-matrix44-15) () <br> |
|   | [**Matrix44**](#function-matrix44-25) (const [**Self**](classsead_1_1_matrix44.md#typedef-self) & n) <br> |
|   | [**Matrix44**](#function-matrix44-35) (T \_00, T \_01, T \_02, T \_03, T \_10, T \_11, T \_12, T \_13, T \_20, T \_21, T \_22, T \_23, T \_30, T \_31, T \_32, T \_33) <br> |
|   | [**Matrix44**](#function-matrix44-45) (const [**Mtx33**](classsead_1_1_matrix44.md#typedef-mtx33) & mtx33, const [**Vec3**](classsead_1_1_matrix44.md#typedef-vec3) & t=[**Vec3::zero**](structsead_1_1_vector3.md#variable-zero-13), const [**Vec4**](classsead_1_1_matrix44.md#typedef-vec4) & vw=[**Vec4::ew**](structsead_1_1_vector4.md#variable-ew-13)) <br> |
|   | [**Matrix44**](#function-matrix44-55) (const [**Mtx34**](classsead_1_1_matrix44.md#typedef-mtx34) & mtx34, const [**Vec4**](classsead_1_1_matrix44.md#typedef-vec4) & vw=[**Vec4::ew**](structsead_1_1_vector4.md#variable-ew-13)) <br> |
|  void | [**fromQuat**](#function-fromquat) (const [**Quat**](structsead_1_1_quat.md)&lt; T &gt; & q) <br> |
|  void | [**getCol**](#function-getcol) ([**Vec4**](classsead_1_1_matrix44.md#typedef-vec4) & o, [**s32**](_l_m_s___types_8h.md#typedef-s32) axis) const<br> |
|  void | [**getRow**](#function-getrow) ([**Vec4**](classsead_1_1_matrix44.md#typedef-vec4) & o, [**s32**](_l_m_s___types_8h.md#typedef-s32) row) const<br> |
|  const [**Matrix44**](classsead_1_1_matrix44.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**ident**](#function-ident-24) () <br> |
|  const [**Matrix44**](classsead_1_1_matrix44.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ident**](#function-ident-34) (1. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 1. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 1. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 1. 0f) <br> |
|  const [**Matrix44**](classsead_1_1_matrix44.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**ident**](#function-ident-44) (1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1) <br> |
|  void | [**makeIdentity**](#function-makeidentity) () <br> |
|  void | [**makeR**](#function-maker) (const [**Vec3**](classsead_1_1_matrix44.md#typedef-vec3) & r) <br> |
|  void | [**makeRIdx**](#function-makeridx) ([**u32**](_l_m_s___types_8h.md#typedef-u32) xr, [**u32**](_l_m_s___types_8h.md#typedef-u32) yr, [**u32**](_l_m_s___types_8h.md#typedef-u32) zr) <br> |
|  void | [**makeRzxyIdx**](#function-makerzxyidx) ([**u32**](_l_m_s___types_8h.md#typedef-u32) xr, [**u32**](_l_m_s___types_8h.md#typedef-u32) yr, [**u32**](_l_m_s___types_8h.md#typedef-u32) zr) <br> |
|  void | [**makeZero**](#function-makezero) () <br> |
|  T | [**operator()**](#function-operator) ([**s32**](_l_m_s___types_8h.md#typedef-s32) i, [**s32**](_l_m_s___types_8h.md#typedef-s32) j) const<br> |
|  T & | [**operator()**](#function-operator_1) ([**s32**](_l_m_s___types_8h.md#typedef-s32) i, [**s32**](_l_m_s___types_8h.md#typedef-s32) j) <br> |
|  [**Self**](classsead_1_1_matrix44.md#typedef-self) & | [**operator=**](#function-operator_2) (const [**Self**](classsead_1_1_matrix44.md#typedef-self) & n) <br> |
|  void | [**scaleAllElements**](#function-scaleallelements) (T s) <br> |
|  void | [**scaleBases**](#function-scalebases) (T sx, T sy, T sz, T sw) <br> |
|  void | [**setCol**](#function-setcol) ([**s32**](_l_m_s___types_8h.md#typedef-s32) axis, const [**Vec4**](classsead_1_1_matrix44.md#typedef-vec4) & v) <br> |
|  void | [**setInverse**](#function-setinverse) (const [**Self**](classsead_1_1_matrix44.md#typedef-self) & n) <br> |
|  void | [**setInverseTranspose**](#function-setinversetranspose) (const [**Self**](classsead_1_1_matrix44.md#typedef-self) & n) <br> |
|  void | [**setMul**](#function-setmul-13) (const [**Self**](classsead_1_1_matrix44.md#typedef-self) & a, const [**Self**](classsead_1_1_matrix44.md#typedef-self) & b) <br> |
|  void | [**setMul**](#function-setmul-23) (const [**Mtx34**](classsead_1_1_matrix44.md#typedef-mtx34) & a, const [**Self**](classsead_1_1_matrix44.md#typedef-self) & b) <br> |
|  void | [**setMul**](#function-setmul-33) (const [**Self**](classsead_1_1_matrix44.md#typedef-self) & a, const [**Mtx34**](classsead_1_1_matrix44.md#typedef-mtx34) & b) <br> |
|  void | [**setRow**](#function-setrow) ([**s32**](_l_m_s___types_8h.md#typedef-s32) row, const [**Vec4**](classsead_1_1_matrix44.md#typedef-vec4) & v) <br> |
|  void | [**setTranspose**](#function-settranspose) (const [**Self**](classsead_1_1_matrix44.md#typedef-self) & n) <br> |
|  void | [**toQuat**](#function-toquat) ([**Quat**](structsead_1_1_quat.md)&lt; T &gt; & q) const<br> |
|  void | [**transpose**](#function-transpose) () <br> |
|  const [**Matrix44**](classsead_1_1_matrix44.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**zero**](#function-zero-24) () <br> |
|  const [**Matrix44**](classsead_1_1_matrix44.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**zero**](#function-zero-34) (0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f) <br> |
|  const [**Matrix44**](classsead_1_1_matrix44.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**zero**](#function-zero-44) (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) <br> |
























































## Public Static Attributes Documentation




### variable ident [1/4]

```C++
const Matrix44f sead::Matrix44f::ident;
```




<hr>



### variable zero [1/4]

```C++
const Matrix44f sead::Matrix44f::zero;
```




<hr>
## Public Functions Documentation




### function Matrix44 [1/5]

```C++
inline sead::Matrix44::Matrix44 () 
```




<hr>



### function Matrix44 [2/5]

```C++
inline sead::Matrix44::Matrix44 (
    const Self & n
) 
```




<hr>



### function Matrix44 [3/5]

```C++
inline sead::Matrix44::Matrix44 (
    T _00,
    T _01,
    T _02,
    T _03,
    T _10,
    T _11,
    T _12,
    T _13,
    T _20,
    T _21,
    T _22,
    T _23,
    T _30,
    T _31,
    T _32,
    T _33
) 
```




<hr>



### function Matrix44 [4/5]

```C++
inline sead::Matrix44::Matrix44 (
    const Mtx33 & mtx33,
    const Vec3 & t=Vec3::zero,
    const Vec4 & vw=Vec4::ew
) 
```




<hr>



### function Matrix44 [5/5]

```C++
inline sead::Matrix44::Matrix44 (
    const Mtx34 & mtx34,
    const Vec4 & vw=Vec4::ew
) 
```




<hr>



### function fromQuat 

```C++
inline void sead::Matrix44::fromQuat (
    const Quat < T > & q
) 
```




<hr>



### function getCol 

```C++
inline void sead::Matrix44::getCol (
    Vec4 & o,
    s32 axis
) const
```




<hr>



### function getRow 

```C++
inline void sead::Matrix44::getRow (
    Vec4 & o,
    s32 row
) const
```




<hr>



### function ident [2/4]

```C++
const Matrix44 < f64 > sead::Matrix44::ident () 
```




<hr>



### function ident [3/4]

```C++
const Matrix44 < f32 > sead::Matrix44::ident (
    1. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    1. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    1. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    1. 0f
) 
```




<hr>



### function ident [4/4]

```C++
const Matrix44 < f64 > sead::Matrix44::ident (
    1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    1
) 
```




<hr>



### function makeIdentity 

```C++
inline void sead::Matrix44::makeIdentity () 
```




<hr>



### function makeR 

```C++
inline void sead::Matrix44::makeR (
    const Vec3 & r
) 
```




<hr>



### function makeRIdx 

```C++
inline void sead::Matrix44::makeRIdx (
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeRzxyIdx 

```C++
inline void sead::Matrix44::makeRzxyIdx (
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeZero 

```C++
inline void sead::Matrix44::makeZero () 
```




<hr>



### function operator() 

```C++
inline T sead::Matrix44::operator() (
    s32 i,
    s32 j
) const
```




<hr>



### function operator() 

```C++
inline T & sead::Matrix44::operator() (
    s32 i,
    s32 j
) 
```




<hr>



### function operator= 

```C++
inline Self & sead::Matrix44::operator= (
    const Self & n
) 
```




<hr>



### function scaleAllElements 

```C++
inline void sead::Matrix44::scaleAllElements (
    T s
) 
```




<hr>



### function scaleBases 

```C++
inline void sead::Matrix44::scaleBases (
    T sx,
    T sy,
    T sz,
    T sw
) 
```




<hr>



### function setCol 

```C++
inline void sead::Matrix44::setCol (
    s32 axis,
    const Vec4 & v
) 
```




<hr>



### function setInverse 

```C++
inline void sead::Matrix44::setInverse (
    const Self & n
) 
```




<hr>



### function setInverseTranspose 

```C++
void sead::Matrix44::setInverseTranspose (
    const Self & n
) 
```




<hr>



### function setMul [1/3]

```C++
inline void sead::Matrix44::setMul (
    const Self & a,
    const Self & b
) 
```




<hr>



### function setMul [2/3]

```C++
inline void sead::Matrix44::setMul (
    const Mtx34 & a,
    const Self & b
) 
```




<hr>



### function setMul [3/3]

```C++
inline void sead::Matrix44::setMul (
    const Self & a,
    const Mtx34 & b
) 
```




<hr>



### function setRow 

```C++
inline void sead::Matrix44::setRow (
    s32 row,
    const Vec4 & v
) 
```




<hr>



### function setTranspose 

```C++
inline void sead::Matrix44::setTranspose (
    const Self & n
) 
```




<hr>



### function toQuat 

```C++
inline void sead::Matrix44::toQuat (
    Quat < T > & q
) const
```




<hr>



### function transpose 

```C++
inline void sead::Matrix44::transpose () 
```




<hr>



### function zero [2/4]

```C++
const Matrix44 < f64 > sead::Matrix44::zero () 
```




<hr>



### function zero [3/4]

```C++
const Matrix44 < f32 > sead::Matrix44::zero (
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f
) 
```




<hr>



### function zero [4/4]

```C++
const Matrix44 < f64 > sead::Matrix44::zero (
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadMatrix.h`

