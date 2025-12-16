

# File alCameraParamVision.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Camera**](dir_942a7c2423887abbe5cffb190a8648dc.md) **>** [**alCameraParamVision.h**](al_camera_param_vision_8h.md)

[Go to the documentation of this file](al_camera_param_vision_8h.md)


```C++
#pragma once

namespace al
{

class ByamlIter;

class CameraParamVision
{
private:
        float mFovyDegree;
        float mStereovisionDistance;
        float mStereovisionDepth;
        float mNearClipDistance;
        float mFarClipDistance;

public:
        bool init( const ByamlIter* ticket );

public:
        CameraParamVision();
};

} // namespace al
```


