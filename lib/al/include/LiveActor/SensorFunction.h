#pragma once

#include <HitSensor/SensorType.h>

namespace al {
class LiveActor;
}

namespace alSensorFunction
{

al::SensorType findSensorTypeByName( const char* name );
void           updateHitSensorsAll( al::LiveActor* actor );

} // namespace alSensorFunction
