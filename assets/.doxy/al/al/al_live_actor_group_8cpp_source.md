

# File alLiveActorGroup.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**LiveActor**](dir_a1d892c08cc8ccf4e69e81fa9f5f26fe.md) **>** [**alLiveActorGroup.cpp**](al_live_actor_group_8cpp.md)

[Go to the documentation of this file](al_live_actor_group_8cpp.md)


```C++
#include <LiveActor/alLiveActorGroup.h>

namespace al
{

#ifdef NON_MATCHING
LiveActorGroup::LiveActorGroup( const char* name, int bufSize )
    : mName( name )
{
        mActors.allocBufferInline( bufSize );
}
#endif

void LiveActorGroup::registerActor( LiveActor* actor )
{
        mActors.pushBack( actor );
}

void LiveActorGroup::killAll()
{
        for ( int i = 0; i < mActors.size(); i++ )
                mActors.unsafeAt( i )->kill();
}

void LiveActorGroup::makeActorDeadAll()
{
        for ( int i = 0; i < mActors.size(); i++ )
                mActors.unsafeAt( i )->makeActorDead();
}

} // namespace al
```


