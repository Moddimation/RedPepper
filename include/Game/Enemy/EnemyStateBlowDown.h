#pragma once

#include "Game/Enemy/EnemyStateBlowDownParam.h"
#include "al/Nerve/ActorStateBase.h"
#include <sead/math/seadVector.h>

class EnemyStateBlowDown : public al::ActorStateBase {
    EnemyStateBlowDownParam* mParam;
    sead::Vector3f _14;
    const char* mAnimName;
    void* _24;

public:
    EnemyStateBlowDown(al::LiveActor* host, EnemyStateBlowDownParam* blowDownParam, const char*, int);
};
