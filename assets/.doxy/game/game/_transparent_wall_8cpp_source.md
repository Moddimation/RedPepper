

# File TransparentWall.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**MapObj**](dir_9fb1f6495822aa302d379b21d455a7ad.md) **>** [**TransparentWall.cpp**](_transparent_wall_8cpp.md)

[Go to the documentation of this file](_transparent_wall_8cpp.md)


```C++
#include "MapObj/TransparentWall.h"

#include <LiveActor/alActorInitUtil.h>
#include <LiveActor/alLiveActorFunction.h>
#include <Placement/alPlacementFunction.h>
#include <Stage/alStageSwitchKeeper.h>

TransparentWall::TransparentWall( const sead::SafeString& name ) : MapObjActor( name )
{
}

void TransparentWall::init( const al::ActorInitInfo& info )
{
        if ( al::isObjectName( info, "TransparentWallMoveLimit" ) )
                al::initActorWithArchiveName( this, info, "TransparentWall", "MoveLimit" );
        else
                al::initActor( this, info );
        al::initStageSwitchAppear( this, info );
        al::trySyncStageSwitchAppear( this );
        al::initStageSwitchKill( this, info );
        al::trySyncStageSwitchKill( this );
}

void TransparentWall::makeActorDead()
{
        LiveActor::makeActorDead();
}
```


