

# File alCollisionDirector.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Collision**](dir_daad28a749e3ab92bb0c1d2c973a5ea4.md) **>** [**alCollisionDirector.h**](alCollisionDirector_8h.md)

[Go to the documentation of this file](alCollisionDirector_8h.md)


```C++
#pragma once

#include <Execute/alExecuteDirector.h>

namespace al
{

class CollisionDirector : public IUseExecutor
{
private:
        void* _4;
        int   _8;
        int   _C;
        void* _10;
        void* _14;
        void* _18;

public:
        void endInit();

public:
        virtual void execute();

public:
        CollisionDirector();
};

} // namespace al
```


