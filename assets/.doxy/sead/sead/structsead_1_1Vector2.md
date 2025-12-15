

# Struct sead::Vector2

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**Vector2**](structsead_1_1Vector2.md)








Inherits the following classes: [sead::BaseVec2](structsead_1_1BaseVec2.md)
























## Public Attributes inherited from sead::BaseVec2

See [sead::BaseVec2](structsead_1_1BaseVec2.md)

| Type | Name |
| ---: | :--- |
|  T | [**x**](structsead_1_1BaseVec2.md#variable-x)  <br> |
|  T | [**y**](structsead_1_1BaseVec2.md#variable-y)  <br> |


## Public Static Attributes

| Type | Name |
| ---: | :--- |
|  const [**Vector2**](structsead_1_1Vector2.md) | [**ex**](#variable-ex-13)  <br> |
|  const [**Vector2**](structsead_1_1Vector2.md) | [**ey**](#variable-ey-13)  <br> |
|  const [**Vector2**](structsead_1_1Vector2.md) | [**ones**](#variable-ones-13)  <br> |
|  const [**Vector2**](structsead_1_1Vector2.md) | [**zero**](#variable-zero-13)  <br> |




























## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**Vector2**](#function-vector2-13) () <br> |
|   | [**Vector2**](#function-vector2-23) (const [**Vector2**](structsead_1_1Vector2.md) & other) <br> |
|   | [**Vector2**](#function-vector2-33) (T x, T y) <br> |
|  const [**Vector2**](structsead_1_1Vector2.md)&lt; f32 &gt; | [**ex**](#function-ex-23) () <br> |
|  const [**Vector2**](structsead_1_1Vector2.md)&lt; f32 &gt; | [**ex**](#function-ex-33) (1. 0f, 0. 0f) <br> |
|  const [**Vector2**](structsead_1_1Vector2.md)&lt; f32 &gt; | [**ey**](#function-ey-23) () <br> |
|  const [**Vector2**](structsead_1_1Vector2.md)&lt; f32 &gt; | [**ey**](#function-ey-33) (0. 0f, 1. 0f) <br> |
|  const [**Vector2**](structsead_1_1Vector2.md)&lt; f32 &gt; | [**ones**](#function-ones-23) () <br> |
|  const [**Vector2**](structsead_1_1Vector2.md)&lt; f32 &gt; | [**ones**](#function-ones-33) (1. 0f, 1. 0f) <br> |
|  bool | [**operator!=**](#function-operator) (const [**Vector2**](structsead_1_1Vector2.md) & rhs) const<br> |
|  [**Vector2**](structsead_1_1Vector2.md) & | [**operator\*=**](#function-operator_1) (T t) <br> |
|  [**Vector2**](structsead_1_1Vector2.md) & | [**operator+=**](#function-operator_2) (const [**Vector2**](structsead_1_1Vector2.md) & other) <br> |
|  [**Vector2**](structsead_1_1Vector2.md) & | [**operator-=**](#function-operator-) (const [**Vector2**](structsead_1_1Vector2.md) & other) <br> |
|  [**Vector2**](structsead_1_1Vector2.md) & | [**operator/=**](#function-operator_3) (T t) <br> |
|  [**Vector2**](structsead_1_1Vector2.md) & | [**operator=**](#function-operator_4) (const [**Vector2**](structsead_1_1Vector2.md) & other) <br> |
|  bool | [**operator==**](#function-operator_5) (const [**Vector2**](structsead_1_1Vector2.md) & rhs) const<br> |
|  void | [**set**](#function-set-12) (const [**Vector2**](structsead_1_1Vector2.md) & other) <br> |
|  void | [**set**](#function-set-22) (T x\_, T y\_) <br> |
|  const [**Vector2**](structsead_1_1Vector2.md)&lt; f32 &gt; | [**zero**](#function-zero-23) () <br> |
|  const [**Vector2**](structsead_1_1Vector2.md)&lt; f32 &gt; | [**zero**](#function-zero-33) (0. 0f, 0. 0f) <br> |
























































## Public Static Attributes Documentation




### variable ex [1/3]

```C++
const Vector2 sead::Vector2< T >::ex;
```




<hr>



### variable ey [1/3]

```C++
const Vector2 sead::Vector2< T >::ey;
```




<hr>



### variable ones [1/3]

```C++
const Vector2 sead::Vector2< T >::ones;
```




<hr>



### variable zero [1/3]

```C++
const Vector2 sead::Vector2< T >::zero;
```




<hr>
## Public Functions Documentation




### function Vector2 [1/3]

```C++
inline sead::Vector2::Vector2 () 
```





**Warning:**

This constructor leaves member variables uninitialized. 





        

<hr>



### function Vector2 [2/3]

```C++
inline sead::Vector2::Vector2 (
    const Vector2 & other
) 
```




<hr>



### function Vector2 [3/3]

```C++
inline sead::Vector2::Vector2 (
    T x,
    T y
) 
```




<hr>



### function ex [2/3]

```C++
const Vector2 < f32 > sead::Vector2::ex () 
```




<hr>



### function ex [3/3]

```C++
const Vector2 < f32 > sead::Vector2::ex (
    1. 0f,
    0. 0f
) 
```




<hr>



### function ey [2/3]

```C++
const Vector2 < f32 > sead::Vector2::ey () 
```




<hr>



### function ey [3/3]

```C++
const Vector2 < f32 > sead::Vector2::ey (
    0. 0f,
    1. 0f
) 
```




<hr>



### function ones [2/3]

```C++
const Vector2 < f32 > sead::Vector2::ones () 
```




<hr>



### function ones [3/3]

```C++
const Vector2 < f32 > sead::Vector2::ones (
    1. 0f,
    1. 0f
) 
```




<hr>



### function operator!= 

```C++
inline bool sead::Vector2::operator!= (
    const Vector2 & rhs
) const
```




<hr>



### function operator\*= 

```C++
inline Vector2 & sead::Vector2::operator*= (
    T t
) 
```




<hr>



### function operator+= 

```C++
inline Vector2 & sead::Vector2::operator+= (
    const Vector2 & other
) 
```




<hr>



### function operator-= 

```C++
inline Vector2 & sead::Vector2::operator-= (
    const Vector2 & other
) 
```




<hr>



### function operator/= 

```C++
inline Vector2 & sead::Vector2::operator/= (
    T t
) 
```




<hr>



### function operator= 

```C++
inline Vector2 & sead::Vector2::operator= (
    const Vector2 & other
) 
```




<hr>



### function operator== 

```C++
inline bool sead::Vector2::operator== (
    const Vector2 & rhs
) const
```




<hr>



### function set [1/2]

```C++
inline void sead::Vector2::set (
    const Vector2 & other
) 
```




<hr>



### function set [2/2]

```C++
inline void sead::Vector2::set (
    T x_,
    T y_
) 
```




<hr>



### function zero [2/3]

```C++
const Vector2 < f32 > sead::Vector2::zero () 
```




<hr>



### function zero [3/3]

```C++
const Vector2 < f32 > sead::Vector2::zero (
    0. 0f,
    0. 0f
) 
```




<hr>## Friends Documentation





### friend operator\* 

```C++
inline Vector2 sead::Vector2::operator* (
    const Vector2 & a,
    T t
) 
```




<hr>



### friend operator\* 

```C++
inline Vector2 sead::Vector2::operator* (
    T t,
    const Vector2 & a
) 
```




<hr>



### friend operator+ 

```C++
inline Vector2 sead::Vector2::operator+ (
    const Vector2 & a,
    const Vector2 & b
) 
```




<hr>



### friend operator- 

```C++
inline Vector2 sead::Vector2::operator- (
    const Vector2 & a,
    const Vector2 & b
) 
```




<hr>



### friend operator/ 

```C++
inline Vector2 sead::Vector2::operator/ (
    const Vector2 & a,
    T t
) 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadVector.h`

