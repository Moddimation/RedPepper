

# File seadMathPolicies.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**math**](dir_9adfe416bc4f0c29a5cf1f3d542cf0b8.md) **>** [**seadMathPolicies.h**](sead_math_policies_8h.md)

[Go to the documentation of this file](sead_math_policies_8h.md)


```C++
#pragma once

#include <nn/math/math_VEC3.h>
#include <math/seadMathBase.h>

namespace sead {

using namespace nn::math;

template <typename T>
class Policies {
public:
    typedef BaseVec2<T> Vec2Base;
    typedef VEC3 Vec3Base;
    typedef BaseVec4<T> Vec4Base;
    typedef BaseQuat<T> QuatBase;
    typedef BaseMtx22<T> Mtx22Base;
    typedef BaseMtx33<T> Mtx33Base;
    typedef BaseMtx34<T> Mtx34Base;
    typedef BaseMtx44<T> Mtx44Base;
};

}  // namespace sead
```


