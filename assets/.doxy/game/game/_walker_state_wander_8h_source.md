

# File WalkerStateWander.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**WalkerStateWander.h**](_walker_state_wander_8h.md)

[Go to the documentation of this file](_walker_state_wander_8h.md)


```C++
#pragma once

#include <Nerve/alActorStateBase.h>

class WalkerStateParam;
class WalkerStateWanderParam;

class WalkerStateWander : public al::ActorStateBase
{
private:
        sead::Vector3f*               mFrontPtr;
        void*                         _14;
        const WalkerStateParam*       mWalkerParam;
        const WalkerStateWanderParam* mWanderParam;

public:
        WalkerStateWander( al::LiveActor* host, sead::Vector3f* frontPtr, const WalkerStateParam* walkerParam, const WalkerStateWanderParam* wanderParam );
};
```


