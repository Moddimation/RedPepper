

# File alCollisionParts.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Collision**](dir_daad28a749e3ab92bb0c1d2c973a5ea4.md) **>** [**alCollisionParts.h**](al_collision_parts_8h.md)

[Go to the documentation of this file](al_collision_parts_8h.md)


```C++
#pragma once

#include <math/seadMatrix.h>

namespace al
{
class KCollisionServer;
class CollisionParts;

class CollisionParts
{
private:
        int               _0;
        int               _4;
        CollisionParts*   _8;
        int               _C;
        int               _10;
        u8                _14[ 0xf0 ];
        float             _104;
        float             _108;
        float             _10C;
        float             _110;
        float             _114;
        int               _118;
        KCollisionServer* mCollisionServer;
        int               _120;
        int               _124;
        sead::Vector3f    _128;
        sead::Vector3f    _134;
        bool              _140;
        bool              _141;
        bool              _142;
        bool              _143;
        bool              _144;

public:
        void syncMtx( const sead::Matrix34f& );

public:
        CollisionParts( void* kclData, const void* paData );
};

} // namespace al
```


