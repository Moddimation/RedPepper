

# File Bubble.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**Bubble.h**](_bubble_8h.md)

[Go to the documentation of this file](_bubble_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class Bubble : public al::MapObjActor
{
private:
        int            _60;
        int            _64;
        void*          _68;
        float          _6C;
        float          _70;
        sead::Vector3f _74;
        sead::Quatf    _80;
        int            _90;

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void attackSensor( al::HitSensor* me, al::HitSensor* other );
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );

public:
        Bubble( const sead::SafeString& name );
};
```


