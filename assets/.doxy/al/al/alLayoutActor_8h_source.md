

# File alLayoutActor.h

[**File List**](files.md) **>** [**al**](dir_9602f8714fac85fdd7f7ceb00b335c03.md) **>** [**include**](dir_33e095f68a87f1feebb1083733ab6ad1.md) **>** [**Layout**](dir_b78bbbc2187fc6e0db904113ffbfbf98.md) **>** [**alLayoutActor.h**](alLayoutActor_8h.md)

[Go to the documentation of this file](alLayoutActor_8h.md)


```C++
#pragma once

#include <Audio/alAudioKeeper.h>
#include <Effect/alEffectKeeper.h>
#include <Nerve/alNerve.h>
#include <prim/seadSafeString.h>

namespace al
{
class LayoutInitInfo;
class NerveKeeper;

class LayoutActor : public IUseNerve, public IUseAudioKeeper, public IUseEffectKeeper
{
protected:
        sead::SafeString mName;
        NerveKeeper*     mNerveKeeper;
        AudioKeeper*     mAudioKeeper;
        EffectKeeper*    mEffectKeeper;
        void*            _20;
        void*            _24;
        void*            _28;
        bool             mIsAlive;

public:
        void initNerve( const Nerve* nerve, int maxNerveStates = 0 );

public:
        virtual NerveKeeper*  getNerveKeeper() const;
        virtual void          appear();
        virtual void          kill();
        virtual void          movement();
        virtual void          calcAnim();
        virtual AudioKeeper*  getAudioKeeper() const;
        virtual EffectKeeper* getEffectKeeper() const;
        virtual void          control();
        virtual void          unk1();
        virtual void          unk2();

public:
        LayoutActor( const char* name );
};

void initLayoutActor( LayoutActor* layoutActor, const LayoutInitInfo& info, const char* archiveName, const char* = nullptr );

void  startAction( LayoutActor* actor, const sead::SafeString& actionName );
bool  isActionEnd( const LayoutActor* actor );
void  setActionFrameRate( LayoutActor* actor, float rate );
float getActionFrameMax( const LayoutActor* actor );

void setPaneString( LayoutActor* actor, const char* paneName, const wchar_t* text );
void hidePane( LayoutActor* actor, const char* paneName );

} // namespace al
```


