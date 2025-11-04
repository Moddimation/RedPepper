#pragma once

#include <Placement/PlacementInfo.h>
#include <Stage/StageSwitchType.h>

namespace al
{

class StageSwitchAccesser
{
private:
        int mId;
        int mType;

public:
        int initWithPlacementInfo( StageSwitchType type1, const PlacementInfo& info, StageSwitchType type2 );

        bool isTypeKillDeadOn() const;
        int  FUN_0024e734() const; // ?

public:
        StageSwitchAccesser();
};

} // namespace al
