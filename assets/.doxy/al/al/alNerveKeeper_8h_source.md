

# File alNerveKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Nerve**](dir_ce5a5d5b959d6ee5ba2a9f5882112a88.md) **>** [**alNerveKeeper.h**](alNerveKeeper_8h.md)

[Go to the documentation of this file](alNerveKeeper_8h.md)


```C++
#pragma once

namespace al
{

struct Nerve;
class IUseNerve;
class NerveStateCtrl;
class NerveActionCtrl;

class NerveKeeper
{
private:
        IUseNerve*       mHost;
        const Nerve*     mEndNerve;
        const Nerve*     mNerve;
        int              mStep;
        NerveStateCtrl*  mStateCtrl;
        NerveActionCtrl* mActionCtrl;

public:
        const Nerve* getCurrentNerve() const;

        void initNerveAction( NerveActionCtrl* p )
        {
                mActionCtrl = p;
        }

        void update();
        void tryChangeNerve();
        void setNerve( const Nerve* nerve );

        IUseNerve* getHost()
        {
                return mHost;
        }

        int getStep()
        {
                return mStep;
        }

        NerveStateCtrl* getStateCtrl()
        {
                return mStateCtrl;
        }

        NerveActionCtrl* getActionCtrl()
        {
                return mActionCtrl;
        }

public:
        NerveKeeper( IUseNerve* host, const Nerve* nrv, int maxNerveStates = 0 );
};

class IUseNerve
{
public:
        virtual NerveKeeper* getNerveKeeper() const = 0;
};

static_assert( sizeof( NerveKeeper ) == 0x18, "" );

} // namespace al
```


