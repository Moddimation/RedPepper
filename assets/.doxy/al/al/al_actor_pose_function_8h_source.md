

# File alActorPoseFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alActorPoseFunction.h**](al_actor_pose_function_8h.md)

[Go to the documentation of this file](al_actor_pose_function_8h.md)


```C++
#pragma once

#include <LiveActor/alActorPoseKeeper.h>
#include <LiveActor/alLiveActor.h>
#include <math/seadMatrix.h>

class alActorPoseFunction
{
public:
        static void calcBaseMtx( sead::Matrix34f* out, const al::LiveActor* actor )
        {
                actor->mActorPoseKeeper->calcBaseMtx( out );
        }
};
```


