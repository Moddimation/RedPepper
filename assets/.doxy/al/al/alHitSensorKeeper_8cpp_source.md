

# File alHitSensorKeeper.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**LiveActor**](dir_a1d892c08cc8ccf4e69e81fa9f5f26fe.md) **>** [**alHitSensorKeeper.cpp**](alHitSensorKeeper_8cpp.md)

[Go to the documentation of this file](alHitSensorKeeper_8cpp.md)


```C++
#include <LiveActor/alHitSensorKeeper.h>
#include <LiveActor/alLiveActor.h>
#include <LiveActor/alLiveActorFunction.h>
#include <Util/alStringUtil.h>

namespace al
{

#ifdef NON_MATCHING

// r5 <-> r6
void HitSensorKeeper::attackSensor()
{
        for ( int i = 0; i < mSensors.size(); i++ )
        {
                HitSensor* sensor = mSensors.unsafeAt( i );
                for ( int j = 0; j < sensor->mSensorCount; j++ )
                {
                        HitSensor* attacked = sensor->mSensors[ j ];
                        if ( !al::isDead( attacked->getHost() ) )
                                attacked->getHost()->attackSensor( sensor, attacked );
                }
        }
}
#endif

void HitSensorKeeper::validate()
{
        for ( int i = 0; i < mSensors.size(); i++ )
                mSensors.unsafeAt( i )->validate();
}

void HitSensorKeeper::invalidate()
{
        for ( int i = 0; i < mSensors.size(); i++ )
                mSensors.unsafeAt( i )->invalidate();
}

void HitSensorKeeper::validateBySystem()
{
        for ( int i = 0; i < mSensors.size(); i++ )
                mSensors.unsafeAt( i )->validateBySystem();
}

void HitSensorKeeper::invalidateBySystem()
{
        for ( int i = 0; i < mSensors.size(); i++ )
                mSensors.unsafeAt( i )->invalidateBySystem();
}

HitSensor* HitSensorKeeper::getSensor( const char* name ) const
{
        if ( mSensors.size() == 1 )
                return mSensors.unsafeAt( 0 );

        for ( int i = 0; i < mSensors.size(); i++ )
                if ( al::isEqualString( mSensors.unsafeAt( i )->getName(), name ) )
                        return mSensors.unsafeAt( i );
        return nullptr;
}

void HitSensorKeeper::update()
{
        for ( int i = 0; i < mSensors.size(); i++ )
                mSensors.unsafeAt( i )->update();
}

} // namespace al
```


