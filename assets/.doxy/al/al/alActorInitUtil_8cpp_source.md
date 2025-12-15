

# File alActorInitUtil.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**LiveActor**](dir_a1d892c08cc8ccf4e69e81fa9f5f26fe.md) **>** [**alActorInitUtil.cpp**](alActorInitUtil_8cpp.md)

[Go to the documentation of this file](alActorInitUtil_8cpp.md)


```C++
#include <LiveActor/alActorInitInfo.h>
#include <LiveActor/alActorInitUtil.h>
#include <LiveActor/alLiveActor.h>
#include <Placement/alPlacementFunction.h>
#include <Util/alStringUtil.h>

namespace al
{

#pragma push
#pragma no_inline

#ifdef NON_MATCHING
static void initActorImpl( LiveActor* actor, const ActorInitInfo& info, const sead::SafeString& objectName, const sead::SafeString& archivePath, const char* suffix = nullptr )
{ // placeholder
}
#endif

#pragma pop

#ifdef NON_MATCHING

// SafeString construction backwards
void initActor( LiveActor* actor, const ActorInitInfo& info )
{
        const char* objectName = nullptr;
        tryGetObjectName( &objectName, info );
        initActorImpl( actor, info, objectName, StringTmp<256>( "ObjectData/%s", objectName ) );
}

// ???
void initActorWithArchiveName( LiveActor* actor, const ActorInitInfo& info, const sead::SafeString& archiveName, const char* suffix )
{
        initActorImpl( actor, info, archiveName.cstr(), StringTmp<256>( "ObjectData/%s", archiveName.cstr() ), suffix );
}
#endif

void initCreateActorNoPlacementInfo( LiveActor* actor, const ActorInitInfo& hostInfo )
{
        PlacementInfo placementInfo;
        ActorInitInfo info;
        info.initViewIdHost( &placementInfo, hostInfo );
        actor->init( info );
}

void initCreateActorWithPlacementInfo( LiveActor* actor, const ActorInitInfo& hostInfo )
{
        actor->init( hostInfo );
}

} // namespace al
```


