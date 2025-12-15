

# File alRailFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Rail**](dir_dcbdfe72f8ed7a79f51cb2b45d87cb5e.md) **>** [**alRailFunction.h**](alRailFunction_8h.md)

[Go to the documentation of this file](alRailFunction_8h.md)


```C++
#pragma once

namespace al
{
class LiveActor;

void setSyncRailToStart( LiveActor* actor );

const sead::Vector3f& getRailDir( const LiveActor* actor );
bool                  isRailReachedGoal( const LiveActor* actor );

void moveSyncRail( LiveActor* actor, float speed );
void moveSyncRailTurn( LiveActor* actor, float speed );
void moveSyncRailLoop( LiveActor* actor, float speed );

bool isLoopRail( const LiveActor* actor );
bool isExistRail( const LiveActor* actor );

} // namespace al
```


