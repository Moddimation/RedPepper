#pragma once

#include <heap/seadDisposer.h>

#include "System/RootTask.h"

namespace al
{
class GameFrameworkCtr;
class SystemKit;
class SceneObjHolder;
class LiveActorKit;
class MapObjActor;
class EffectUserInfo;
} // namespace al

class Application
{
        SEAD_SINGLETON_DISPOSER( Application )

public:
        void*                 _10;
        al::GameFrameworkCtr* mGameFramework;
        al::SystemKit*        mSystemKit;
        u8                    _1C[ 24 ];
        void*                 _34;
        u8                    _38[ 20 ];
        void*                 _4C;
        al::SceneObjHolder*   mSceneObjHolder;
        al::LiveActorKit*     mLiveActorKit;
        void*                 mEffectUserInfo;
        al::MapObjActor*      mPlayerActor;

public:
        void init();
        void run();

        al::SceneObjHolder* getSceneObjHolder() const
        {
                return mSceneObjHolder;
        }

        void setSceneObjHolder( al::SceneObjHolder* holder )
        {
                mSceneObjHolder = holder;
        }

        RootTask* getRootTask() const;
};

static_assert( sizeof( Application ) == 0x60, "" );

namespace al
{

Application* getApplication();

} // namespace al
