

# File alCameraDashAngleTunerParam.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Camera**](dir_aa037a0803ca7f431ea7e9415985df05.md) **>** [**alCameraDashAngleTunerParam.cpp**](al_camera_dash_angle_tuner_param_8cpp.md)

[Go to the documentation of this file](al_camera_dash_angle_tuner_param_8cpp.md)


```C++
#include <Camera/alCameraDashAngleTunerParam.h>
#include <Yaml/alByamlIter.h>

namespace al
{

CameraDashAngleTunerParam::CameraDashAngleTunerParam() : mAddAngleMax( 15 ), mZoomOutOffsetMax( 200 )
{
}

void CameraDashAngleTunerParam::init( const ByamlIter* ticket )
{
        ByamlIter h;
        ticket->tryGetIterByKey( &h, "DashAngleTuner" );
        h.tryGetFloatByKey( &mAddAngleMax, "AddAngleMax" );
        h.tryGetFloatByKey( &mZoomOutOffsetMax, "ZoomOutOffsetMax" );
}

} // namespace al
```


