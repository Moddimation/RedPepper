

# File alHitSensorFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alHitSensorFunction.h**](al_hit_sensor_function_8h.md)

[Go to the documentation of this file](al_hit_sensor_function_8h.md)


```C++
#pragma once

namespace al
{
class HitSensor;

bool isSensorName( HitSensor* sensor, const char* name );

bool isSensorPlayer( const HitSensor* sensor );
bool isSensorRide( const HitSensor* sensor );
bool isSensorEnemy( const HitSensor* sensor );
bool isSensorEnemyBody( const HitSensor* sensor );
bool isSensorEnemyAttack( const HitSensor* sensor );
bool isSensorSimple( const HitSensor* sensor );
bool isSensorMapObj( const HitSensor* sensor );

} // namespace al
```


