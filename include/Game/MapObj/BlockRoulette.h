#pragma once

#include "al/MapObj/MapObjActor.h"

class BlockRoulette : public al::MapObjActor {
    int _60;
    int _64;

public:
    BlockRoulette(const sead::SafeString& name);

    virtual void init(const al::ActorInitInfo& info);
    virtual bool receiveMsg(u32 msg, al::HitSensor* other, al::HitSensor* me);
};
