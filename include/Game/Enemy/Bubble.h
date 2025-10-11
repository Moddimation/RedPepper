#pragma once

#include "al/MapObj/MapObjActor.h"

class Bubble : public al::MapObjActor {
    int _60;
    int _64;
    void* _68;
    float _6C;
    float _70;
    sead::Vector3f _74;
    sead::Quatf _80;
    int _90;

public:
    Bubble(const sead::SafeString& name);

    virtual void init(const al::ActorInitInfo& info);
    virtual void attackSensor(al::HitSensor* me, al::HitSensor* other);
    virtual bool receiveMsg(u32 msg, al::HitSensor* other, al::HitSensor* me);
};
