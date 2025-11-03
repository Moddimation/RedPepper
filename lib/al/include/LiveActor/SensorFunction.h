#pragma once

#include <HitSensor/HitSensor.h>
#include <LiveActor/LiveActor.h>

namespace alSensorFunction
{

al::SensorType findSensorTypeByName( const char* name );
void           updateHitSensorsAll( al::LiveActor* actor );

} // namespace alSensorFunction
