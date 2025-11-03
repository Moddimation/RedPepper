#include "MapObj/PeachRope.h"

#include <LiveActor/ActorActionKeeper.h>
#include <LiveActor/ActorInitUtil.h>
#include <LiveActor/LiveActorFunction.h>

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
