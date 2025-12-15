

# File alSensorHitGroup.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**HitSensor**](dir_e59aa8918f8e121ea32de5410bcbf3b5.md) **>** [**alSensorHitGroup.cpp**](alSensorHitGroup_8cpp.md)

[Go to the documentation of this file](alSensorHitGroup_8cpp.md)


```C++
#include <HitSensor/alSensorHitGroup.h>

namespace al
{

void SensorHitGroup::add( HitSensor* sensor )
{
        mSensors.pushBack( sensor );
}

} // namespace al
```


