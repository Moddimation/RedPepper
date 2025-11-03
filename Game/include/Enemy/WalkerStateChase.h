#pragma once

#include <LiveActor/LiveActor.h>
#include <Nerve/ActorStateBase.h>

#include "Enemy/WalkerStateChaseParam.h"
#include "Enemy/WalkerStateParam.h"

class WalkerStateChase : public al::ActorStateBase
{
private:
        sead::Vector3f*              mFrontPtr;
        const WalkerStateParam*      mWalkParam;
        const WalkerStateChaseParam* mRunParam;
        bool                         _1C;
        void*                        _20;

public:
        void exeStart();

public:
        WalkerStateChase( al::LiveActor* host, sead::Vector3f* frontPtr, const WalkerStateParam* walkParam, const WalkerStateChaseParam* runParam, bool );
};
