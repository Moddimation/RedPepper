

# File alNerveExecutor.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Nerve**](dir_800da44cd95379813241ef8b1979e11a.md) **>** [**alNerveExecutor.cpp**](al_nerve_executor_8cpp.md)

[Go to the documentation of this file](al_nerve_executor_8cpp.md)


```C++
#include <Nerve/alNerveExecutor.h>

namespace al
{

NerveExecutor::NerveExecutor( const char* name ) : mNerveKeeper( nullptr )
{
}

NerveKeeper* NerveExecutor::getNerveKeeper() const
{
        return mNerveKeeper;
}

void NerveExecutor::initNerve( const Nerve* nrv, int step )
{
        mNerveKeeper = new NerveKeeper( this, nrv, step );
}

void NerveExecutor::updateNerve()
{
        if ( mNerveKeeper )
                mNerveKeeper->update();
}

} // namespace al
```


