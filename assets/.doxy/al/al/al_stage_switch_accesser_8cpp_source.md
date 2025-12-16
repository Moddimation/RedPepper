

# File alStageSwitchAccesser.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Stage**](dir_83103bebc67a29d7d8ce851aa6a5914e.md) **>** [**alStageSwitchAccesser.cpp**](al_stage_switch_accesser_8cpp.md)

[Go to the documentation of this file](al_stage_switch_accesser_8cpp.md)


```C++
#include <Stage/alStageSwitchAccesser.h>

namespace al
{

StageSwitchAccesser::StageSwitchAccesser() : mId( -1 ), mType( 0 )
{
}

int StageSwitchAccesser::initWithPlacementInfo( StageSwitchType type1, const PlacementInfo& info, StageSwitchType type2 )
{
        const char* type1Name = getStageSwitchName( type1 );
        if ( mType > (int)type2 )
                type2 = (StageSwitchType)mType;
        mId   = -1;
        mType = type2;
        info.tryGetIntByKey( &mId, type1Name );
        return FUN_0024e734();
}

bool StageSwitchAccesser::isTypeKillDeadOn() const
{
        return mType == StageSwitchType_Kill || mType == StageSwitchType_DeadOn;
}

int StageSwitchAccesser::FUN_0024e734() const
{
        return ( mId >> 0x1f ) + 1;
} // ?

} // namespace al
```


