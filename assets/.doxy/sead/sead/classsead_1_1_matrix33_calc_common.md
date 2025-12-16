

# Class sead::Matrix33CalcCommon

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix33CalcCommon**](classsead_1_1_matrix33_calc_common.md)





* `#include <seadMatrixCalcCommon.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Mtx33Base | [**Base**](#typedef-base)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Mtx34Base | [**Mtx34**](#typedef-mtx34)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::QuatBase | [**Quat**](#typedef-quat)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Vec3Base | [**Vec3**](#typedef-vec3)  <br> |






















## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**copy**](#function-copy-12) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & n) <br> |
|  void | [**copy**](#function-copy-22) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Mtx34**](classsead_1_1_matrix33_calc_common.md#typedef-mtx34) & n) <br> |
|  void | [**inverse**](#function-inverse) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & n) <br> |
|  void | [**inverseTranspose**](#function-inversetranspose) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & n) <br> |
|  void | [**makeIdentity**](#function-makeidentity) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o) <br> |
|  void | [**makeQ**](#function-makeq) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Quat**](classsead_1_1_matrix33_calc_common.md#typedef-quat) & q) <br> |
|  void | [**makeR**](#function-maker) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Vec3**](classsead_1_1_matrix33_calc_common.md#typedef-vec3) & r) <br> |
|  void | [**makeRIdx**](#function-makeridx) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, [**u32**](_l_m_s___types_8h.md#typedef-u32) xr, [**u32**](_l_m_s___types_8h.md#typedef-u32) yr, [**u32**](_l_m_s___types_8h.md#typedef-u32) zr) <br> |
|  void | [**makeRzxyIdx**](#function-makerzxyidx) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, [**u32**](_l_m_s___types_8h.md#typedef-u32) xr, [**u32**](_l_m_s___types_8h.md#typedef-u32) yr, [**u32**](_l_m_s___types_8h.md#typedef-u32) zr) <br> |
|  void | [**makeS**](#function-makes) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Vec3**](classsead_1_1_matrix33_calc_common.md#typedef-vec3) & s) <br> |
|  void | [**makeSR**](#function-makesr) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Vec3**](classsead_1_1_matrix33_calc_common.md#typedef-vec3) & s, const [**Vec3**](classsead_1_1_matrix33_calc_common.md#typedef-vec3) & r) <br> |
|  void | [**makeSRIdx**](#function-makesridx) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Vec3**](classsead_1_1_matrix33_calc_common.md#typedef-vec3) & s, const [**Vector3**](structsead_1_1_vector3.md)&lt; [**u32**](_l_m_s___types_8h.md#typedef-u32) &gt; & r) <br> |
|  void | [**makeSRzxyIdx**](#function-makesrzxyidx) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Vec3**](classsead_1_1_matrix33_calc_common.md#typedef-vec3) & s, const [**Vector3**](structsead_1_1_vector3.md)&lt; [**u32**](_l_m_s___types_8h.md#typedef-u32) &gt; & r) <br> |
|  void | [**makeZero**](#function-makezero) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o) <br> |
|  void | [**multiply**](#function-multiply-13) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & a, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & b) <br> |
|  void | [**multiply**](#function-multiply-23) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Mtx34**](classsead_1_1_matrix33_calc_common.md#typedef-mtx34) & a, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & b) <br> |
|  void | [**multiply**](#function-multiply-33) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & a, const [**Mtx34**](classsead_1_1_matrix33_calc_common.md#typedef-mtx34) & b) <br> |
|  void | [**toQuat**](#function-toquat) ([**Quat**](classsead_1_1_matrix33_calc_common.md#typedef-quat) & q, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & n) <br> |
|  void | [**transpose**](#function-transpose) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o) <br> |
|  void | [**transposeTo**](#function-transposeto) ([**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & o, const [**Base**](classsead_1_1_matrix33_calc_common.md#typedef-base) & n) <br> |


























## Public Types Documentation




### typedef Base 

```C++
typedef Policies<T>::Mtx33Base sead::Matrix33CalcCommon< T >::Base;
```




<hr>



### typedef Mtx34 

```C++
typedef Policies<T>::Mtx34Base sead::Matrix33CalcCommon< T >::Mtx34;
```




<hr>



### typedef Quat 

```C++
typedef Policies<T>::QuatBase sead::Matrix33CalcCommon< T >::Quat;
```




<hr>



### typedef Vec3 

```C++
typedef Policies<T>::Vec3Base sead::Matrix33CalcCommon< T >::Vec3;
```




<hr>
## Public Static Functions Documentation




### function copy [1/2]

```C++
static void sead::Matrix33CalcCommon::copy (
    Base & o,
    const Base & n
) 
```




<hr>



### function copy [2/2]

```C++
static void sead::Matrix33CalcCommon::copy (
    Base & o,
    const Mtx34 & n
) 
```




<hr>



### function inverse 

```C++
static void sead::Matrix33CalcCommon::inverse (
    Base & o,
    const Base & n
) 
```




<hr>



### function inverseTranspose 

```C++
static void sead::Matrix33CalcCommon::inverseTranspose (
    Base & o,
    const Base & n
) 
```




<hr>



### function makeIdentity 

```C++
static void sead::Matrix33CalcCommon::makeIdentity (
    Base & o
) 
```




<hr>



### function makeQ 

```C++
static void sead::Matrix33CalcCommon::makeQ (
    Base & o,
    const Quat & q
) 
```




<hr>



### function makeR 

```C++
static void sead::Matrix33CalcCommon::makeR (
    Base & o,
    const Vec3 & r
) 
```




<hr>



### function makeRIdx 

```C++
static void sead::Matrix33CalcCommon::makeRIdx (
    Base & o,
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeRzxyIdx 

```C++
static void sead::Matrix33CalcCommon::makeRzxyIdx (
    Base & o,
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeS 

```C++
static void sead::Matrix33CalcCommon::makeS (
    Base & o,
    const Vec3 & s
) 
```




<hr>



### function makeSR 

```C++
static void sead::Matrix33CalcCommon::makeSR (
    Base & o,
    const Vec3 & s,
    const Vec3 & r
) 
```




<hr>



### function makeSRIdx 

```C++
static void sead::Matrix33CalcCommon::makeSRIdx (
    Base & o,
    const Vec3 & s,
    const Vector3 < u32 > & r
) 
```




<hr>



### function makeSRzxyIdx 

```C++
static void sead::Matrix33CalcCommon::makeSRzxyIdx (
    Base & o,
    const Vec3 & s,
    const Vector3 < u32 > & r
) 
```




<hr>



### function makeZero 

```C++
static void sead::Matrix33CalcCommon::makeZero (
    Base & o
) 
```




<hr>



### function multiply [1/3]

```C++
static void sead::Matrix33CalcCommon::multiply (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>



### function multiply [2/3]

```C++
static void sead::Matrix33CalcCommon::multiply (
    Base & o,
    const Mtx34 & a,
    const Base & b
) 
```




<hr>



### function multiply [3/3]

```C++
static void sead::Matrix33CalcCommon::multiply (
    Base & o,
    const Base & a,
    const Mtx34 & b
) 
```




<hr>



### function toQuat 

```C++
static void sead::Matrix33CalcCommon::toQuat (
    Quat & q,
    const Base & n
) 
```




<hr>



### function transpose 

```C++
static void sead::Matrix33CalcCommon::transpose (
    Base & o
) 
```




<hr>



### function transposeTo 

```C++
static void sead::Matrix33CalcCommon::transposeTo (
    Base & o,
    const Base & n
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadMatrixCalcCommon.h`

