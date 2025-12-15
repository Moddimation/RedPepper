

# File alAreaShapeCube.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**AreaObj**](dir_4e112348dea335382a2265a55148ea8e.md) **>** [**alAreaShapeCube.cpp**](alAreaShapeCube_8cpp.md)

[Go to the documentation of this file](alAreaShapeCube_8cpp.md)


```C++
#include <AreaObj/alAreaShapeCube.h>

namespace al
{

AreaShapeCube::AreaShapeCube( bool isCubeBase ) : mIsCubeBase( isCubeBase )
{
}

#ifdef NON_MATCHING

// comparison is different
bool AreaShapeCube::isInVolume( const sead::Vector3f& trans ) const
{
        sead::Vector3f localPos = sead::Vector3f::zero;
        calcLocalPos( &localPos, trans );
        sead::Vector2f bottomTopYBounds =
                mIsCubeBase ? sead::Vector2f( 0, 1000 ) : sead::Vector2f( -500, 500 );

        return localPos.y > bottomTopYBounds.x && localPos.y < bottomTopYBounds.y &&
               localPos.x > -500 && localPos.y < 500 && localPos.z > -500 && localPos.z < 500;
}
#endif

} // namespace al
```


