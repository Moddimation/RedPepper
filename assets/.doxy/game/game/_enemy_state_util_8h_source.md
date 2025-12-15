

# File EnemyStateUtil.h

[**File List**](files.md) **>** [**Enemy**](dir_dc2293efd7d8515fb896ec572cb6631a.md) **>** [**EnemyStateUtil.h**](_enemy_state_util_8h.md)

[Go to the documentation of this file](_enemy_state_util_8h.md)


```C++
#pragma once

namespace al
{
class LiveActor;
}
class EnemyStateBlowDown;

namespace EnemyStateUtil
{

bool tryRequestPressDownAndNextNerve( u32 msg, al::HitSensor* other, al::HitSensor* me, al::LiveActor* actor, const al::Nerve* nextNerve );

bool tryRequestBlowDownAndNextNerve( u32 msg, al::HitSensor* other, al::HitSensor* me, EnemyStateBlowDown* state, const al::Nerve* nextNerve );

} // namespace EnemyStateUtil
```


