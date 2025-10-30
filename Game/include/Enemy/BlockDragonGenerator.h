#pragma once

#include "al/MapObj/MapObjActor.h"

class BlockDragonGenerator : public al::MapObjActor {
    u8 _60[0x60];

public:
    BlockDragonGenerator(const sead::SafeString& name);

    virtual void init(const al::ActorInitInfo& info);
    virtual void startClipped();
    virtual void endClipped();
};
