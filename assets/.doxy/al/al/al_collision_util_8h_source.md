

# File alCollisionUtil.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Collision**](dir_daad28a749e3ab92bb0c1d2c973a5ea4.md) **>** [**alCollisionUtil.h**](al_collision_util_8h.md)

[Go to the documentation of this file](al_collision_util_8h.md)


```C++
#pragma once

#include <math/seadMatrix.h>

namespace al
{
class LiveActor;

void syncCollisionMtx( LiveActor* actor, const sead::Matrix34f* );

bool isCollided( const LiveActor* actor );
bool isCollidedGround( const LiveActor* actor );
bool isCollidedWall( const LiveActor* actor );
bool isOnGround( const LiveActor* actor, u32 );

} // namespace al
```


