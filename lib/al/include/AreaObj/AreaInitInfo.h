#pragma once

#include <Placement/PlacementInfo.h>

namespace al
{

class AreaInitInfo
{
private:
        PlacementInfo mPlacementInfo;
        // ?
public:
        PlacementInfo& getPlacementInfo()
        {
                return mPlacementInfo;
        }
};

} // namespace al
