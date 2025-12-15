

# File alCameraParamVision.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Camera**](dir_aa037a0803ca7f431ea7e9415985df05.md) **>** [**alCameraParamVision.cpp**](alCameraParamVision_8cpp.md)

[Go to the documentation of this file](alCameraParamVision_8cpp.md)


```C++
#include <Camera/alCameraParamVision.h>
#include <Yaml/alByamlIter.h>

namespace al
{

CameraParamVision::CameraParamVision()
{
        mNearClipDistance     = -1.0;
        mFarClipDistance      = -1.0;
        mFovyDegree           = 45.0;
        mStereovisionDistance = 200.0;
        mStereovisionDepth    = 1.0;
}

bool CameraParamVision::init( const ByamlIter* ticket )
{
        ByamlIter h;
        if ( ticket->tryGetIterByKey( &h, "VisionParam" ) )
        {
                h.tryGetFloatByKey( &mFovyDegree, "FovyDegree" );
                h.tryGetFloatByKey( &mStereovisionDistance, "StereovisionDistance" );
                h.tryGetFloatByKey( &mStereovisionDepth, "StereovisionDepth" );
                h.tryGetFloatByKey( &mNearClipDistance, "NearClipDistacne" );
                h.tryGetFloatByKey( &mFarClipDistance, "FarClipDistance" );
                return true;
        }
        return false;
}

} // namespace al
```


