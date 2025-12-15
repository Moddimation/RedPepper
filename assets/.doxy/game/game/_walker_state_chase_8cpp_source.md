

# File WalkerStateChase.cpp

[**File List**](files.md) **>** [**Enemy**](dir_ee967774be101b809d25f7ebc425a3fb.md) **>** [**WalkerStateChase.cpp**](_walker_state_chase_8cpp.md)

[Go to the documentation of this file](_walker_state_chase_8cpp.md)


```C++
#include "Enemy/WalkerStateChase.h"

#include <Nerve/alNerve.h>

#include "Enemy/WalkerStateChaseParam.h"

static WalkerStateChaseParam sDefaultParam( false, false, 2.0, 65, 150, 4.0, 15, "Run", "Wait" );

namespace NrvWalkerStateChase
{

NERVE_DEF( WalkerStateChase, Start )

} // namespace NrvWalkerStateChase

#ifdef NON_MATCHING

WalkerStateChase::WalkerStateChase( al::LiveActor* host, sead::Vector3f* frontPtr, const WalkerStateParam* walkParam, const WalkerStateChaseParam* runParam, bool b )
    : ActorStateBase( "クリボー追いかけ状態", host ), mFrontPtr( frontPtr ), mRunParam( runParam ),
      mWalkParam( walkParam ), _1C( b ), _20( nullptr )
{
        if ( runParam == nullptr )
                mRunParam = &sDefaultParam;
        initNerve( &NrvWalkerStateChase::Start );
}

#endif
```


