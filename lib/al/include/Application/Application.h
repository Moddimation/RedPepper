#pragma once

#include <LiveActor/LiveActorKit.h>
#include <Scene/SceneObjHolder.h>
#include <System/SystemKit.h>
#include <heap/seadDisposer.h>

#include "Player/PlayerActor.h"
#include "System/RootTask.h"

class Application
{
        SEAD_SINGLETON_DISPOSER( Application )

public:
        void*                _10;
        class GameFramework* mGameFramework;
        al::SystemKit*       mSystemKit;
        u8                   unk2[ 0x34 ];
        al::SceneObjHolder*  mSceneObjHolder;
        al::LiveActorKit*    mLiveActorKit;
        void*                _58;
        PlayerActor*         mPlayerActor;

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
