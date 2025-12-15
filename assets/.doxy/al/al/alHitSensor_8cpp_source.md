

# File alHitSensor.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**HitSensor**](dir_e59aa8918f8e121ea32de5410bcbf3b5.md) **>** [**alHitSensor.cpp**](alHitSensor_8cpp.md)

[Go to the documentation of this file](alHitSensor_8cpp.md)


```C++
#include <HitSensor/alHitSensor.h>
#include <HitSensor/alSensorHitGroup.h>

namespace al
{

void HitSensor::validate()
{
        if ( !mIsValid )
        {
                mIsValid = true;
                if ( mMaxSensorCount && mIsValidBySystem )
                        mSensorHitGroup->add( this );
        }
        mSensorCount = 0;
}

void HitSensor::invalidate()
{
        if ( mIsValid )
        {
                mIsValid = false;
                if ( mMaxSensorCount && mIsValidBySystem )
                        mSensorHitGroup->remove( this );
        }
        mSensorCount = 0;
}

void HitSensor::validateBySystem()
{
        if ( mIsValidBySystem )
                return;
        if ( mMaxSensorCount && mIsValid )
                mSensorHitGroup->add( this );
        mIsValidBySystem = true;
        mSensorCount     = 0;
}

void HitSensor::invalidateBySystem()
{
        if ( !mIsValidBySystem )
                return;
        if ( mMaxSensorCount && mIsValid )
                mSensorHitGroup->remove( this );
        mIsValidBySystem = false;
        mSensorCount     = 0;
}

} // namespace al
```


