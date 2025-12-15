

# File alSubActorFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alSubActorFunction.h**](alSubActorFunction_8h.md)

[Go to the documentation of this file](alSubActorFunction_8h.md)


```C++
#pragma once

namespace al
{
class SubActorKeeper;
}

class alSubActorFunction
{
public:
        static void trySyncAlive( al::SubActorKeeper* p );
        static void trySyncDead( al::SubActorKeeper* p );

        static void trySyncClippingStart( al::SubActorKeeper* p );
        static void trySyncClippingEnd( al::SubActorKeeper* p );

        static void tryCalcAnim( al::SubActorKeeper* p );
};
```


