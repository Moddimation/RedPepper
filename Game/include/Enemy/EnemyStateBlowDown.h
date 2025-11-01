#pragma once

#include <math/seadVector.h>
#include "Enemy/EnemyStateBlowDownParam.h"
#include <Nerve/ActorStateBase.h>

class EnemyStateBlowDown : public al::ActorStateBase {
    EnemyStateBlowDownParam* mParam;
    sead::Vector3f _14;
    const char* mAnimName;
    void* _24;

public:
    EnemyStateBlowDown(al::LiveActor* host, EnemyStateBlowDownParam* blowDownParam, const char*,
                       int);
};
