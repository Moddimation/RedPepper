

# File CoinCollect.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**CoinCollect.h**](_coin_collect_8h.md)

[Go to the documentation of this file](_coin_collect_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class Coin : public al::MapObjActor
{
private:
        void*          _60;
        void*          _64;
        sead::Vector3f _68;
        sead::Quatf    _74;
        int            mCoinNo;
        float          _88;
        float          _8C;
        sead::Vector3f _90;
        bool           _9C;
        sead::Vector3f _A0;
        sead::Vector3f _AC;

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void initAfterPlacement();
        virtual void makeActorAppeared();
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );

public:
        Coin( const sead::SafeString& name );
};
```


