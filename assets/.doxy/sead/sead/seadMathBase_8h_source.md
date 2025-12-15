

# File seadMathBase.h

[**File List**](files.md) **>** [**include**](dir_f6d5c8d1d4c60cd689fcf859a6687fb0.md) **>** [**math**](dir_9adfe416bc4f0c29a5cf1f3d542cf0b8.md) **>** [**seadMathBase.h**](seadMathBase_8h.md)

[Go to the documentation of this file](seadMathBase_8h.md)


```C++
#pragma once

namespace sead {
template <typename T>
struct BaseVec2 {
    T x;
    T y;
};

template <typename T>
struct BaseVec3 {
    T x;
    T y;
    T z;
};

template <typename T>
struct BaseVec4 {
    T x;
    T y;
    T z;
    T w;
};

template <typename T>
struct BaseQuat {
    T x;
    T y;
    T z;
    T w;
};

template <typename T>
struct BaseMtx22 {
    T m[2][2];
};

template <typename T>
struct BaseMtx33 {
    T m[3][3];
};

template <typename T>
struct BaseMtx34 {
    T m[3][4];
};

template <typename T>
struct BaseMtx44 {
    T m[4][4];
};

}  // namespace sead
```


