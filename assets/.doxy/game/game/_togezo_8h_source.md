

# File Togezo.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**Togezo.h**](_togezo_8h.md)

[Go to the documentation of this file](_togezo_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class WalkerStateWander;
class WalkerStateChase;
class EnemyStateBlowDown;

class Togezo : public al::MapObjActor
{
private:
        WalkerStateWander*  mWanderState;
        WalkerStateChase*   mChaseState;
        EnemyStateBlowDown* mBlowDownState;

public:
        void exeWander();
        void exeTurn();
        void exeSearch();
        void exeChase();
        void exeAttack();
        void exeBlowDown();

public:
        virtual void init( const al::ActorInitInfo& info );

public:
        Togezo( const sead::SafeString& name );
};
```


