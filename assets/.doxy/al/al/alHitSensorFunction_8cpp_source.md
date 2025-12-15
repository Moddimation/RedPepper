

# File alHitSensorFunction.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**LiveActor**](dir_a1d892c08cc8ccf4e69e81fa9f5f26fe.md) **>** [**alHitSensorFunction.cpp**](alHitSensorFunction_8cpp.md)

[Go to the documentation of this file](alHitSensorFunction_8cpp.md)


```C++
#include <HitSensor/alHitSensor.h>
#include <LiveActor/alHitSensorFunction.h>
#include <Util/alStringUtil.h>

namespace al
{

bool isSensorName( HitSensor* sensor, const char* name )
{
        return isEqualString( sensor->getName(), name );
}

bool isSensorPlayer( const HitSensor* sensor )
{
        return sensor->getType() == SensorType_Player || sensor->getType() == SensorType_PlayerFireBall;
}

bool isSensorRide( const HitSensor* sensor )
{
        return sensor->getType() == SensorType_Ride;
}

bool isSensorEnemy( const HitSensor* sensor )
{
        return sensor->getType() == SensorType_Enemy || sensor->getType() == SensorType_EnemyBody ||
               sensor->getType() == SensorType_EnemyAttack ||
               sensor->getType() == SensorType_KillerMagnum || sensor->getType() == SensorType_Dossun;
}

bool isSensorEnemyBody( const HitSensor* sensor )
{
        return sensor->getType() == SensorType_EnemyBody;
}

bool isSensorEnemyAttack( const HitSensor* sensor )
{
        return sensor->getType() == SensorType_EnemyAttack;
}

bool isSensorSimple( const HitSensor* sensor )
{
        return sensor->getType() == SensorType_EnemySimple ||
               sensor->getType() == SensorType_MapObjSimple || sensor->getType() == SensorType_Bindable;
}

bool isSensorMapObj( const HitSensor* sensor )
{
        return sensor->getType() == SensorType_MapObj;
}

} // namespace al
```


