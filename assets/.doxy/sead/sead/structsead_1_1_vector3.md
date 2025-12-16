

# Struct sead::Vector3

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Vector3**](structsead_1_1_vector3.md)





* `#include <seadVector.h>`



Inherits the following classes: Policies::Vec3Base














## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Mtx33Base | [**Mtx33**](#typedef-mtx33)  <br> |
| typedef [**Policies**](classsead_1_1_policies.md)&lt; T &gt;::Mtx34Base | [**Mtx34**](#typedef-mtx34)  <br> |






## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Vector3**](structsead_1_1_vector3.md) | [**ex**](#variable-ex-13)  <br> |
|  const [**Vector3**](structsead_1_1_vector3.md) | [**ey**](#variable-ey-13)  <br> |
|  const [**Vector3**](structsead_1_1_vector3.md) | [**ez**](#variable-ez-13)  <br> |
|  const [**Vector3**](structsead_1_1_vector3.md) | [**ones**](#variable-ones-13)  <br> |
|  const [**Vector3**](structsead_1_1_vector3.md) | [**zero**](#variable-zero-13)  <br> |














## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Vector3**](#function-vector3-12) () <br> |
|   | [**Vector3**](#function-vector3-22) (T x, T y, T z) <br> |
|  void | [**add**](#function-add) (const [**Vector3**](structsead_1_1_vector3.md) & a) <br> |
|  T | [**dot**](#function-dot) (const [**Vector3**](structsead_1_1_vector3.md) & t) const<br> |
|  bool | [**equals**](#function-equals) (const [**Vector3**](structsead_1_1_vector3.md) & rhs, T epsilon=0) const<br>_Checks if the differences of all components of lhs and rhs are within_ `epsilon` _._ |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ex**](#function-ex-23) () <br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ex**](#function-ex-33) (1. 0f, 0. 0f, 0. 0f) <br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ey**](#function-ey-23) () <br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ey**](#function-ey-33) (0. 0f, 1. 0f, 0. 0f) <br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ez**](#function-ez-23) () <br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ez**](#function-ez-33) (0. 0f, 0. 0f, 1. 0f) <br> |
|  T | [**length**](#function-length) () const<br> |
|  void | [**mul**](#function-mul-12) (const [**Mtx33**](structsead_1_1_vector3.md#typedef-mtx33) & m) <br>_Multiply m by this vector (self = m \* self)._  |
|  void | [**mul**](#function-mul-22) (const [**Mtx34**](structsead_1_1_vector3.md#typedef-mtx34) & m) <br>_Apply a transformation_ `m` _(rotation + translation) to this vector._ |
|  void | [**multScalar**](#function-multscalar) (T t) <br> |
|  T | [**normalize**](#function-normalize) () <br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ones**](#function-ones-23) () <br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**ones**](#function-ones-33) (1. 0f, 1. 0f, 1. 0f) <br> |
|  bool | [**operator!=**](#function-operator) (const [**Vector3**](structsead_1_1_vector3.md) & rhs) const<br> |
|  [**Vector3**](structsead_1_1_vector3.md) & | [**operator\*=**](#function-operator_1) (T t) <br> |
|  [**Vector3**](structsead_1_1_vector3.md) & | [**operator\*=**](#function-operator_2) (const [**Mtx33**](structsead_1_1_vector3.md#typedef-mtx33) & m) <br> |
|  [**Vector3**](structsead_1_1_vector3.md) & | [**operator\*=**](#function-operator_3) (const [**Mtx34**](structsead_1_1_vector3.md#typedef-mtx34) & m) <br> |
|  [**Vector3**](structsead_1_1_vector3.md) & | [**operator+=**](#function-operator_4) (const [**Vector3**](structsead_1_1_vector3.md) & other) <br> |
|  [**Vector3**](structsead_1_1_vector3.md) | [**operator-**](#function-operator-) () const<br> |
|  [**Vector3**](structsead_1_1_vector3.md) & | [**operator-=**](#function-operator-_1) (const [**Vector3**](structsead_1_1_vector3.md) & other) <br> |
|  [**Vector3**](structsead_1_1_vector3.md) & | [**operator/=**](#function-operator_5) (T t) <br> |
|  [**Vector3**](structsead_1_1_vector3.md) & | [**operator=**](#function-operator_6) (const [**Vector3**](structsead_1_1_vector3.md) & other) <br> |
|  bool | [**operator==**](#function-operator_7) (const [**Vector3**](structsead_1_1_vector3.md) & rhs) const<br> |
|  void | [**set**](#function-set-12) (const [**Vector3**](structsead_1_1_vector3.md) & other) <br> |
|  void | [**set**](#function-set-22) (T x, T y, T z) <br> |
|  void | [**setCross**](#function-setcross) (const [**Vector3**](structsead_1_1_vector3.md)&lt; T &gt; & a, const [**Vector3**](structsead_1_1_vector3.md)&lt; T &gt; & b) <br> |
|  void | [**setMul**](#function-setmul-12) (const [**Mtx33**](structsead_1_1_vector3.md#typedef-mtx33) & m, const [**Vector3**](structsead_1_1_vector3.md) & a) <br> |
|  void | [**setMul**](#function-setmul-22) (const [**Mtx34**](structsead_1_1_vector3.md#typedef-mtx34) & m, const [**Vector3**](structsead_1_1_vector3.md) & a) <br> |
|  void | [**setScaleAdd**](#function-setscaleadd) (T t, const [**Vector3**](structsead_1_1_vector3.md)&lt; T &gt; & a, const [**Vector3**](structsead_1_1_vector3.md)&lt; T &gt; & b) <br> |
|  T | [**squaredLength**](#function-squaredlength) () const<br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**zero**](#function-zero-23) () <br> |
|  const [**Vector3**](structsead_1_1_vector3.md)&lt; [**f32**](_l_m_s___types_8h.md#typedef-f32) &gt; | [**zero**](#function-zero-33) (0. 0f, 0. 0f, 0. 0f) <br> |




























## Public Types Documentation




### typedef Mtx33 

```C++
typedef Policies<T>::Mtx33Base sead::Vector3< T >::Mtx33;
```




<hr>



### typedef Mtx34 

```C++
typedef Policies<T>::Mtx34Base sead::Vector3< T >::Mtx34;
```




<hr>
## Public Static Attributes Documentation




### variable ex [1/3]

```C++
const Vector3 sead::Vector3< T >::ex;
```




<hr>



### variable ey [1/3]

```C++
const Vector3 sead::Vector3< T >::ey;
```




<hr>



### variable ez [1/3]

```C++
const Vector3 sead::Vector3< T >::ez;
```




<hr>



### variable ones [1/3]

```C++
const Vector3 sead::Vector3< T >::ones;
```




<hr>



### variable zero [1/3]

```C++
const Vector3 sead::Vector3< T >::zero;
```




<hr>
## Public Functions Documentation




### function Vector3 [1/2]

```C++
inline sead::Vector3::Vector3 () 
```





**Warning:**

This constructor leaves member variables uninitialized. 





        

<hr>



### function Vector3 [2/2]

```C++
inline sead::Vector3::Vector3 (
    T x,
    T y,
    T z
) 
```




<hr>



### function add 

```C++
inline void sead::Vector3::add (
    const Vector3 & a
) 
```




<hr>



### function dot 

```C++
inline T sead::Vector3::dot (
    const Vector3 & t
) const
```




<hr>



### function equals 

_Checks if the differences of all components of lhs and rhs are within_ `epsilon` _._
```C++
inline bool sead::Vector3::equals (
    const Vector3 & rhs,
    T epsilon=0
) const
```



(i.e. -epsilon &lt;= lhs.x - rhs.x &lt;= epsilon, and so on). 


        

<hr>



### function ex [2/3]

```C++
const Vector3 < f32 > sead::Vector3::ex () 
```




<hr>



### function ex [3/3]

```C++
const Vector3 < f32 > sead::Vector3::ex (
    1. 0f,
    0. 0f,
    0. 0f
) 
```




<hr>



### function ey [2/3]

```C++
const Vector3 < f32 > sead::Vector3::ey () 
```




<hr>



### function ey [3/3]

```C++
const Vector3 < f32 > sead::Vector3::ey (
    0. 0f,
    1. 0f,
    0. 0f
) 
```




<hr>



### function ez [2/3]

```C++
const Vector3 < f32 > sead::Vector3::ez () 
```




<hr>



### function ez [3/3]

```C++
const Vector3 < f32 > sead::Vector3::ez (
    0. 0f,
    0. 0f,
    1. 0f
) 
```




<hr>



### function length 

```C++
inline T sead::Vector3::length () const
```




<hr>



### function mul [1/2]

_Multiply m by this vector (self = m \* self)._ 
```C++
inline void sead::Vector3::mul (
    const Mtx33 & m
) 
```




<hr>



### function mul [2/2]

_Apply a transformation_ `m` _(rotation + translation) to this vector._
```C++
inline void sead::Vector3::mul (
    const Mtx34 & m
) 
```




<hr>



### function multScalar 

```C++
inline void sead::Vector3::multScalar (
    T t
) 
```




<hr>



### function normalize 

```C++
inline T sead::Vector3::normalize () 
```




<hr>



### function ones [2/3]

```C++
const Vector3 < f32 > sead::Vector3::ones () 
```




<hr>



### function ones [3/3]

```C++
const Vector3 < f32 > sead::Vector3::ones (
    1. 0f,
    1. 0f,
    1. 0f
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::Vector3::operator!= (
    const Vector3 & rhs
) const
```




<hr>



### function operator\*= 

```C++
inline Vector3 & sead::Vector3::operator*= (
    T t
) 
```




<hr>



### function operator\*= 

```C++
inline Vector3 & sead::Vector3::operator*= (
    const Mtx33 & m
) 
```




<hr>



### function operator\*= 

```C++
inline Vector3 & sead::Vector3::operator*= (
    const Mtx34 & m
) 
```




<hr>



### function operator+= 

```C++
inline Vector3 & sead::Vector3::operator+= (
    const Vector3 & other
) 
```




<hr>



### function operator- 

```C++
inline Vector3 sead::Vector3::operator- () const
```




<hr>



### function operator-= 

```C++
inline Vector3 & sead::Vector3::operator-= (
    const Vector3 & other
) 
```




<hr>



### function operator/= 

```C++
inline Vector3 & sead::Vector3::operator/= (
    T t
) 
```




<hr>



### function operator= 

```C++
inline Vector3 & sead::Vector3::operator= (
    const Vector3 & other
) 
```




<hr>



### function operator== 

```C++
inline bool sead::Vector3::operator== (
    const Vector3 & rhs
) const
```




<hr>



### function set [1/2]

```C++
inline void sead::Vector3::set (
    const Vector3 & other
) 
```




<hr>



### function set [2/2]

```C++
inline void sead::Vector3::set (
    T x,
    T y,
    T z
) 
```




<hr>



### function setCross 

```C++
inline void sead::Vector3::setCross (
    const Vector3 < T > & a,
    const Vector3 < T > & b
) 
```




<hr>



### function setMul [1/2]

```C++
inline void sead::Vector3::setMul (
    const Mtx33 & m,
    const Vector3 & a
) 
```




<hr>



### function setMul [2/2]

```C++
inline void sead::Vector3::setMul (
    const Mtx34 & m,
    const Vector3 & a
) 
```




<hr>



### function setScaleAdd 

```C++
inline void sead::Vector3::setScaleAdd (
    T t,
    const Vector3 < T > & a,
    const Vector3 < T > & b
) 
```




<hr>



### function squaredLength 

```C++
inline T sead::Vector3::squaredLength () const
```




<hr>



### function zero [2/3]

```C++
const Vector3 < f32 > sead::Vector3::zero () 
```




<hr>



### function zero [3/3]

```C++
const Vector3 < f32 > sead::Vector3::zero (
    0. 0f,
    0. 0f,
    0. 0f
) 
```




<hr>## Friends Documentation





### friend operator\* 

```C++
inline Vector3 sead::Vector3::operator* (
    const Vector3 & a,
    T t
) 
```




<hr>



### friend operator\* 

```C++
inline Vector3 sead::Vector3::operator* (
    T t,
    const Vector3 & a
) 
```




<hr>



### friend operator\* 

```C++
inline Vector3 sead::Vector3::operator* (
    const Mtx33 & m,
    const Vector3 & a
) 
```




<hr>



### friend operator\* 

```C++
inline Vector3 sead::Vector3::operator* (
    const Mtx34 & m,
    const Vector3 & a
) 
```




<hr>



### friend operator+ 

```C++
inline Vector3 sead::Vector3::operator+ (
    const Vector3 & a,
    const Vector3 & b
) 
```




<hr>



### friend operator- 

```C++
inline Vector3 sead::Vector3::operator- (
    const Vector3 & a,
    const Vector3 & b
) 
```




<hr>



### friend operator/ 

```C++
inline Vector3 sead::Vector3::operator/ (
    const Vector3 & a,
    T t
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadVector.h`

