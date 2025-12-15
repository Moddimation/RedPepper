

# File alNerveStateBase.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Nerve**](dir_800da44cd95379813241ef8b1979e11a.md) **>** [**alNerveStateBase.cpp**](alNerveStateBase_8cpp.md)

[Go to the documentation of this file](alNerveStateBase_8cpp.md)


```C++
#include <Nerve/alNerveStateBase.h>

namespace al
{

NerveStateBase::NerveStateBase( const char* name ) : NerveExecutor( name ), mIsDead( true )
{
}

void NerveStateBase::init()
{
}

void NerveStateBase::appear()
{
        mIsDead = false;
}

void NerveStateBase::kill()
{
        mIsDead = true;
}

bool NerveStateBase::update()
{
        updateNerve();
        if ( !mIsDead )
        {
                control();
                return false;
        }
        return true;
}

void NerveStateBase::control()
{
}

} // namespace al
```


