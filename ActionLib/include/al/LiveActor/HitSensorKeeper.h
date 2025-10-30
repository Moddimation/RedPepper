#pragma once

#include <sead/container/seadPtrArray.h>
#include "al/HitSensor/HitSensor.h"

namespace al {

class HitSensorKeeper {
    sead::PtrArray<HitSensor> mSensors;

public:
    void attackSensor();
    void validate();
    void invalidate();
    void validateBySystem();
    void invalidateBySystem();

    void update();

    HitSensor* getSensor(const char* name) const;
};

}  // namespace al
