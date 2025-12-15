

# File alKeyPose.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**KeyPose**](dir_c08655b4b0d301e06d5407618ce059e2.md) **>** [**alKeyPose.h**](alKeyPose_8h.md)

[Go to the documentation of this file](alKeyPose_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>
#include <math/seadQuat.h>
#include <math/seadVector.h>

namespace al
{

class KeyPose
{
private:
        sead::Quatf          mQuat;
        sead::Vector3f       mTrans;
        const PlacementInfo* mPlacementInfo;
        float                _20;

public:
        void init( const PlacementInfo& info );

        const sead::Quatf& getQuat() const
        {
                return mQuat;
        }

        const sead::Vector3f& getTrans() const
        {
                return mTrans;
        }

        const PlacementInfo* getPlacementInfo() const
        {
                return mPlacementInfo;
        }

public:
        KeyPose();
};

} // namespace al
```


