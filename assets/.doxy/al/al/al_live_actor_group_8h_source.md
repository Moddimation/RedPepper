

# File alLiveActorGroup.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alLiveActorGroup.h**](al_live_actor_group_8h.md)

[Go to the documentation of this file](al_live_actor_group_8h.md)


```C++
#pragma once

#include <LiveActor/alLiveActor.h>
#include <container/seadPtrArray.h>

namespace al
{

class LiveActorGroup
{
private:
        const char* const         mName;
        sead::PtrArray<LiveActor> mActors;

public:
        void killAll();
        void makeActorDeadAll();

        template <typename T>
        sead::PtrArray<T>& getArray()
        {
                return reinterpret_cast<sead::PtrArray<T>&>( mActors );
        }

public:
        virtual void registerActor( LiveActor* actor );

public:
        LiveActorGroup( const char* name, int bufSize );
};

} // namespace al
```


