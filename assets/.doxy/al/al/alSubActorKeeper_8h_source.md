

# File alSubActorKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alSubActorKeeper.h**](alSubActorKeeper_8h.md)

[Go to the documentation of this file](alSubActorKeeper_8h.md)


```C++
#pragma once

#include <container/seadPtrArray.h>

class alSubActorFunction;

namespace al
{

class LiveActor;
class ActorInitInfo;

class SubActorKeeper
{
        friend class ::alSubActorFunction;

private:
        struct Entry
        {
                LiveActor* actor;
                void*      _4;
                u32        _8;
        };

        LiveActor* const      mParent;
        sead::PtrArray<Entry> mSubActors;

public:
        static SubActorKeeper* tryCreate( al::LiveActor* actor, const al::ActorInitInfo& info, const char*, int );

private:
        SubActorKeeper( al::LiveActor* actor, const al::ActorInitInfo& info, const char*, int );
};

} // namespace al
```


