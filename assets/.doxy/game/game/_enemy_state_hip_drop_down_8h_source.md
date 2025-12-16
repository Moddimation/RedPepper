

# File EnemyStateHipDropDown.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**EnemyStateHipDropDown.h**](_enemy_state_hip_drop_down_8h.md)

[Go to the documentation of this file](_enemy_state_hip_drop_down_8h.md)


```C++
#pragma once

#include <Nerve/alActorStateBase.h>
#include <math/seadVector.h>

class EnemyStateHipDropDownParam;

class EnemyStateHipDropDown : public al::ActorStateBase
{
private:
        EnemyStateHipDropDownParam* mParam;
        sead::Vector3f              _14;
        const char*                 mAnimName;
        void*                       _24;
        void*                       _28;

public:
        EnemyStateHipDropDown( al::LiveActor* host, EnemyStateHipDropDownParam* blowDownParam, const char*, int );
};
```


