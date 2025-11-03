#pragma once

#include <Nerve/ActorStateBase.h>
#include <math/seadVector.h>

#include "Enemy/EnemyStateHipDropDownParam.h"

class EnemyStateHipDropDown : public al::ActorStateBase
{
private:
        EnemyStateHipDropDownParam* mParam;
        sead::Vector3f              _14;
        const char*                 mAnimName;
        void*                       _24;
        void*                       _28;

public:
        EnemyStateHipDropDown( al::LiveActor* host, EnemyStateHipDropDownParam* blowDownParam, const char*, int );
};
