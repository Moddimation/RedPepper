

# File alSensorFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alSensorFunction.h**](al_sensor_function_8h.md)

[Go to the documentation of this file](al_sensor_function_8h.md)


```C++
#pragma once

#include <HitSensor/alSensorType.h>

namespace al
{
class LiveActor;
}

namespace alSensorFunction
{

al::SensorType findSensorTypeByName( const char* name );
void           updateHitSensorsAll( al::LiveActor* actor );

} // namespace alSensorFunction
```


