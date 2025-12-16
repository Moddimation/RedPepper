

# File alCamera.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Camera**](dir_aa037a0803ca7f431ea7e9415985df05.md) **>** [**alCamera.cpp**](al_camera_8cpp.md)

[Go to the documentation of this file](al_camera_8cpp.md)


```C++
#include <Camera/alCamera.h>
#include <Camera/alCameraDashAngleTunerParam.h>
#include <Camera/alCameraParamVision.h>
#include <Camera/alCameraRotatorParam.h>
#include <Yaml/alByamlIter.h>

namespace al
{

#ifdef NON_MATCHING
// vtable
Camera::Camera( const char* name )
    : mName( name ), _8( sead::Vector3f::zero ), mPos( sead::Vector3f( 0, 500, 500 ) ),
      mTarget( sead::Vector3f::ey ), _2C( sead::Vector3f::ey ), mInterpoleFrame( 30 ),
      mVisionParam( nullptr ), mDashAngleTunerParam( nullptr ), mUnknownParam( nullptr ),
      mRotatorParam( nullptr )
{
        mDashAngleTunerParam = new CameraDashAngleTunerParam;
        mUnknownParam        = new CameraUnknownParam;
        mRotatorParam        = new CameraRotatorParam;
}

#endif

void Camera::load( const al::ByamlIter* ticket )
{
        ticket->tryGetIntByKey( &mInterpoleFrame, "InterpoleFrame" );
        if ( mInterpoleFrame < 0 )
                mInterpoleFrame = 30;
        if ( ticket->isExistKey( "VisionParam" ) )
        {
                mVisionParam = new CameraParamVision;
                mVisionParam->init( ticket );
        }
        mDashAngleTunerParam->init( ticket );
        mRotatorParam->init( ticket );
}

void Camera::v1()
{
}

void Camera::v2()
{
}

void Camera::v3()
{
}

void Camera::v4()
{
}

void Camera::v5()
{
}

void Camera::calc()
{
}

void Camera::v7()
{
}

} // namespace al
```


