

# File PlayerTrigger.cpp

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**src**](dir_d858f423bf5825f9a3db826b6a54a3cc.md) **>** [**Player**](dir_22eda9069a5c1f5b62d1a32d3636cd4c.md) **>** [**PlayerTrigger.cpp**](_player_trigger_8cpp.md)

[Go to the documentation of this file](_player_trigger_8cpp.md)


```C++
#include "Player/PlayerTrigger.h"

PlayerTrigger::PlayerTrigger() : mSensorTrigger( 0 ), mCollisionTrigger( 0 )
{
}

void PlayerTrigger::set( PlayerTrigger::ESensorTrigger trigger )
{
        mSensorTrigger |= 1 << trigger;
}

void PlayerTrigger::set( PlayerTrigger::ECollisionTrigger trigger )
{
        mCollisionTrigger |= 1 << trigger;
}

bool PlayerTrigger::isOn( PlayerTrigger::ESensorTrigger trigger ) const
{
        return ( mSensorTrigger & ( 1 << trigger ) ) != 0;
}

bool PlayerTrigger::isOn( PlayerTrigger::ECollisionTrigger trigger ) const
{
        return ( mCollisionTrigger & ( 1 << trigger ) ) != 0;
}

void PlayerTrigger::clearSensorTrigger()
{
        mSensorTrigger = 0;
}

void PlayerTrigger::clearCollisionTrigger()
{
        mCollisionTrigger = 0;
}
```


