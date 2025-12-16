

# File alClippingDirector.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Clipping**](dir_3c3a2accc795922a76b28cad841041ad.md) **>** [**alClippingDirector.h**](al_clipping_director_8h.md)

[Go to the documentation of this file](al_clipping_director_8h.md)


```C++
#pragma once
#include <Execute/alExecuteDirector.h>

namespace al
{
class ClippingActorHolder;

class ClippingDirector : public IUseExecutor
{
private:
        int                  _4;
        ClippingActorHolder* mClippingActorHolder;
        void*                _C;
        void*                _10;

public:
        void endInit();

        ClippingActorHolder* getClippingActorHolder()
        {
                return mClippingActorHolder;
        }

public:
        virtual void execute();

public:
        ClippingDirector( int );
};

} // namespace al
```


