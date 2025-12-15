

# File FireBall.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**FireBall.h**](_fire_ball_8h.md)

[Go to the documentation of this file](_fire_ball_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class FireBall : public al::MapObjActor
{
public:
        void exeShot();

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void attackSensor( al::HitSensor* me, al::HitSensor* other );
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );

public:
        FireBall( const sead::SafeString& name );
};
```


