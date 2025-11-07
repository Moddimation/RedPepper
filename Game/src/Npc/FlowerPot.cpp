#include "MapObj/FlowerPot.h"

#include <LiveActor/ActorInitUtil.h>
#include <LiveActor/LiveActorFunction.h>
#include <Nerve/Nerve.h>
#include <Nerve/NerveFunction.h>

namespace NrvFlowerPot
{

NERVE_DEF( FlowerPot, Wait );

} // namespace NrvFlowerPot

FlowerPot::FlowerPot( const sead::SafeString& name ) : MapObjActor( name )
{
}

void FlowerPot::init( const al::ActorInitInfo& info )
{
        al::initActorWithArchiveName( this, info, "FlowerPot" );
        al::initNerve( this, &NrvFlowerPot::Wait );
        makeActorAppeared();
}

void FlowerPot::exeWait()
{
}
