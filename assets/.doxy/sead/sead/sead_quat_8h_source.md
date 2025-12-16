

# File seadQuat.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**math**](dir_9adfe416bc4f0c29a5cf1f3d542cf0b8.md) **>** [**seadQuat.h**](sead_quat_8h.md)

[Go to the documentation of this file](sead_quat_8h.md)


```C++
#pragma once

#include <math.h>
#include <basis/seadTypes.h>
#include <math/seadMathPolicies.h>
#include <math/seadVector.h>

namespace sead {
template <typename T>
struct Quat : public Policies<T>::QuatBase {
private:
    typedef Quat<T> Self;
    typedef Vector3<T> Vec3;

public:
    Quat() {}

    Quat(T w, T x, T y, T z);

    friend Quat operator*(const Quat& a, T t) {
        Self result = a;
        result *= t;
        return result;
    }

    friend Quat operator*(const Quat& a, const Quat& b) {
        Self result = a;
        result *= b;
        return result;
    }

    friend Quat operator*(T t, const Quat& a) { return operator*(a, t); }

    Quat& operator*=(const Quat& t);

    Quat& operator*=(T t) {
        this->w *= t;
        this->x *= t;
        this->y *= t;
        this->z *= t;
        return *this;
    }

    T length() const;
    T normalize();
    T dot(const Self& q);
    void inverse(Self* q);

    void makeUnit();
    bool makeVectorRotation(const Vec3& from, const Vec3& to);
    void set(T w, T x, T y, T z);
    void setRPY(T roll, T pitch, T yaw);
    void calcRPY(Vec3& rpy) const;

    static const Quat unit;
};

typedef Quat<f32> Quatf;

template <>
const Quatf Quatf::unit;

}  // namespace sead

#define SEAD_MATH_QUAT_H_
#include <math/seadQuat.hpp>
#undef SEAD_MATH_QUAT_H_
```


