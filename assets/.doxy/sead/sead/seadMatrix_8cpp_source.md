

# File seadMatrix.cpp

[**File List**](files.md) **>** [**lib**](dir_97aefd0d527b934f1d99a682da8fe6a9.md) **>** [**sead**](dir_0fac9b77855f88e0947b9a0b6fbfd69b.md) **>** [**modules**](dir_ec69ef2cbb1939f0cb5bc4eb7f242255.md) **>** [**src**](dir_3ef36675db2938ff5e019b76c18230d7.md) **>** [**math**](dir_ca984b82f1fd634c0b0065400e47e840.md) **>** [**seadMatrix.cpp**](seadMatrix_8cpp.md)

[Go to the documentation of this file](seadMatrix_8cpp.md)


```C++
#include <math/seadMatrix.h>

namespace sead {
template <>
const Matrix22<f32> Matrix22<f32>::zero(0.0f, 0.0f, 0.0f, 0.0f);

template <>
const Matrix22<f32> Matrix22<f32>::ident(1.0f, 0.0f, 0.0f, 1.0f);

template <>
const Matrix33<f32> Matrix33<f32>::zero(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);

template <>
const Matrix33<f32> Matrix33<f32>::ident(1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f);

template <>
const Matrix34<f32> Matrix34<f32>::zero(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                                        0.0f, 0.0f);

template <>
const Matrix34<f32> Matrix34<f32>::ident(1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                                         1.0f, 0.0f);

template <>
const Matrix44<f32> Matrix44<f32>::zero(0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                                        0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);

template <>
const Matrix44<f32> Matrix44<f32>::ident(1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                                         1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);

template <>
const Matrix22<f64> Matrix22<f64>::zero(0, 0, 0, 0);

template <>
const Matrix22<f64> Matrix22<f64>::ident(1, 0, 0, 1);

template <>
const Matrix33<f64> Matrix33<f64>::zero(0, 0, 0, 0, 0, 0, 0, 0, 0);

template <>
const Matrix33<f64> Matrix33<f64>::ident(1, 0, 0, 0, 1, 0, 0, 0, 1);

template <>
const Matrix34<f64> Matrix34<f64>::zero(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

template <>
const Matrix34<f64> Matrix34<f64>::ident(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0);

template <>
const Matrix44<f64> Matrix44<f64>::zero(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

template <>
const Matrix44<f64> Matrix44<f64>::ident(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);

}  // namespace sead
```


