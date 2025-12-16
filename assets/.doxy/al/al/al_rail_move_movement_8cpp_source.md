

# File alRailMoveMovement.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Rail**](dir_fab2149b85c7f2df5ff84a4f398bbead.md) **>** [**alRailMoveMovement.cpp**](al_rail_move_movement_8cpp.md)

[Go to the documentation of this file](al_rail_move_movement_8cpp.md)


```C++
#include <LiveActor/alActorInitInfo.h>
#include <Nerve/alNerve.h>
#include <Placement/alPlacementFunction.h>
#include <Rail/alRailFunction.h>
#include <Rail/alRailMoveMovement.h>

namespace al
{

namespace NrvRailMoveMovement
{

NERVE_DEF( RailMoveMovement, Move )

} // namespace NrvRailMoveMovement

#ifdef NON_MATCHING
// string
RailMoveMovement::RailMoveMovement( LiveActor* host, const ActorInitInfo& info, const char* speedParamName, const char* moveTypeParamName )
    : al::HostStateBase<al::LiveActor>( host, "レール移動挙動" ), mSpeed( 10 ), mMoveType( 0 )
{
        tryGetArg( &mSpeed, getPlacementInfo( info ), speedParamName );
        tryGetArg( (int*)&mMoveType, getPlacementInfo( info ), moveTypeParamName );
        if ( mMoveType >= 2 )
                mMoveType = 0;
        initNerve( &NrvRailMoveMovement::Move );
}
#endif

void RailMoveMovement::exeMove()
{
        if ( isExistRail( mHost ) )
        {
                if ( mMoveType == 0 )
                        moveSyncRail( mHost, mSpeed );
                else if ( mMoveType == 1 )
                        moveSyncRailTurn( mHost, mSpeed );
                else if ( mMoveType == 2 )
                        moveSyncRailLoop( mHost, mSpeed );
        }
}

} // namespace al
```


