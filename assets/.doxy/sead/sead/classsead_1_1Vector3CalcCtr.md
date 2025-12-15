

# Class sead::Vector3CalcCtr

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Vector3CalcCtr**](classsead_1_1Vector3CalcCtr.md)






















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Vec3Base | [**Base**](#typedef-base)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx33Base | [**Mtx33**](#typedef-mtx33)  <br> |
| typedef [**Policies**](classsead_1_1Policies.md)&lt; T &gt;::Mtx34Base | [**Mtx34**](#typedef-mtx34)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|  void | [**add**](#function-add-22) (Base & o, const Base & a, const Base & b) <br> |
|  void | [**multScalar**](#function-multscalar-22) (Base & o, const Base & v, f32 t) <br> |
|  void | [**sub**](#function-sub-22) (Base & o, const Base & a, const Base & b) <br> |


## Public Static Functions

| Type | Name |
| ---: | :--- |
|  void | [**add**](#function-add-12) (Base & o, const Base & a, const Base & b) <br> |
|  void | [**cross**](#function-cross) (Base & o, const Base & a, const Base & b) <br> |
|  T | [**dot**](#function-dot) (const Base & a, const Base & b) <br> |
|  bool | [**equals**](#function-equals) (const Base & lhs, const Base & rhs, T epsilon) <br> |
|  T | [**length**](#function-length) (const Base & v) <br> |
|  void | [**mul**](#function-mul-12) (Base & o, const [**Mtx33**](structsead_1_1BaseMtx33.md) & m, const Base & a) <br> |
|  void | [**mul**](#function-mul-22) (Base & o, const [**Mtx34**](structsead_1_1BaseMtx34.md) & m, const Base & a) <br>_Apply a transformation_ `m` _(rotation + translation) to the vector_`a` _._ |
|  void | [**multScalar**](#function-multscalar-12) (Base & o, const Base & v, T t) <br> |
|  void | [**multScalarAdd**](#function-multscalaradd) (Base & o, T t, const Base & a, const Base & b) <br> |
|  T | [**normalize**](#function-normalize) (Base & v) <br> |
|  void | [**set**](#function-set-12) (Base & o, const Base & v) <br> |
|  void | [**set**](#function-set-22) (Base & v, T x, T y, T z) <br> |
|  T | [**squaredLength**](#function-squaredlength) (const Base & v) <br> |
|  void | [**sub**](#function-sub-12) (Base & o, const Base & a, const Base & b) <br> |


























## Public Types Documentation




### typedef Base 

```C++
typedef Policies<T>::Vec3Base sead::Vector3CalcCtr< T >::Base;
```




<hr>



### typedef Mtx33 

```C++
typedef Policies<T>::Mtx33Base sead::Vector3CalcCtr< T >::Mtx33;
```




<hr>



### typedef Mtx34 

```C++
typedef Policies<T>::Mtx34Base sead::Vector3CalcCtr< T >::Mtx34;
```




<hr>
## Public Functions Documentation




### function add [2/2]

```C++
inline void sead::Vector3CalcCtr::add (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>



### function multScalar [2/2]

```C++
inline void sead::Vector3CalcCtr::multScalar (
    Base & o,
    const Base & v,
    f32 t
) 
```




<hr>



### function sub [2/2]

```C++
inline void sead::Vector3CalcCtr::sub (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>
## Public Static Functions Documentation




### function add [1/2]

```C++
static inline void sead::Vector3CalcCtr::add (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>



### function cross 

```C++
static inline void sead::Vector3CalcCtr::cross (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>



### function dot 

```C++
static inline T sead::Vector3CalcCtr::dot (
    const Base & a,
    const Base & b
) 
```




<hr>



### function equals 

```C++
static inline bool sead::Vector3CalcCtr::equals (
    const Base & lhs,
    const Base & rhs,
    T epsilon
) 
```




<hr>



### function length 

```C++
static inline T sead::Vector3CalcCtr::length (
    const Base & v
) 
```




<hr>



### function mul [1/2]

```C++
static inline void sead::Vector3CalcCtr::mul (
    Base & o,
    const Mtx33 & m,
    const Base & a
) 
```




<hr>



### function mul [2/2]

_Apply a transformation_ `m` _(rotation + translation) to the vector_`a` _._
```C++
static inline void sead::Vector3CalcCtr::mul (
    Base & o,
    const Mtx34 & m,
    const Base & a
) 
```




<hr>



### function multScalar [1/2]

```C++
static inline void sead::Vector3CalcCtr::multScalar (
    Base & o,
    const Base & v,
    T t
) 
```




<hr>



### function multScalarAdd 

```C++
static inline void sead::Vector3CalcCtr::multScalarAdd (
    Base & o,
    T t,
    const Base & a,
    const Base & b
) 
```




<hr>



### function normalize 

```C++
static T sead::Vector3CalcCtr::normalize (
    Base & v
) 
```




<hr>



### function set [1/2]

```C++
static inline void sead::Vector3CalcCtr::set (
    Base & o,
    const Base & v
) 
```




<hr>



### function set [2/2]

```C++
static inline void sead::Vector3CalcCtr::set (
    Base & v,
    T x,
    T y,
    T z
) 
```




<hr>



### function squaredLength 

```C++
static inline T sead::Vector3CalcCtr::squaredLength (
    const Base & v
) 
```




<hr>



### function sub [1/2]

```C++
static inline void sead::Vector3CalcCtr::sub (
    Base & o,
    const Base & a,
    const Base & b
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadVectorCalcCtr.h`

