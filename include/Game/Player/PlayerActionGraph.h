#pragma once

#include "Game/Player/PlayerActionNode.h"

class PlayerActionGraph {
#ifndef __CC_ARM
public:
#endif
    PlayerActionNode* mCurrentNode;

public:
    PlayerActionNode* getCurrentNode() const { return mCurrentNode; }

    void move();
};
