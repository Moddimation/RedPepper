

# File alCameraDashAngleTunerParam.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Camera**](dir_942a7c2423887abbe5cffb190a8648dc.md) **>** [**alCameraDashAngleTunerParam.h**](alCameraDashAngleTunerParam_8h.md)

[Go to the documentation of this file](alCameraDashAngleTunerParam_8h.md)


```C++
#pragma once

namespace al
{

class ByamlIter;

class CameraDashAngleTunerParam
{
private:
        float mAddAngleMax;
        float mZoomOutOffsetMax;

public:
        CameraDashAngleTunerParam();

        void init( const ByamlIter* ticket );
};

} // namespace al
```


