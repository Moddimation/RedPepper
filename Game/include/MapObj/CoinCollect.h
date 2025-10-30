#pragma once

#include "al/MapObj/MapObjActor.h"

class Coin : public al::MapObjActor {
    void* _60;
    void* _64;
    sead::Vector3f _68;
    sead::Quatf _74;
    int mCoinNo;
    float _88;
    float _8C;
    sead::Vector3f _90;
    bool _9C;
    sead::Vector3f _A0;
    sead::Vector3f _AC;

public:
    Coin(const sead::SafeString& name);

    virtual void init(const al::ActorInitInfo& info);
    virtual void initAfterPlacement();
    virtual void makeActorAppeared();
    virtual bool receiveMsg(u32 msg, al::HitSensor* other, al::HitSensor* me);
};
