

# File AquariumSwimDebris.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Npc**](dir_64a0e2f7a0313c69ba4a60b61c5e9cf0.md) **>** [**AquariumSwimDebris.cpp**](_aquarium_swim_debris_8cpp.md)

[Go to the documentation of this file](_aquarium_swim_debris_8cpp.md)


```C++
#include "MapObj/AquariumSwimDebris.h"

#include <LiveActor/alActorActionKeeper.h>
#include <LiveActor/alActorInitUtil.h>
#include <LiveActor/alLiveActorFunction.h>
#include <Nerve/alNerve.h>
#include <Nerve/alNerveFunction.h>
#include <Placement/alPlacementFunction.h>
#include <Stage/alStageSwitchKeeper.h>

namespace NrvAquariumSwimDebris
{

NERVE_DEF( AquariumSwimDebris, Appear );

} // namespace NrvAquariumSwimDebris

AquariumSwimDebris::AquariumSwimDebris( const sead::SafeString& name ) : MapObjActor( name )
{
}

void AquariumSwimDebris::init( const al::ActorInitInfo& info )
{
        al::initActorWithArchiveName( this, info, "AquariumSwimDebris", nullptr );
        al::initNerve( this, &NrvAquariumSwimDebris::Appear, 1 );
        al::initStageSwitchAppear( this, info );
        al::trySyncStageSwitchAppear( this );
}

void AquariumSwimDebris::exeAppear()
{
        if ( al::isFirstStep( this ) )
                al::startHitReaction( this, "出現" );
}
```


