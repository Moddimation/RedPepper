

# Class sead::Matrix34CalcCommon

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix34CalcCommon**](classsead_1_1Matrix34CalcCommon.md)






















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx34Base | [**Base**](#typedef-base)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx33Base | [**Mtx33**](#typedef-mtx33)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx44Base | [**Mtx44**](#typedef-mtx44)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::QuatBase | [**Quat**](#typedef-quat)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Vec3Base | [**Vec3**](#typedef-vec3)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Vec4Base | [**Vec4**](#typedef-vec4)  <br> |






















## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**copy**](#function-copy-13) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Base**](structsead_1_1BaseMtx34.md) & n) <br> |
|  void | [**copy**](#function-copy-23) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Mtx33**](structsead_1_1BaseMtx33.md) & n, const Vec3 & t) <br> |
|  void | [**copy**](#function-copy-33) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Mtx44**](structsead_1_1BaseMtx44.md) & n) <br> |
|  void | [**getBase**](#function-getbase) (Vec3 & v, const [**Base**](structsead_1_1BaseMtx34.md) & n, s32 axis) <br> |
|  void | [**getRotation**](#function-getrotation) (Vec3 & v, const [**Base**](structsead_1_1BaseMtx34.md) & n) <br> |
|  void | [**getRow**](#function-getrow) ([**Vec4**](structsead_1_1BaseVec4.md) & v, const [**Base**](structsead_1_1BaseMtx34.md) & n, s32 row) <br> |
|  void | [**getTranslation**](#function-gettranslation) (Vec3 & v, const [**Base**](structsead_1_1BaseMtx34.md) & n) <br> |
|  void | [**inverse**](#function-inverse) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Base**](structsead_1_1BaseMtx34.md) & n) <br> |
|  void | [**inverse33**](#function-inverse33) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Base**](structsead_1_1BaseMtx34.md) & n) <br> |
|  void | [**inverseTranspose**](#function-inversetranspose) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Base**](structsead_1_1BaseMtx34.md) & n) <br> |
|  void | [**makeIdentity**](#function-makeidentity) ([**Base**](structsead_1_1BaseMtx34.md) & o) <br> |
|  void | [**makeQ**](#function-makeq) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Quat**](structsead_1_1BaseQuat.md) & q) <br> |
|  void | [**makeQT**](#function-makeqt) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Quat**](structsead_1_1BaseQuat.md) & q, const Vec3 & t) <br> |
|  void | [**makeR**](#function-maker) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & r) <br> |
|  void | [**makeRIdx**](#function-makeridx) ([**Base**](structsead_1_1BaseMtx34.md) & o, u32 xr, u32 yr, u32 zr) <br> |
|  void | [**makeRT**](#function-makert) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & r, const Vec3 & t) <br> |
|  void | [**makeRTIdx**](#function-makertidx) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Vector3**](structsead_1_1Vector3.md)&lt; u32 &gt; & r, const Vec3 & t) <br> |
|  void | [**makeRzxyIdx**](#function-makerzxyidx) ([**Base**](structsead_1_1BaseMtx34.md) & o, u32 xr, u32 yr, u32 zr) <br> |
|  void | [**makeRzxyTIdx**](#function-makerzxytidx) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Vector3**](structsead_1_1Vector3.md)&lt; u32 &gt; & r, const Vec3 & t) <br> |
|  void | [**makeS**](#function-makes) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & s) <br> |
|  void | [**makeSR**](#function-makesr) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & s, const Vec3 & r) <br> |
|  void | [**makeSRIdx**](#function-makesridx) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & s, const [**Vector3**](structsead_1_1Vector3.md)&lt; u32 &gt; & r) <br> |
|  void | [**makeSRT**](#function-makesrt) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & s, const Vec3 & r, const Vec3 & t) <br> |
|  void | [**makeSRTIdx**](#function-makesrtidx) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & s, const [**Vector3**](structsead_1_1Vector3.md)&lt; u32 &gt; & r, const Vec3 & t) <br> |
|  void | [**makeSRzxyIdx**](#function-makesrzxyidx) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & s, const [**Vector3**](structsead_1_1Vector3.md)&lt; u32 &gt; & r) <br> |
|  void | [**makeSRzxyTIdx**](#function-makesrzxytidx) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & s, const [**Vector3**](structsead_1_1Vector3.md)&lt; u32 &gt; & r, const Vec3 & t) <br> |
|  void | [**makeST**](#function-makest) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & s, const Vec3 & t) <br> |
|  void | [**makeT**](#function-maket) ([**Base**](structsead_1_1BaseMtx34.md) & o, const Vec3 & t) <br> |
|  void | [**makeZero**](#function-makezero) ([**Base**](structsead_1_1BaseMtx34.md) & o) <br> |
|  void | [**multiply**](#function-multiply-13) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Base**](structsead_1_1BaseMtx34.md) & a, const [**Base**](structsead_1_1BaseMtx34.md) & b) <br> |
|  void | [**multiply**](#function-multiply-23) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Mtx33**](structsead_1_1BaseMtx33.md) & a, const [**Base**](structsead_1_1BaseMtx34.md) & b) <br> |
|  void | [**multiply**](#function-multiply-33) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Base**](structsead_1_1BaseMtx34.md) & a, const [**Mtx33**](structsead_1_1BaseMtx33.md) & b) <br> |
|  void | [**scaleAllElements**](#function-scaleallelements) ([**Base**](structsead_1_1BaseMtx34.md) & n, T s) <br> |
|  void | [**scaleBases**](#function-scalebases) ([**Base**](structsead_1_1BaseMtx34.md) & n, T sx, T sy, T sz) <br> |
|  void | [**setBase**](#function-setbase) ([**Base**](structsead_1_1BaseMtx34.md) & n, s32 axis, const Vec3 & v) <br> |
|  void | [**setRow**](#function-setrow) ([**Base**](structsead_1_1BaseMtx34.md) & n, const [**Vec4**](structsead_1_1BaseVec4.md) & v, s32 row) <br> |
|  void | [**setTranslation**](#function-settranslation) ([**Base**](structsead_1_1BaseMtx34.md) & n, const Vec3 & v) <br> |
|  void | [**toQuat**](#function-toquat) ([**Quat**](structsead_1_1BaseQuat.md) & q, const [**Base**](structsead_1_1BaseMtx34.md) & n) <br> |
|  void | [**transpose**](#function-transpose) ([**Base**](structsead_1_1BaseMtx34.md) & o) <br> |
|  void | [**transposeTo**](#function-transposeto) ([**Base**](structsead_1_1BaseMtx34.md) & o, const [**Base**](structsead_1_1BaseMtx34.md) & n) <br> |


























## Public Types Documentation




### typedef Base 

```C++
typedef Policies<T>::Mtx34Base sead::Matrix34CalcCommon< T >::Base;
```




<hr>



### typedef Mtx33 

```C++
typedef Policies<T>::Mtx33Base sead::Matrix34CalcCommon< T >::Mtx33;
```




<hr>



### typedef Mtx44 

```C++
typedef Policies<T>::Mtx44Base sead::Matrix34CalcCommon< T >::Mtx44;
```




<hr>



### typedef Quat 

```C++
typedef Policies<T>::QuatBase sead::Matrix34CalcCommon< T >::Quat;
```




<hr>



### typedef Vec3 

```C++
typedef Policies<T>::Vec3Base sead::Matrix34CalcCommon< T >::Vec3;
```




<hr>



### typedef Vec4 

```C++
typedef Policies<T>::Vec4Base sead::Matrix34CalcCommon< T >::Vec4;
```




<hr>
## Public Static Functions Documentation




### function copy [1/3]

```C++
static void sead::Matrix34CalcCommon::copy (
    Base & o,
    const Base & n
) 
```




<hr>



### function copy [2/3]

```C++
static void sead::Matrix34CalcCommon::copy (
    Base & o,
    const Mtx33 & n,
    const Vec3 & t
) 
```




<hr>



### function copy [3/3]

```C++
static void sead::Matrix34CalcCommon::copy (
    Base & o,
    const Mtx44 & n
) 
```




<hr>



### function getBase 

```C++
static void sead::Matrix34CalcCommon::getBase (
    Vec3 & v,
    const Base & n,
    s32 axis
) 
```




<hr>



### function getRotation 

```C++
static void sead::Matrix34CalcCommon::getRotation (
    Vec3 & v,
    const Base & n
) 
```




<hr>



### function getRow 

```C++
static void sead::Matrix34CalcCommon::getRow (
    Vec4 & v,
    const Base & n,
    s32 row
) 
```




<hr>



### function getTranslation 

```C++
static void sead::Matrix34CalcCommon::getTranslation (
    Vec3 & v,
    const Base & n
) 
```




<hr>



### function inverse 

```C++
static void sead::Matrix34CalcCommon::inverse (
    Base & o,
    const Base & n
) 
```




<hr>



### function inverse33 

```C++
static void sead::Matrix34CalcCommon::inverse33 (
    Base & o,
    const Base & n
) 
```




<hr>



### function inverseTranspose 

```C++
static void sead::Matrix34CalcCommon::inverseTranspose (
    Base & o,
    const Base & n
) 
```




<hr>



### function makeIdentity 

```C++
static void sead::Matrix34CalcCommon::makeIdentity (
    Base & o
) 
```




<hr>



### function makeQ 

```C++
static void sead::Matrix34CalcCommon::makeQ (
    Base & o,
    const Quat & q
) 
```




<hr>



### function makeQT 

```C++
static void sead::Matrix34CalcCommon::makeQT (
    Base & o,
    const Quat & q,
    const Vec3 & t
) 
```




<hr>



### function makeR 

```C++
static void sead::Matrix34CalcCommon::makeR (
    Base & o,
    const Vec3 & r
) 
```




<hr>



### function makeRIdx 

```C++
static void sead::Matrix34CalcCommon::makeRIdx (
    Base & o,
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeRT 

```C++
static inline void sead::Matrix34CalcCommon::makeRT (
    Base & o,
    const Vec3 & r,
    const Vec3 & t
) 
```




<hr>



### function makeRTIdx 

```C++
static void sead::Matrix34CalcCommon::makeRTIdx (
    Base & o,
    const Vector3 < u32 > & r,
    const Vec3 & t
) 
```




<hr>



### function makeRzxyIdx 

```C++
static void sead::Matrix34CalcCommon::makeRzxyIdx (
    Base & o,
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeRzxyTIdx 

```C++
static void sead::Matrix34CalcCommon::makeRzxyTIdx (
    Base & o,
    const Vector3 < u32 > & r,
    const Vec3 & t
) 
```




<hr>



### function makeS 

```C++
static void sead::Matrix34CalcCommon::makeS (
    Base & o,
    const Vec3 & s
) 
```




<hr>



### function makeSR 

```C++
static void sead::Matrix34CalcCommon::makeSR (
    Base & o,
    const Vec3 & s,
    const Vec3 & r
) 
```




<hr>



### function makeSRIdx 

```C++
static void sead::Matrix34CalcCommon::makeSRIdx (
    Base & o,
    const Vec3 & s,
    const Vector3 < u32 > & r
) 
```




<hr>



### function makeSRT 

```C++
static void sead::Matrix34CalcCommon::makeSRT (
    Base & o,
    const Vec3 & s,
    const Vec3 & r,
    const Vec3 & t
) 
```




<hr>



### function makeSRTIdx 

```C++
static void sead::Matrix34CalcCommon::makeSRTIdx (
    Base & o,
    const Vec3 & s,
    const Vector3 < u32 > & r,
    const Vec3 & t
) 
```




<hr>



### function makeSRzxyIdx 

```C++
static void sead::Matrix34CalcCommon::makeSRzxyIdx (
    Base & o,
    const Vec3 & s,
    const Vector3 < u32 > & r
) 
```




<hr>



### function makeSRzxyTIdx 

```C++
static void sead::Matrix34CalcCommon::makeSRzxyTIdx (
    Base & o,
    const Vec3 & s,
    const Vector3 < u32 > & r,
    const Vec3 & t
) 
```




<hr>



### function makeST 

```C++
static void sead::Matrix34CalcCommon::makeST (
    Base & o,
    const Vec3 & s,
    const Vec3 & t
) 
```




<hr>



### function makeT 

```C++
static void sead::Matrix34CalcCommon::makeT (
    Base & o,
    const Vec3 & t
) 
```




<hr>



### function makeZero 

```C++
static void sead::Matrix34CalcCommon::makeZero (
    Base & o
) 
```




<hr>



### function multiply [1/3]

```C++
static void sead::Matrix34CalcCommon::multiply (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>



### function multiply [2/3]

```C++
static void sead::Matrix34CalcCommon::multiply (
    Base & o,
    const Mtx33 & a,
    const Base & b
) 
```




<hr>



### function multiply [3/3]

```C++
static void sead::Matrix34CalcCommon::multiply (
    Base & o,
    const Base & a,
    const Mtx33 & b
) 
```




<hr>



### function scaleAllElements 

```C++
static void sead::Matrix34CalcCommon::scaleAllElements (
    Base & n,
    T s
) 
```




<hr>



### function scaleBases 

```C++
static void sead::Matrix34CalcCommon::scaleBases (
    Base & n,
    T sx,
    T sy,
    T sz
) 
```




<hr>



### function setBase 

```C++
static void sead::Matrix34CalcCommon::setBase (
    Base & n,
    s32 axis,
    const Vec3 & v
) 
```




<hr>



### function setRow 

```C++
static void sead::Matrix34CalcCommon::setRow (
    Base & n,
    const Vec4 & v,
    s32 row
) 
```




<hr>



### function setTranslation 

```C++
static void sead::Matrix34CalcCommon::setTranslation (
    Base & n,
    const Vec3 & v
) 
```




<hr>



### function toQuat 

```C++
static void sead::Matrix34CalcCommon::toQuat (
    Quat & q,
    const Base & n
) 
```




<hr>



### function transpose 

```C++
static void sead::Matrix34CalcCommon::transpose (
    Base & o
) 
```




<hr>



### function transposeTo 

```C++
static void sead::Matrix34CalcCommon::transposeTo (
    Base & o,
    const Base & n
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadMatrixCalcCommon.h`

