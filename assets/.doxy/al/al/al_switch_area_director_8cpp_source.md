

# File alSwitchAreaDirector.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**AreaObj**](dir_4e112348dea335382a2265a55148ea8e.md) **>** [**alSwitchAreaDirector.cpp**](al_switch_area_director_8cpp.md)

[Go to the documentation of this file](al_switch_area_director_8cpp.md)


```C++
#include <AreaObj/alSwitchAreaDirector.h>
#include <AreaObj/alSwitchKeepOnAreaGroup.h>
#include <AreaObj/alSwitchOnAreaGroup.h>

#include "Player/PlayerFunction.h" // GAME

namespace al
{

SwitchAreaDirector::SwitchAreaDirector()
    : LiveActor( "スイッチエリアディレクター" ), mSwitchOnAreaGroup( nullptr ),
      mSwitchKeepOnAreaGroup( nullptr )
{
}

#ifdef NON_MATCHING

// not using stm for vector copy
void SwitchAreaDirector::movement()
{
        sead::Vector3f pos = rp::getPlayerPos();
        if ( mSwitchOnAreaGroup )
                mSwitchOnAreaGroup->update( pos );
        if ( mSwitchKeepOnAreaGroup )
                mSwitchKeepOnAreaGroup->update( pos );
}
#endif

} // namespace al
```


