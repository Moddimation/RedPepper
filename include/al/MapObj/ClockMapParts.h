#pragma once

#include "al/MapObj/MapObjActor.h"

namespace al {

class ClockMapParts : public MapObjActor {
    sead::Quatf _60;
    int _70;
    float _74;
    int _78;
    int _7C;
    int _80;

public:
    ClockMapParts(const sead::SafeString& name);

    virtual void init(const ActorInitInfo& info);

    void exeStandBy();
    void exeRotateSign();
    void exeRotate();
    void exeWait();
};

} // namespace al
