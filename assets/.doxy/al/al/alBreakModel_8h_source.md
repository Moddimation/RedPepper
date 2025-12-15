

# File alBreakModel.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Npc**](dir_89a97eda411c878094de43ee2373f834.md) **>** [**alBreakModel.h**](alBreakModel_8h.md)

[Go to the documentation of this file](alBreakModel_8h.md)


```C++
#pragma once

#include <LiveActor/alLiveActor.h>

namespace al
{

class BreakModel : public LiveActor
{
private:
        LiveActor*             mParent;
        const sead::Matrix34f* mParentBaseMtx;
        const char*            mModelArchiveName;
        const char*            mBreakActionName;

public:
        void exeWait();
        void exeBreak();

public:
        virtual void init( const ActorInitInfo& info );
        virtual void appear();

public:
        BreakModel( LiveActor* parent, const char* name, const char* modelArchiveName, const sead::Matrix34f* parentBaseMtx = nullptr, const char* breakActionName = "Break" );
};

} // namespace al
```


