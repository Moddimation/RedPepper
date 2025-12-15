

# File Coin.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**Coin.h**](_coin_8h.md)

[Go to the documentation of this file](_coin_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class Coin : public al::MapObjActor
{
private:
        void*          _60;
        int            _64;
        int            _68;
        int            _6C;
        sead::Quatf    _70;
        bool           _80;
        bool           _81;
        int            _84;
        sead::Vector3f _88;
        sead::Vector3f _94;

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void initAfterPlacement();
        virtual void makeActorAppeared();
        virtual void kill();
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );

        virtual void v24();
        virtual void v25();
        virtual void v26();

public:
        Coin( const sead::SafeString& name );
};
```


