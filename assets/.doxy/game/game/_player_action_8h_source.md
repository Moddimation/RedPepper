

# File PlayerAction.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerAction.h**](_player_action_8h.md)

[Go to the documentation of this file](_player_action_8h.md)


```C++
#pragma once

#include <prim/seadRuntimeTypeInfo.h>

class PlayerAction
{
        SEAD_RTTI_BASE( PlayerAction )
public:
        virtual ~PlayerAction();

        virtual void move();
        virtual void update();
        virtual void setup();
        virtual void teardown();
};
```


