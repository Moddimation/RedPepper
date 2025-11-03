#pragma once

#include "Player/PlayerActionCondition.h"
#include "Player/PlayerAnimator.h"

class PlayerActionConditionAnimEnd : public PlayerActionCondition
{
private:
        const char*         mAnimName;
        IUsePlayerAnimator* mUsePlayerAnimator;
        int                 mAnimEndFrame;

public:
        virtual bool check();

public:
        PlayerActionConditionAnimEnd( IUsePlayerAnimator* animator, const char* animName, int animEndFrame );
};
