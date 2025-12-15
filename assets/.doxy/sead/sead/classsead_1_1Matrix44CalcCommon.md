

# Class sead::Matrix44CalcCommon

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix44CalcCommon**](classsead_1_1Matrix44CalcCommon.md)






















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx44Base | [**Base**](#typedef-base)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx33Base | [**Mtx33**](#typedef-mtx33)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx34Base | [**Mtx34**](#typedef-mtx34)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::QuatBase | [**Quat**](#typedef-quat)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Vec3Base | [**Vec3**](#typedef-vec3)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Vec4Base | [**Vec4**](#typedef-vec4)  <br> |






















## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**copy**](#function-copy-13) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Base**](structsead_1_1BaseMtx44.md) & n) <br> |
|  void | [**copy**](#function-copy-23) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Mtx33**](structsead_1_1BaseMtx33.md) & n, const Vec3 & t, const [**Vec4**](structsead_1_1BaseVec4.md) & v) <br> |
|  void | [**copy**](#function-copy-33) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Mtx34**](structsead_1_1BaseMtx34.md) & n, const [**Vec4**](structsead_1_1BaseVec4.md) & v) <br> |
|  void | [**getCol**](#function-getcol) ([**Vec4**](structsead_1_1BaseVec4.md) & v, const [**Base**](structsead_1_1BaseMtx44.md) & n, s32 axis) <br> |
|  void | [**getRow**](#function-getrow) ([**Vec4**](structsead_1_1BaseVec4.md) & v, const [**Base**](structsead_1_1BaseMtx44.md) & n, s32 row) <br> |
|  void | [**inverse**](#function-inverse) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Base**](structsead_1_1BaseMtx44.md) & n) <br> |
|  void | [**inverseTranspose**](#function-inversetranspose) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Base**](structsead_1_1BaseMtx44.md) & n) <br> |
|  void | [**makeIdentity**](#function-makeidentity) ([**Base**](structsead_1_1BaseMtx44.md) & o) <br> |
|  void | [**makeQ**](#function-makeq) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Quat**](structsead_1_1BaseQuat.md) & q) <br> |
|  void | [**makeR**](#function-maker) ([**Base**](structsead_1_1BaseMtx44.md) & o, const Vec3 & r) <br> |
|  void | [**makeRIdx**](#function-makeridx) ([**Base**](structsead_1_1BaseMtx44.md) & o, u32 xr, u32 yr, u32 zr) <br> |
|  void | [**makeRzxyIdx**](#function-makerzxyidx) ([**Base**](structsead_1_1BaseMtx44.md) & o, u32 xr, u32 yr, u32 zr) <br> |
|  void | [**makeZero**](#function-makezero) ([**Base**](structsead_1_1BaseMtx44.md) & o) <br> |
|  void | [**multiply**](#function-multiply-13) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Base**](structsead_1_1BaseMtx44.md) & a, const [**Base**](structsead_1_1BaseMtx44.md) & b) <br> |
|  void | [**multiply**](#function-multiply-23) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Mtx34**](structsead_1_1BaseMtx34.md) & a, const [**Base**](structsead_1_1BaseMtx44.md) & b) <br> |
|  void | [**multiply**](#function-multiply-33) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Base**](structsead_1_1BaseMtx44.md) & a, const [**Mtx34**](structsead_1_1BaseMtx34.md) & b) <br> |
|  void | [**scaleAllElements**](#function-scaleallelements) ([**Base**](structsead_1_1BaseMtx44.md) & n, T s) <br> |
|  void | [**scaleBases**](#function-scalebases) ([**Base**](structsead_1_1BaseMtx44.md) & n, T sx, T sy, T sz, T sw) <br> |
|  void | [**setCol**](#function-setcol) ([**Base**](structsead_1_1BaseMtx44.md) & n, s32 axis, const [**Vec4**](structsead_1_1BaseVec4.md) & v) <br> |
|  void | [**setRow**](#function-setrow) ([**Base**](structsead_1_1BaseMtx44.md) & n, const [**Vec4**](structsead_1_1BaseVec4.md) & v, s32 row) <br> |
|  void | [**toQuat**](#function-toquat) ([**Quat**](structsead_1_1BaseQuat.md) & q, const [**Base**](structsead_1_1BaseMtx44.md) & n) <br> |
|  void | [**transpose**](#function-transpose) ([**Base**](structsead_1_1BaseMtx44.md) & o) <br> |
|  void | [**transposeTo**](#function-transposeto) ([**Base**](structsead_1_1BaseMtx44.md) & o, const [**Base**](structsead_1_1BaseMtx44.md) & n) <br> |


























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

