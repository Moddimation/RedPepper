

# File PlayerActionConditionAnimEnd.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**PlayerActionConditionAnimEnd.cpp**](_player_action_condition_anim_end_8cpp.md)

[Go to the documentation of this file](_player_action_condition_anim_end_8cpp.md)


```C++
#include "Player/PlayerActionConditionAnimEnd.h"

#include "Player/PlayerAnimator.h"

PlayerActionConditionAnimEnd::PlayerActionConditionAnimEnd( IUsePlayerAnimator* animator,
        const char*                                                             animName,
        int                                                                     animEndFrame )
    : mAnimName( animName ), mUsePlayerAnimator( animator ), mAnimEndFrame( animEndFrame )
{
}

bool PlayerActionConditionAnimEnd::check()
{
        if ( mAnimName )
        {
                if ( !( mUsePlayerAnimator->isAnim( mAnimName ) && !mUsePlayerAnimator->isAnimEnd() &&
                             ( mAnimEndFrame < 0 || mUsePlayerAnimator->getAnimFrame() < mAnimEndFrame ) ) )
                        return true;
        }
        else
        {
                if ( mUsePlayerAnimator->isAnimEnd() )
                        return true;
                if ( ( mAnimEndFrame < 0 ) )
                        return false;
                if ( !( mUsePlayerAnimator->getAnimFrame() < mAnimEndFrame ) )
                        return true;
        }
        return false;
}
```


