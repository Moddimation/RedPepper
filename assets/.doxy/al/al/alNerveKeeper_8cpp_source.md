

# File alNerveKeeper.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Nerve**](dir_800da44cd95379813241ef8b1979e11a.md) **>** [**alNerveKeeper.cpp**](alNerveKeeper_8cpp.md)

[Go to the documentation of this file](alNerveKeeper_8cpp.md)


```C++
#include <Nerve/alNerve.h>
#include <Nerve/alNerveKeeper.h>
#include <Nerve/alNerveStateCtrl.h>

namespace al
{

NerveKeeper::NerveKeeper( IUseNerve* host, const Nerve* nrv, int maxNerveStates )
    : mEndNerve( nullptr ), mStep( 0 ), mStateCtrl( nullptr ), mActionCtrl( nullptr )
{
        mHost  = host;
        mNerve = nrv;

        if ( maxNerveStates > 0 )
                mStateCtrl = new NerveStateCtrl( maxNerveStates );
}

const Nerve* NerveKeeper::getCurrentNerve() const
{
        if ( mNerve )
                return mNerve;
        else
                return mEndNerve;
}

#ifdef NON_MATCHING
void NerveKeeper::update()
{
        tryChangeNerve();
        mNerve->execute( this );
        mStep++;
        tryChangeNerve();
}
#endif

void NerveKeeper::tryChangeNerve()
{
        if ( mNerve == NULL )
                return;

        if ( mStateCtrl )
        {
                mStateCtrl->tryEndCurrentState();
                mStateCtrl->startState( mNerve );
        }

        const Nerve* pNextState = mNerve;
        mStep                   = 0;
        mEndNerve               = pNextState;
        mNerve                  = NULL;
}

void NerveKeeper::setNerve( const Nerve* nerve )
{
        if ( mStep >= 0 && mEndNerve != nullptr )
                mEndNerve->executeOnEnd( this );
        mNerve = nerve;
        mStep  = -1;
}

} // namespace al
```


