

# File PlayerActionMultiCondition.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**PlayerActionMultiCondition.cpp**](_player_action_multi_condition_8cpp.md)

[Go to the documentation of this file](_player_action_multi_condition_8cpp.md)


```C++
#include "Player/PlayerActionMultiCondition.h"

PlayerActionMultiCondition::PlayerActionMultiCondition()
{
        mConditions.initOffset( sead::OffsetListNode<PlayerActionCondition*>::getListNodeOffset() );
}

void PlayerActionMultiCondition::append( PlayerActionCondition* condition )
{
        mConditions.pushBack( *new sead::OffsetListNode<PlayerActionCondition*>( condition ) );
}

#ifdef NON_MATCHING
bool PlayerActionMultiCondition::check()
{
        return true;
}
#endif

#ifdef NON_MATCHING
// really very incorrect
void PlayerActionMultiCondition::setup()
{
        for ( sead::OffsetList<PlayerActionCondition*>::iterator cur = mConditions.begin();
                cur != mConditions.end();
                ++cur )
                ( *cur )->setup();
}
#endif
```


