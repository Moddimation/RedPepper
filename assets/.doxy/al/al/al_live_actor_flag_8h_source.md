

# File alLiveActorFlag.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alLiveActorFlag.h**](al_live_actor_flag_8h.md)

[Go to the documentation of this file](al_live_actor_flag_8h.md)


```C++
#pragma once

namespace al
{

struct LiveActorFlag
{
        bool isDead;
        bool isClipped;
        bool isInvalidClipping;
        bool isDrawClipping;
        bool flag5;
        bool isHideModel;
        bool isOffCollide;
        bool flag8;
        bool isValidMaterialCode;

        LiveActorFlag();
};

} // namespace al
```


