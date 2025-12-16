

# File TrickHintPanel.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**TrickHintPanel.h**](_trick_hint_panel_8h.md)

[Go to the documentation of this file](_trick_hint_panel_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class TrickHintPanel : public al::MapObjActor
{
private:
        u32  _96;
        bool mPlayedSound;

public:
        void exeWait();
        void exeOn();
        void exenrv3();
        void exeOff();

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );

public:
        TrickHintPanel( const sead::SafeString& name );
};
```


