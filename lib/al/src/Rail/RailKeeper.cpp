#include <Placement/PlacementFunction.h>
#include <Rail/Rail.h>
#include <Rail/RailKeeper.h>
#include <Rail/RailRider.h>

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
