

# File alExecuteTableHolder.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Execute**](dir_7792e00636cd04400185f9ae07410562.md) **>** [**alExecuteTableHolder.h**](al_execute_table_holder_8h.md)

[Go to the documentation of this file](al_execute_table_holder_8h.md)


```C++
#pragma once

#include <Execute/alExecuteDirector.h>

namespace al
{

class LiveActor;

void registerExecutorUser( IUseExecutor* p, const char* name );
void registerExecutorFunctor( const FunctorBase& base, const char* name );
void registerExecutorFunctorDraw( const FunctorBase& base, const char* name );

} // namespace al

namespace alActorSystemFunction
{

void addToExecutorMovement( al::LiveActor* actor );
void removeFromExecutorDraw( al::LiveActor* actor );

} // namespace alActorSystemFunction
```


