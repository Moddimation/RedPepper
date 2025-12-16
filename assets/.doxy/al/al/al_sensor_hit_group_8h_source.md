

# File alSensorHitGroup.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**HitSensor**](dir_6d26e8075d2a27d9c00cef447b473cb8.md) **>** [**alSensorHitGroup.h**](al_sensor_hit_group_8h.md)

[Go to the documentation of this file](al_sensor_hit_group_8h.md)


```C++
#pragma once

#include <HitSensor/alHitSensor.h>
#include <container/seadPtrArray.h>

namespace al
{

class SensorHitGroup
{
private:
        sead::PtrArray<HitSensor> mSensors;

public:
        void add( HitSensor* sensor );
        void remove( HitSensor* sensor );

public:
        SensorHitGroup( int, const char* name /* unused */ );
};

} // namespace al
```


