#pragma once

#include "al/Placement/PlacementInfo.h"
#include <sead/math/seadQuat.h>
#include <sead/math/seadVector.h>

namespace al {

class KeyPose {
    sead::Quatf mQuat;
    sead::Vector3f mTrans;
    const PlacementInfo* mPlacementInfo;
    float _20;

public:
    KeyPose();

    void init(const PlacementInfo& info);

    const sead::Quatf& getQuat() const { return mQuat; }
    const sead::Vector3f& getTrans() const { return mTrans; }
    const PlacementInfo* getPlacementInfo() const { return mPlacementInfo; }
};

}
