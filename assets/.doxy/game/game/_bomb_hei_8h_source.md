

# File BombHei.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**BombHei.h**](_bomb_hei_8h.md)

[Go to the documentation of this file](_bomb_hei_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class BombHei : public al::MapObjActor
{
private:
        u8    _60[ 0x20 ];
        float _80;
        bool  _84;
        void* _88;

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void makeActorAppeared();
        virtual void attackSensor( al::HitSensor* me, al::HitSensor* other );
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );

public:
        BombHei( const sead::SafeString& name );
};
```


