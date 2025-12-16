

# File alStageSwitchType.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Stage**](dir_c5a1413f15ee14dcd95f457cd353067b.md) **>** [**alStageSwitchType.h**](al_stage_switch_type_8h.md)

[Go to the documentation of this file](al_stage_switch_type_8h.md)


```C++
#pragma once

namespace al
{

enum StageSwitchType
{
        StageSwitchType_Appear,
        StageSwitchType_Kill,
        StageSwitchType_DeadOn,
        StageSwitchType_A,
        StageSwitchType_B
};

const char* getStageSwitchName( StageSwitchType type );

} // namespace al
```


