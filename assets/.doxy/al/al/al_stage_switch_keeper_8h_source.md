

# File alStageSwitchKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Stage**](dir_c5a1413f15ee14dcd95f457cd353067b.md) **>** [**alStageSwitchKeeper.h**](al_stage_switch_keeper_8h.md)

[Go to the documentation of this file](al_stage_switch_keeper_8h.md)


```C++
#pragma once

namespace al
{
class FunctorBase;
class ActorInitInfo;
class StageSwitchAccesser;

class StageSwitchKeeper
{
private:
        StageSwitchAccesser* mSwitches;
        int                  mSwitchCount;

public:
        StageSwitchAccesser* getStageSwitchAccesser( int type );

public:
        StageSwitchKeeper();
};

class IUseStageSwitch
{
public:
        virtual StageSwitchKeeper* getStageSwitchKeeper() const = 0;
        virtual void               initStageSwitchKeeper()      = 0;
};

void initStageSwitchAppear( IUseStageSwitch* p, const ActorInitInfo& info );
void initStageSwitchKill( IUseStageSwitch* p, const ActorInitInfo& info );
void initStageSwitchA( IUseStageSwitch* p, const ActorInitInfo& info );
void initStageSwitchB( IUseStageSwitch* p, const ActorInitInfo& info );

bool isOnSwitchA( IUseStageSwitch* p );

bool listenStageSwitchOnAppear( IUseStageSwitch* p, const FunctorBase& onFunctor, const FunctorBase& offFunctor );

} // namespace al
```


