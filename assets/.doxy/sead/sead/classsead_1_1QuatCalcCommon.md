

# Class sead::QuatCalcCommon

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**QuatCalcCommon**](classsead_1_1QuatCalcCommon.md)






















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::QuatBase | [**Base**](#typedef-base)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Vec3Base | [**Vec3**](#typedef-vec3)  <br> |






















## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**calcRPY**](#function-calcrpy) (Vec3 & rpy, const [**Base**](structsead_1_1BaseQuat.md) & q) <br> |
|  T | [**dot**](#function-dot) (const [**Base**](structsead_1_1BaseQuat.md) & u, const [**Base**](structsead_1_1BaseQuat.md) & v) <br> |
|  T | [**length**](#function-length) (const [**Base**](structsead_1_1BaseQuat.md) & v) <br> |
|  void | [**makeUnit**](#function-makeunit) ([**Base**](structsead_1_1BaseQuat.md) & q) <br> |
|  bool | [**makeVectorRotation**](#function-makevectorrotation) ([**Base**](structsead_1_1BaseQuat.md) & q, const Vec3 & from, const Vec3 & to) <br> |
|  T | [**normalize**](#function-normalize) ([**Base**](structsead_1_1BaseQuat.md) & v) <br> |
|  void | [**set**](#function-set) ([**Base**](structsead_1_1BaseQuat.md) & q, T w, T x, T y, T z) <br> |
|  void | [**setMul**](#function-setmul) ([**Base**](structsead_1_1BaseQuat.md) & out, const [**Base**](structsead_1_1BaseQuat.md) & u, const [**Base**](structsead_1_1BaseQuat.md) & v) <br> |
|  void | [**setRPY**](#function-setrpy) ([**Base**](structsead_1_1BaseQuat.md) & q, T roll, T pitch, T yaw) <br> |
|  void | [**slerpTo**](#function-slerpto) ([**Base**](structsead_1_1BaseQuat.md) & out, const [**Base**](structsead_1_1BaseQuat.md) & q1, const [**Base**](structsead_1_1BaseQuat.md) & q2, f32 t) <br> |


























## Public Types Documentation




### typedef Base 

```C++
typedef Policies<T>::QuatBase sead::QuatCalcCommon< T >::Base;
```




<hr>



### typedef Vec3 

```C++
typedef Policies<T>::Vec3Base sead::QuatCalcCommon< T >::Vec3;
```




<hr>
## Public Static Functions Documentation




### function calcRPY 

```C++
static void sead::QuatCalcCommon::calcRPY (
    Vec3 & rpy,
    const Base & q
) 
```




<hr>



### function dot 

```C++
static inline T sead::QuatCalcCommon::dot (
    const Base & u,
    const Base & v
) 
```




<hr>



### function length 

```C++
static inline T sead::QuatCalcCommon::length (
    const Base & v
) 
```




<hr>



### function makeUnit 

```C++
static inline void sead::QuatCalcCommon::makeUnit (
    Base & q
) 
```




<hr>



### function makeVectorRotation 

```C++
static inline bool sead::QuatCalcCommon::makeVectorRotation (
    Base & q,
    const Vec3 & from,
    const Vec3 & to
) 
```




<hr>



### function normalize 

```C++
static inline T sead::QuatCalcCommon::normalize (
    Base & v
) 
```




<hr>



### function set 

```C++
static inline void sead::QuatCalcCommon::set (
    Base & q,
    T w,
    T x,
    T y,
    T z
) 
```




<hr>



### function setMul 

```C++
static inline void sead::QuatCalcCommon::setMul (
    Base & out,
    const Base & u,
    const Base & v
) 
```




<hr>



### function setRPY 

```C++
static inline void sead::QuatCalcCommon::setRPY (
    Base & q,
    T roll,
    T pitch,
    T yaw
) 
```




<hr>



### function slerpTo 

```C++
static void sead::QuatCalcCommon::slerpTo (
    Base & out,
    const Base & q1,
    const Base & q2,
    f32 t
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadQuatCalcCommon.h`

