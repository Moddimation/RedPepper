

# File Garigari.h

[**File List**](files.md) **>** [**Game**](dir_c33286056d2acf479cd8641ef845fec1.md) **>** [**include**](dir_a56613a6b795b5624452287469afc550.md) **>** [**MapObj**](dir_08606cf83d6880baa6a2741a07593282.md) **>** [**Garigari.h**](_garigari_8h.md)

[Go to the documentation of this file](_garigari_8h.md)


```C++
#pragma once

#include <MapObj/alMapObjActor.h>

class Garigari : public al::MapObjActor
{
private:
        float _60;
        int   mSpeed;
        int   _68;
        int   _6C;
        int   _70;
        int   _74;

public:
        virtual void init( const al::ActorInitInfo& info );
        virtual void attackSensor( al::HitSensor* me, al::HitSensor* other );
        virtual bool receiveMsg( u32 msg, al::HitSensor* other, al::HitSensor* me );
        virtual void control();

public:
        Garigari( const sead::SafeString& name );
};
```


