

# File seadQuatCalcCommon.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**math**](dir_9adfe416bc4f0c29a5cf1f3d542cf0b8.md) **>** [**seadQuatCalcCommon.h**](sead_quat_calc_common_8h.md)

[Go to the documentation of this file](sead_quat_calc_common_8h.md)


```C++
#pragma once

#include <basis/seadTypes.h>
#include <math/seadMathPolicies.h>

namespace sead {
template <typename T>
class QuatCalcCommon {
public:
    typedef typename Policies<T>::QuatBase Base;
    typedef typename Policies<T>::Vec3Base Vec3;

    static T length(const Base& v);
    static T normalize(Base& v);
    static T dot(const Base& u, const Base& v);
    static void setMul(Base& out, const Base& u, const Base& v);
    static void slerpTo(Base& out, const Base& q1, const Base& q2, f32 t);
    static void makeUnit(Base& q);
    static bool makeVectorRotation(Base& q, const Vec3& from, const Vec3& to);
    static void set(Base& q, T w, T x, T y, T z);
    static void setRPY(Base& q, T roll, T pitch, T yaw);
    static void calcRPY(Vec3& rpy, const Base& q);
};

}  // namespace sead

#define SEAD_MATH_QUAT_CALC_COMMON_H_
#include <math/seadQuatCalcCommon.hpp>
#undef SEAD_MATH_QUAT_CALC_COMMON_H_
```


