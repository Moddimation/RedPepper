

# Class sead::Matrix44CalcCommon

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix44CalcCommon**](classsead_1_1_matrix44_calc_common.md)





* `#include <seadMatrixCalcCommon.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Mtx44Base | [**Base**](#typedef-base)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Mtx33Base | [**Mtx33**](#typedef-mtx33)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Mtx34Base | [**Mtx34**](#typedef-mtx34)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::QuatBase | [**Quat**](#typedef-quat)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Vec3Base | [**Vec3**](#typedef-vec3)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Vec4Base | [**Vec4**](#typedef-vec4)  <br> |






















## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**copy**](#function-copy-13) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n) <br> |
|  void | [**copy**](#function-copy-23) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Mtx33**](classsead_1_1_matrix44_calc_common.md#typedef-mtx33) & n, const [**Vec3**](classsead_1_1_matrix44_calc_common.md#typedef-vec3) & t, const [**Vec4**](classsead_1_1_matrix44_calc_common.md#typedef-vec4) & v) <br> |
|  void | [**copy**](#function-copy-33) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Mtx34**](classsead_1_1_matrix44_calc_common.md#typedef-mtx34) & n, const [**Vec4**](classsead_1_1_matrix44_calc_common.md#typedef-vec4) & v) <br> |
|  void | [**getCol**](#function-getcol) ([**Vec4**](classsead_1_1_matrix44_calc_common.md#typedef-vec4) & v, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n, [**s32**](_l_m_s___types_8h.md#typedef-s32) axis) <br> |
|  void | [**getRow**](#function-getrow) ([**Vec4**](classsead_1_1_matrix44_calc_common.md#typedef-vec4) & v, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n, [**s32**](_l_m_s___types_8h.md#typedef-s32) row) <br> |
|  void | [**inverse**](#function-inverse) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n) <br> |
|  void | [**inverseTranspose**](#function-inversetranspose) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n) <br> |
|  void | [**makeIdentity**](#function-makeidentity) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o) <br> |
|  void | [**makeQ**](#function-makeq) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Quat**](classsead_1_1_matrix44_calc_common.md#typedef-quat) & q) <br> |
|  void | [**makeR**](#function-maker) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Vec3**](classsead_1_1_matrix44_calc_common.md#typedef-vec3) & r) <br> |
|  void | [**makeRIdx**](#function-makeridx) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, [**u32**](_l_m_s___types_8h.md#typedef-u32) xr, [**u32**](_l_m_s___types_8h.md#typedef-u32) yr, [**u32**](_l_m_s___types_8h.md#typedef-u32) zr) <br> |
|  void | [**makeRzxyIdx**](#function-makerzxyidx) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, [**u32**](_l_m_s___types_8h.md#typedef-u32) xr, [**u32**](_l_m_s___types_8h.md#typedef-u32) yr, [**u32**](_l_m_s___types_8h.md#typedef-u32) zr) <br> |
|  void | [**makeZero**](#function-makezero) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o) <br> |
|  void | [**multiply**](#function-multiply-13) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & a, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & b) <br> |
|  void | [**multiply**](#function-multiply-23) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Mtx34**](classsead_1_1_matrix44_calc_common.md#typedef-mtx34) & a, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & b) <br> |
|  void | [**multiply**](#function-multiply-33) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & a, const [**Mtx34**](classsead_1_1_matrix44_calc_common.md#typedef-mtx34) & b) <br> |
|  void | [**scaleAllElements**](#function-scaleallelements) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n, T s) <br> |
|  void | [**scaleBases**](#function-scalebases) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n, T sx, T sy, T sz, T sw) <br> |
|  void | [**setCol**](#function-setcol) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n, [**s32**](_l_m_s___types_8h.md#typedef-s32) axis, const [**Vec4**](classsead_1_1_matrix44_calc_common.md#typedef-vec4) & v) <br> |
|  void | [**setRow**](#function-setrow) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n, const [**Vec4**](classsead_1_1_matrix44_calc_common.md#typedef-vec4) & v, [**s32**](_l_m_s___types_8h.md#typedef-s32) row) <br> |
|  void | [**toQuat**](#function-toquat) ([**Quat**](classsead_1_1_matrix44_calc_common.md#typedef-quat) & q, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n) <br> |
|  void | [**transpose**](#function-transpose) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o) <br> |
|  void | [**transposeTo**](#function-transposeto) ([**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix44_calc_common.md#typedef-base) & n) <br> |


























## Public Types Documentation




### typedef Base 

```C++
typedef Policies<T>::Mtx44Base sead::Matrix44CalcCommon< T >::Base;
```




<hr>



### typedef Mtx33 

```C++
typedef Policies<T>::Mtx33Base sead::Matrix44CalcCommon< T >::Mtx33;
```




<hr>



### typedef Mtx34 

```C++
typedef Policies<T>::Mtx34Base sead::Matrix44CalcCommon< T >::Mtx34;
```




<hr>



### typedef Quat 

```C++
typedef Policies<T>::QuatBase sead::Matrix44CalcCommon< T >::Quat;
```




<hr>



### typedef Vec3 

```C++
typedef Policies<T>::Vec3Base sead::Matrix44CalcCommon< T >::Vec3;
```




<hr>



### typedef Vec4 

```C++
typedef Policies<T>::Vec4Base sead::Matrix44CalcCommon< T >::Vec4;
```




<hr>
## Public Static Functions Documentation




### function copy [1/3]

```C++
static void sead::Matrix44CalcCommon::copy (
    Base & o,
    const Base & n
) 
```




<hr>



### function copy [2/3]

```C++
static void sead::Matrix44CalcCommon::copy (
    Base & o,
    const Mtx33 & n,
    const Vec3 & t,
    const Vec4 & v
) 
```




<hr>



### function copy [3/3]

```C++
static void sead::Matrix44CalcCommon::copy (
    Base & o,
    const Mtx34 & n,
    const Vec4 & v
) 
```




<hr>



### function getCol 

```C++
static void sead::Matrix44CalcCommon::getCol (
    Vec4 & v,
    const Base & n,
    s32 axis
) 
```




<hr>



### function getRow 

```C++
static void sead::Matrix44CalcCommon::getRow (
    Vec4 & v,
    const Base & n,
    s32 row
) 
```




<hr>



### function inverse 

```C++
static void sead::Matrix44CalcCommon::inverse (
    Base & o,
    const Base & n
) 
```




<hr>



### function inverseTranspose 

```C++
static void sead::Matrix44CalcCommon::inverseTranspose (
    Base & o,
    const Base & n
) 
```




<hr>



### function makeIdentity 

```C++
static void sead::Matrix44CalcCommon::makeIdentity (
    Base & o
) 
```




<hr>



### function makeQ 

```C++
static void sead::Matrix44CalcCommon::makeQ (
    Base & o,
    const Quat & q
) 
```




<hr>



### function makeR 

```C++
static void sead::Matrix44CalcCommon::makeR (
    Base & o,
    const Vec3 & r
) 
```




<hr>



### function makeRIdx 

```C++
static void sead::Matrix44CalcCommon::makeRIdx (
    Base & o,
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeRzxyIdx 

```C++
static void sead::Matrix44CalcCommon::makeRzxyIdx (
    Base & o,
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeZero 

```C++
static void sead::Matrix44CalcCommon::makeZero (
    Base & o
) 
```




<hr>



### function multiply [1/3]

```C++
static void sead::Matrix44CalcCommon::multiply (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>



### function multiply [2/3]

```C++
static void sead::Matrix44CalcCommon::multiply (
    Base & o,
    const Mtx34 & a,
    const Base & b
) 
```




<hr>



### function multiply [3/3]

```C++
static void sead::Matrix44CalcCommon::multiply (
    Base & o,
    const Base & a,
    const Mtx34 & b
) 
```




<hr>



### function scaleAllElements 

```C++
static void sead::Matrix44CalcCommon::scaleAllElements (
    Base & n,
    T s
) 
```




<hr>



### function scaleBases 

```C++
static void sead::Matrix44CalcCommon::scaleBases (
    Base & n,
    T sx,
    T sy,
    T sz,
    T sw
) 
```




<hr>



### function setCol 

```C++
static void sead::Matrix44CalcCommon::setCol (
    Base & n,
    s32 axis,
    const Vec4 & v
) 
```




<hr>



### function setRow 

```C++
static void sead::Matrix44CalcCommon::setRow (
    Base & n,
    const Vec4 & v,
    s32 row
) 
```




<hr>



### function toQuat 

```C++
static void sead::Matrix44CalcCommon::toQuat (
    Quat & q,
    const Base & n
) 
```




<hr>



### function transpose 

```C++
static void sead::Matrix44CalcCommon::transpose (
    Base & o
) 
```




<hr>



### function transposeTo 

```C++
static void sead::Matrix44CalcCommon::transposeTo (
    Base & o,
    const Base & n
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadMatrixCalcCommon.h`

