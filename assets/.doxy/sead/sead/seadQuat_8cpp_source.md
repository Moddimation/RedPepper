

# File seadQuat.cpp

[**File List**](files.md) **>** [**lib**](dir_97aefd0d527b934f1d99a682da8fe6a9.md) **>** [**sead**](dir_0fac9b77855f88e0947b9a0b6fbfd69b.md) **>** [**modules**](dir_ec69ef2cbb1939f0cb5bc4eb7f242255.md) **>** [**src**](dir_3ef36675db2938ff5e019b76c18230d7.md) **>** [**math**](dir_ca984b82f1fd634c0b0065400e47e840.md) **>** [**seadQuat.cpp**](seadQuat_8cpp.md)

[Go to the documentation of this file](seadQuat_8cpp.md)


```C++
#include <math/seadQuat.h>

namespace sead {

template <>
const Quat<double> Quat<double>::unit(0, 0, 0, 1);

template <>
const Quatf Quat<float>::unit(0.0f, 0.0f, 0.0f, 1.0f);

}  // namespace sead
```


