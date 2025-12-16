

# File PlayerModelHolder.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerModelHolder.h**](_player_model_holder_8h.md)

[Go to the documentation of this file](_player_model_holder_8h.md)


```C++
#pragma once

#include <math/seadVector.h>

class PlayerFigureDirector;
struct PlayerActorInitInfo;
namespace al
{
struct ActorInitInfo;
}

class IUsePlayerModelChanger
{
public:
        virtual void change( const EPlayerFigure& figure );
};

class IUsePlayerModelShowHide
{
public:
        virtual void show();
        virtual void hide();
        virtual bool isHidden() const;
};

class IUsePlayerModelShadowShowHide
{
public:
        virtual void hideShadow();
        virtual void showShadow();
};

class IUsePlayerModelSilhouetteShowHide
{
public:
        virtual void showSilhouette();
        virtual void hideSilhouette();
        virtual bool isSilhouetteHidden() const;
};

class PlayerModel;

class PlayerModelHolder : public IUsePlayerModelChanger,
                          public IUsePlayerModelShowHide,
                          public IUsePlayerModelShadowShowHide,
                          public IUsePlayerModelSilhouetteShowHide
{
private:
        PlayerModel*  mModels[ 7 ];
        EPlayerFigure mCurrentFigure;
        bool          _30;
        bool          mIsHidden;
        bool          mIsShadowHidden;
        bool          mIsSilhouetteHidden;
        void*         _34[ 7 ];

public:
        static PlayerModel* createNormalPlayerModel( const al::ActorInitInfo& info,
                const PlayerActorInitInfo&                                    playerInfo,
                const sead::Vector3f*                                         transPtr,
                const sead::Vector3f*                                         rotatePtr,
                u64                                                           something );
        static PlayerModel* createMiniPlayerModel( const al::ActorInitInfo& info,
                const PlayerActorInitInfo&                                  playerInfo,
                const sead::Vector3f*                                       transPtr,
                const sead::Vector3f*                                       rotatePtr,
                u64                                                         something );
        static PlayerModel* createFirePlayerModel( const al::ActorInitInfo& info,
                const PlayerActorInitInfo&                                  playerInfo,
                const sead::Vector3f*                                       transPtr,
                const sead::Vector3f*                                       rotatePtr,
                u64                                                         something );
        // PlayerModelHolder::createRaccoonDogPlayerModel
        static PlayerModel* createBoomerangPlayerModel( const al::ActorInitInfo& info,
                const PlayerActorInitInfo&                                       playerInfo,
                const sead::Vector3f*                                            transPtr,
                const sead::Vector3f*                                            rotatePtr,
                u64                                                              something );
        // PlayerModelHolder::createRaccoonDogSpecialPlayerModel
        // PlayerModelHolder::createRaccoonDogWhitePlayerModel

public:
        virtual void change( const EPlayerFigure& figure );
        virtual void show();
        virtual void hide();
        virtual bool isHidden() const;
        virtual void showSilhouette();
        virtual void hideSilhouette();
        virtual bool isSilhouetteHidden() const;
        virtual void hideShadow();
        virtual void showShadow();

public:
        PlayerModelHolder( const al::ActorInitInfo& info, const PlayerActorInitInfo& playerInfo, const sead::Vector3f* transPtr, const sead::Vector3f* rotatePtr, u64 something );
};
```


