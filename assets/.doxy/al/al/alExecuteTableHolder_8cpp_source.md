

# File alExecuteTableHolder.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Execute**](dir_fb15b02cfb858dccf4e26d2c6768859c.md) **>** [**alExecuteTableHolder.cpp**](alExecuteTableHolder_8cpp.md)

[Go to the documentation of this file](alExecuteTableHolder_8cpp.md)


```C++
#include <Execute/alExecuteRequestKeeper.h>
#include <Execute/alExecuteTableHolder.h>
#include <LiveActor/alActorExecuteInfo.h>
#include <LiveActor/alLiveActor.h>
#include <LiveActor/alLiveActorKit.h>

namespace al
{

void registerExecutorUser( IUseExecutor* p, const char* name )
{
        al::getLiveActorKit()->getExecuteDirector()->registerUser( p, name );
}

void registerExecutorFunctor( const FunctorBase& base, const char* name )
{
        al::getLiveActorKit()->getExecuteDirector()->registerFunctor( base, name );
}

void registerExecutorFunctorDraw( const FunctorBase& base, const char* name )
{
        al::getLiveActorKit()->getExecuteDirector()->registerFunctorDraw( base, name );
}

} // namespace al

namespace alActorSystemFunction
{

void addToExecutorMovement( al::LiveActor* actor )
{
        actor->getActorExecuteInfo()->getRequestKeeper()->request( actor, 0 );
}

} // namespace alActorSystemFunction
```


