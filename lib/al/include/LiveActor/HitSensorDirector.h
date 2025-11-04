#pragma once

#include <Execute/ExecuteDirector.h>

namespace al
{
class SensorHitGroup;

class HitSensorDirector : public IUseExecutor
{
private:
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
