

# File PeachRope.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Npc**](dir_64a0e2f7a0313c69ba4a60b61c5e9cf0.md) **>** [**PeachRope.cpp**](_peach_rope_8cpp.md)

[Go to the documentation of this file](_peach_rope_8cpp.md)


```C++
#include "MapObj/PeachRope.h"

#include <LiveActor/alActorActionKeeper.h>
#include <LiveActor/alActorInitUtil.h>
#include <LiveActor/alLiveActorFunction.h>

PeachRope::PeachRope( const sead::SafeString& name ) : MapObjActor( name )
{
}

void PeachRope::init( const al::ActorInitInfo& info )
{
        al::initActorWithArchiveName( this, info, "PeachRope" );
        makeActorAppeared();
}

void PeachRope::kill()
{
        al::startHitReactionDeath( this );
        LiveActor::kill();
}
```


