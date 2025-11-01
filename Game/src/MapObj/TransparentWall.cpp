#include "MapObj/TransparentWall.h"
#include <LiveActor/ActorInitUtil.h>
#include <LiveActor/LiveActorFunction.h>
#include <Placement/PlacementFunction.h>
#include <Stage/StageSwitchKeeper.h>

TransparentWall::TransparentWall(const sead::SafeString& name) : MapObjActor(name) {}

void TransparentWall::init(const al::ActorInitInfo& info) {
    if (al::isObjectName(info, "TransparentWallMoveLimit"))
        al::initActorWithArchiveName(this, info, "TransparentWall", "MoveLimit");
    else
        al::initActor(this, info);
    al::initStageSwitchAppear(this, info);
    al::trySyncStageSwitchAppear(this);
    al::initStageSwitchKill(this, info);
    al::trySyncStageSwitchKill(this);
}

void TransparentWall::makeActorDead() {
    LiveActor::makeActorDead();
}
