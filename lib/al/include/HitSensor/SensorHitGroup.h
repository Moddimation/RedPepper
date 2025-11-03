#pragma once

#include <HitSensor/HitSensor.h>
#include <container/seadPtrArray.h>

namespace al
{

class SensorHitGroup
{
        sead::PtrArray<HitSensor> mSensors;

public:
        SensorHitGroup( int, const char* name /* unused */ );

        void add( HitSensor* sensor );
        void remove( HitSensor* sensor );
};

} // namespace al
