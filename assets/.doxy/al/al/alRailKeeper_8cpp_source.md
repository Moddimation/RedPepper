

# File alRailKeeper.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Rail**](dir_fab2149b85c7f2df5ff84a4f398bbead.md) **>** [**alRailKeeper.cpp**](alRailKeeper_8cpp.md)

[Go to the documentation of this file](alRailKeeper_8cpp.md)


```C++
#include <Placement/alPlacementFunction.h>
#include <Rail/alRail.h>
#include <Rail/alRailKeeper.h>
#include <Rail/alRailRider.h>

namespace al
{

RailKeeper::RailKeeper( const PlacementInfo& info ) : mRail( nullptr ), mRailRider( nullptr )
{
        mRail = new Rail;
        mRail->init( info );
        mRailRider = new RailRider( mRail );
}

RailKeeper* tryCreateRailKeeper( const PlacementInfo& info )
{
        PlacementInfo railIter;
        if ( tryGetRailIter( &railIter, info ) )
                return new RailKeeper( railIter );
        return nullptr;
}

bool RailKeeper::isExistRail() const
{
        return mRail != nullptr;
}

} // namespace al
```


