

# Class sead::Matrix33

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Matrix33**](classsead_1_1Matrix33.md)








Inherits the following classes: [sead::BaseMtx33](structsead_1_1BaseMtx33.md)
























## Public Attributes inherited from sead::BaseMtx33

See [sead::BaseMtx33](structsead_1_1BaseMtx33.md)

| Type | Name |
| ---: | :--- |
|  T | [**m**](structsead_1_1BaseMtx33.md#variable-m)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Matrix33**](classsead_1_1Matrix33.md) | [**ident**](#variable-ident-14)  <br> |
|  const [**Matrix33**](classsead_1_1Matrix33.md) | [**zero**](#variable-zero-14)  <br> |




























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Matrix33**](#function-matrix33-14) () <br> |
|   | [**Matrix33**](#function-matrix33-24) (const [**Self**](classsead_1_1Matrix33.md) & n) <br> |
|   | [**Matrix33**](#function-matrix33-34) (T a00, T a01, T a02, T a10, T a11, T a12, T a20, T a21, T a22) <br> |
|   | [**Matrix33**](#function-matrix33-44) (const [**Mtx34**](classsead_1_1Matrix34.md) & mtx34) <br> |
|  void | [**fromQuat**](#function-fromquat) (const [**Quat**](structsead_1_1Quat.md)&lt; T &gt; & q) <br> |
|  const [**Matrix33**](classsead_1_1Matrix33.md)&lt; f64 &gt; | [**ident**](#function-ident-24) () <br> |
|  const [**Matrix33**](classsead_1_1Matrix33.md)&lt; f32 &gt; | [**ident**](#function-ident-34) (1. 0f, 0. 0f, 0. 0f, 0. 0f, 1. 0f, 0. 0f, 0. 0f, 0. 0f, 1. 0f) <br> |
|  const [**Matrix33**](classsead_1_1Matrix33.md)&lt; f64 &gt; | [**ident**](#function-ident-44) (1, 0, 0, 0, 1, 0, 0, 0, 1) <br> |
|  void | [**makeIdentity**](#function-makeidentity) () <br> |
|  void | [**makeR**](#function-maker) (const [**Vec3**](structsead_1_1Vector3.md) & r) <br> |
|  void | [**makeRIdx**](#function-makeridx) (u32 xr, u32 yr, u32 zr) <br> |
|  void | [**makeRzxyIdx**](#function-makerzxyidx) (u32 xr, u32 yr, u32 zr) <br> |
|  void | [**makeS**](#function-makes-12) (const [**Vec3**](structsead_1_1Vector3.md) & s) <br> |
|  void | [**makeS**](#function-makes-22) (T x, T y, T z) <br> |
|  void | [**makeSR**](#function-makesr) (const [**Vec3**](structsead_1_1Vector3.md) & s, const [**Vec3**](structsead_1_1Vector3.md) & r) <br> |
|  void | [**makeSRIdx**](#function-makesridx) (const [**Vec3**](structsead_1_1Vector3.md) & s, const [**Vector3**](structsead_1_1Vector3.md)&lt; u32 &gt; & r) <br> |
|  void | [**makeSRzxyIdx**](#function-makesrzxyidx) (const [**Vec3**](structsead_1_1Vector3.md) & s, const [**Vector3**](structsead_1_1Vector3.md)&lt; u32 &gt; & r) <br> |
|  void | [**makeZero**](#function-makezero) () <br> |
|  T | [**operator()**](#function-operator) (s32 i, s32 j) const<br> |
|  T & | [**operator()**](#function-operator_1) (s32 i, s32 j) <br> |
|  [**Self**](classsead_1_1Matrix33.md) & | [**operator=**](#function-operator_2) (const [**Self**](classsead_1_1Matrix33.md) & n) <br> |
|  void | [**setInverse**](#function-setinverse) (const [**Self**](classsead_1_1Matrix33.md) & n) <br> |
|  void | [**setInverseTranspose**](#function-setinversetranspose) (const [**Self**](classsead_1_1Matrix33.md) & n) <br> |
|  void | [**setMul**](#function-setmul-13) (const [**Self**](classsead_1_1Matrix33.md) & a, const [**Self**](classsead_1_1Matrix33.md) & b) <br> |
|  void | [**setMul**](#function-setmul-23) (const [**Mtx34**](classsead_1_1Matrix34.md) & a, const [**Self**](classsead_1_1Matrix33.md) & b) <br> |
|  void | [**setMul**](#function-setmul-33) (const [**Self**](classsead_1_1Matrix33.md) & a, const [**Mtx34**](classsead_1_1Matrix34.md) & b) <br> |
|  void | [**setTranspose**](#function-settranspose) (const [**Self**](classsead_1_1Matrix33.md) & n) <br> |
|  void | [**toQuat**](#function-toquat) ([**Quat**](structsead_1_1Quat.md)&lt; T &gt; & q) const<br> |
|  void | [**transpose**](#function-transpose) () <br> |
|  const [**Matrix33**](classsead_1_1Matrix33.md)&lt; f64 &gt; | [**zero**](#function-zero-24) () <br> |
|  const [**Matrix33**](classsead_1_1Matrix33.md)&lt; f32 &gt; | [**zero**](#function-zero-34) (0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f, 0. 0f) <br> |
|  const [**Matrix33**](classsead_1_1Matrix33.md)&lt; f64 &gt; | [**zero**](#function-zero-44) (0, 0, 0, 0, 0, 0, 0, 0, 0) <br> |
























































## Public Static Attributes Documentation




### variable ident [1/4]

```C++
const Matrix33f sead::Matrix33f::ident;
```




<hr>



### variable zero [1/4]

```C++
const Matrix33f sead::Matrix33f::zero;
```




<hr>
## Public Functions Documentation




### function Matrix33 [1/4]

```C++
inline sead::Matrix33::Matrix33 () 
```




<hr>



### function Matrix33 [2/4]

```C++
inline sead::Matrix33::Matrix33 (
    const Self & n
) 
```




<hr>



### function Matrix33 [3/4]

```C++
inline sead::Matrix33::Matrix33 (
    T a00,
    T a01,
    T a02,
    T a10,
    T a11,
    T a12,
    T a20,
    T a21,
    T a22
) 
```




<hr>



### function Matrix33 [4/4]

```C++
inline sead::Matrix33::Matrix33 (
    const Mtx34 & mtx34
) 
```




<hr>



### function fromQuat 

```C++
inline void sead::Matrix33::fromQuat (
    const Quat < T > & q
) 
```




<hr>



### function ident [2/4]

```C++
const Matrix33 < f64 > sead::Matrix33::ident () 
```




<hr>



### function ident [3/4]

```C++
const Matrix33 < f32 > sead::Matrix33::ident (
    1. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    1. 0f,
    0. 0f,
    0. 0f,
    0. 0f,
    1. 0f
) 
```




<hr>



### function ident [4/4]

```C++
const Matrix33 < f64 > sead::Matrix33::ident (
    1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    1
) 
```




<hr>



### function makeIdentity 

```C++
inline void sead::Matrix33::makeIdentity () 
```




<hr>



### function makeR 

```C++
inline void sead::Matrix33::makeR (
    const Vec3 & r
) 
```




<hr>



### function makeRIdx 

```C++
inline void sead::Matrix33::makeRIdx (
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeRzxyIdx 

```C++
inline void sead::Matrix33::makeRzxyIdx (
    u32 xr,
    u32 yr,
    u32 zr
) 
```




<hr>



### function makeS [1/2]

```C++
inline void sead::Matrix33::makeS (
    const Vec3 & s
) 
```




<hr>



### function makeS [2/2]

```C++
inline void sead::Matrix33::makeS (
    T x,
    T y,
    T z
) 
```




<hr>



### function makeSR 

```C++
inline void sead::Matrix33::makeSR (
    const Vec3 & s,
    const Vec3 & r
) 
```




<hr>



### function makeSRIdx 

```C++
inline void sead::Matrix33::makeSRIdx (
    const Vec3 & s,
    const Vector3 < u32 > & r
) 
```




<hr>



### function makeSRzxyIdx 

```C++
inline void sead::Matrix33::makeSRzxyIdx (
    const Vec3 & s,
    const Vector3 < u32 > & r
) 
```




<hr>



### function makeZero 

```C++
inline void sead::Matrix33::makeZero () 
```




<hr>



### function operator() 

```C++
inline T sead::Matrix33::operator() (
    s32 i,
    s32 j
) const
```




<hr>



### function operator() 

```C++
inline T & sead::Matrix33::operator() (
    s32 i,
    s32 j
) 
```




<hr>



### function operator= 

```C++
inline Self & sead::Matrix33::operator= (
    const Self & n
) 
```




<hr>



### function setInverse 

```C++
inline void sead::Matrix33::setInverse (
    const Self & n
) 
```




<hr>



### function setInverseTranspose 

```C++
inline void sead::Matrix33::setInverseTranspose (
    const Self & n
) 
```




<hr>



### function setMul [1/3]

```C++
inline void sead::Matrix33::setMul (
    const Self & a,
    const Self & b
) 
```




<hr>



### function setMul [2/3]

```C++
inline void sead::Matrix33::setMul (
    const Mtx34 & a,
    const Self & b
) 
```




<hr>



### function setMul [3/3]

```C++
inline void sead::Matrix33::setMul (
    const Self & a,
    const Mtx34 & b
) 
```




<hr>



### function setTranspose 

```C++
inline void sead::Matrix33::setTranspose (
    const Self & n
) 
```




<hr>



### function toQuat 

```C++
inline void sead::Matrix33::toQuat (
    Quat < T > & q
) const
```




<hr>



### function transpose 

```C++
inline void sead::Matrix33::transpose () 
```




<hr>



### function zero [2/4]

```C++
const Matrix33 < f64 > sead::Matrix33::zero () 
```




<hr>



### function zero [3/4]

```C++
const Matrix33 < f32 > sead::Matrix33::zero (
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
const Matrix33 < f64 > sead::Matrix33::zero (
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

