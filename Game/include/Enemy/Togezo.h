#pragma once

#include <MapObj/MapObjActor.h>

#include "Enemy/EnemyStateBlowDown.h"
#include "Enemy/WalkerStateChase.h"
#include "Enemy/WalkerStateWander.h"

class Togezo : public al::MapObjActor
{
private:
        WalkerStateWander*  mWanderState;
        WalkerStateChase*   mChaseState;
        EnemyStateBlowDown* mBlowDownState;

public:
        void exeWander();
        void exeTurn();
        void exeSearch();
        void exeChase();
        void exeAttack();
        void exeBlowDown();

public:
        virtual void init( const al::ActorInitInfo& info );

public:
        Togezo( const sead::SafeString& name );
};
