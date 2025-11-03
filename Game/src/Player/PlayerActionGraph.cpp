#include "Player/PlayerActionGraph.h"

#include "Player/PlayerAction.h"
#include "Player/PlayerActionNode.h"

NON_MATCHING
void PlayerActionGraph::move()
{
        mCurrentNode->getAction()->update();
}
