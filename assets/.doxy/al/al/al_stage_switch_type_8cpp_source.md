

# File alStageSwitchType.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Stage**](dir_83103bebc67a29d7d8ce851aa6a5914e.md) **>** [**alStageSwitchType.cpp**](al_stage_switch_type_8cpp.md)

[Go to the documentation of this file](al_stage_switch_type_8cpp.md)


```C++
#pragma once

#include <Stage/alStageSwitchType.h>

namespace al
{

const char* getStageSwitchName( StageSwitchType type )
{
        switch ( type )
        {
        case StageSwitchType_Appear:
                return "SwitchAppear";
        case StageSwitchType_Kill:
                return "SwitchKill";
        case StageSwitchType_DeadOn:
                return "SwitchDeadOn";
        case StageSwitchType_A:
                return "SwitchA";
        case StageSwitchType_B:
                return "SwitchB";
        default:
                return "";
        }
}

} // namespace al
```


