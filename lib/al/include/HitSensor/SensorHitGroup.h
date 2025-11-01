#pragma once

#include <container/seadPtrArray.h>
#include <HitSensor/HitSensor.h>

namespace al {

class SensorHitGroup {
    sead::PtrArray<HitSensor> mSensors;

public:
    SensorHitGroup(int, const char* name /* unused */);

    void add(HitSensor* sensor);
    void remove(HitSensor* sensor);
};

}  // namespace al
