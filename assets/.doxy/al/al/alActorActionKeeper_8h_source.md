

# File alActorActionKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alActorActionKeeper.h**](alActorActionKeeper_8h.md)

[Go to the documentation of this file](alActorActionKeeper_8h.md)


```C++
#pragma once

namespace al
{

class ActionAnimCtrl;

class LiveActor;

class ActorActionKeeper
{
private:
        void*           _0;
        void*           _4;
        ActionAnimCtrl* mActionAnimCtrl;

public:
        void tryStartActionNoAnim( const char* name );
};

void startHitReaction( const LiveActor* actor, const char* name );

#define AL_LIVEACTOR_REACTION( TYPE ) void startHitReaction##TYPE( const LiveActor* actor );

AL_LIVEACTOR_REACTION( Appear )
AL_LIVEACTOR_REACTION( Disappear )
AL_LIVEACTOR_REACTION( PressDown )
AL_LIVEACTOR_REACTION( Death )
AL_LIVEACTOR_REACTION( Hit )
AL_LIVEACTOR_REACTION( BlowHit )
AL_LIVEACTOR_REACTION( Break )
AL_LIVEACTOR_REACTION( Start )
AL_LIVEACTOR_REACTION( End )
AL_LIVEACTOR_REACTION( OnGround )
AL_LIVEACTOR_REACTION( Get )

#undef AL_LIVEACTOR_REACTION

} // namespace al
```


