

# File alRailRider.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Rail**](dir_dcbdfe72f8ed7a79f51cb2b45d87cb5e.md) **>** [**alRailRider.h**](alRailRider_8h.md)

[Go to the documentation of this file](alRailRider_8h.md)


```C++
#pragma once

#include <math/seadVector.h>

namespace al
{
class Rail;

class RailRider
{
private:
        Rail*          mRail;
        sead::Vector3f mCurrentPos;
        sead::Vector3f mCurrentDir;
        float          _1C;
        float          mSpeed;
        bool           mIsLoop;

public:
        void moveToRailStart();
        void moveToNearestRail( const sead::Vector3f& r1 );

        bool isReachedGoal() const;

        void setSpeed( float speed )
        {
                mSpeed = speed;
        }

        const sead::Vector3f& getCurrentPos() const
        {
                return mCurrentPos;
        }

        const sead::Vector3f& getCurrentDir() const
        {
                return mCurrentDir;
        }

        bool isLoop() const
        {
                return mIsLoop;
        }

public:
        RailRider( Rail* rail );
};

} // namespace al
```


