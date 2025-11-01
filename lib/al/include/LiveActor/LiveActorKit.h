#pragma once

#include <Clipping/ClippingDirector.h>
#include <Collision/CollisionDirector.h>
#include <Effect/EffectSystem.h>
#include <Execute/ExecuteDirector.h>
#include <Fog/FogDirector.h>
#include <LiveActor/HitSensorDirector.h>
#include <LiveActor/LiveActorGroup.h>

namespace al {

class LiveActorKit {
    int mAllActorsBufferSize;
    ExecuteDirector* mExecuteDirector;
    EffectSystem* mEffectSystem;
    void* _C;
    void* _10;
    FogDirector* mFogDirector;
    void* _18;
    void* _1C;
    void* _20;
    ClippingDirector* mClippingDirector;
    CollisionDirector* mCollisionDirector;
    HitSensorDirector* mHitSensorDirector;
    void* _30;
    void* _34;
    void* _38;
    LiveActorGroup* mAllActors;
    void* _40;

public:
    LiveActorKit(int groupBufSize);

    void update();

    void endInit();

    ClippingDirector* getClippingDirector() const { return mClippingDirector; }

    ExecuteDirector* getExecuteDirector() const { return mExecuteDirector; }

    LiveActorGroup* getAllActors() const { return mAllActors; }
};

void initLiveActorKit(LiveActorKit* kit);
LiveActorKit* getLiveActorKit();

void executeDraw(const LiveActorKit* kit, const char*);
void executeDrawList(const LiveActorKit* kit, const char*, const char*);

}  // namespace al
