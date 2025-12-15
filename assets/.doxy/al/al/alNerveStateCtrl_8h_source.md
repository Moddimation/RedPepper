

# File alNerveStateCtrl.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Nerve**](dir_ce5a5d5b959d6ee5ba2a9f5882112a88.md) **>** [**alNerveStateCtrl.h**](alNerveStateCtrl_8h.md)

[Go to the documentation of this file](alNerveStateCtrl_8h.md)


```C++
#pragma once

#include <Nerve/alNerve.h>

namespace al
{
class NerveStateBase;

class NerveStateCtrl
{
private:
        struct State
        {
                NerveStateBase* mState;
                const Nerve*    mHostStateNerve;
                const char*     mName;
        };

        int    mCapacity;
        int    mStateCount;
        State* mStates;
        State* mCurrentState;

        State* findStateInfo( const Nerve* nerve );

public:
        const State* getCurrentState() const
        {
                return mCurrentState;
        }

        void startState( const Nerve* nerve );
        void tryEndCurrentState();
        bool updateCurrentState();
        bool isCurrentStateEnd() const;

public:
        NerveStateCtrl( int capacity );
};

} // namespace al
```


