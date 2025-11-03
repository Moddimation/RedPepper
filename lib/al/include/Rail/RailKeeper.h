#pragma once

#include <Placement/PlacementInfo.h>
#include <Rail/Rail.h>
#include <Rail/RailRider.h>

namespace al
{

class RailKeeper
{
        Rail*      mRail;
        RailRider* mRailRider;

        RailKeeper( const PlacementInfo& info );

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

        friend RailKeeper* tryCreateRailKeeper( const PlacementInfo& info );
};

RailKeeper* tryCreateRailKeeper( const PlacementInfo& info );

} // namespace al
