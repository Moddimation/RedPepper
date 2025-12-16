

# File PlayerAnimator.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**PlayerAnimator.cpp**](_player_animator_8cpp.md)

[Go to the documentation of this file](_player_animator_8cpp.md)


```C++
#include "Player/PlayerAnimator.h"

#include "Player/PlayerAnimFrameCtrl.h"

float PlayerAnimator::getAnimFrame() const
{
        return mAnimFrameCtrl->getCurrentFrame();
}
```


