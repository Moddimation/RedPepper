

# File WalkerStateChase.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**WalkerStateChase.h**](_walker_state_chase_8h.md)

[Go to the documentation of this file](_walker_state_chase_8h.md)


```C++
#pragma once

#include <LiveActor/alLiveActor.h>
#include <Nerve/alActorStateBase.h>

class WalkerStateChaseParam;
class WalkerStateParam;

class WalkerStateChase : public al::ActorStateBase
{
private:
        sead::Vector3f*              mFrontPtr;
        const WalkerStateParam*      mWalkParam;
        const WalkerStateChaseParam* mRunParam;
        bool                         _1C;
        void*                        _20;

public:
        void exeStart();

public:
        WalkerStateChase( al::LiveActor* host, sead::Vector3f* frontPtr, const WalkerStateParam* walkParam, const WalkerStateChaseParam* runParam, bool );
};
```


