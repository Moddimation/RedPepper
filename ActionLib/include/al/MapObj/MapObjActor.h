#pragma once

#include <sead/prim/seadSafeString.h>
#include "al/LiveActor/LiveActor.h"

namespace al {

class MapObjActor : public al::LiveActor {
public:
    MapObjActor(const sead::SafeString& name);
};

}  // namespace al
