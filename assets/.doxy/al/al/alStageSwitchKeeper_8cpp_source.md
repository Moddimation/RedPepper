

# File alStageSwitchKeeper.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Stage**](dir_83103bebc67a29d7d8ce851aa6a5914e.md) **>** [**alStageSwitchKeeper.cpp**](alStageSwitchKeeper_8cpp.md)

[Go to the documentation of this file](alStageSwitchKeeper_8cpp.md)


```C++
#include <Stage/alStageSwitchAccesser.h>
#include <Stage/alStageSwitchKeeper.h>

namespace al
{

#ifdef NON_MATCHING
StageSwitchKeeper::StageSwitchKeeper() : mSwitches( nullptr ), mSwitchCount( 0 )
{
        mSwitchCount = 5; // optimized away
        mSwitches    = new StageSwitchAccesser[ 5 ];
}
#endif

StageSwitchAccesser* StageSwitchKeeper::getStageSwitchAccesser( int type )
{
        return &mSwitches[ type ];
}

} // namespace al
```


