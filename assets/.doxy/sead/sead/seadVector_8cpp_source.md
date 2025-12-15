

# File seadVector.cpp

[**File List**](files.md) **>** [**lib**](dir_97aefd0d527b934f1d99a682da8fe6a9.md) **>** [**sead**](dir_0fac9b77855f88e0947b9a0b6fbfd69b.md) **>** [**modules**](dir_ec69ef2cbb1939f0cb5bc4eb7f242255.md) **>** [**src**](dir_3ef36675db2938ff5e019b76c18230d7.md) **>** [**math**](dir_ca984b82f1fd634c0b0065400e47e840.md) **>** [**seadVector.cpp**](seadVector_8cpp.md)

[Go to the documentation of this file](seadVector_8cpp.md)


```C++
#include <math/seadVector.h>

namespace sead {
template <>
const Vector2<f32> Vector2<f32>::zero(0.0f, 0.0f);

template <>
const Vector2<f32> Vector2<f32>::ex(1.0f, 0.0f);

template <>
const Vector2<f32> Vector2<f32>::ey(0.0f, 1.0f);

template <>
const Vector2<f32> Vector2<f32>::ones(1.0f, 1.0f);

template <>
const Vector3<f32> Vector3<f32>::zero(0.0f, 0.0f, 0.0f);

template <>
const Vector3<f32> Vector3<f32>::ex(1.0f, 0.0f, 0.0f);

template <>
const Vector3<f32> Vector3<f32>::ey(0.0f, 1.0f, 0.0f);

template <>
const Vector3<f32> Vector3<f32>::ez(0.0f, 0.0f, 1.0f);

template <>
const Vector3<f32> Vector3<f32>::ones(1.0f, 1.0f, 1.0f);

template <>
const Vector4<f32> Vector4<f32>::zero(0.0f, 0.0f, 0.0f, 0.0f);

template <>
const Vector4<f32> Vector4<f32>::ex(1.0f, 0.0f, 0.0f, 0.0f);

template <>
const Vector4<f32> Vector4<f32>::ey(0.0f, 1.0f, 0.0f, 0.0f);

template <>
const Vector4<f32> Vector4<f32>::ez(0.0f, 0.0f, 1.0f, 0.0f);

template <>
const Vector4<f32> Vector4<f32>::ew(0.0f, 0.0f, 0.0f, 1.0f);

template <>
const Vector4<f32> Vector4<f32>::ones(1.0f, 1.0f, 1.0f, 1.0f);

}  // namespace sead
```


