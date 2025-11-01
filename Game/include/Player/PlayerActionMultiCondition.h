#pragma once

#include <container/seadOffsetList.h>
#include "Player/PlayerActionCondition.h"

class PlayerActionMultiCondition : public PlayerActionCondition {
    sead::OffsetList<PlayerActionCondition*> mConditions;

public:
    PlayerActionMultiCondition();

    virtual bool check();
    virtual void setup();

    void append(PlayerActionCondition* condition);
};
