

# Struct sead::Vector4

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Vector4**](structsead_1_1Vector4.md)








Inherits the following classes: [sead::BaseVec4](structsead_1_1BaseVec4.md)
























## Public Attributes inherited from sead::BaseVec4

See [sead::BaseVec4](structsead_1_1BaseVec4.md)

| Type | Name |
| ---: | :--- |
|  T | [**w**](structsead_1_1BaseVec4.md#variable-w)  <br> |
|  T | [**x**](structsead_1_1BaseVec4.md#variable-x)  <br> |
|  T | [**y**](structsead_1_1BaseVec4.md#variable-y)  <br> |
|  T | [**z**](structsead_1_1BaseVec4.md#variable-z)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Vector4**](structsead_1_1Vector4.md) | [**ew**](#variable-ew-13)  <br> |
|  const [**Vector4**](structsead_1_1Vector4.md) | [**ex**](#variable-ex-13)  <br> |
|  const [**Vector4**](structsead_1_1Vector4.md) | [**ey**](#variable-ey-13)  <br> |
|  const [**Vector4**](structsead_1_1Vector4.md) | [**ez**](#variable-ez-13)  <br> |
|  const [**Vector4**](structsead_1_1Vector4.md) | [**ones**](#variable-ones-13)  <br> |
|  const [**Vector4**](structsead_1_1Vector4.md) | [**zero**](#variable-zero-13)  <br> |




























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Vector4**](#function-vector4-13) () <br> |
|   | [**Vector4**](#function-vector4-23) (const [**Vector4**](structsead_1_1Vector4.md) & other) <br> |
|   | [**Vector4**](#function-vector4-33) (T x, T y, T z, T w) <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ew**](#function-ew-23) () <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ew**](#function-ew-33) (0. 0f, 0. 0f, 0. 0f, 1. 0f) <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ex**](#function-ex-23) () <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ex**](#function-ex-33) (1. 0f, 0. 0f, 0. 0f, 0. 0f) <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ey**](#function-ey-23) () <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ey**](#function-ey-33) (0. 0f, 1. 0f, 0. 0f, 0. 0f) <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ez**](#function-ez-23) () <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ez**](#function-ez-33) (0. 0f, 0. 0f, 1. 0f, 0. 0f) <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ones**](#function-ones-23) () <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**ones**](#function-ones-33) (1. 0f, 1. 0f, 1. 0f, 1. 0f) <br> |
|  bool | [**operator!=**](#function-operator) (const [**Vector4**](structsead_1_1Vector4.md) & rhs) const<br> |
|  [**Vector4**](structsead_1_1Vector4.md) & | [**operator\*=**](#function-operator_1) (T t) <br> |
|  [**Vector4**](structsead_1_1Vector4.md) & | [**operator+=**](#function-operator_2) (const [**Vector4**](structsead_1_1Vector4.md) & other) <br> |
|  [**Vector4**](structsead_1_1Vector4.md) & | [**operator-=**](#function-operator-) (const [**Vector4**](structsead_1_1Vector4.md) & other) <br> |
|  [**Vector4**](structsead_1_1Vector4.md) & | [**operator/=**](#function-operator_3) (T t) <br> |
|  [**Vector4**](structsead_1_1Vector4.md) & | [**operator=**](#function-operator_4) (const [**Vector4**](structsead_1_1Vector4.md) & other) <br> |
|  bool | [**operator==**](#function-operator_5) (const [**Vector4**](structsead_1_1Vector4.md) & rhs) const<br> |
|  void | [**set**](#function-set-12) (const [**Vector4**](structsead_1_1Vector4.md) & v) <br> |
|  void | [**set**](#function-set-22) (T x\_, T y\_, T z\_, T w\_) <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**zero**](#function-zero-23) () <br> |
|  const [**Vector4**](structsead_1_1Vector4.md)&lt; f32 &gt; | [**zero**](#function-zero-33) (0. 0f, 0. 0f, 0. 0f, 0. 0f) <br> |
























































## Public Static Attributes Documentation




### variable ew [1/3]

```C++
const Vector4 sead::Vector4< T >::ew;
```




<hr>



### variable ex [1/3]

```C++
const Vector4 sead::Vector4< T >::ex;
```




<hr>



### variable ey [1/3]

```C++
const Vector4 sead::Vector4< T >::ey;
```




<hr>



### variable ez [1/3]

```C++
const Vector4 sead::Vector4< T >::ez;
```




<hr>



### variable ones [1/3]

```C++
const Vector4 sead::Vector4< T >::ones;
```




<hr>



### variable zero [1/3]

```C++
const Vector4 sead::Vector4< T >::zero;
```




<hr>
## Public Functions Documentation




### function Vector4 [1/3]

```C++
inline sead::Vector4::Vector4 () 
```





**Warning:**

This constructor leaves member variables uninitialized. 





        

<hr>



### function Vector4 [2/3]

```C++
inline sead::Vector4::Vector4 (
    const Vector4 & other
) 
```




<hr>



### function Vector4 [3/3]

```C++
inline sead::Vector4::Vector4 (
    T x,
    T y,
    T z,
    T w
) 
```




<hr>



### function ew [2/3]

```C++
const Vector4 < f32 > sead::Vector4::ew () 
```




<hr>



### function ew [3/3]

```C++
const Vector4 < f32 > sead::Vector4::ew (
    0. 0f,
    0. 0f,
    0. 0f,
    1. 0f
) 
```




<hr>



### function ex [2/3]

```C++
const Vector4 < f32 > sead::Vector4::ex () 
```




<hr>



### function ex [3/3]

```C++
const Vector4 < f32 > sead::Vector4::ex (
    1. 0f,
    0. 0f,
    0. 0f,
    0. 0f
) 
```




<hr>



### function ey [2/3]

```C++
const Vector4 < f32 > sead::Vector4::ey () 
```




<hr>



### function ey [3/3]

```C++
const Vector4 < f32 > sead::Vector4::ey (
    0. 0f,
    1. 0f,
    0. 0f,
    0. 0f
) 
```




<hr>



### function ez [2/3]

```C++
const Vector4 < f32 > sead::Vector4::ez () 
```




<hr>



### function ez [3/3]

```C++
const Vector4 < f32 > sead::Vector4::ez (
    0. 0f,
    0. 0f,
    1. 0f,
    0. 0f
) 
```




<hr>



### function ones [2/3]

```C++
const Vector4 < f32 > sead::Vector4::ones () 
```




<hr>



### function ones [3/3]

```C++
const Vector4 < f32 > sead::Vector4::ones (
    1. 0f,
    1. 0f,
    1. 0f,
    1. 0f
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::Vector4::operator!= (
    const Vector4 & rhs
) const
```




<hr>



### function operator\*= 

```C++
inline Vector4 & sead::Vector4::operator*= (
    T t
) 
```




<hr>



### function operator+= 

```C++
inline Vector4 & sead::Vector4::operator+= (
    const Vector4 & other
) 
```




<hr>



### function operator-= 

```C++
inline Vector4 & sead::Vector4::operator-= (
    const Vector4 & other
) 
```




<hr>



### function operator/= 

```C++
inline Vector4 & sead::Vector4::operator/= (
    T t
) 
```




<hr>



### function operator= 

```C++
inline Vector4 & sead::Vector4::operator= (
    const Vector4 & other
) 
```




<hr>



### function operator== 

```C++
inline bool sead::Vector4::operator== (
    const Vector4 & rhs
) const
```




<hr>



### function set [1/2]

```C++
inline void sead::Vector4::set (
    const Vector4 & v
) 
```




<hr>



### function set [2/2]

```C++
inline void sead::Vector4::set (
    T x_,
    T y_,
    T z_,
    T w_
) 
```




<hr>



### function zero [2/3]

```C++
const Vector4 < f32 > sead::Vector4::zero () 
```




<hr>



### function zero [3/3]

```C++
const Vector4 < f32 > sead::Vector4::zero (
    0. 0f,
    0. 0f,
    0. 0f,
    0. 0f
) 
```




<hr>## Friends Documentation





### friend operator\* 

```C++
inline Vector4 sead::Vector4::operator* (
    const Vector4 & a,
    T t
) 
```




<hr>



### friend operator\* 

```C++
inline Vector4 sead::Vector4::operator* (
    T t,
    const Vector4 & a
) 
```




<hr>



### friend operator+ 

```C++
inline Vector4 sead::Vector4::operator+ (
    const Vector4 & a,
    const Vector4 & b
) 
```




<hr>



### friend operator- 

```C++
inline Vector4 sead::Vector4::operator- (
    const Vector4 & a,
    const Vector4 & b
) 
```




<hr>



### friend operator/ 

```C++
inline Vector4 sead::Vector4::operator/ (
    const Vector4 & a,
    T t
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadVector.h`

