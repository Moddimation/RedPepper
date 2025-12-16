

# File alRailFunction.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Rail**](dir_fab2149b85c7f2df5ff84a4f398bbead.md) **>** [**alRailFunction.cpp**](al_rail_function_8cpp.md)

[Go to the documentation of this file](al_rail_function_8cpp.md)


```C++
#include <LiveActor/alActorPoseKeeper.h>
#include <LiveActor/alLiveActor.h>
#include <Rail/alRailFunction.h>
#include <Rail/alRailKeeper.h>
#include <Rail/alRailRider.h>

namespace al
{

#ifdef NON_MATCHING
// 4 instructions scrambled at the end
void setSyncRailToStart( LiveActor* actor )
{
        actor->getRailKeeper()->getRailRider()->moveToRailStart();
        setTrans( actor, actor->getRailKeeper()->getRailRider()->getCurrentPos() );
}
#endif

const sead::Vector3f& getRailDir( const LiveActor* actor )
{
        return actor->getRailKeeper()->getRailRider()->getCurrentDir();
}

bool isRailReachedGoal( const LiveActor* actor )
{
        return actor->getRailKeeper()->getRailRider()->isReachedGoal();
}

bool isLoopRail( const LiveActor* actor )
{
        return actor->getRailKeeper()->getRailRider()->isLoop();
}

bool isExistRail( const LiveActor* actor )
{
        if ( actor->getRailKeeper() )
                return actor->getRailKeeper()->isExistRail();
        return false;
}

} // namespace al
```


