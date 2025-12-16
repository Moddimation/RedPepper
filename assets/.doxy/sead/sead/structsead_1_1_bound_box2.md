

# Struct sead::BoundBox2

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**BoundBox2**](structsead_1_1_bound_box2.md)





* `#include <seadBoundBox.h>`

















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**sead::Vector2**](structsead_1_1_vector2.md)&lt; T &gt; | [**Vector2**](#typedef-vector2)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**BoundBox2**](#function-boundbox2-13) () <br> |
|   | [**BoundBox2**](#function-boundbox2-23) (T x0, T y0, T x1, T y1) <br> |
|   | [**BoundBox2**](#function-boundbox2-33) (const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & min, const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & max) <br> |
|  [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) | [**getBL**](#function-getbl) () const<br> |
|  [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) | [**getBR**](#function-getbr) () const<br> |
|  [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) | [**getCenter**](#function-getcenter-12) () const<br> |
|  void | [**getCenter**](#function-getcenter-22) ([**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) \* p) const<br> |
|  T | [**getHalfSizeX**](#function-gethalfsizex) () const<br> |
|  T | [**getHalfSizeY**](#function-gethalfsizey) () const<br> |
|  const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & | [**getMax**](#function-getmax) () const<br> |
|  const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & | [**getMin**](#function-getmin) () const<br> |
|  T | [**getSizeX**](#function-getsizex) () const<br> |
|  T | [**getSizeY**](#function-getsizey) () const<br> |
|  [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) | [**getTL**](#function-gettl) () const<br> |
|  [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) | [**getTR**](#function-gettr) () const<br> |
|  bool | [**isInside**](#function-isinside) (const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & p) const<br> |
|  bool | [**isUndef**](#function-isundef) () const<br> |
|  void | [**offset**](#function-offset-12) (T dx, T dy) <br> |
|  void | [**offset**](#function-offset-22) (const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & dv) <br> |
|  void | [**scaleX**](#function-scalex) (T sx) <br> |
|  void | [**scaleY**](#function-scaley) (T sy) <br> |
|  void | [**set**](#function-set-12) (T x0, T y0, T x1, T y1) <br> |
|  void | [**set**](#function-set-22) (const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & min, const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & max) <br> |
|  void | [**setFromCenterAndXY**](#function-setfromcenterandxy-12) (T centerX, T centerY, T sizeX, T sizeY) <br> |
|  void | [**setFromCenterAndXY**](#function-setfromcenterandxy-22) (const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & center, T sizeX, T sizeY) <br> |
|  void | [**setFromCornerAndXY**](#function-setfromcornerandxy-12) (T cornerX, T cornerY, T sizeX, T sizeY) <br> |
|  void | [**setFromCornerAndXY**](#function-setfromcornerandxy-22) (const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & corner, T sizeX, T sizeY) <br> |
|  void | [**setMax**](#function-setmax) (const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & max) <br> |
|  void | [**setMin**](#function-setmin) (const [**Vector2**](structsead_1_1_bound_box2.md#typedef-vector2) & min) <br> |
|  void | [**setUndef**](#function-setundef) () <br> |




























## Public Types Documentation




### typedef Vector2 

```C++
typedef sead::Vector2<T> sead::BoundBox2< T >::Vector2;
```




<hr>
## Public Functions Documentation




### function BoundBox2 [1/3]

```C++
inline sead::BoundBox2::BoundBox2 () 
```




<hr>



### function BoundBox2 [2/3]

```C++
inline sead::BoundBox2::BoundBox2 (
    T x0,
    T y0,
    T x1,
    T y1
) 
```




<hr>



### function BoundBox2 [3/3]

```C++
inline sead::BoundBox2::BoundBox2 (
    const Vector2 & min,
    const Vector2 & max
) 
```




<hr>



### function getBL 

```C++
inline Vector2 sead::BoundBox2::getBL () const
```




<hr>



### function getBR 

```C++
inline Vector2 sead::BoundBox2::getBR () const
```




<hr>



### function getCenter [1/2]

```C++
inline Vector2 sead::BoundBox2::getCenter () const
```




<hr>



### function getCenter [2/2]

```C++
inline void sead::BoundBox2::getCenter (
    Vector2 * p
) const
```




<hr>



### function getHalfSizeX 

```C++
inline T sead::BoundBox2::getHalfSizeX () const
```




<hr>



### function getHalfSizeY 

```C++
inline T sead::BoundBox2::getHalfSizeY () const
```




<hr>



### function getMax 

```C++
inline const Vector2 & sead::BoundBox2::getMax () const
```




<hr>



### function getMin 

```C++
inline const Vector2 & sead::BoundBox2::getMin () const
```




<hr>



### function getSizeX 

```C++
inline T sead::BoundBox2::getSizeX () const
```




<hr>



### function getSizeY 

```C++
inline T sead::BoundBox2::getSizeY () const
```




<hr>



### function getTL 

```C++
inline Vector2 sead::BoundBox2::getTL () const
```




<hr>



### function getTR 

```C++
inline Vector2 sead::BoundBox2::getTR () const
```




<hr>



### function isInside 

```C++
inline bool sead::BoundBox2::isInside (
    const Vector2 & p
) const
```




<hr>



### function isUndef 

```C++
inline bool sead::BoundBox2::isUndef () const
```




<hr>



### function offset [1/2]

```C++
inline void sead::BoundBox2::offset (
    T dx,
    T dy
) 
```




<hr>



### function offset [2/2]

```C++
inline void sead::BoundBox2::offset (
    const Vector2 & dv
) 
```




<hr>



### function scaleX 

```C++
inline void sead::BoundBox2::scaleX (
    T sx
) 
```




<hr>



### function scaleY 

```C++
inline void sead::BoundBox2::scaleY (
    T sy
) 
```




<hr>



### function set [1/2]

```C++
inline void sead::BoundBox2::set (
    T x0,
    T y0,
    T x1,
    T y1
) 
```




<hr>



### function set [2/2]

```C++
inline void sead::BoundBox2::set (
    const Vector2 & min,
    const Vector2 & max
) 
```




<hr>



### function setFromCenterAndXY [1/2]

```C++
inline void sead::BoundBox2::setFromCenterAndXY (
    T centerX,
    T centerY,
    T sizeX,
    T sizeY
) 
```




<hr>



### function setFromCenterAndXY [2/2]

```C++
inline void sead::BoundBox2::setFromCenterAndXY (
    const Vector2 & center,
    T sizeX,
    T sizeY
) 
```




<hr>



### function setFromCornerAndXY [1/2]

```C++
inline void sead::BoundBox2::setFromCornerAndXY (
    T cornerX,
    T cornerY,
    T sizeX,
    T sizeY
) 
```




<hr>



### function setFromCornerAndXY [2/2]

```C++
inline void sead::BoundBox2::setFromCornerAndXY (
    const Vector2 & corner,
    T sizeX,
    T sizeY
) 
```




<hr>



### function setMax 

```C++
inline void sead::BoundBox2::setMax (
    const Vector2 & max
) 
```




<hr>



### function setMin 

```C++
inline void sead::BoundBox2::setMin (
    const Vector2 & min
) 
```




<hr>



### function setUndef 

```C++
inline void sead::BoundBox2::setUndef () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadBoundBox.h`

