

# File alRail.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Rail**](dir_dcbdfe72f8ed7a79f51cb2b45d87cb5e.md) **>** [**alRail.h**](al_rail_8h.md)

[Go to the documentation of this file](al_rail_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>
#include <math/seadVector.h>

namespace al
{

class Rail
{
private:
        int  _0;
        int  _4;
        int  _8;
        int  _C;
        bool mIsClosed;

public:
        bool isClosed() const
        {
                return mIsClosed;
        }

        void init( const PlacementInfo& info );

        float getTotalLength() const;
        float normalizeLength( float ) const;
        void  calcPosDir( sead::Vector3f*, sead::Vector3f*, float );
        float calcNearestRailPosCoord( const sead::Vector3f&, float );

public:
        Rail();
};

} // namespace al
```


