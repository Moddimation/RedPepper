

# File alKeyPoseKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**KeyPose**](dir_c08655b4b0d301e06d5407618ce059e2.md) **>** [**alKeyPoseKeeper.h**](alKeyPoseKeeper_8h.md)

[Go to the documentation of this file](alKeyPoseKeeper_8h.md)


```C++
#pragma once

#include <Placement/alPlacementInfo.h>
#include <math/seadVector.h>

namespace al
{

class KeyPose;
class ActorInitInfo;

class KeyPoseKeeper
{
private:
        enum MoveType
        {
                MoveType_Loop,
                MoveType_Turn,
                MoveType_Stop,
                MoveType_Restart
        };

        KeyPose* mKeyPoses;
        int      mKeyPoseAmount;
        int      mCurrentKeyPoseIdx;

        union
        {
                int      mMoveTypeInt;
                MoveType mMoveType;
        };

        bool _10;
        bool _11;

public:
        void init( const ActorInitInfo& info );

        const KeyPose* getCurrentKeyPose() const;
        const KeyPose* getNextKeyPose() const;

public:
        KeyPoseKeeper();
};

const sead::Vector3f& getCurrentKeyTrans( const KeyPoseKeeper* p );
const sead::Vector3f& getNextKeyTrans( const KeyPoseKeeper* p );
const PlacementInfo*  getNextKeyPlacementInfo( const KeyPoseKeeper* p );

} // namespace al
```


