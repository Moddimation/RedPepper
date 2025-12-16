

# File alEffectObj.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Npc**](dir_994dea9abcb19dadec18cd5397f88175.md) **>** [**alEffectObj.cpp**](al_effect_obj_8cpp.md)

[Go to the documentation of this file](al_effect_obj_8cpp.md)


```C++
#include <File/alFileFunction.h>
#include <LiveActor/alActorInitUtil.h>
#include <LiveActor/alActorPoseKeeper.h>
#include <LiveActor/alLiveActorFunction.h>
#include <Npc/alEffectObj.h>
#include <Placement/alPlacementFunction.h>
#include <Se/alSeFunction.h>
#include <Util/alStringUtil.h>

namespace al
{

#ifdef NON_MATCHING
// something with mBaseMtx
EffectObj::EffectObj( const sead::SafeString& name )
    : MapObjActor( name ), mBaseMtx( sead::Matrix34f::ident )
{
}
#endif

void EffectObj::init( const ActorInitInfo& info )
{
        const char* objectName = nullptr;
        tryGetObjectName( &objectName, info );
        EffectObjFunction::initActorEffectObj( this, info, objectName );
}

void EffectObj::makeActorAppeared()
{
        LiveActor::makeActorAppeared();
        makeMtxSRT( &mBaseMtx, this );
        emitEffect( this, "Wait", nullptr );
}

void EffectObj::kill()
{
        tryEmitEffect( this, "Wait" );
        LiveActor::kill();
}

const sead::Matrix34f* EffectObj::getBaseMtx() const
{
        return &mBaseMtx;
}

void EffectObj::control()
{
        makeMtxSRT( &mBaseMtx, this );
        tryStartSe( this, "Wait", 2 );
}

void EffectObjFunction::initActorEffectObj( EffectObj* actor, const ActorInitInfo& info, const char* objectName )
{
        if ( isExistArchive( StringTmp<128>( "ObjectData/%s.szs", objectName ) ) )
                initActor( actor, info );
        else
                initActorWithArchiveName( actor, info, "EffectObj" );
        initActorEffectKeeper( actor, info, objectName );
        makeMtxSRT( &actor->mBaseMtx, actor );
        trySyncStageSwitchAppear( actor );
}

} // namespace al
```


