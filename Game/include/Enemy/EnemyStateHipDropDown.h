#pragma once

#include <sead/math/seadVector.h>
#include "Enemy/EnemyStateHipDropDownParam.h"
#include "al/Nerve/ActorStateBase.h"

class EnemyStateHipDropDown : public al::ActorStateBase {
    EnemyStateHipDropDownParam* mParam;
    sead::Vector3f _14;
    const char* mAnimName;
    void* _24;
    void* _28;

public:
    EnemyStateHipDropDown(al::LiveActor* host, EnemyStateHipDropDownParam* blowDownParam,
                          const char*, int);
};
