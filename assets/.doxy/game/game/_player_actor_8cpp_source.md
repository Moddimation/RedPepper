

# File PlayerActor.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**PlayerActor.cpp**](_player_actor_8cpp.md)

[Go to the documentation of this file](_player_actor_8cpp.md)


```C++
#include "Player/PlayerActor.h"

#include "Player/Player.h"
#include "Player/PlayerProperty.h"

PlayerProperty* PlayerActor::getProperty()
{
        return mPlayer->getProperty();
}
```


