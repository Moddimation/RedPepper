

# File alSubActorFunction.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**LiveActor**](dir_a1d892c08cc8ccf4e69e81fa9f5f26fe.md) **>** [**alSubActorFunction.cpp**](al_sub_actor_function_8cpp.md)

[Go to the documentation of this file](al_sub_actor_function_8cpp.md)


```C++
#include <LiveActor/alLiveActor.h>
#include <LiveActor/alLiveActorFunction.h>
#include <LiveActor/alSubActorFunction.h>
#include <LiveActor/alSubActorKeeper.h>

void alSubActorFunction::trySyncAlive( al::SubActorKeeper* p )
{
        for ( int i = 0; i < p->mSubActors.size(); i++ )
        {
                al::SubActorKeeper::Entry* subActor = p->mSubActors.unsafeAt( i );
                if ( subActor->_8 & 1 )
                        subActor->actor->makeActorAppeared();
        }
}

void alSubActorFunction::trySyncDead( al::SubActorKeeper* p )
{
        for ( int i = 0; i < p->mSubActors.size(); i++ )
        {
                al::SubActorKeeper::Entry* subActor = p->mSubActors.unsafeAt( i );
                if ( subActor->_8 & 1 )
                        subActor->actor->makeActorDead();
        }
}

void alSubActorFunction::trySyncClippingStart( al::SubActorKeeper* p )
{
        for ( int i = 0; i < p->mSubActors.size(); i++ )
        {
                al::SubActorKeeper::Entry* subActor = p->mSubActors.unsafeAt( i );
                if ( subActor->_8 & 2 && al::isAlive( subActor->actor ) && !al::isClipped( subActor->actor ) )
                        subActor->actor->startClipped();
        }
}

void alSubActorFunction::trySyncClippingEnd( al::SubActorKeeper* p )
{
        for ( int i = 0; i < p->mSubActors.size(); i++ )
        {
                al::SubActorKeeper::Entry* subActor = p->mSubActors.unsafeAt( i );
                if ( subActor->_8 & 2 && al::isAlive( subActor->actor ) && al::isClipped( subActor->actor ) )
                        subActor->actor->endClipped();
        }
}

void alSubActorFunction::tryCalcAnim( al::SubActorKeeper* p )
{
        for ( int i = 0; i < p->mSubActors.size(); i++ )
        {
                al::SubActorKeeper::Entry* subActor = p->mSubActors.unsafeAt( i );
                if ( subActor->_8 & 8 && al::isAlive( subActor->actor ) )
                        subActor->actor->calcAnim();
        }
}
```


