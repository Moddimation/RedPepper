

# File alNerveFunction.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Nerve**](dir_800da44cd95379813241ef8b1979e11a.md) **>** [**alNerveFunction.cpp**](alNerveFunction_8cpp.md)

[Go to the documentation of this file](alNerveFunction_8cpp.md)


```C++
#include <Nerve/alNerveActionCtrl.h>
#include <Nerve/alNerveFunction.h>
#include <Nerve/alNerveStateCtrl.h>

namespace al
{

bool isStep( IUseNerve* p, int step )
{
        return p->getNerveKeeper()->getStep() == step;
}

bool isNerve( const IUseNerve* p, const Nerve* nerve )
{
        return p->getNerveKeeper()->getCurrentNerve() == nerve;
}

#pragma no_inline

void setNerve( IUseNerve* p, const Nerve* nerve )
{
        p->getNerveKeeper()->setNerve( nerve );
}

bool isFirstStep( const IUseNerve* p )
{
        return p->getNerveKeeper()->getStep() == 0;
}

bool isGreaterStep( const IUseNerve* p, int t )
{
        return p->getNerveKeeper()->getStep() > t;
}

bool isGreaterEqualStep( const IUseNerve* p, int t )
{
        return p->getNerveKeeper()->getStep() >= t;
}

bool updateNerveState( IUseNerve* p )
{
        return p->getNerveKeeper()->getStateCtrl()->updateCurrentState();
}

// registers

#ifdef NON_MATCHING
bool updateNerveStateAndNextNerve( IUseNerve* p, const Nerve* nerve )
{
        NerveStateCtrl* stateCtrl = p->getNerveKeeper()->getStateCtrl();
        if ( stateCtrl->updateCurrentState() )
        {
                setNerve( p, nerve );
                return true;
        }
        return false;
}
#endif

} // namespace al

namespace alNerveFunction
{

void setNerveAction( al::IUseNerve* p, const char* name )
{
        al::NerveKeeper* nk = p->getNerveKeeper();
        nk->setNerve( nk->getActionCtrl()->findNerve( name ) );
}

} // namespace alNerveFunction
```


