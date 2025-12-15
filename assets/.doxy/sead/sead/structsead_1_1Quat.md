

# Struct sead::Quat

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Quat**](structsead_1_1Quat.md)








Inherits the following classes: [sead::BaseQuat](structsead_1_1BaseQuat.md)
























## Public Attributes inherited from sead::BaseQuat

See [sead::BaseQuat](structsead_1_1BaseQuat.md)

| Type | Name |
| ---: | :--- |
|  T | [**w**](structsead_1_1BaseQuat.md#variable-w)  <br> |
|  T | [**x**](structsead_1_1BaseQuat.md#variable-x)  <br> |
|  T | [**y**](structsead_1_1BaseQuat.md#variable-y)  <br> |
|  T | [**z**](structsead_1_1BaseQuat.md#variable-z)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Quat**](structsead_1_1Quat.md) | [**unit**](#variable-unit-13)  <br> |




























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Quat**](#function-quat-12) () <br> |
|   | [**Quat**](#function-quat-22) (T w, T x, T y, T z) <br> |
|  void | [**calcRPY**](#function-calcrpy) ([**Vec3**](structsead_1_1Vector3.md) & rpy) const<br> |
|  T | [**dot**](#function-dot) (const [**Self**](structsead_1_1Quat.md) & q) <br> |
|  void | [**inverse**](#function-inverse) ([**Self**](structsead_1_1Quat.md) \* q) <br> |
|  T | [**length**](#function-length) () const<br> |
|  void | [**makeUnit**](#function-makeunit) () <br> |
|  bool | [**makeVectorRotation**](#function-makevectorrotation) (const [**Vec3**](structsead_1_1Vector3.md) & from, const [**Vec3**](structsead_1_1Vector3.md) & to) <br> |
|  T | [**normalize**](#function-normalize) () <br> |
|  [**Quat**](structsead_1_1Quat.md) & | [**operator\*=**](#function-operator) (const [**Quat**](structsead_1_1Quat.md) & t) <br> |
|  [**Quat**](structsead_1_1Quat.md) & | [**operator\*=**](#function-operator_1) (T t) <br> |
|  void | [**set**](#function-set) (T w, T x, T y, T z) <br> |
|  void | [**setRPY**](#function-setrpy) (T roll, T pitch, T yaw) <br> |
|  const [**Quat**](structsead_1_1Quat.md)&lt; double &gt; | [**unit**](#function-unit-23) (0, 0, 0, 1) <br> |
|  const [**Quatf**](structsead_1_1Quat.md) | [**unit**](#function-unit-33) (0. 0f, 0. 0f, 0. 0f, 1. 0f) <br> |
























































## Public Static Attributes Documentation




### variable unit [1/3]

```C++
const Quatf sead::Quatf::unit;
```




<hr>
## Public Functions Documentation




### function Quat [1/2]

```C++
inline sead::Quat::Quat () 
```




<hr>



### function Quat [2/2]

```C++
inline sead::Quat::Quat (
    T w,
    T x,
    T y,
    T z
) 
```




<hr>



### function calcRPY 

```C++
inline void sead::Quat::calcRPY (
    Vec3 & rpy
) const
```




<hr>



### function dot 

```C++
inline T sead::Quat::dot (
    const Self & q
) 
```




<hr>



### function inverse 

```C++
void sead::Quat::inverse (
    Self * q
) 
```




<hr>



### function length 

```C++
inline T sead::Quat::length () const
```




<hr>



### function makeUnit 

```C++
inline void sead::Quat::makeUnit () 
```




<hr>



### function makeVectorRotation 

```C++
inline bool sead::Quat::makeVectorRotation (
    const Vec3 & from,
    const Vec3 & to
) 
```




<hr>



### function normalize 

```C++
inline T sead::Quat::normalize () 
```




<hr>



### function operator\*= 

```C++
inline Quat & sead::Quat::operator*= (
    const Quat & t
) 
```




<hr>



### function operator\*= 

```C++
inline Quat & sead::Quat::operator*= (
    T t
) 
```




<hr>



### function set 

```C++
inline void sead::Quat::set (
    T w,
    T x,
    T y,
    T z
) 
```




<hr>



### function setRPY 

```C++
inline void sead::Quat::setRPY (
    T roll,
    T pitch,
    T yaw
) 
```




<hr>



### function unit [2/3]

```C++
const Quat < double > sead::Quat::unit (
    0,
    0,
    0,
    1
) 
```




<hr>



### function unit [3/3]

```C++
const Quatf sead::Quat::unit (
    0. 0f,
    0. 0f,
    0. 0f,
    1. 0f
) 
```




<hr>## Friends Documentation





### friend operator\* 

```C++
inline Quat sead::Quat::operator* (
    const Quat & a,
    T t
) 
```




<hr>



### friend operator\* 

```C++
inline Quat sead::Quat::operator* (
    const Quat & a,
    const Quat & b
) 
```




<hr>



### friend operator\* 

```C++
inline Quat sead::Quat::operator* (
    T t,
    const Quat & a
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadQuat.h`

