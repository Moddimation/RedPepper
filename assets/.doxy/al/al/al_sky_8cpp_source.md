

# File alSky.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Npc**](dir_994dea9abcb19dadec18cd5397f88175.md) **>** [**alSky.cpp**](al_sky_8cpp.md)

[Go to the documentation of this file](al_sky_8cpp.md)


```C++
#include <Camera/alCamera.h>
#include <LiveActor/alActorInitUtil.h>
#include <LiveActor/alActorPoseKeeper.h>
#include <LiveActor/alLiveActorFunction.h>
#include <Npc/alSky.h>
#include <Stage/alStageSwitchKeeper.h>

namespace al
{

Sky::Sky( const char* name ) : MapObjActor( name ), mCameraTransPtr( nullptr )
{
}

void Sky::init( const ActorInitInfo& info )
{
        initActor( this, info );
        initStageSwitchAppear( this, info );
        mCameraTransPtr = al::getCameraPos();
        invalidateClipping( this );
        makeActorAppeared();
        trySyncStageSwitchAppear( this );
}

void Sky::calcAnim()
{
        setTrans( this, *mCameraTransPtr );
        LiveActor::calcAnim();
}

} // namespace al
```


