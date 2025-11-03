#pragma once

#include "Player/PlayerActionNode.h"

class PlayerActionGraph
{
#ifndef __CC_ARM
public:
#else

private:
#endif
        PlayerActionNode* mCurrentNode;

public:
        PlayerActionNode* getCurrentNode() const
        {
                return mCurrentNode;
        }

        void move();
};
