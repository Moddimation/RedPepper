#pragma once

#include "Player/PlayerActionCondition.h"
#include "Player/PlayerAnimator.h"

class PlayerActionConditionAnimEnd : public PlayerActionCondition {
    const char* mAnimName;
    IUsePlayerAnimator* mUsePlayerAnimator;
    int mAnimEndFrame;

public:
    PlayerActionConditionAnimEnd(IUsePlayerAnimator* animator, const char* animName,
                                 int animEndFrame);

    virtual bool check();
};
