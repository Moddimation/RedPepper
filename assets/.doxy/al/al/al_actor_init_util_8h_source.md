

# File alActorInitUtil.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alActorInitUtil.h**](al_actor_init_util_8h.md)

[Go to the documentation of this file](al_actor_init_util_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>
#include <prim/seadSafeString.h>

namespace al
{
class LiveActor;
class ActorInitInfo;

void initActor( LiveActor* actor, const ActorInitInfo& info );
void initActorWithArchiveName( LiveActor* actor, const ActorInitInfo& info, const sead::SafeString& archiveName, const char* suffix = nullptr );
void initActorWithArchiveNameNoPlacementInfo( LiveActor* actor, const ActorInitInfo& info, const sead::SafeString& archiveName, const char* suffix = nullptr );
void initMapPartsActor( LiveActor* actor, const ActorInitInfo& info );

void initCreateActorNoPlacementInfo( LiveActor* actor, const ActorInitInfo& hostInfo );
void initCreateActorWithPlacementInfo( LiveActor* actor, const ActorInitInfo& hostInfo );

} // namespace al
```


