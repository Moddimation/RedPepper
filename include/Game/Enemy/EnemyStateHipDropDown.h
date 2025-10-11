#pragma once

#include "Game/Enemy/EnemyStateHipDropDownParam.h"
#include "al/Nerve/ActorStateBase.h"
#include <sead/math/seadVector.h>

class EnemyStateHipDropDown : public al::ActorStateBase {
    EnemyStateHipDropDownParam* mParam;
    sead::Vector3f _14;
    const char* mAnimName;
    void* _24;
    void* _28;

public:
    EnemyStateHipDropDown(al::LiveActor* host, EnemyStateHipDropDownParam* blowDownParam, const char*, int);
};
