#pragma once

#include <sead/container/seadListImpl.h>
#include "Player/PlayerAction.h"

class PlayerActionNode {
    PlayerAction* mAction;
    sead::ListImpl mList;

public:
    PlayerAction* getAction() const { return mAction; }

    virtual ~PlayerActionNode();
};
