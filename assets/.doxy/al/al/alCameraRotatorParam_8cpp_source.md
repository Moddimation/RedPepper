

# File alCameraRotatorParam.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Camera**](dir_aa037a0803ca7f431ea7e9415985df05.md) **>** [**alCameraRotatorParam.cpp**](alCameraRotatorParam_8cpp.md)

[Go to the documentation of this file](alCameraRotatorParam_8cpp.md)


```C++
#include <Camera/alCameraRotatorParam.h>
#include <Yaml/alByamlIter.h>

namespace al
{

CameraRotatorParam::CameraRotatorParam() : mAngleMax( 30 )
{
}

void CameraRotatorParam::init( const ByamlIter* ticket )
{
        ByamlIter h;
        ticket->tryGetIterByKey( &h, "Rotator" );
        h.tryGetFloatByKey( &mAngleMax, "AngleMax" );
}

} // namespace al
```


