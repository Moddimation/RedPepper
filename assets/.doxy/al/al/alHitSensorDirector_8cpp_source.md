

# File alHitSensorDirector.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**LiveActor**](dir_a1d892c08cc8ccf4e69e81fa9f5f26fe.md) **>** [**alHitSensorDirector.cpp**](alHitSensorDirector_8cpp.md)

[Go to the documentation of this file](alHitSensorDirector_8cpp.md)


```C++
#include <Execute/alExecuteTableHolder.h>
#include <HitSensor/alSensorHitGroup.h>
#include <LiveActor/alHitSensorDirector.h>

namespace al
{

HitSensorDirector::HitSensorDirector()
    : mPlayerHitGroup( nullptr ), mRideHitGroup( nullptr ), mEyeHitGroup( nullptr ),
      mSimpleHitGroup( nullptr ), mMapObjHitGroup( nullptr ), mCharacterHitGroup( nullptr )
{
        mPlayerHitGroup    = new SensorHitGroup( 16, "Player" );
        mRideHitGroup      = new SensorHitGroup( 128, "Ride" );
        mEyeHitGroup       = new SensorHitGroup( 512, "Eye" );
        mSimpleHitGroup    = new SensorHitGroup( 2048, "Simple" );
        mMapObjHitGroup    = new SensorHitGroup( 1024, "MapObj" );
        mCharacterHitGroup = new SensorHitGroup( 1024, "Character" );

        registerExecutorUser( this, "センサー" );
}

} // namespace al
```


