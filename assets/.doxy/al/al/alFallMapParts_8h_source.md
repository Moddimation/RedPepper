

# File alFallMapParts.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**MapObj**](dir_5a48fe64d9a05f0fc2bfb06a871cd856.md) **>** [**alFallMapParts.h**](alFallMapParts_8h.md)

[Go to the documentation of this file](alFallMapParts_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

namespace al
{

class FallMapParts : public MapObjActor
{
private:
        sead::Vector3f mStartTrans;
        int            mFallFrames;
        bool           _70;

public:
        void exeAppear();
        void exeWait();
        void exeFallSign();
        void exeFall();
        void exeEnd();

public:
        virtual void init( const ActorInitInfo& info );
        virtual bool receiveMsg( u32 msg, HitSensor* other, HitSensor* me );

public:
        FallMapParts( const sead::SafeString& name );
};

} // namespace al
```


