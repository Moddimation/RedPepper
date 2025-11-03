#pragma once

#include <Execute/ExecuteDirector.h>
#include <HitSensor/SensorHitGroup.h>

namespace al
{

class HitSensorDirector : public IUseExecutor
{
        SensorHitGroup* mPlayerHitGroup;
        SensorHitGroup* mRideHitGroup;
        SensorHitGroup* mEyeHitGroup;
        SensorHitGroup* mSimpleHitGroup;
        SensorHitGroup* mMapObjHitGroup;
        SensorHitGroup* mCharacterHitGroup;

public:
        HitSensorDirector();
};

} // namespace al
