

# File PlayerActionGraph.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**PlayerActionGraph.cpp**](_player_action_graph_8cpp.md)

[Go to the documentation of this file](_player_action_graph_8cpp.md)


```C++
#include "Player/PlayerActionGraph.h"

#include "Player/PlayerAction.h"
#include "Player/PlayerActionNode.h"

#ifdef NON_MATCHING
void PlayerActionGraph::move()
{
        mCurrentNode->getAction()->update();
}
#endif
```


