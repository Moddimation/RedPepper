

# File alLayoutActor.cpp

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**src**](dir_efbb2da3221fe95d5cd9a5d2d5dabe34.md) **>** [**Layout**](dir_46a925658b0ce4da4c2897114aabc012.md) **>** [**alLayoutActor.cpp**](al_layout_actor_8cpp.md)

[Go to the documentation of this file](al_layout_actor_8cpp.md)


```C++
#include <Layout/alLayoutActor.h>

namespace al
{

LayoutActor::LayoutActor( const char* name )
    : mName( name ), mNerveKeeper( nullptr ), mAudioKeeper( nullptr ), mEffectKeeper( nullptr ),
      _20( nullptr ), _24( nullptr ), _28( nullptr ), mIsAlive( false )
{
}

NerveKeeper* LayoutActor::getNerveKeeper() const
{
        return mNerveKeeper;
}

void LayoutActor::appear()
{
        mIsAlive = true;
        calcAnim();
}

void LayoutActor::kill()
{
        if ( getEffectKeeper() )
                getEffectKeeper()->deleteAndClearEffectAll();
        mIsAlive = false;
}

AudioKeeper* LayoutActor::getAudioKeeper() const
{
        return mAudioKeeper;
}

EffectKeeper* LayoutActor::getEffectKeeper() const
{
        return mEffectKeeper;
}

void LayoutActor::control()
{
}

void LayoutActor::initNerve( const Nerve* nerve, int step )
{
        mNerveKeeper = new NerveKeeper( this, nerve, step );
}

} // namespace al
```


