

# File Fugumannen.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**Fugumannen.h**](_fugumannen_8h.md)

[Go to the documentation of this file](_fugumannen_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class EnemyStateBlowDown;

class Fugumannen : public al::MapObjActor
{
private:
        float               mRailMoveSpeed;
        EnemyStateBlowDown* mStateBlowDown;

public:
        void exeMove();
        void exeMove2();
        void exeBlowDown();

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void attackSensor( al::HitSensor* me, al::HitSensor* other );
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );

public:
        Fugumannen( const sead::SafeString& name );
};
```


