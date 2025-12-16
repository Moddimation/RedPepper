

# File alRailMoveMovement.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Rail**](dir_dcbdfe72f8ed7a79f51cb2b45d87cb5e.md) **>** [**alRailMoveMovement.h**](al_rail_move_movement_8h.md)

[Go to the documentation of this file](al_rail_move_movement_8h.md)


```C++
#pragma once

#include <LiveActor/alLiveActor.h>
#include <Nerve/alHostStateBase.h>

namespace al
{

class RailMoveMovement : public HostStateBase<LiveActor>
{
private:
        float mSpeed;
        u32   mMoveType;

public:
        void exeMove();

public:
        RailMoveMovement( LiveActor* host, const ActorInitInfo& info, const char* speedParamName = "Arg0", const char* moveTypeParamName = "Arg1" );
};

} // namespace al
```


