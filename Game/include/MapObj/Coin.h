#pragma once

#include "al/MapObj/MapObjActor.h"

class Coin : public al::MapObjActor {
    void* _60;
    int _64;
    int _68;
    int _6C;
    sead::Quatf _70;
    bool _80;
    bool _81;
    int _84;
    sead::Vector3f _88;
    sead::Vector3f _94;

public:
    Coin(const sead::SafeString& name);

    virtual void init(const al::ActorInitInfo& info);
    virtual void initAfterPlacement();
    virtual void makeActorAppeared();
    virtual void kill();
    virtual bool receiveMsg(u32 msg, al::HitSensor* other, al::HitSensor* me);

    virtual void v24();
    virtual void v25();
    virtual void v26();
};
