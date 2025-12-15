

# File alActorInitInfo.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alActorInitInfo.h**](alActorInitInfo_8h.md)

[Go to the documentation of this file](alActorInitInfo_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>
#include <prim/seadSafeString.h>

namespace al
{

class LiveActorKit;
class LayoutInitInfo;

class ActorInitInfo
{
public:
        const PlacementInfo* mPlacementInfo;
        void*                _4;
        void*                _8;
        void*                _C;
        void*                _10;
        int                  mViewId;

        ActorInitInfo();

        void initViewIdHost( const PlacementInfo* placement, const ActorInitInfo& hostInfo );
        void initViewIdSelf( const PlacementInfo* placement, const ActorInitInfo& hostInfo );

        void initNew( const PlacementInfo* placement, const ActorInitInfo& baseInfo );

        friend const PlacementInfo& getPlacementInfo( const ActorInitInfo& info );
};

inline const PlacementInfo& getPlacementInfo( const ActorInitInfo& info )
{
        return *info.mPlacementInfo;
}

void initActorInitInfo( ActorInitInfo* info, const PlacementInfo* placement, const LayoutInitInfo& layoutInfo, LiveActorKit* );

} // namespace al
```


