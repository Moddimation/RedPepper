

# File PlayerTrigger.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**Player**](dir_1882120a760237323336d5e7b117deb2.md) **>** [**PlayerTrigger.h**](_player_trigger_8h.md)

[Go to the documentation of this file](_player_trigger_8h.md)


```C++
#pragma once

class PlayerTrigger
{
private:
        u32 mSensorTrigger;
        u32 mCollisionTrigger;

public:
        enum ESensorTrigger
        {
        };

        enum ECollisionTrigger
        {
        };

public:
        void set( PlayerTrigger::ESensorTrigger trigger );
        void set( PlayerTrigger::ECollisionTrigger trigger );
        bool isOn( PlayerTrigger::ESensorTrigger trigger ) const;
        bool isOn( PlayerTrigger::ECollisionTrigger trigger ) const;
        void clearSensorTrigger();
        void clearCollisionTrigger();

public:
        PlayerTrigger();
};
```


