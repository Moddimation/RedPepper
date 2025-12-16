

# File alClippingActorHolder.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Clipping**](dir_3c3a2accc795922a76b28cad841041ad.md) **>** [**alClippingActorHolder.h**](al_clipping_actor_holder_8h.md)

[Go to the documentation of this file](al_clipping_actor_holder_8h.md)


```C++
#pragma once

namespace al
{

class ClippingActorInfoList;
class LiveActor;

class ClippingActorHolder
{
private:
        int                    _0;
        int                    _4;
        ClippingActorInfoList* _8;
        ClippingActorInfoList* _C;
        ClippingActorInfoList* _10;
        ClippingActorInfoList* _14;

public:
        void invalidateClipping( LiveActor* actor );
        void validateClipping( LiveActor* actor );

public:
        ClippingActorHolder( int );
};

} // namespace al
```


