

# File PlayerActionConditionAnimEnd.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerActionConditionAnimEnd.h**](_player_action_condition_anim_end_8h.md)

[Go to the documentation of this file](_player_action_condition_anim_end_8h.md)


```C++
#pragma once

#include "Player/PlayerActionMultiCondition.h"

class IUsePlayerAnimator;

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
```


