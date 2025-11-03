#pragma once

#include <container/seadListImpl.h>

#include "Player/PlayerAction.h"

class PlayerActionNode
{
private:
        PlayerAction*  mAction;
        sead::ListImpl mList;

public:
        PlayerAction* getAction() const
        {
                return mAction;
        }

        virtual ~PlayerActionNode();
};
