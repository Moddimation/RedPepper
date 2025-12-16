

# File alAreaShape.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**AreaObj**](dir_4e112348dea335382a2265a55148ea8e.md) **>** [**alAreaShape.cpp**](al_area_shape_8cpp.md)

[Go to the documentation of this file](al_area_shape_8cpp.md)


```C++
#include <AreaObj/alAreaShape.h>

namespace al
{

AreaShape::AreaShape() : mBaseMtxPtr( nullptr ), mScale( sead::Vector3f( 1, 1, 1 ) )
{
}

/* TODO: Move this to header */
void AreaShape::setScale( const sead::Vector3f& scale )
{
        mScale = scale;
}

} // namespace al
```


