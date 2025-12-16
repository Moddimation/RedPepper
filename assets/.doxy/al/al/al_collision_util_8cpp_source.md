

# File alCollisionUtil.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Collision**](dir_16a613e26ad8256b29c46c5e8ae88338.md) **>** [**alCollisionUtil.cpp**](al_collision_util_8cpp.md)

[Go to the documentation of this file](al_collision_util_8cpp.md)


```C++
#include <Collision/alCollider.h>
#include <Collision/alCollisionUtil.h>
#include <LiveActor/alLiveActor.h>

namespace al
{

bool isCollidedGround( const LiveActor* actor )
{
        return actor->getCollider()->getGroundDistance() >= 0;
}

} // namespace al
```


