

# File EnemyStateBlowDown.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**EnemyStateBlowDown.h**](_enemy_state_blow_down_8h.md)

[Go to the documentation of this file](_enemy_state_blow_down_8h.md)


```C++
#pragma once

#include <Nerve/alActorStateBase.h>
#include <math/seadVector.h>

class EnemyStateBlowDownParam;

class EnemyStateBlowDown : public al::ActorStateBase
{
private:
        EnemyStateBlowDownParam* mParam;
        sead::Vector3f           _14;
        const char*              mAnimName;
        void*                    _24;

public:
        EnemyStateBlowDown( al::LiveActor* host, EnemyStateBlowDownParam* blowDownParam, const char*, int );
};
```


