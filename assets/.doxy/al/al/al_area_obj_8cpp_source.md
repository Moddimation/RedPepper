

# File alAreaObj.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**AreaObj**](dir_4e112348dea335382a2265a55148ea8e.md) **>** [**alAreaObj.cpp**](al_area_obj_8cpp.md)

[Go to the documentation of this file](al_area_obj_8cpp.md)


```C++
#include <AreaObj/alAreaObj.h>
#include <AreaObj/alAreaShape.h>
#include <Stage/alStageSwitchKeeper.h>

namespace al
{

#ifdef NON_MATCHING
AreaObj::AreaObj( const char* name )
    : mName( name ), mAreaShape( nullptr ), mStageSwitchKeeper( nullptr ), _10( sead::Matrix34f::ident ),
      _40( nullptr ), _44( -1 ), _48( 1 )
{
}
#endif

StageSwitchKeeper* AreaObj::getStageSwitchKeeper() const
{
        return mStageSwitchKeeper;
}

void AreaObj::initStageSwitchKeeper()
{
        mStageSwitchKeeper = new StageSwitchKeeper;
}

bool AreaObj::isInVolume( const sead::Vector3f& trans ) const
{
        if ( _48 )
                return mAreaShape->isInVolume( trans );
        return false;
}

} // namespace al
```


