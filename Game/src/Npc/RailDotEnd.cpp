#include "MapObj/RailDotEnd.h"
#include <LiveActor/ActorInitUtil.h>
#include <LiveActor/LiveActorFunction.h>
#include <Nerve/NerveFunction.h>

namespace NrvRailDotEnd {

NERVE_DEF(RailDotEnd, Wait);

}  // namespace NrvRailDotEnd

RailDotEnd::RailDotEnd(const sead::SafeString& name) : MapObjActor(name) {}

void RailDotEnd::init(const al::ActorInitInfo& info) {
    al::initActorWithArchiveName(this, info, "RailDotEnd");
    al::initNerve(this, &NrvRailDotEnd::Wait);
    makeActorAppeared();
}

void RailDotEnd::exeWait() {}
