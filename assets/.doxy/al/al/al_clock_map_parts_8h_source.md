

# File alClockMapParts.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**MapObj**](dir_5a48fe64d9a05f0fc2bfb06a871cd856.md) **>** [**alClockMapParts.h**](al_clock_map_parts_8h.md)

[Go to the documentation of this file](al_clock_map_parts_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

namespace al
{

class ClockMapParts : public MapObjActor
{
private:
        sead::Quatf _60;
        int         _70;
        float       _74;
        int         _78;
        int         _7C;
        int         _80;

public
        void exeStandBy();
        void exeRotateSign();
        void exeRotate();
        void exeWait();

public:
        virtual void init( const ActorInitInfo& info );

public:
        ClockMapParts( const sead::SafeString& name );
};

} // namespace al
```


