

# File alNerveStateCtrl.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Nerve**](dir_800da44cd95379813241ef8b1979e11a.md) **>** [**alNerveStateCtrl.cpp**](alNerveStateCtrl_8cpp.md)

[Go to the documentation of this file](alNerveStateCtrl_8cpp.md)


```C++
#include <Nerve/alNerveStateBase.h>
#include <Nerve/alNerveStateCtrl.h>

namespace al
{

NerveStateCtrl::NerveStateCtrl( int capacity )
    : mCapacity( capacity ), mStateCount( 0 ), mStates( nullptr ), mCurrentState( nullptr )
{
        mStates = new State[ mCapacity ];
        for ( int i = 0; i < mCapacity; i++ )
        {
                State* state           = &mStates[ i ];
                state->mState          = nullptr;
                state->mHostStateNerve = nullptr;
                state->mName           = nullptr;
        }
}

NerveStateCtrl::State* NerveStateCtrl::findStateInfo( const Nerve* nerve )
{
        for ( int i = 0; i < mStateCount; i++ )
        {
                State* state = &mStates[ i ];

                if ( state->mHostStateNerve == nerve )
                        return state;
        }

        return nullptr;
}

void NerveStateCtrl::startState( const Nerve* nerve )
{
        mCurrentState = findStateInfo( nerve );

        if ( mCurrentState )
                mCurrentState->mState->appear();
}

bool NerveStateCtrl::updateCurrentState()
{
        if ( mCurrentState )
                return mCurrentState->mState->update();
        return false;
}

void NerveStateCtrl::tryEndCurrentState()
{
        if ( !isCurrentStateEnd() )
        {
                mCurrentState->mState->kill();
                mCurrentState = nullptr;
        }
}

bool NerveStateCtrl::isCurrentStateEnd() const
{
        if ( mCurrentState )
                return mCurrentState->mState->isDead();
        return true;
}

} // namespace al
```


