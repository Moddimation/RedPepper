

# File alLiveActorKit.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**LiveActor**](dir_a1d892c08cc8ccf4e69e81fa9f5f26fe.md) **>** [**alLiveActorKit.cpp**](alLiveActorKit_8cpp.md)

[Go to the documentation of this file](alLiveActorKit_8cpp.md)


```C++
#include <Clipping/alClippingDirector.h>
#include <Collision/alCollisionDirector.h>
#include <Effect/alEffectSystem.h>
#include <Execute/alExecuteDirector.h>
#include <Fog/alFogDirector.h>
#include <Functor/alFunctorV0F.h>
#include <LiveActor/alLiveActorGroup.h>
#include <LiveActor/alLiveActorKit.h>
#include <System/Application.h>

namespace al
{

LiveActorKit::LiveActorKit( int groupBufSize )
    : mAllActorsBufferSize( groupBufSize ), mExecuteDirector( nullptr ), mEffectSystem( nullptr ),
      _C( nullptr ), _10( nullptr ), mFogDirector( nullptr ), _18( nullptr ), _1C( nullptr ), _20( nullptr ),
      mClippingDirector( nullptr ), mCollisionDirector( nullptr ), mHitSensorDirector( nullptr ),
      _30( nullptr ), _34( nullptr ), _38( nullptr ), mAllActors( nullptr ), _40( nullptr )
{
        mAllActors = new LiveActorGroup( "全てのアクター", mAllActorsBufferSize );
}

extern "C" void FUN_00240350();
extern "C" void FUN_001e8a64();

extern "C" void FUN_001cc9b0( const char*, const FunctorV0F& );

#ifdef NON_MATCHING

// loop is weird
void LiveActorKit::endInit()
{
        FUN_001cc9b0( "プレイヤー影ボリュームのフィル", FunctorV0F( FUN_00240350 ) );
        FUN_001cc9b0( "影ボリュームのフィル", FunctorV0F( FUN_001e8a64 ) );
        mEffectSystem->startScene();
        mExecuteDirector->createExecutorListTable();
        mCollisionDirector->endInit();
        mFogDirector->endInit();
        mClippingDirector->endInit();
        sead::PtrArray<LiveActor> actors = mAllActors->getArray<LiveActor>();
        for ( int i = 0; i < actors.size(); i++ )
                actors[ i ]->initAfterPlacement();
}
#endif

void initLiveActorKit( LiveActorKit* kit )
{
        al::getApplication()->setLiveActorKit( kit );
}

LiveActorKit* getLiveActorKit()
{
        return al::getApplication()->getLiveActorKit();
}

} // namespace al
```


