

# Struct sead::BoundBox3

**template &lt;typename T&gt;**



[**ClassList**](annotated.md) **>** [**sead**](namespacesead.md) **>** [**BoundBox3**](structsead_1_1BoundBox3.md)






















## Public Types

| Type | Name |
| ---: | :--- |
| typedef [**sead::Vector3**](structsead_1_1Vector3.md)&lt; T &gt; | [**Vector3**](#typedef-vector3)  <br> |




















## Public Functions

| Type | Name |
| ---: | :--- |
|   | [**BoundBox3**](#function-boundbox3-13) () <br> |
|   | [**BoundBox3**](#function-boundbox3-23) (T x0, T y0, T z0, T x1, T y1, T z1) <br> |
|   | [**BoundBox3**](#function-boundbox3-33) (const [**Vector3**](structsead_1_1Vector3.md) & min, const [**Vector3**](structsead_1_1Vector3.md) & max) <br> |
|  [**Vector3**](structsead_1_1Vector3.md) | [**getCenter**](#function-getcenter-12) () const<br> |
|  void | [**getCenter**](#function-getcenter-22) ([**Vector3**](structsead_1_1Vector3.md) \* p) const<br> |
|  T | [**getHalfSizeX**](#function-gethalfsizex) () const<br> |
|  T | [**getHalfSizeY**](#function-gethalfsizey) () const<br> |
|  T | [**getHalfSizeZ**](#function-gethalfsizez) () const<br> |
|  const [**Vector3**](structsead_1_1Vector3.md) & | [**getMax**](#function-getmax) () const<br> |
|  const [**Vector3**](structsead_1_1Vector3.md) & | [**getMin**](#function-getmin) () const<br> |
|  T | [**getSizeX**](#function-getsizex) () const<br> |
|  T | [**getSizeY**](#function-getsizey) () const<br> |
|  T | [**getSizeZ**](#function-getsizez) () const<br> |
|  bool | [**isInside**](#function-isinside) (const [**Vector3**](structsead_1_1Vector3.md) & p) const<br> |
|  bool | [**isUndef**](#function-isundef) () const<br> |
|  void | [**offset**](#function-offset-12) (T dx, T dy, T dz) <br> |
|  void | [**offset**](#function-offset-22) (const [**Vector3**](structsead_1_1Vector3.md) & dv) <br> |
|  void | [**scaleX**](#function-scalex) (T sx) <br> |
|  void | [**scaleY**](#function-scaley) (T sy) <br> |
|  void | [**scaleZ**](#function-scalez) (T sz) <br> |
|  void | [**set**](#function-set-12) (T x0, T y0, T z0, T x1, T y1, T z1) <br> |
|  void | [**set**](#function-set-22) (const [**Vector3**](structsead_1_1Vector3.md) & min, const [**Vector3**](structsead_1_1Vector3.md) & max) <br> |
|  void | [**setMax**](#function-setmax) (const [**Vector3**](structsead_1_1Vector3.md) & max) <br> |
|  void | [**setMin**](#function-setmin) (const [**Vector3**](structsead_1_1Vector3.md) & min) <br> |
|  void | [**setUndef**](#function-setundef) () <br> |




























## Public Types Documentation




### typedef Vector3 

```C++
typedef sead::Vector3<T> sead::BoundBox3< T >::Vector3;
```




<hr>
## Public Functions Documentation




### function BoundBox3 [1/3]

```C++
inline sead::BoundBox3::BoundBox3 () 
```




<hr>



### function BoundBox3 [2/3]

```C++
inline sead::BoundBox3::BoundBox3 (
    T x0,
    T y0,
    T z0,
    T x1,
    T y1,
    T z1
) 
```




<hr>



### function BoundBox3 [3/3]

```C++
inline sead::BoundBox3::BoundBox3 (
    const Vector3 & min,
    const Vector3 & max
) 
```




<hr>



### function getCenter [1/2]

```C++
inline Vector3 sead::BoundBox3::getCenter () const
```




<hr>



### function getCenter [2/2]

```C++
inline void sead::BoundBox3::getCenter (
    Vector3 * p
) const
```




<hr>



### function getHalfSizeX 

```C++
inline T sead::BoundBox3::getHalfSizeX () const
```




<hr>



### function getHalfSizeY 

```C++
inline T sead::BoundBox3::getHalfSizeY () const
```




<hr>



### function getHalfSizeZ 

```C++
inline T sead::BoundBox3::getHalfSizeZ () const
```




<hr>



### function getMax 

```C++
inline const Vector3 & sead::BoundBox3::getMax () const
```




<hr>



### function getMin 

```C++
inline const Vector3 & sead::BoundBox3::getMin () const
```




<hr>



### function getSizeX 

```C++
inline T sead::BoundBox3::getSizeX () const
```




<hr>



### function getSizeY 

```C++
inline T sead::BoundBox3::getSizeY () const
```




<hr>



### function getSizeZ 

```C++
inline T sead::BoundBox3::getSizeZ () const
```




<hr>



### function isInside 

```C++
inline bool sead::BoundBox3::isInside (
    const Vector3 & p
) const
```




<hr>



### function isUndef 

```C++
inline bool sead::BoundBox3::isUndef () const
```




<hr>



### function offset [1/2]

```C++
inline void sead::BoundBox3::offset (
    T dx,
    T dy,
    T dz
) 
```




<hr>



### function offset [2/2]

```C++
inline void sead::BoundBox3::offset (
    const Vector3 & dv
) 
```




<hr>



### function scaleX 

```C++
inline void sead::BoundBox3::scaleX (
    T sx
) 
```




<hr>



### function scaleY 

```C++
inline void sead::BoundBox3::scaleY (
    T sy
) 
```




<hr>



### function scaleZ 

```C++
inline void sead::BoundBox3::scaleZ (
    T sz
) 
```




<hr>



### function set [1/2]

```C++
inline void sead::BoundBox3::set (
    T x0,
    T y0,
    T z0,
    T x1,
    T y1,
    T z1
) 
```




<hr>



### function set [2/2]

```C++
inline void sead::BoundBox3::set (
    const Vector3 & min,
    const Vector3 & max
) 
```




<hr>



### function setMax 

```C++
inline void sead::BoundBox3::setMax (
    const Vector3 & max
) 
```




<hr>



### function setMin 

```C++
inline void sead::BoundBox3::setMin (
    const Vector3 & min
) 
```




<hr>



### function setUndef 

```C++
inline void sead::BoundBox3::setUndef () 
```




<hr>

------------------------------
The documentation for this class was generated from the following file `lib/sead/include/math/seadBoundBox.h`

