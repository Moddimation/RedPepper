

# File alVectorUtil.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Math**](dir_57fe581cdd12098952512d9f3630291a.md) **>** [**alVectorUtil.cpp**](al_vector_util_8cpp.md)

[Go to the documentation of this file](al_vector_util_8cpp.md)


```C++
#include <Math/alVectorUtil.h>

namespace al
{

void lerpVec( sead::Vector3f* out, const sead::Vector3f& from, const sead::Vector3f& to, float amount )
{
        out->x = from.x + ( to.x - from.x ) * amount;
        out->y = from.y + ( to.y - from.y ) * amount;
        out->z = from.z + ( to.z - from.z ) * amount;
}

} // namespace al
```


