

# File alRailKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Rail**](dir_dcbdfe72f8ed7a79f51cb2b45d87cb5e.md) **>** [**alRailKeeper.h**](al_rail_keeper_8h.md)

[Go to the documentation of this file](al_rail_keeper_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>

namespace al
{
class Rail;
class RailRider;

class RailKeeper
{
private:
        Rail*      mRail;
        RailRider* mRailRider;

public:
        Rail* getRail()
        {
                return mRail;
        }

        RailRider* getRailRider()
        {
                return mRailRider;
        }

        bool isExistRail() const;

public:
        friend RailKeeper* tryCreateRailKeeper( const PlacementInfo& info );

private:
        RailKeeper( const PlacementInfo& info );
};

RailKeeper* tryCreateRailKeeper( const PlacementInfo& info );

} // namespace al
```


