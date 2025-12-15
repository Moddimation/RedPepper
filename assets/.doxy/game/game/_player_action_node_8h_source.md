

# File PlayerActionNode.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerActionNode.h**](_player_action_node_8h.md)

[Go to the documentation of this file](_player_action_node_8h.md)


```C++
#pragma once

#include <container/seadListImpl.h>

class PlayerAction;

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
```


