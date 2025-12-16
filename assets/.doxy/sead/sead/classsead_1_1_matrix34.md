

# Class sead::Matrix34

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix34**](classsead_1_1_matrix34.md)





* `#include <seadMatrix.h>`



Inherits the following classes: [sead::BaseMtx34](structsead_1_1_base_mtx34.md)
























## Public Attributes inherited from sead::BaseMtx34

See [sead::BaseMtx34](structsead_1_1_base_mtx34.md)

| Type | Name |
| ---: | :--- |
|  T | [**m**](structsead_1_1_base_mtx34.md#variable-m)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Matrix34**](classsead_1_1_matrix34.md) | [**ident**](#variable-ident-14)  <br> |
|  const [**Matrix34**](classsead_1_1_matrix34.md) | [**zero**](#variable-zero-14)  <br> |




























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Matrix34**](#function-matrix34-15) () <br> |
|   | [**Matrix34**](#function-matrix34-25) (const [**Self**](classsead_1_1_matrix34.md#typedef-self) & n) <br> |
|   | [**Matrix34**](#function-matrix34-35) (T \_00, T \_01, T \_02, T \_03, T \_10, T \_11, T \_12, T \_13, T \_20, T \_21, T \_22, T \_23) <br> |
|   | [**Matrix34**](#function-matrix34-45) (const [**Mtx33**](classsead_1_1_matrix34.md#typedef-mtx33) & mtx33, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t=[**Vec3::zero**](structsead_1_1_vector3.md#variable-zero-13)) <br> |
|   | [**Matrix34**](#function-matrix34-55) (const [**Mtx44**](classsead_1_1_matrix34.md#typedef-mtx44) & mtx44) <br> |
|  void | [**fromQuat**](#function-fromquat) (const [**Quat**](structsead_1_1_quat.md)&lt; T &gt; & q) <br> |
|  void | [**getBase**](#function-getbase) ([**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & o, [**s32**](_l_m_s___types_8h.md#typedef-s32) axis) const<br> |
|  void | [**getRotation**](#function-getrotation) ([**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & o) const<br> |
|  void | [**getRow**](#function-getrow) ([**Vec4**](classsead_1_1_matrix34.md#typedef-vec4) & o, [**s32**](_l_m_s___types_8h.md#typedef-s32) row) const<br> |
|  void | [**getTranslation**](#function-gettranslation) ([**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & o) const<br> |
|  const [**Matrix34**](classsead_1_1_matrix34.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**ident**](#function-ident-24) () <br> |
|  const [**Matrix34**](classsead_1_1_matrix34.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ident**](#function-ident-34) (1. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 1. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 1. 0f, 0. 0f) <br> |
|  const [**Matrix34**](classsead_1_1_matrix34.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**ident**](#function-ident-44) (1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0) <br> |
|  void | [**makeIdentity**](#function-makeidentity) () <br> |
|  void | [**makeQT**](#function-makeqt) (const [**Quat**](structsead_1_1_quat.md)&lt; T &gt; & q, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeR**](#function-maker) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & r) <br> |
|  void | [**makeRIdx**](#function-makeridx) ([**u32**](_l_m_s___types_8h.md#typedef-u32) xr, [**u32**](_l_m_s___types_8h.md#typedef-u32) yr, [**u32**](_l_m_s___types_8h.md#typedef-u32) zr) <br> |
|  void | [**makeRT**](#function-makert) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & r, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeRTIdx**](#function-makertidx) (const [**Vector3**](structsead_1_1_vector3.md)&lt; [**u32**](_l_m_s___types_8h.md#typedef-u32) &gt; & r, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeRzxyIdx**](#function-makerzxyidx) ([**u32**](_l_m_s___types_8h.md#typedef-u32) xr, [**u32**](_l_m_s___types_8h.md#typedef-u32) yr, [**u32**](_l_m_s___types_8h.md#typedef-u32) zr) <br> |
|  void | [**makeRzxyTIdx**](#function-makerzxytidx) (const [**Vector3**](structsead_1_1_vector3.md)&lt; [**u32**](_l_m_s___types_8h.md#typedef-u32) &gt; & r, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeS**](#function-makes-12) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & s) <br> |
|  void | [**makeS**](#function-makes-22) (T x, T y, T z) <br> |
|  void | [**makeSR**](#function-makesr) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & s, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & r) <br> |
|  void | [**makeSRIdx**](#function-makesridx) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & s, const [**Vector3**](structsead_1_1_vector3.md)&lt; [**u32**](_l_m_s___types_8h.md#typedef-u32) &gt; & r) <br> |
|  void | [**makeSRT**](#function-makesrt) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & s, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & r, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeSRTIdx**](#function-makesrtidx) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & s, const [**Vector3**](structsead_1_1_vector3.md)&lt; [**u32**](_l_m_s___types_8h.md#typedef-u32) &gt; & r, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeSRzxyIdx**](#function-makesrzxyidx) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & s, const [**Vector3**](structsead_1_1_vector3.md)&lt; [**u32**](_l_m_s___types_8h.md#typedef-u32) &gt; & r) <br> |
|  void | [**makeSRzxyTIdx**](#function-makesrzxytidx) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & s, const [**Vector3**](structsead_1_1_vector3.md)&lt; [**u32**](_l_m_s___types_8h.md#typedef-u32) &gt; & r, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeST**](#function-makest) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & s, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeT**](#function-maket-12) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**makeT**](#function-maket-22) (T x, T y, T z) <br> |
|  void | [**makeZero**](#function-makezero) () <br> |
|  T | [**operator()**](#function-operator) ([**s32**](_l_m_s___types_8h.md#typedef-s32) i, [**s32**](_l_m_s___types_8h.md#typedef-s32) j) const<br> |
|  T & | [**operator()**](#function-operator_1) ([**s32**](_l_m_s___types_8h.md#typedef-s32) i, [**s32**](_l_m_s___types_8h.md#typedef-s32) j) <br> |
|  [**Self**](classsead_1_1_matrix34.md#typedef-self) & | [**operator=**](#function-operator_2) (const [**Self**](classsead_1_1_matrix34.md#typedef-self) & n) <br> |
|  void | [**scaleAllElements**](#function-scaleallelements) (T s) <br> |
|  void | [**scaleBases**](#function-scalebases) (T sx, T sy, T sz) <br> |
|  void | [**setBase**](#function-setbase) ([**s32**](_l_m_s___types_8h.md#typedef-s32) axis, const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & v) <br> |
|  void | [**setInverse**](#function-setinverse) (const [**Self**](classsead_1_1_matrix34.md#typedef-self) & n) <br> |
|  void | [**setInverse33**](#function-setinverse33) (const [**Self**](classsead_1_1_matrix34.md#typedef-self) & n) <br> |
|  void | [**setInverseTranspose**](#function-setinversetranspose) (const [**Self**](classsead_1_1_matrix34.md#typedef-self) & n) <br> |
|  void | [**setMul**](#function-setmul-12) (const [**Self**](classsead_1_1_matrix34.md#typedef-self) & a, const [**Self**](classsead_1_1_matrix34.md#typedef-self) & b) <br> |
|  void | [**setMul**](#function-setmul-22) (const [**Mtx33**](classsead_1_1_matrix34.md#typedef-mtx33) & a, const [**Self**](classsead_1_1_matrix34.md#typedef-self) & b) <br> |
|  void | [**setRow**](#function-setrow) ([**s32**](_l_m_s___types_8h.md#typedef-s32) row, const [**Vec4**](classsead_1_1_matrix34.md#typedef-vec4) & v) <br> |
|  void | [**setTranslation**](#function-settranslation-12) (const [**Vec3**](classsead_1_1_matrix34.md#typedef-vec3) & t) <br> |
|  void | [**setTranslation**](#function-settranslation-22) (T x, T y, T z) <br> |
|  void | [**setTranspose**](#function-settranspose) (const [**Self**](classsead_1_1_matrix34.md#typedef-self) & n) <br> |
|  void | [**toQuat**](#function-toquat) ([**Quat**](structsead_1_1_quat.md)&lt; T &gt; & q) const<br> |
|  void | [**transpose**](#function-transpose) () <br> |
|  const [**Matrix34**](classsead_1_1_matrix34.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**zero**](#function-zero-24) () <br> |
|  const [**Matrix34**](classsead_1_1_matrix34.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**zero**](#function-zero-34) (0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f) <br> |
|  const [**Matrix34**](classsead_1_1_matrix34.md)&lt; [**f64**](_l_m_s___types_8h.md#typedef-f64) &gt; | [**zero**](#function-zero-44) (0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0) <br> |
























































## Public Static Attributes Documentation




### variable ident [1/4]

```C++
const Matrix34f sead::Matrix34f::ident;
```




<hr>



### variable zero [1/4]

```C++
const Matrix34f sead::Matrix34f::zero;
```




<hr>
## Public Functions Documentation




### function Matrix34 [1/5]

```C++
inline sead::Matrix34::Matrix34 () 
```




<hr>



### function Matrix34 [2/5]

```C++
sead::Matrix34::Matrix34 (
    const Self & n
) 
```




<hr>



### function Matrix34 [3/5]

```C++
inline sead::Matrix34::Matrix34 (
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
    T _23
) 
```




<hr>



### function Matrix34 [4/5]

```C++
inline sead::Matrix34::Matrix34 (
    const Mtx33 & mtx33,
    const Vec3 & t=Vec3::zero
) 
```




<hr>



### function Matrix34 [5/5]

```C++
inline sead::Matrix34::Matrix34 (
    const Mtx44 & mtx44
) 
```




<hr>



### function fromQuat 

```C++
inline void sead::Matrix34::fromQuat (
    const Quat < T > & q
) 
```




<hr>



### function getBase 

```C++
inline void sead::Matrix34::getBase (
    Vec3 & o,
    s32 axis
) const
```




<hr>



### function getRotation 

```C++
inline void sead::Matrix34::getRotation (
    Vec3 & o
) const
```




<hr>



### function getRow 

```C++
inline void sead::Matrix34::getRow (
    Vec4 & o,
    s32 row
) const
```




<hr>



### function getTranslation 

```C++
inline void sead::Matrix34::getTranslation (
    Vec3 & o
) const
```




<hr>



### function ident [2/4]

```C++
const Matrix34 < f64 > sead::Matrix34::ident () 
```




<hr>



### function ident [3/4]

```C++
const Matrix34 < f32 > sead::Matrix34::ident (
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
    0. 0f
) 
```




<hr>



### function ident [4/4]

```C++
const Matrix34 < f64 > sead::Matrix34::ident (
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
    0
) 
```




<hr>



### function makeIdentity 

```C++
inline void sead::Matrix34::makeIdentity () 
```




<hr>



### function makeQT 

```C++
inline void sead::Matrix34::makeQT (
    const Quat < T > & q,
    const Vec3 & t
) 
```




<hr>



### function makeR 

```C++
inline void sead::Matrix34::makeR (
    const Vec3 & r
) 
```




<hr>



### function makeRIdx 

```C++
inline void sead::Matrix34::makeRIdx (
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeRT 

```C++
inline void sead::Matrix34::makeRT (
    const Vec3 & r,
    const Vec3 & t
) 
```




<hr>



### function makeRTIdx 

```C++
inline void sead::Matrix34::makeRTIdx (
    const Vector3 < u32 > & r,
    const Vec3 & t
) 
```




<hr>



### function makeRzxyIdx 

```C++
inline void sead::Matrix34::makeRzxyIdx (
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeRzxyTIdx 

```C++
inline void sead::Matrix34::makeRzxyTIdx (
    const Vector3 < u32 > & r,
    const Vec3 & t
) 
```




<hr>



### function makeS [1/2]

```C++
inline void sead::Matrix34::makeS (
    const Vec3 & s
) 
```




<hr>



### function makeS [2/2]

```C++
inline void sead::Matrix34::makeS (
    T x,
    T y,
    T z
) 
```




<hr>



### function makeSR 

```C++
inline void sead::Matrix34::makeSR (
    const Vec3 & s,
    const Vec3 & r
) 
```




<hr>



### function makeSRIdx 

```C++
inline void sead::Matrix34::makeSRIdx (
    const Vec3 & s,
    const Vector3 < u32 > & r
) 
```




<hr>



### function makeSRT 

```C++
inline void sead::Matrix34::makeSRT (
    const Vec3 & s,
    const Vec3 & r,
    const Vec3 & t
) 
```




<hr>



### function makeSRTIdx 

```C++
inline void sead::Matrix34::makeSRTIdx (
    const Vec3 & s,
    const Vector3 < u32 > & r,
    const Vec3 & t
) 
```




<hr>



### function makeSRzxyIdx 

```C++
inline void sead::Matrix34::makeSRzxyIdx (
    const Vec3 & s,
    const Vector3 < u32 > & r
) 
```




<hr>



### function makeSRzxyTIdx 

```C++
inline void sead::Matrix34::makeSRzxyTIdx (
    const Vec3 & s,
    const Vector3 < u32 > & r,
    const Vec3 & t
) 
```




<hr>



### function makeST 

```C++
inline void sead::Matrix34::makeST (
    const Vec3 & s,
    const Vec3 & t
) 
```




<hr>



### function makeT [1/2]

```C++
inline void sead::Matrix34::makeT (
    const Vec3 & t
) 
```




<hr>



### function makeT [2/2]

```C++
inline void sead::Matrix34::makeT (
    T x,
    T y,
    T z
) 
```




<hr>



### function makeZero 

```C++
inline void sead::Matrix34::makeZero () 
```




<hr>



### function operator() 

```C++
inline T sead::Matrix34::operator() (
    s32 i,
    s32 j
) const
```




<hr>



### function operator() 

```C++
inline T & sead::Matrix34::operator() (
    s32 i,
    s32 j
) 
```




<hr>



### function operator= 

```C++
inline Self & sead::Matrix34::operator= (
    const Self & n
) 
```




<hr>



### function scaleAllElements 

```C++
inline void sead::Matrix34::scaleAllElements (
    T s
) 
```




<hr>



### function scaleBases 

```C++
inline void sead::Matrix34::scaleBases (
    T sx,
    T sy,
    T sz
) 
```




<hr>



### function setBase 

```C++
inline void sead::Matrix34::setBase (
    s32 axis,
    const Vec3 & v
) 
```




<hr>



### function setInverse 

```C++
inline void sead::Matrix34::setInverse (
    const Self & n
) 
```




<hr>



### function setInverse33 

```C++
inline void sead::Matrix34::setInverse33 (
    const Self & n
) 
```




<hr>



### function setInverseTranspose 

```C++
inline void sead::Matrix34::setInverseTranspose (
    const Self & n
) 
```




<hr>



### function setMul [1/2]

```C++
inline void sead::Matrix34::setMul (
    const Self & a,
    const Self & b
) 
```




<hr>



### function setMul [2/2]

```C++
inline void sead::Matrix34::setMul (
    const Mtx33 & a,
    const Self & b
) 
```




<hr>



### function setRow 

```C++
inline void sead::Matrix34::setRow (
    s32 row,
    const Vec4 & v
) 
```




<hr>



### function setTranslation [1/2]

```C++
inline void sead::Matrix34::setTranslation (
    const Vec3 & t
) 
```




<hr>



### function setTranslation [2/2]

```C++
inline void sead::Matrix34::setTranslation (
    T x,
    T y,
    T z
) 
```




<hr>



### function setTranspose 

```C++
inline void sead::Matrix34::setTranspose (
    const Self & n
) 
```




<hr>



### function toQuat 

```C++
inline void sead::Matrix34::toQuat (
    Quat < T > & q
) const
```




<hr>



### function transpose 

```C++
inline void sead::Matrix34::transpose () 
```




<hr>



### function zero [2/4]

```C++
const Matrix34 < f64 > sead::Matrix34::zero () 
```




<hr>



### function zero [3/4]

```C++
const Matrix34 < f32 > sead::Matrix34::zero (
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
const Matrix34 < f64 > sead::Matrix34::zero (
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

