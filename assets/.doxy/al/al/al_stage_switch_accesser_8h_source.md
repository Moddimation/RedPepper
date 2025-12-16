

# File alStageSwitchAccesser.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Stage**](dir_c5a1413f15ee14dcd95f457cd353067b.md) **>** [**alStageSwitchAccesser.h**](al_stage_switch_accesser_8h.md)

[Go to the documentation of this file](al_stage_switch_accesser_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>
#include <Stage/alStageSwitchType.h>

namespace al
{

class StageSwitchAccesser
{
private:
        int mId;
        int mType;

public:
        int initWithPlacementInfo( StageSwitchType type1, const PlacementInfo& info, StageSwitchType type2 );

        bool isTypeKillDeadOn() const;
        int  FUN_0024e734() const; // ?

public:
        StageSwitchAccesser();
};

} // namespace al
```


