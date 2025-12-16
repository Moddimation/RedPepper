

# File PlayerFunction.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**PlayerFunction.cpp**](_player_function_8cpp.md)

[Go to the documentation of this file](_player_function_8cpp.md)


```C++
#include "Player/PlayerFunction.h"

#include <LiveActor/alActorPoseKeeper.h>
#include <System/Application.h>

#include "Player/PlayerActor.h"

namespace rp
{

#pragma no_inline
#ifdef NON_MATCHING

// linker shenanigans
PlayerActor* getPlayerActor()
{
        return Application::instance()->getPlayerActor();
}

const sead::Vector3f& getPlayerPos()
{
        return al::getTrans( getPlayerActor() );
}
#endif

} // namespace rp
```


