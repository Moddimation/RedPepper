

# File alNerveFunction.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Nerve**](dir_ce5a5d5b959d6ee5ba2a9f5882112a88.md) **>** [**alNerveFunction.h**](al_nerve_function_8h.md)

[Go to the documentation of this file](al_nerve_function_8h.md)


```C++
#pragma once

#include <Nerve/alNerveKeeper.h>
#include <Nerve/alNerveStateBase.h>

namespace al
{
class NerveStateBase;

void setNerve( IUseNerve* p, const Nerve* nerve );

bool isStep( IUseNerve* p, int step );
bool isNerve( const IUseNerve* p, const Nerve* nerve );
bool isFirstStep( const IUseNerve* p );
bool isLessStep( const IUseNerve* p, int step );
int  getNerveStep( const IUseNerve* p );
bool isGreaterStep( const IUseNerve* p, int step );
bool isGreaterEqualStep( const IUseNerve* p, int step );

void initNerveState( IUseNerve* p, NerveStateBase* state, const Nerve* stateNrv, const char* name );
bool updateNerveState( IUseNerve* p );                                 // returns if nerve state is dead
bool updateNerveStateAndNextNerve( IUseNerve* p, const Nerve* nerve ); // "

} // namespace al

namespace alNerveFunction
{

void setNerveAction( al::IUseNerve* p, const char* name );

} // namespace alNerveFunction
```


