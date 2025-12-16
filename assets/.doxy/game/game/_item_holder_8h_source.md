

# File ItemHolder.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**ItemHolder.h**](_item_holder_8h.md)

[Go to the documentation of this file](_item_holder_8h.md)


```C++
#pragma once

#include <Scene/alISceneObj.h>
#include <container/seadPtrArray.h>

namespace al
{
class LiveActor;
}
class CoinCharger;

class ItemHolder : public al::ISceneObj
{
private:
        sead::PtrArray<al::LiveActor>* mCoins;
        sead::PtrArray<al::LiveActor>* mCountUpCoins;
        sead::PtrArray<al::LiveActor>* mFireFlowers;
        sead::PtrArray<al::LiveActor>* mKinokoOneUps;
        sead::PtrArray<al::LiveActor>* mFastKinokoOneUps;
        sead::PtrArray<al::LiveActor>* mKinokoPoisons;
        sead::PtrArray<al::LiveActor>* mFastKinokoPoisons;
        sead::PtrArray<al::LiveActor>* mKinokos;
        sead::PtrArray<al::LiveActor>* mFastKinokos;
        sead::PtrArray<al::LiveActor>* mBoomerangFlowers;
        sead::PtrArray<al::LiveActor>* mPatapataWings;
        sead::PtrArray<al::LiveActor>* mAssistItems;
        sead::PtrArray<al::LiveActor>* mSuperLeaves;
        sead::PtrArray<al::LiveActor>* mSpecialSuperLeaves;
        sead::PtrArray<al::LiveActor>* mSuperStars;
        sead::PtrArray<al::LiveActor>* mClocks;
        sead::PtrArray<al::LiveActor>* mCollectCoins;
        sead::PtrArray<al::LiveActor>* mKickKouras;
        CoinCharger*                   mCoinCharger;
        void*                          _50;
        void*                          _54;
        void*                          _58;

public:
        void initCoinCharger( const al::LayoutInitInfo& info );

        virtual const char* getSceneObjName() const
        {
                return "ItemHolder";
        }

public:
        ItemHolder( int, int, int );
};
```


