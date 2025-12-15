

# File alHitSensorKeeper.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**LiveActor**](dir_03d20b26238dd8460cdd3a8c8b982db6.md) **>** [**alHitSensorKeeper.h**](alHitSensorKeeper_8h.md)

[Go to the documentation of this file](alHitSensorKeeper_8h.md)


```C++
#pragma once

#include <HitSensor/alHitSensor.h>
#include <container/seadPtrArray.h>

namespace al
{

class HitSensorKeeper
{
private:
        sead::PtrArray<HitSensor> mSensors;

public:
        HitSensor* getSensor( const char* name ) const;

public:
        void attackSensor();
        void validate();
        void invalidate();
        void validateBySystem();
        void invalidateBySystem();

        void update();
};

} // namespace al
```


