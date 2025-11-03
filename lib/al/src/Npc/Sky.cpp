#include <Camera/Camera.h>
#include <LiveActor/ActorInitUtil.h>
#include <LiveActor/LiveActorFunction.h>
#include <Npc/Sky.h>
#include <Stage/StageSwitchKeeper.h>

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
